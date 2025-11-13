// 函数: sub_1419d5ce0
// 地址: 0x1419d5ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = data_143f202c8
int64_t rdx
int64_t rbx

if (data_143de5480 == 0)
    rbx = 0
    rdx = 0
else
    rbx = 0
    rdx.b = GetCurrentThreadId() != data_143de5470

int32_t rsi = *(rdi + (rdx << 2))
int32_t rax_2 = sub_141978660()
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] + 16777216.0
zmm0[0] = zmm0[0] f- *(arg1 + 0x180)
float temp0[0x4] = _mm_cvtpd_ps(zmm0)
BOOL result

if (rsi == 0)
    result.b = 0
else if (rax_2 u>= rsi)
    result.b = 1
else if (rax_2 == 0)
    result.b = 0
else
    int64_t rdi_2 = data_143f202e0
    
    if (data_143de5480 != 0)
        rbx.b = GetCurrentThreadId() != data_143de5470
    
    zmm0 = _mm_cvtepi32_ps(zx.o(*(rdi_2 + (rbx << 2))))
    
    if (temp0[0] f< zmm0[0].d)
        result.b = 0
    else
        result.b = 1

return result
