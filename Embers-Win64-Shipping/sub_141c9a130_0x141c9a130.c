// 函数: sub_141c9a130
// 地址: 0x141c9a130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg3
arg2.q f- 0.0
uint128_t zmm7
uint128_t var_28 = zmm7
int64_t rsi
rsi.b = arg2.q f< 0.0
BOOL i

for (i = arg3[4] - r8; i s> 0; i = arg3[4] - r8)
    *arg3 = r8 + 1
    int16_t** rax_4 = (sx.q(r8) << 4) + *(arg3 + 8)
    int16_t* rdx_1
    
    if (rax_4[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *rax_4
    
    double zmm6_1
    zmm6_1, zmm7 = sub_140d23fd0(nullptr, rdx_1, 0, nullptr, 0)
    
    if (rsi.b == 0)
        int64_t performanceCount
        i = QueryPerformanceCounter(&performanceCount)
        double zmm1 = float.d(performanceCount)
        float zmm0_1[0x2] = _mm_cvtps_pd(*(arg1 + 0x558))
        
        if (zmm1 f* data_143d796f8 f+ zmm7.q - zmm6_1 f> zmm0_1)
            return i
    
    r8 = *arg3

if (r8 s> 0)
    i = sub_1406a4a20(&arg3[2], 0, r8, 1)
    *arg3 = 0

return i
