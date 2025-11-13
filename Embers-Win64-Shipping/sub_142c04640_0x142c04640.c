// 函数: sub_142c04640
// 地址: 0x142c04640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2) != 0
        && sub_142bf7510(arg2, &arg1[2], ((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 2) != 0)
    uint32_t result = zx.d(arg1[1])
    int32_t rbx = 0
    uint32_t rdi_1 = zx.d(*arg1) << 8
    
    if (rdi_1 == neg.d(result))
    label_142c046df:
        result.b = 1
    else
        while (true)
            if (sub_142c05300(&arg1[2 + (zx.q(rbx) << 2)], arg2, arg3).b == 0)
                result.b = 0
                break
            
            rbx += 1
            
            if (rbx u>= rdi_1 + result)
                goto label_142c046df
    
    return result

return 0
