#undef CMK_USE_IBVERBS
#define CMK_USE_IBVERBS				1


#undef CMK_NETPOLL
#define CMK_NETPOLL						1

#undef CMK_MALLOC_USE_GNU_MALLOC
#define CMK_MALLOC_USE_GNU_MALLOC                          0

#undef CMK_MALLOC_USE_OS_BUILTIN
#define CMK_MALLOC_USE_OS_BUILTIN                          1

/*
#undef CMK_IMMEDIATE_MSG
#define CMK_IMMEDIATE_MSG       0
*/

#undef CMK_BROADCAST_SPANNING_TREE
#define CMK_BROADCAST_SPANNING_TREE 0

#undef CMK_BROADCAST_HYPERCUBE
#define CMK_BROADCAST_HYPERCUBE  1

#undef CMK_DIRECT                 
#define CMK_DIRECT                                        1

#undef CMK_DISABLE_SYNC
#define CMK_DISABLE_SYNC       1


#undef CMK_IBVERBS_FAST_START
#define CMK_IBVERBS_FAST_START                         0
