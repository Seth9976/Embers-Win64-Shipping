// 函数: sub_142c34ae0
// 地址: 0x142c34ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2).b != 0 && zx.w(*arg1) * 0x100 != neg.w(zx.w(arg1[1]))
        && sub_142bf7510(arg2, &arg1[4], 4).b != 0)
    int32_t r14 = 0
    void* rbx = &arg1[8]
    uint32_t rsi_3 = (zx.d(arg1[5]) << 0x10) + (zx.d(arg1[6]) << 8) + (zx.d(arg1[4]) << 0x18)
    void* rax_5 = zx.q(arg1[7])
    
    if (rsi_3 == neg.d(rax_5.d))
    label_142c34bcf:
        rax_5.b = 1
    else
        while (true)
            arg1[1]
            *arg1
            
            if (sub_142c33170(rbx, arg2).b == 0)
                rax_5.b = 0
                break
            
            r14 += 1
            rbx = zx.q(*(rbx + 7)) + rbx
                + (((((zx.q(*(rbx + 4)) << 8) + zx.q(*(rbx + 5))) << 8) + zx.q(*(rbx + 6))) << 8)
            
            if (r14 u>= rsi_3 + rax_5.d)
                goto label_142c34bcf
    
    return rax_5

uint16_t rax
rax.b = 0
return rax
