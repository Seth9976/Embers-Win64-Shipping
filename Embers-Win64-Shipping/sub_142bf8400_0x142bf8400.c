// 函数: sub_142bf8400
// 地址: 0x142bf8400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2) != 0
        && sub_142bf7510(arg2, &arg1[2], ((zx.q((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 3) + 8).d)
        != 0)
    uint64_t rbx = 0
    int32_t rdi = zx.d(arg1[1]) + 1
    uint32_t rcx_3 = zx.d(*arg1) << 8
    uint32_t result
    
    if (rdi == neg.d(rcx_3))
    label_142bf84a0:
        result.b = 1
    else
        while (true)
            if (sub_142bfa8b0(&arg1[2 + (rbx << 3)], arg2, arg3, arg4).b == 0)
                result.b = 0
                break
            
            rbx = zx.q(rbx.d + 1)
            
            if (rbx.d u>= rdi + rcx_3)
                goto label_142bf84a0
    
    return result

return 0
