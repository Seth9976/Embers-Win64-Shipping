// 函数: sub_140821540
// 地址: 0x140821540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3)

if (arg3 == 0 || *(arg1 + 8) == 0 || *(arg1 + 0x10) == 0)
    int32_t rax_16 = data_143dbb200
    *(arg2 + 0xc) = data_143dbb1f8.q
    *(arg2 + 0x14) = rax_16
    *arg2 = *(arg2 + 0xc)
    arg2[1].d = rax_16
    arg2[3].b = 0
else
    float (* r9_1)[0x4] = *(arg1 + 0x50)
    int64_t r10_1 = 0
    float (* r8)[0x4] = *(arg1 + 0x48)
    float (* rdx)[0x4] = *(arg1 + 0x40)
    int64_t rcx = 0
    void* rax_1 = &(*r9_1)[rax]
    float zmm10[0x4] = 0xff7fffff
    uint64_t r11_4 = (rax_1 - r9_1 + 3) u>> 2
    
    if (r9_1 u> rax_1)
        r11_4 = 0
    
    float zmm0[0x4]
    
    if (r11_4 != 0)
        int128_t* rax_2 = r9_1
        
        do
            zmm0 = *rax_2
            rax_2 += 4
            rcx += 1
            zmm10 = _mm_max_ss(zmm0[0], zmm10[0])
        while (rcx != r11_4)
    
    void* rax_3 = &(*r8)[rax]
    float zmm9[0x4] = 0xff7fffff
    int64_t rcx_1 = 0
    uint64_t r11_8 = (rax_3 - r8 + 3) u>> 2
    float (* rax_4)[0x4] = r8
    
    if (r8 u> rax_3)
        r11_8 = 0
    
    if (r11_8 != 0)
        do
            zmm0 = *rax_4
            rax_4 = &(*rax_4)[1]
            rcx_1 += 1
            zmm9 = _mm_max_ss(zmm0[0], zmm9[0])
        while (rcx_1 != r11_8)
    
    void* rax_5 = &(*rdx)[rax]
    float zmm8[0x4] = 0xff7fffff
    int64_t rcx_2 = 0
    uint64_t r11_12 = (rax_5 - rdx + 3) u>> 2
    float (* rax_6)[0x4] = rdx
    
    if (rdx u> rax_5)
        r11_12 = 0
    
    if (r11_12 != 0)
        do
            zmm0 = *rax_6
            rax_6 = &(*rax_6)[1]
            rcx_2 += 1
            zmm8 = _mm_max_ss(zmm0[0], zmm8[0])
        while (rcx_2 != r11_12)
    
    float zmm6[0x4] = 0x7f7fffff
    void* rax_7 = &(*r9_1)[rax]
    float zmm4 = 3.40282347e+38f
    int64_t rcx_3 = 0
    uint64_t r11_16 = (rax_7 - r9_1 + 3) u>> 2
    
    if (r9_1 u> rax_7)
        r11_16 = 0
    
    if (r11_16 != 0)
        do
            zmm4 = __minss_xmmss_memss(zmm4, *r9_1)
            rcx_3 += 1
            r9_1 = &(*r9_1)[1]
        while (rcx_3 != r11_16)
    
    void* rax_8 = &(*r8)[rax]
    int64_t zmm2 = 0x7f7fffff
    int64_t rcx_4 = 0
    uint64_t r9_5 = (rax_8 - r8 + 3) u>> 2
    
    if (r8 u> rax_8)
        r9_5 = 0
    
    if (r9_5 != 0)
        do
            zmm2 = __minss_xmmss_memss(zmm2.d, *r8)
            rcx_4 += 1
            r8 = &(*r8)[1]
        while (rcx_4 != r9_5)
    
    void* rax_9 = &(*rdx)[rax]
    uint64_t rcx_5 = 0
    uint64_t r8_4 = (rax_9 - rdx + 3) u>> 2
    
    if (rdx u> rax_9)
        r8_4 = 0
    
    if (r8_4 != 0)
        do
            zmm0 = *rdx
            rdx = &(*rdx)[1]
            rcx_5 += 1
            zmm6 = _mm_min_ss(zmm0[0], zmm6[0])
        while (rcx_5 != r8_4)
    
    float zmm1[0x4] = 0x42480000
    float zmm3[0x4] = 0x42480000
    float zmm7[0x4] = 0x38d1b717
    float zmm5[0x4] = 0x42480000
    float var_88 = 50f
    int32_t var_84_1 = 0x42480000
    int32_t var_80_1 = 0x42480000
    
    if (*(arg1 + 0xc8) != 0 && *(arg1 + 0xd0) != 0)
        float (* rcx_6)[0x4] = *(arg1 + 0x110)
        zmm5 = 0xff7fffff
        float (* r9_6)[0x4] = *(arg1 + 0x108)
        int64_t r8_5 = 0
        float (* rdx_1)[0x4] = *(arg1 + 0x100)
        void* rax_10 = &(*rcx_6)[rax]
        uint64_t r11_20 = (rax_10 - rcx_6 + 3) u>> 2
        
        if (rcx_6 u> rax_10)
            r11_20 = 0
        
        if (r11_20 != 0)
            do
                zmm0 = *rcx_6
                rcx_6 = &(*rcx_6)[1]
                r8_5 += 1
                zmm5 = _mm_max_ss(zmm0[0], zmm5[0])
            while (r8_5 != r11_20)
        
        void* rax_11 = &(*r9_6)[rax]
        zmm3 = 0xff7fffff
        int64_t rcx_7 = 0
        uint64_t r8_9 = (rax_11 - r9_6 + 3) u>> 2
        
        if (r9_6 u> rax_11)
            r8_9 = 0
        
        if (r8_9 != 0)
            do
                zmm0 = *r9_6
                r9_6 = &(*r9_6)[1]
                rcx_7 += 1
                zmm3 = _mm_max_ss(zmm0[0], zmm3[0])
            while (rcx_7 != r8_9)
        
        void* rax_12 = &(*rdx_1)[rax]
        zmm1 = 0xff7fffff
        rcx_5 = (rax_12 - rdx_1 + 3) u>> 2
        
        if (rdx_1 u> rax_12)
            rcx_5 = 0
        
        if (rcx_5 != 0)
            do
                zmm0 = *rdx_1
                rdx_1 = &(*rdx_1)[1]
                r10_1 += 1
                zmm1 = _mm_max_ss(zmm0[0], zmm1[0])
            while (r10_1 != rcx_5)
        
        var_88 = zmm1[0]
        float var_84_2 = zmm3[0]
        float var_80_2 = zmm5[0]
    
    if (_mm_and_ps(zmm1, 0x7fffffff)[0] > 9.99999975e-05f)
        rcx_5.b = 0
    else if (_mm_and_ps(zmm3, 0x7fffffff)[0] > 9.99999975e-05f)
        rcx_5.b = 0
    else if (_mm_and_ps(zmm5, 0x7fffffff)[0] > 9.99999975e-05f)
        rcx_5.b = 0
    else
        rcx_5.b = 1
    
    zmm3 = *(arg1 + 0x17c)
    zmm0 = *(arg1 + 0x178)
    float* rax_13 = &var_88
    zmm1 = *(arg1 + 0x180)
    
    if (rcx_5.b != 0)
        rax_13 = &data_14399f668
    
    zmm3[0] = zmm3[0] * rax_13[1]
    zmm0[0] = zmm0[0] * *rax_13
    zmm1[0] = zmm1[0] * rax_13[2]
    float temp0_14[0x4] = _mm_max_ss(_mm_max_ss(zmm3[0], zmm0[0])[0], zmm1[0])
    
    if (not(temp0_14[0] <= 9.99999975e-05f))
        zmm7 = temp0_14
    
    zmm6[0] = zmm6[0] - zmm7[0]
    arg2[3].b = 1
    zmm8[0] = zmm8[0] + zmm7[0]
    zmm9[0] = zmm9[0] + zmm7[0]
    zmm10[0] = zmm10[0] + zmm7[0]
    zmm2.d = zmm2.d f- zmm7[0]
    zmm4 = zmm4 - zmm7[0]
    float var_70_1 = zmm10[0]
    *arg2 = (_mm_unpacklo_ps(zmm6, zmm2)).q
    float temp0_16[0x4] = _mm_unpacklo_ps(zmm8, zmm9[0].q)
    arg2[1].d = zmm4
    *(arg2 + 0xc) = temp0_16.q
    *(arg2 + 0x14) = var_70_1

return arg2
