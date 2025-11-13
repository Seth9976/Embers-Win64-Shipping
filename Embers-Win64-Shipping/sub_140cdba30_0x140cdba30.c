// 函数: sub_140cdba30
// 地址: 0x140cdba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xa) & 1) == 0)
    int64_t arg_8 = *(arg1 + 0x18)
    int16_t* var_18
    sub_140b63b70(&arg_8, &var_18)
    int16_t* const r9_1 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        r9_1 = var_18
    
    sub_140af98a0("Unknown", 0x31e, 
        Trying to call UObject::FinishDestroy from outside of UObject::ConditionalFinishDestroy on "
    "object %s. Please fix up the calling code.", r9_1)
    int16_t* rcx_1 = var_18
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    sub_140afbb40()

return sub_140ba12b0(arg1) __tailcall
