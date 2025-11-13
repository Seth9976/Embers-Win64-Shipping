// 函数: sub_141521a00
// 地址: 0x141521a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143dbb200
int64_t* i = *arg2
*(arg1 + 0xc) = data_143dbb1f8.q
*(arg1 + 0x14) = rax
*arg1 = *(arg1 + 0xc)
arg1[1].d = rax
arg1[3].b = 0

for (void* rsi = i + sx.q(arg2[1].d) * 0xc; i != rsi; i += 0xc)
    if (_finite(_mm_cvtps_pd(*i)) != 0 && _finite(_mm_cvtps_pd(*(i + 4))) != 0
            && _finite(_mm_cvtps_pd(i[1].d)) != 0)
        float zmm0[0x2]
        
        if (arg1[3].b == 0)
            zmm0 = *i
            int32_t rax_5 = i[1].d
            *(arg1 + 0xc) = zmm0
            *arg1 = zmm0
            *(arg1 + 0x14) = rax_5
            arg1[1].d = rax_5
            arg1[3].b = 1
        else
            float zmm3[0x2] = *i
            float zmm2[0x2] = i[1].d
            zmm0 = __minss_xmmss_memss(zmm3[0], *arg1)
            int32_t zmm1 = *(arg1 + 0x14)
            zmm3 = __maxss_xmmss_memss(zmm3[0], *(arg1 + 0xc))
            int32_t temp0_6 = _mm_max_ss(zmm1, zmm2[0])
            *arg1 = zmm0[0]
            zmm0 = __minss_xmmss_memss((*(arg1 + 4))[0], *(i + 4))
            *(arg1 + 0xc) = zmm3[0]
            *(arg1 + 0x14) = temp0_6
            *(arg1 + 4) = zmm0[0]
            arg1[1].d = __minss_xmmss_memss(zmm2[0], arg1[1].d)[0]
            arg1[2].d = __maxss_xmmss_memss(arg1[2].d[0], *(i + 4))[0]

return arg1
