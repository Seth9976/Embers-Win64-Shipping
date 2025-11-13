// 函数: sub_141fc4af0
// 地址: 0x141fc4af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0x18)
int64_t** rdi = *(arg2 + 8)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int128_t zmm9 = zx.o(0)
int64_t* r13 = **(arg1 + 0x90)
int64_t* result
double zmm0[0x2]

if (rdi != 0)
    if (rbx == 0)
        int64_t* rbp_1 = *rdi
        
        if (arg3[2] != rbx.b)
            int64_t* rcx_8
            
            if (arg3[1] == rbx.b)
                rcx_8 = *(arg2 + 0x10)
            else
                sub_140d3a3a0(&performanceCount, rbp_1)
                rcx_8 = sub_141fb2e20(r13, &performanceCount)
            
            if (rcx_8 != 0 && *(rbp_1 + 0xf1) u> 1 && (rcx_8[6].b & 0x84) == 0)
                (*(*rcx_8 + 0x2d8))()
        
        zmm0 = *(arg3 + 8)
        uint128_t zmm1 = rbp_1[0x21].d
        
        if (not(zmm1.d f< zmm0[0].d))
            zmm0 = _mm_min_ss((*(arg3 + 0xc))[0].d, zmm1.d)
        
        double zmm2 = rdi[3]
        zmm1.q = 0x3ff0000000000000 f/ _mm_cvtps_pd(zmm0[0])[0]
        
        if (not(zmm2 != 0.0))
            zmm2 = _mm_cvtps_pd(*(arg1 + 0x750))
            zmm0 = _mm_cvtpd_ps(zmm1)
            rdi[3] = zmm2
            rdi[4].d = zmm0[0].d
        
        double zmm3 = *(rbp_1 + 0x10c)
        zmm0 = _mm_cvtps_pd((*(arg1 + 0x750))[0])
        zmm0[0] = zmm0[0] - zmm2
        zmm2 = (zx.o(0)).q
        double zmm6[0x2] = _mm_cvtpd_ps(zmm0)
        
        if (not(zmm3.d f!= zmm2.d))
            *(rbp_1 + 0x10c) = 0x40000000
            zmm3 = 0x40000000
        
        bool cond:3_1 = zmm6[0].d f<= 2f
        double zmm8[0x2] = 0x3f800000
        zmm8[0].d = 1f f/ zmm3.d
        int128_t zmm7 = _mm_cvtpd_ps(zmm1)
        zmm8 = _mm_max_ss(zmm8[0].d, zmm7.d)
        
        if (not(cond:3_1))
            zmm6[0].d = zmm6[0].d f- 2f
            zmm6[0].d = zmm6[0].d f* 0.200000003f
            
            if (not(zmm6[0].d f< zmm2.d))
                zmm2 = _mm_min_ss(zmm6[0].d, 0x3f800000)
            
            zmm8[0].d = zmm8[0].d f- zmm7.d
            zmm8[0].d = zmm8[0].d f* zmm2.d
            zmm8[0].d = zmm8[0].d f+ zmm7.d
            rdi[4].d = zmm8[0].d
        
        float zmm4_1[0x2]
        
        if (*arg3 == 0)
            zmm4_1 = zmm1.q
        else
            zmm4_1 = _mm_cvtps_pd(rdi[4].d)
        
        zmm3 = _mm_cvtps_pd(*(arg1 + 0x750)) f- rdi[2]
        
        if (zmm3 >= 0.0)
            zmm3 = _mm_min_sd(zmm3, zmm1.q)
        else
            zmm3 = (zx.o(0)).q
        
        int32_t rax_4 = *(arg1 + 0x6d8) * 0xbb38435 + 0x3619636b
        *(arg1 + 0x6d8) = rax_4
        performanceCount.d = rax_4 u>> 9 | 0x3f800000
        zmm0 = performanceCount.d
        zmm0[0].d = zmm0[0].d f- 1f
        zmm1 = _mm_cvtps_pd((*(arg3 + 0x10)).q)
        zmm2 = _mm_cvtps_pd(zmm0[0])
        zmm0 = _mm_cvtps_pd((*(arg1 + 0x750))[0])
        zmm0[0] = zmm0[0] f+ zmm4_1
        zmm0[0] = zmm0[0] - zmm3
        rdi[2] = (zmm2 - 0.5) f* zmm1.q + zmm0[0]
        sub_141dbba80(rbp_1, arg1)
        uint8_t rax_7
        float zmm6_1
        float zmm7_1
        int32_t zmm8_1
        rax_7, zmm6_1, zmm7_1, zmm8_1, zmm9 = sub_141fac800(arg1, rbp_1, r13)
        
        if (rax_7 != 0 || sub_141fce5b0(arg1, rbp_1).b != 0)
            zmm6_1 = zmm6_1 * 0.699999988f
            
            if (not(zmm6_1 < zmm7_1))
                zmm7_1 = _mm_min_ss(zmm6_1, zmm8_1)
            
            rdi[4].d = zmm7_1
            rdi[3] = (_mm_cvtps_pd((*(arg1 + 0x750))[0])).q
else if (rbx != 0)
    int32_t arg_10 = *sub_140b5e500(&performanceCount, (rdi + 0x66).d)
    int32_t arg_14 = rdi.d
    result = sub_14213fce0(r13, &arg_10, (rdi + 2).d, (rdi - 1).d)
    
    if (result != 0)
        sub_141f9ba40(result, rbx)
        sub_141fc3c20(&r13[0x279], rbx + 0x1c)

if (not(zmm9.q f>= *(arg3 + 0x20)))
    QueryPerformanceCounter(&performanceCount)
    zmm0 = zx.o(0)
    zmm0[0] = float.d(performanceCount)
    zmm0[0] = zmm0[0] f* data_143d796f8
    zmm0[0] = zmm0[0] + 16777216.0
    zmm0[0] = zmm0[0] f- *(arg3 + 0x18)
    
    if (not(zmm0[0] f<= *(arg3 + 0x20)))
        result.b = 0
        return result

result.b = 1
return result
