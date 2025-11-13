// 函数: ?dtor$0@?0??Dispatch@InternalContextBase@details@Concurrency@@UEAAXPEAUDispatchState@3@@Z@4HA
// 地址: 0x142c9f410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x24) & 1

if (result == 0)
    return result

*(arg2 + 0x24) &= 0xfffffffe
return sub_1405ec670(arg2 + 0x38)
