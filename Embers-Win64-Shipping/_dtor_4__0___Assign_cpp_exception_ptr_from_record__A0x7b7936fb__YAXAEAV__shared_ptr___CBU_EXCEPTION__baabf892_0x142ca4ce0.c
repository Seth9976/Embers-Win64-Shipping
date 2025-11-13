// 函数: ?dtor$4@?0??_Assign_cpp_exception_ptr_from_record@?A0x7b7936fb@@YAXAEAV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@AEBUEHExceptionRecord@@@Z@4HA
// 地址: 0x142ca4ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x20) & 1

if (result == 0)
    return result

*(arg2 + 0x20) &= 0xfffffffe
return sub_14058f000(arg2 + 0x48)
