// 函数: ?dtor$1@?0??_Get@?$_ExceptionPtr_static@Vbad_exception@std@@@?A0x7b7936fb@@SA?AV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@XZ@4HA
// 地址: 0x142ca8b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x20) & 1

if (result == 0)
    return result

*(arg2 + 0x20) &= 0xfffffffe
return sub_142a47ff0(*(arg2 + 0x50))
