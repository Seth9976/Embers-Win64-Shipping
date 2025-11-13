// 函数: sub_140cd7d40
// 地址: 0x140cd7d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8

if (((*(arg1 + 8) u>> 0xf).b & 1) == 0)
    arg_8 = *(arg1 + 0x18)
    int16_t* var_18
    sub_140b63b70(&arg_8, &var_18)
    int16_t* const r9_1 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        r9_1 = var_18
    
    sub_140af98a0("Unknown", 0x2f3, 
        Trying to call UObject::BeginDestroy from outside of UObject::ConditionalBeginDestroy on object "
    " Please fix up the calling code.", r9_1)
    int16_t* rcx_1 = var_18
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    sub_140afbb40()

sub_140d3e8d0(arg1, nullptr, 0xffffffff, 1)
arg_8 = 0
return sub_140d251f0(arg1, 0, 0)
