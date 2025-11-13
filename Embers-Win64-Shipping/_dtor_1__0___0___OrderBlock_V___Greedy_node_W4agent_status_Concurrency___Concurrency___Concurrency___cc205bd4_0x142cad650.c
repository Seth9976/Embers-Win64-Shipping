// 函数: ?dtor$1@?0???0?$_OrderBlock@V?$_Greedy_node@W4agent_status@Concurrency@@@Concurrency@@@Concurrency@@QEAA@_KPEAPEAVagent@1@PEAV?$ITarget@_K@1@@Z@4HA
// 地址: 0x142cad650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x30) & 1

if (result == 0)
    return result

*(arg2 + 0x30) &= 0xfffffffe
return sub_142a47ff0(arg2 + 0x80)
