// 函数: ?dtor$1@?0??_Get@?$_ExceptionPtr_static@Vbad_alloc@std@@@?A0x7b7936fb@@SA?AV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@XZ@4HA
// 地址: 0x142c9e010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x20) & 1

if (result == 0)
    return result

*(arg2 + 0x20) &= 0xfffffffe
return sub_1405970a0(*(arg2 + 0x50))
