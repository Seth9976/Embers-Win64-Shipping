// 函数: sub_142103d10
// 地址: 0x142103d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = data_143f48718
uint32_t r8 = zx.d(*(arg1 + 0x2a0))
int32_t rax

if (r8 == rcx)
    rax = *(arg1 + 0x28c)
label_142103d3f:
    
    if (rax != 0)
        float zmm0[0x4]
        float zmm1[0x4]
        
        if (rax - 1 s>= 0 && rax - 1 s< rcx)
            zmm1 = *(data_143f48710 + (sx.q(rax) << 2) - 4)
            zmm0 = __andps_xmmxud_memxud(zmm1, data_142d3f770)
        
        if (rax - 1 s< 0 || rax - 1 s>= rcx || not(zmm0[0] > 9.99999994e-09f))
            zmm1 = *(arg1 + 0x288)
        
        int32_t r8_1
        r8_1.b = 1
        return sub_142102360(arg1, zmm1, r8_1.b) __tailcall
else if (r8 s< rcx)
    rax = *(arg1 + 0x28c) - r8 + rcx
    goto label_142103d3f
