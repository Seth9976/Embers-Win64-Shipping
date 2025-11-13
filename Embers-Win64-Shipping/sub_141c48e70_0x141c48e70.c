// 函数: sub_141c48e70
// 地址: 0x141c48e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int128_t zmm6
zmm6.q = float.d(performanceCount)
uint128_t zmm8 = 0x4170000000000000
zmm6.q = zmm6.q f* data_143d796f8
float zmm7[0x4] = *(arg1 + 0x50)
zmm6.q = zmm6.q f+ zmm8.q

if ((*(arg1 + 0x54) & 1) == 0)
    bool cond:1_1
    
    do
        void* rax_1 = *(arg1 + 0x20)
        void* rcx_1 = arg1 + 0x30
        
        if (rax_1 != 0)
            rcx_1 = rax_1
        
        (*(arg1 + 0x10))((*(*rcx_1 + 8))(rcx_1))
        double zmm6_1 =
            sub_140b73230(_mm_max_ss(zmm7[0], 0)) f+ _mm_cvtps_pd((*(arg1 + 0x50))[0].q)[0].q
        QueryPerformanceCounter(&performanceCount)
        cond:1_1 = (*(arg1 + 0x54) & 1) == 0
        float zmm0[0x4] = zx.o(0)
        zmm0[0].q = float.d(performanceCount)
        zmm0[0].q = zmm0[0].q f* data_143d796f8
        double temp0_3[0x2] = _mm_cvtps_pd((*(arg1 + 0x50))[0])
        zmm0[0].q = zmm0[0].q f+ zmm8.q
        zmm0[0].q = zmm0[0].q f- zmm6_1
        temp0_3[0] = temp0_3[0] f- zmm0[0].q
        zmm7 = _mm_cvtpd_ps(temp0_3)
    while (cond:1_1)

return 0
