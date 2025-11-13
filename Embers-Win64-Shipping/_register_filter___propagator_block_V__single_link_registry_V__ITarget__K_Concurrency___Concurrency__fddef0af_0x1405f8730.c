// 函数: ?register_filter@?$propagator_block@V?$single_link_registry@V?$ITarget@_K@Concurrency@@@Concurrency@@V?$multi_link_registry@V?$ISource@W4agent_status@Concurrency@@@Concurrency@@@2@V?$ordered_message_processor@_K@2@@Concurrency@@IEAAXAEBV?$function@$$A6A_NAEBW4agent_status@Concurrency@@@Z@std@@@Z
// 地址: 0x1405f8730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg2 == 0)
    return 0x80004003

CRITICAL_SECTION* arg_10 = &arg1[2]
EnterCriticalSection(&arg1[2])
int32_t rcx_2
rcx_2.b = (*(*arg1 + 0x100))(arg1) != 0
*arg2 = rcx_2

if (arg1 != -0x10)
    LeaveCriticalSection(&arg1[2])

return 0
