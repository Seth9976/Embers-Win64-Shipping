// 函数: sub_1420e4db0
// 地址: 0x1420e4db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xba) & 2) == 0)
    int64_t var_28
    sub_140d30800(arg1 + 0x38, &var_28)
    int64_t var_18
    int64_t* rax_1 = sub_140baf760(&var_18, &var_28)
    int16_t* rdx_2
    
    if (rax_1[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rax_1
    
    void arg_10
    *(arg1 + 0x138) = *sub_140b58260(&arg_10, rdx_2, 1)
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *(arg1 + 0xba) |= 2

int64_t arg_8 = *(arg1 + 0x138)
sub_140b63b70(&arg_8, arg2)
return arg2
