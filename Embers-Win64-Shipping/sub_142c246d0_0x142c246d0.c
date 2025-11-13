// 函数: sub_142c246d0
// 地址: 0x142c246d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142c293a0(arg1, arg2)

if (rax == 0)
    return rax

int32_t rbx = 0
uint32_t rdi_3 = (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18)
int32_t rax_5 = zx.d(arg1[3])

if (rdi_3 == neg.d(rax_5))
label_142c24762:
    rax_5.b = 1
else
    while (true)
        void* rsi_1 = &arg1[zx.q(rbx) << 3]
        
        if (sub_142c25e20(rsi_1 + 4, arg2, arg3).b != 0
                && sub_142c261a0(rsi_1 + 8, arg2, arg3).b != 0)
            rbx += 1
            
            if (rbx u>= rdi_3 + rax_5)
                goto label_142c24762
            
            continue
        
        rax_5.b = 0
        break

return rax_5
