// 函数: sub_142bfb250
// 地址: 0x142bfb250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i

if (sub_142bf7510(arg2, arg1, 2).b != 0
        && sub_142bf7510(arg2, &arg1[2], ((zx.d(*arg1) << 8) + zx.d(arg1[1])) * 3).b != 0)
    uint32_t rax_1 = zx.d(arg1[1])
    uint32_t r9_1 = zx.d(*arg1) << 8
    i = 0
    
    if (r9_1 != neg.d(rax_1))
        do
            void* r8_5 = &arg1[zx.q(i) * 3]
            
            if ((zx.d(*(r8_5 + 2)) << 8) + zx.d(*(r8_5 + 3)) u>= arg2[0xc])
                goto label_142bfb304
            
            if (zx.d(*(r8_5 + 4)) u>= arg4)
                goto label_142bfb304
            
            i += 1
        while (i u< r9_1 + rax_1)
    
    i.b = 1
    return i

label_142bfb304:
i.b = 0
return i
