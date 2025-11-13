// 函数: sub_1418095e0
// 地址: 0x1418095e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1

if (arg1 == 1)
    int64_t* rax_4 = sub_14284e210(sub_14284f9d0(sub_14284e210(arg2, sub_1428535c0())), 0)
    int64_t r8_1 = *rax_4
    int64_t var_28
    int64_t var_18
    sub_1418042f0(&var_28, (*r8_1)(rax_4, &var_18, r8_1))
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t* rcx_6 = *(sub_1417fc120() + 0x10)
    int64_t r9_1 = *rcx_6
    
    if ((*(r9_1 + 0x40))(rcx_6, arg2, &var_28, r9_1) == 0)
        rbx = 0
    
    int64_t rcx_7 = var_28
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

return zx.q(rbx)
