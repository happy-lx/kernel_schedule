#include "sched.h"
#include "linux/list.h"
#include "linux/types.h"
#include "pelt.h"

const struct sched_class comp3520_sched_class;

static inline struct task_struct * comp3520_task_of(struct comp3520_sched_entity *se);
static inline struct comp3520_sched_entity * comp3520_entity_of(struct list_head* head);

// TODO: Complete me
static void enqueue_task_comp3520(struct rq *rq, struct task_struct *p,
				  int flags)
{
	// pr_info("enqueue_task_comp3520, nr_running : %d\n", (&rq->comp3520_rq)->nr_running);
	struct comp3520_rq* comp3520_rq = &rq->comp3520_rq;
	struct comp3520_sched_entity* se = &p->comp3520_se;
	comp3520_rq->nr_running++;
	se->on_rq = 1;
	// se->time_left = 5;
	p->on_rq = 1;
	list_add_tail(&(se->run_list), &(comp3520_rq->run_list));
	add_nr_running(rq, 1);
}

// TODO: Complete me
static void dequeue_task_comp3520(struct rq *rq, struct task_struct *p,
				  int flags)
{
	// pr_info("dequeue_task_comp3520, nr_running : %d\n",( &rq->comp3520_rq)->nr_running);
	struct comp3520_rq* comp3520_rq = &rq->comp3520_rq;
	struct comp3520_sched_entity* se = &p->comp3520_se;

	if(comp3520_rq->nr_running == 0) {
		// printf("error in dequeue_task_comp3520: no runnning task\n");
		pr_info("error in dequeue_task_comp3520: no runnning task\n");
		return;
	}
	comp3520_rq->nr_running--; 
	se->on_rq = 0;
	p->on_rq = 0;
	list_del(&(se->run_list));
	sub_nr_running(rq, 1);
}

// TODO: Complete me
static void yield_task_comp3520(struct rq *rq)
{
	// pr_info("yield_task_comp3520 NOTE!\n");
	struct comp3520_rq* comp3520_rq = &rq->comp3520_rq;
	struct task_struct * p = rq->curr;

	if(!(p->comp3520_se.on_rq)) {
		enqueue_task_comp3520(rq, p, 0);
	}
	// rq->curr = comp3520_task_of(comp3520_entity_of(comp3520_rq->run_list.next));
	// dequeue_task_comp3520(rq, rq->curr, 0);
	// resched_curr(rq);
};

// TODO: Complete me
static void check_preempt_curr_comp3520(struct rq *rq, struct task_struct *p,
					int wake_flags)
{
	// pr_info("NOTE: check_preempt_curr_comp3520\n");
	struct comp3520_sched_entity* se = &p->comp3520_se;
	struct comp3520_sched_entity* now_se = &rq->curr->comp3520_se;

	if(se->time_left < now_se->time_left || now_se->time_left < 0) {
		// pr_info("NOTE: preempted!!!");
		resched_curr(rq);
		// rq->curr = p;
		// enqueue_task_comp3520(rq, comp3520_task_of(se), 0);
	}
}

// TODO: Complete me
static void set_next_task_comp3520(struct rq *rq, struct task_struct *p, bool first)
{
	// pr_info("set_next_task_comp3520\n");
	// rq->curr = p;
}

// TODO: Complete me
static void task_tick_comp3520(struct rq *rq, struct task_struct *curr,
			       int queued)
{
	// pr_info("task_tick_comp3520 time_left: %d, task name: %s\n", (&curr->comp3520_se)->time_left, curr->comm);
	struct comp3520_sched_entity* se = &curr->comp3520_se;

	se->time_left--;

	if(se->time_left <= 0) {
		se->time_left = 5;
		resched_curr(rq);
	}

}

static inline bool comp3520_sched_runnable(struct rq *rq)
{
	return rq->comp3520_rq.nr_running > 0;
}

// TODO: Complete me
struct task_struct *pick_next_task_comp3520(struct rq *rq)
{
	// pr_info("pick_next_task_comp3520, nr_running : %d\n",( &rq->comp3520_rq)->nr_running);

	if (!comp3520_sched_runnable(rq)) {
		// update_idle_rq_clock_pelt(rq);
		return NULL;
	}
	struct comp3520_rq* comp3520_rq = &rq->comp3520_rq;
	struct task_struct * p = comp3520_task_of(comp3520_entity_of(comp3520_rq->run_list.next));
	return p;

}

static void put_prev_task_comp3520(struct rq *rq, struct task_struct *p) {
	
}

static void
prio_changed_comp3520(struct rq *rq, struct task_struct *p, int oldprio) {

}

const struct sched_class
	comp3520_sched_class __section("__comp3520_sched_class") = {
		.enqueue_task = enqueue_task_comp3520,
		.dequeue_task = dequeue_task_comp3520,
		.yield_task = yield_task_comp3520,
		.check_preempt_curr = check_preempt_curr_comp3520,
		.set_next_task = set_next_task_comp3520,
		.task_tick = task_tick_comp3520,
		.pick_next_task = pick_next_task_comp3520,
		.put_prev_task		= put_prev_task_comp3520,
		.prio_changed = prio_changed_comp3520,

#ifdef CONFIG_SMP
		.balance = balance_comp3520,
		.select_task_rq = select_task_rq_comp3520,
		.migrate_task_rq = migrate_task_rq_comp3520,

		.rq_online = rq_online_comp3520,
		.rq_offline = rq_offline_comp3520,

		.task_dead = task_dead_comp3520,
		.set_cpus_allowed = set_cpus_allowed_common,
#endif


#ifdef CONFIG_UCLAMP_TASK
		.uclamp_enabled = 1,
#endif

};

// TODO: Complete me
static inline struct task_struct * comp3520_task_of(struct comp3520_sched_entity *se)
{
	return container_of(se, struct task_struct, comp3520_se);
}

static inline struct comp3520_sched_entity * comp3520_entity_of(struct list_head* head)
{
	return container_of(head, struct comp3520_sched_entity, run_list);
}

// TODO: Complete me
void init_comp3520_rq(struct comp3520_rq *comp3520_rq)
{
	comp3520_rq->nr_running = 0;
	INIT_LIST_HEAD(&comp3520_rq->run_list);
}

#ifdef CONFIG_SCHED_DEBUG
extern void print_comp3520_stats(struct seq_file *m, int cpu);
extern void print_comp3520_rq(struct seq_file *m, int cpu, struct rt_rq *rt_rq);
#endif
