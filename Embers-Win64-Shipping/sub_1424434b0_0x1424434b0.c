// 函数: sub_1424434b0
// 地址: 0x1424434b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg2
uint64_t result = 0
bool z

if (0 == data_143f5e628)
    data_143f5e628 = 0
    z = true
else
    result = zx.q(data_143f5e628)
    z = false

if (not(z))
    result = EnterCriticalSection(arg1 + 0x30)
    
    if (*(arg1 + 0x6c) != 0)
        int64_t zmm0_1 = ov_time_total(*(arg1 + 0x10), 0xffffffff)
        int64_t rcx_2 = *(arg1 + 0x10)
        arg2 = zx.o(0)
        arg2[0] = fconvert.s(zmm0_1)
        result = ov_time_seek(rcx_2, _mm_cvtps_pd(_mm_min_ss(arg2[0], zmm6[0])[0].q))
    
    if (arg1 != -0x30)
        return LeaveCriticalSection(arg1 + 0x30)

return result
