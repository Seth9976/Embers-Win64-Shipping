// 函数: sub_1409e4810
// 地址: 0x1409e4810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*arg1)

if (rax.d u> 7)
    *arg2 = 0
    arg2[1] = 0
    return arg2

float zmm0[0x2]
float zmm2[0x2]

switch (rax)
    case 0
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 7)
        int32_t rax_1 = arg2[1].d + 7
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        sub_1405a7220(*arg2, 7, "<none>", 7, 0x3f)
        return arg2
    case 1
        float zmm3[0x2] = *(arg1 + 0x14)
        zmm2 = *(arg1 + 0x10)
        float zmm1[0x2] = *(arg1 + 0x18)
        zmm0 = _mm_cvtps_pd(*(arg1 + 0x1c))
        _mm_cvtps_pd(zmm3)
        zmm2 = _mm_cvtps_pd(zmm2)
        float var_10[0x2] = zmm0
        float var_18[0x2] = _mm_cvtps_pd(zmm1)
        sub_140a2e390(arg2, u"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f", zmm2)
        return arg2
    case 2
        zmm2 = *(arg1 + 0x20)
        zmm0 = *(arg1 + 0x28)
        _mm_cvtps_pd(*(arg1 + 0x24))
        zmm2 = _mm_cvtps_pd(zmm2)
        float var_18_1[0x2] = _mm_cvtps_pd(zmm0)
        sub_140a2e390(arg2, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
        return arg2
    case 3
        zmm2 = *(arg1 + 0x2c)
        _mm_cvtps_pd(*(arg1 + 0x30))
        sub_140a2e390(arg2, u"X=%3.3f Y=%3.3f", _mm_cvtps_pd(zmm2))
        return arg2
    case 4
        sub_140a2e390(arg2, u"%f", _mm_cvtps_pd(*(arg1 + 0x34)))
        return arg2
    case 5
        sub_140a2e390(arg2, u"%d", zx.q(*(arg1 + 0x38)))
        return arg2
    case 6
        wchar16 const* const rsi = u"false"
        
        if (arg1[0x3c] != 0)
            rsi = u"true"
        
        int32_t rcx_8 = 0
        *arg2 = 0
        arg2[1] = 0
        
        if (*rsi != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (rsi[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(arg2, rdi_1.d + 1)
                rcx_8 = arg2[1].d
            
            int32_t rax_8 = rcx_8 + rdi_1.d + 1
            arg2[1].d = rax_8
            
            if (rax_8 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            UnDecorator::getReferenceType(*arg2, rsi, (rdi_1.d + 1) * 2)
        
        return arg2
    case 7
        sub_140b63b70(&arg1[0x40], arg2)
        return arg2
