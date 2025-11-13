// 函数: sub_142c04720
// 地址: 0x142c04720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142c062d0(arg1, arg2)

if (rax == 0)
    return rax

int32_t rbx = 0
uint32_t rdi_3 = (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18)
uint32_t rax_5 = zx.d(arg1[3])

if (rdi_3 == neg.d(rax_5))
label_142c047b6:
    rax_5.b = 1
else
    while (true)
        if (sub_142c05710(zx.q(rbx) * 0x30 + 4 + arg1, arg2, arg3).b == 0)
            rax_5.b = 0
            break
        
        rbx += 1
        
        if (rbx u>= rdi_3 + rax_5)
            goto label_142c047b6

return rax_5
