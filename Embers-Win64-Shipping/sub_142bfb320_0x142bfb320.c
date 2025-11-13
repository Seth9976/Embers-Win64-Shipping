// 函数: sub_142bfb320
// 地址: 0x142bfb320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t i

if (sub_142c06240(arg1, arg2).b == 0)
label_142bfb341:
    i.b = 0
    return i

uint32_t r9_3 = (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18)
uint32_t rax_4 = zx.d(arg1[3])
i = 0

if (r9_3 != neg.d(rax_4))
    do
        uint64_t rdx = zx.q(i) * 3
        void* r8 = &arg1[rdx << 1]
        
        if ((zx.d(*(r8 + 5)) << 0x10) + (zx.d(arg1[(rdx << 1) + 6]) << 8)
                + (zx.d(*(r8 + 4)) << 0x18) + zx.d(*(r8 + 7)) u>= arg2[0xc])
            goto label_142bfb341
        
        if ((zx.d(*(r8 + 8)) << 8) + zx.d(*(r8 + 9)) u>= arg4)
            goto label_142bfb341
        
        i += 1
    while (i u< r9_3 + rax_4)

i.b = 1
return i
