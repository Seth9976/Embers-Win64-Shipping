// 函数: sub_140fc3f90
// 地址: 0x140fc3f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
uint64_t result_1 = arg2
uint64_t result

if (*(arg1 + 0x18) == *(arg1 + 0x44))
label_140fc4016:
    int64_t* var_38 = &result_1
    int64_t* var_30_1 = &arg_18
    void arg_20
    result = sub_14093bb90(arg1 + 0x10, &arg_20, &var_38, nullptr)
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x48
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    result = zx.q(*(r8 + (((sx.q(*(arg1 + 0x58)) - 1) & sx.q(rax_2)) << 2)))
    
    if (result.d == 0xffffffff)
        goto label_140fc4016
    
    int64_t r8_1 = *(arg1 + 0x10)
    
    while (true)
        int64_t rdx_3 = sx.q(result.d) * 3
        
        if (*(r8_1 + (rdx_3 << 3)) == arg2)
            break
        
        result = zx.q(*(r8_1 + (rdx_3 << 3) + 0x10))
        
        if (result.d == 0xffffffff)
            goto label_140fc4016
    
    if (result.d == 0xffffffff)
        goto label_140fc4016

if (arg4 != 0)
    result = result_1
    *(arg1 + 8) = result

return result
