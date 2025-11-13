// 函数: ?dtor$0@?0??_Current_exception@exception_ptr@std@@SA?AV12@XZ@4HA
// 地址: 0x142c9fe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x20) & 1

if (result == 0)
    return result

*(arg2 + 0x20) &= 0xfffffffe
return sub_1405e8840(*(arg2 + 0x40))
