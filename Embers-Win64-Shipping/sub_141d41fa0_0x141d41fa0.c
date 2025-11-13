// 函数: sub_141d41fa0
// 地址: 0x141d41fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm6 = 0x4170000000000000
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] f+ zmm6.q
*(arg1 + 0x10) = zmm0.q
zmm0[0] = zmm0[0] f- *(arg1 + 8)
float zmm1 = _mm_cvtpd_ps(zmm0)
zmm0 = *(arg1 + 0x1c)
bool cond:0 = zmm1 f>= zmm0[0].d
*(arg1 + 0x20) = zmm1

if (cond:0)
    int64_t rdi_1 = data_143f37560
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        uint32_t rax_1 = GetCurrentThreadId()
        zmm1 = *(arg1 + 0x20)
        rcx_1.b = rax_1 != data_143de5470
    
    zmm0 = _mm_min_ss((*(rdi_1 + (rcx_1 << 2)))[0].d, zmm1)
else
    zmm0[0].d = zmm0[0].d f- zmm1
    zmm6 = sub_140b73230(zmm0)
    zmm0 = *(arg1 + 0x1c)

*(arg1 + 0x18) = zmm0[0].d
int64_t result = QueryPerformanceCounter(&performanceCount)
zmm0 = zx.o(0)
zmm0[0] = float.d(performanceCount)
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] f+ zmm6.q
*(arg1 + 8) = zmm0.q
return result
