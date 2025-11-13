// 函数: sub_140cebfd0
// 地址: 0x140cebfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
bool rdx

if (*arg1 != 0)
    rdx = sub_140b5b8a0(arg1[1].d, 0) == 0

if (*arg1 == 0 || (*(arg1 + 0xc) != 0 | rdx) == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t var_18
    int64_t* rax_2 = sub_140b63b70(&arg1[1], &var_18)
    int16_t* const rdi_1 = &data_142d40450
    
    if (rax_2[1].d != 0)
        *rax_2
    
    int16_t* var_28
    sub_140b63b70(arg1, &var_28)
    int32_t var_20
    
    if (var_20 != 0)
        rdi_1 = var_28
    
    sub_140a2e390(arg2, u"%s:%s", rdi_1)
    int16_t* rcx_4 = var_28
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

return arg2
