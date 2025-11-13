// 函数: sub_141c26ec0
// 地址: 0x141c26ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *(arg1 + 0x7c8)
float zmm1 = *(arg1 + 0x838)

if (not(zmm1 < zmm0))
    zmm0 = _mm_min_ss(*(arg1 + 0x7cc), zmm1)

zmm1 = *(arg1 + 0x83c)
*(arg1 + 0x838) = zmm0
zmm0 = *(arg1 + 0x7d0)

if (not(zmm1 < zmm0))
    zmm0 = _mm_min_ss(*(arg1 + 0x7d4), zmm1)

void* rax = *(arg1 + 0xa8)
*(arg1 + 0x83c) = zmm0
float result

if (rax != 0)
label_141c26f3e:
    void* rax_1 = sub_142437e30(rax, 0, 1)
    
    if (rax_1 == 0)
        result = 100f
    else
        result = *(rax_1 + 0x240)
else
    rax = sub_141ee69e0(arg1)
    
    if (rax != 0)
        goto label_141c26f3e
    
    result = 100f

zmm1 = *(arg1 + 0x838)
*(arg1 + 0x7e4) = __maxss_xmmss_memss(result f* *(arg1 + 0x7d8) * 0.00100000005f, *(arg1 + 0x7e4))

if (zmm1 <= 0f)
    result = (zx.o(0)).d
else
    result = atanf(0.5f / zmm1 f* *(arg1 + 0x7bc)) * 114.591553f

zmm1 = *(arg1 + 0x7c0)
*(arg1 + 0x1f0) = result

if (zmm1 <= 0f)
    *(arg1 + 0x7c4) = 0
    *(arg1 + 0x200) = 0
    return result

result = *(arg1 + 0x7bc) / zmm1
*(arg1 + 0x7c4) = result
*(arg1 + 0x200) = result
return result
