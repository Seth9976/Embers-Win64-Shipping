// 函数: sub_142a94ab0
// 地址: 0x142a94ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg6 != 0 && *arg6 s<= 0)
    bool cond:0_1 = arg2 s< 0
    
    if (arg2 s<= 0)
        goto label_142a94aca
    
    if (arg1 == 0)
        *arg6 = 1
    else
        cond:0_1 = arg2 s< 0
    label_142a94aca:
        
        if (cond:0_1 || arg3 s<= 0 || arg4 == 0)
            *arg6 = 1
        else if (arg2 s> 1)
            if (arg2 s>= 9 && arg5 == 0)
                arg5 = arg6.b
                return sub_142a946e0(arg1, arg2, arg3, arg4) __tailcall
            
            arg5 = arg6.b
            return sub_142a94620(arg1, arg2, arg3, arg4) __tailcall

return arg6
