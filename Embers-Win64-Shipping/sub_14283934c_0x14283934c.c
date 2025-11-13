// 函数: sub_14283934c
// 地址: 0x14283934c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7
uint128_t var_18 = zmm7
void* rcx = *(arg1 + 8)
int128_t zmm8
int128_t var_28 = zmm8
int128_t zmm9
int128_t var_38 = zmm9
int32_t rdx = *(*(rcx + 0x18) + 0x1c8)

if (rdx u> *(arg1 + 0xdac))
    *(arg1 + 0xdb0) = rdx
else if (rcx == 0 || *(rcx + 0x126) s< 0x40)
    if (*(arg1 + 0xe84) == 1 && not((*(arg1 + 0xe88)).d f<= 0f))
        zmm8.d = (*(arg1 + 0xf48)).d f* *(arg1 + 0xf34)
        zmm8 ^= data_142d3f780
        double zmm0
        zmm0.d = zmm8.q.d f/ -200f
        int64_t zmm2
        zmm2.d = fconvert.s(pow(10.0, fconvert.d(zmm0.d)) f* _mm_cvtps_pd(*(arg1 + 0xe88)))
        zmm7.q = log(_mm_cvtps_pd(zmm2)).q f* -200.0
        zmm7.q = zmm7.q f/ log(0x4024000000000000).q
        uint128_t zmm0_3 = 0x3ff0000000000000
        zmm7.q = zmm7.q f- fconvert.d(zmm8.d)
        zmm7.q = zmm7.q f/ 960.0
        zmm7.q = zmm7.q f- zmm0_3.q
        int64_t zmm1
        zmm1.d = fconvert.s((zmm7 ^ data_142d8e3c0).q)
        
        if (not(0f f<= zmm1.d))
            zmm0_3 = zx.o(0)
        else if (not(zmm1.d f> 1f))
            zmm0_3 = _mm_cvtps_pd(zmm1)
        
        *(arg1 + 0xe88) = _mm_cvtpd_ps(zmm0_3).d
    
    *(arg1 + 0xe80) = 0
    *(arg1 + 0xf20) = 0
    *(arg1 + 0xe84) = 5
    *(arg1 + 0xf24) = 5
else
    *(arg1 + 4) = 2

return 0
