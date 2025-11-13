// 函数: sub_142140a10
// 地址: 0x142140a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xe8) == 0)
    *(arg1 + 0xe8) = 0
    return 

if (sub_140d3e110(arg1 + 0x38) != 0)
    int64_t var_28 = 0
    int64_t var_20_1 = 0
    sub_142149780(arg1, &var_28)
    void* rax_1 = *(arg1 + 0x30)
    int64_t var_18
    
    if (rax_1 == 0)
        var_18 = 0
        int64_t var_10_1 = 0
    else
        var_18.o = *(rax_1 + 0x28)
    
    int64_t* rcx_2 = *(arg1 + 0xe0)
    int64_t arg_8 = *(arg1 + 0x18)
    sub_142147ba0(rcx_2, &var_18, &var_28, &arg_8, arg2)
    int64_t rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

*(arg1 + 0xe8) = 0
