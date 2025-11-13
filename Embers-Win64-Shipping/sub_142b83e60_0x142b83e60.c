// 函数: sub_142b83e60
// 地址: 0x142b83e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (arg2 s>= 0)
    int128_t var_18
    char rax_1
    int32_t* rbx
    
    if (arg2 s<= 1)
        rbx = arg5
        var_18 = *arg4
        rax_1 = sub_142b83f20(arg1, arg2, &var_18, rbx, &arg_10)
    label_142b83ee4:
        
        if (rax_1 != 0)
            *arg6 = arg_10 + *rbx
            *(sx.q(*rbx) + *arg4) = 0
        
        return zx.q(rax_1)
    
    if (arg2 == 2)
        rbx = arg5
        var_18 = *arg4
        rax_1 = sub_142b84250(arg1.q, arg3, &var_18, rbx, &arg_10)
        goto label_142b83ee4

abort()
noreturn
