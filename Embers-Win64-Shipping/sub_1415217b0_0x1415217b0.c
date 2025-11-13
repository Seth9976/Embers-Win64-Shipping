// 函数: sub_1415217b0
// 地址: 0x1415217b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg2[1].d s<= 0)
    return 

int64_t* rbx_1 = nullptr

do
    int64_t rsi_1 = *arg2
    
    if (_finite(_mm_cvtps_pd(*(rbx_1 + rsi_1))) != 0
            && _finite(_mm_cvtps_pd(*(rbx_1 + rsi_1 + 4))) != 0
            && _finite(_mm_cvtps_pd(*(rbx_1 + rsi_1 + 8))) != 0)
        float zmm3[0x2] = *(rbx_1 + rsi_1 + 4)
        double zmm2 = *(rbx_1 + rsi_1)
        float zmm0[0x2] = _mm_cvtps_pd(*(rbx_1 + rsi_1 + 8))
        zmm3 = _mm_cvtps_pd(zmm3)
        float var_28_1[0x2] = zmm0
        sub_141528c70(arg1, i + arg3, _mm_cvtps_pd(zmm2), zmm3)
    
    i += 1
    rbx_1 += 0xc
while (i s< arg2[1].d)
