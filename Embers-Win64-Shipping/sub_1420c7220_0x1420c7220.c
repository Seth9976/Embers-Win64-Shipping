// 函数: sub_1420c7220
// 地址: 0x1420c7220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3e110(&arg1[0x10])

if (result.b != 0)
    int64_t rdi_1 = *(arg1 + 0x10)
    uint128_t zmm6 = *(arg2 + 4)
    float zmm1[0x4] = zmm6
    int32_t r9_1 = int.d(zmm1[0])
    
    if (r9_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(r9_1)).d f== zmm1[0]))
        zmm1 = _mm_cvtepi32_ps(zx.o(r9_1 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    int64_t r9_3 = sx.q(arg1[1])
    zmm6.d = zmm6.d f- zmm1[0]
    int32_t r8 = 0
    int32_t rdx = 0
    zmm6.d = zmm6.d f* *(rdi_1 + (r9_3 << 2))
    
    if (r9_3.d s> 0x40)
        int32_t r11_1 = arg4
        int32_t r10_1 = arg4
        int32_t rcx_4
        
        do
            rcx_4 = ((r9_3.d - rdx) s>> 1) + rdx
            float temp0_5 = *(rdi_1 + (sx.q(rcx_4) << 2))
            zmm6.d f- temp0_5
            
            if (zmm6.d f<= temp0_5)
                r9_3 = zx.q(r11_1)
            
            if (zmm6.d f<= temp0_5)
                r10_1 = rcx_4
            
            if (zmm6.d f<= temp0_5)
                rcx_4 = rdx
            
            r11_1 = r9_3.d
            
            if (zmm6.d f<= temp0_5)
                r9_3 = zx.q(r10_1)
            
            rdx = rcx_4
        while (r9_3.d - rcx_4 s> 0x40)
    
    if (rdx s< r9_3.d)
        while (not(zmm6.d f<= *(rdi_1 + (sx.q(rdx) << 2) + 4)))
            rdx += 1
            
            if (rdx s>= r9_3.d)
                break
    
    int64_t r9_4 = sx.q(*arg1)
    float zmm5[0x4] = *arg2
    zmm1 = zmm5
    int64_t r11_2 = *(arg1 + 0x20) + (sx.q((r9_4 + 1).d * rdx) << 2)
    int32_t rcx_6 = int.d(zmm1[0])
    
    if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm1[0]))
        zmm1 =
            _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    zmm5[0] = zmm5[0] - zmm1[0]
    zmm5[0] = zmm5[0] f* *(r11_2 + (r9_4 << 2))
    
    if (r9_4.d s> 0x40)
        int32_t rbx_1 = arg4
        int32_t r10_2 = arg4
        int32_t rcx_11
        
        do
            rcx_11 = ((r9_4.d - r8) s>> 1) + r8
            float temp1_1 = *(r11_2 + (sx.q(rcx_11) << 2))
            zmm5[0] - temp1_1
            
            if (zmm5[0] <= temp1_1)
                r9_4 = zx.q(rbx_1)
            
            if (zmm5[0] <= temp1_1)
                r10_2 = rcx_11
            
            if (zmm5[0] <= temp1_1)
                rcx_11 = r8
            
            rbx_1 = r9_4.d
            
            if (zmm5[0] <= temp1_1)
                r9_4 = zx.q(r10_2)
            
            r8 = rcx_11
        while (r9_4.d - rcx_11 s> 0x40)
    
    if (r8 s< r9_4.d)
        while (not(zmm5[0] f<= *(r11_2 + (sx.q(r8) << 2) + 4)))
            r8 += 1
            
            if (r8 s>= r9_4.d)
                break
    
    int64_t rcx_12 = sx.q(r8)
    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rdx))
    zmm1 = *(rdi_1 + (sx.q(rdx) << 2))
    int128_t zmm3 = *(r11_2 + (rcx_12 << 2))
    zmm6.d = zmm6.d f- zmm1[0]
    float zmm4 = *(r11_2 + (rcx_12 << 2) + 4)
    zmm5[0] = zmm5[0] f- zmm3.d
    int64_t rcx_13 = *arg1
    zmm4 = zmm4 f- zmm3.d
    uint128_t zmm0
    zmm0.d = (*(rdi_1 + (sx.q(rdx) << 2) + 4)).d f- zmm1[0]
    zmm5[0] = zmm5[0] / zmm4
    zmm6.d = zmm6.d f/ zmm0.d
    zmm0 = _mm_cvtepi32_ps(zx.o((rcx_13 u>> 0x20).d))
    zmm2.d = zmm2.d f+ zmm6.d
    float temp0_12[0x4] = _mm_cvtepi32_ps(zx.o(rcx_13.d))
    zmm2.d = zmm2.d f/ zmm0.d
    zmm0 = _mm_cvtepi32_ps(zx.o(r8))
    zmm5[0] = zmm5[0] f+ zmm0.d
    zmm5[0] = zmm5[0] / temp0_12[0]
    *arg5 = (_mm_unpacklo_ps(zmm5, zmm2.q)).q
    int64_t rcx_14 = sx.q(arg1[1])
    int64_t rdx_1 = *(arg1 + 0x10)
    int32_t rax_20 = rcx_14.d * *arg1
    zmm0 = _mm_cvtepi32_ps(zx.o(arg3))
    uint128_t zmm10
    zmm10.d = _mm_cvtepi32_ps(zx.o(rax_20)).d f/ *(rdx_1 + (rcx_14 << 2))
    uint64_t rcx_15 = zx.q(data_14401b1a0)
    zmm0.d = zmm0.d f* zmm4 f* zmm10.d
    uint128_t zmm8
    zmm8.d = 1f f/ zmm0.d
    zmm0.d = zmm8.d f* 0.5f
    float temp0_17[0x4] = _mm_sqrt_ss(0, zmm0.d)
    temp0_17[0] = temp0_17[0] * 4f
    *arg8 = temp0_17[0]
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    zmm6.d = _mm_cvtepi32_ps(zx.o(arg1[1] * *arg1)).d f* zmm8.d
    
    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_15 << 3))))
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    uint128_t zmm7
    zmm7.d = logf(zmm6.d).d f* data_143cda910
    zmm7.d = zmm7.d f* 0.5f
    uint128_t zmm9 = zx.o(*arg5)
    zmm6 = zmm7
    int32_t rcx_17 = int.d(zmm6.d)
    
    if (rcx_17 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_17))[0] f== zmm6.d))
        zmm6 = _mm_cvtepi32_ps(zx.o(rcx_17 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6, zmm6.q)) & 1)))
    
    float var_88
    float var_78
    float zmm6_2
    float zmm7_1
    int32_t zmm12_1
    zmm6_2, zmm7_1, zmm12_1 = sub_1420c2650(arg1, &var_88, zmm9.q, 
        int.d(sub_1420c2650(arg1, &var_78, *arg5, int.d(zmm6.d)) + 1f))
    float zmm5_1[0x4] = var_88
    zmm7_1 = zmm7_1 - zmm6_2
    zmm5_1[0] = zmm5_1[0] - var_78
    int32_t var_80
    int32_t var_70
    zmm3.d = var_80.d f- var_70
    zmm5_1[0] = zmm5_1[0] * zmm7_1
    zmm5_1[0] = zmm5_1[0] + var_78
    zmm3.d = zmm3.d f* zmm7_1
    zmm3.d = zmm3.d f+ var_70
    float temp0_23[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
    float var_84
    float var_74
    temp0_23[0] = (var_84 - var_74) * zmm7_1 + var_74
    zmm8.d = zmm8.d f* zmm12_1
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc6)
    temp0_24[0] = zmm3.d
    zmm8.d = zmm8.d f* zmm10.d
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x27)
    float var_7c
    float var_6c
    temp0_25[0] = (var_7c - var_6c) * zmm7_1 + var_6c
    *arg6 = _mm_shuffle_ps(temp0_25, temp0_25, 0x39)
    result = arg7
    *result = zmm8.d

return result
