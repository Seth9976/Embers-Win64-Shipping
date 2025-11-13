// 函数: sub_1422d2cd0
// 地址: 0x1422d2cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg3

if (arg7 != 0)
label_1422d2d7a:
    sub_1422bdfc0(arg1, arg2, &arg3[2], arg4, arg6)
    *rbx = arg5
    
    if (data_143f53bc8 != 0 && (*arg6 & 2) != 0)
        rbx[1] = arg5
else if (data_143f53bc8 != 0)
    if (data_143a2fda4 == 0 || *arg3 != arg5)
        goto label_1422d2d7a
    
    int32_t rcx = *arg6
    int32_t rax = rcx & 2
    
    if (rax != 0 && arg3[1] != arg5)
        goto label_1422d2d7a
    
    if (rax != 0 || *(arg2 + 0x14) == rax)
        int32_t var_18 = rcx | 0x80
        sub_1422bdfc0(arg1, arg2, &arg3[2], arg4, &var_18)
else if (data_143a2fda4 == 0 || (*arg6 & 2) != 0 || *(arg2 + 0x14) s<= 1 || *arg3 != arg5)
    goto label_1422d2d7a
