// 函数: sub_1423d9030
// 地址: 0x1423d9030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg5
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm7
zmm7.q = float.d(performanceCount)
zmm7.q = zmm7.q f* data_143d796f8
zmm7.q = zmm7.q f+ 16777216.0

if (not(0.0 >= *arg1))
    int128_t zmm6
    int128_t var_38_1 = zmm6
    double zmm0_1
    zmm0_1.d = sub_142217650().d f* 0.00100000005f
    double zmm1[0x2] = zmm7
    zmm1[0] = zmm1[0] - *arg1
    float temp0_1[0x4] = _mm_cvtpd_ps(zmm1)
    
    if (not(temp0_1[0] f<= zmm0_1.d))
        *(arg1[1] i+ (sx.q(arg1[5].d) << 2)) = temp0_1[0]
        *(arg1[3] i+ (sx.q(arg1[5].d) << 3)) = zmm7.q
        arg1[5].d = (arg1[5].d i+ 1) s% 0x14
        
        if (sub_140d3e110(data_143f5b298 + 0xe0) != 0)
            zmm6 = *(sub_140d3c6e0(data_143f5b298 + 0xe0) + 0x284)
            zmm0_1.d = zmm6.q.d f* 0.0166666675f
            truncf(zmm0_1.d)
            zmm0_1.d = zmm0_1.d f* 60f
            zmm6.d = zmm6.d f- zmm0_1.d
            zmm0_1 = zmm6.q
            truncf(zmm0_1.d)
            zmm6.d = zmm6.d f- zmm0_1.d
            zmm6.d = zmm6.d f* 1000f
            zmm0_1 = zmm6.q
            truncf(zmm0_1.d)
    
    int64_t rbp_1 = 0
    int64_t i = 0
    int32_t r13_1 = *((*(**(arg3 + 0x58) + 0x18))(zmm0_1, &performanceCount, temp0_1) + 4)
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int128_t zmm9
    int128_t var_68_1 = zmm9
    
    do
        zmm1 = zx.o(*(arg1[3] i+ rbp_1))
        
        if (not(zmm1[0] <= 0.0) && not(zmm1[0] f> zmm7.q)
                && not(zmm1[0] < zmm7.q + -0x4010cccccccccccd))
            zmm9.d = (*(arg1[1] i+ i)).d f* 1000f
            zmm8.d = zmm9.d f* 0.25f
            int128_t zmm0_2 = sub_142218a30()
            uint128_t zmm0_3 = sub_142218a10()
            int32_t* rax_13
            
            if (zmm8.d f<= zmm0_2.d)
                rax_13 = &data_14399f63c
                
                if (zmm8.d f> zmm0_3.d)
                    rax_13 = &data_14399f644
            else
                rax_13 = &data_14399f638
            
            arg5 = *rax_13
            zmm1 = zx.o(0)
            zmm0_3.q = zmm7.q f- *(arg1[3] i+ rbp_1)
            zmm0_3.q = zmm0_3.q f* -0x4031861861861862
            zmm1[0].d = fconvert.s(zmm0_3.q)
            zmm0_3 = _mm_cvtepi32_ps(zx.o(r13_1 - r14))
            zmm1[0].d = zmm1[0].d f* zmm0_3.d
            int32_t rbx_2 = r14 - int.d(zmm1[0].d)
            int16_t* var_d8
            sub_140a2e390(&var_d8, u"%5d", zx.q(int.d(zmm9.d)))
            void var_c8
            sub_140acc920(&var_c8, &arg5)
            int16_t* r9 = &data_142d40450
            int32_t var_d0
            
            if (var_d0 != 0)
                r9 = var_d8
            
            void* rcx_13 = *(data_143f5b298 + 0x50)
            float temp0_4[0x4] = _mm_cvtepi32_ps(zx.o(rbx_2))
            zmm7 = sub_142409910(arg3, _mm_cvtepi32_ps(zx.o(arg4)), temp0_4, r9, rcx_13, &var_c8, 
                &data_14399f5e0)
            int16_t* rcx_15 = var_d8
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
        
        i += 4
        rbp_1 += 8
    while (i s< 0x50)

*arg1 = zmm7.q
return zx.q(r14)
