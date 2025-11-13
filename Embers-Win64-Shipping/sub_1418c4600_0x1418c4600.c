// 函数: sub_1418c4600
// 地址: 0x1418c4600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)
void* rax = sub_1418c0e20(arg4)

if ((*(rax + 0x78) & 6) != 0)
    *(arg1 + 0x140)

int32_t performanceCount
sub_140865c40(arg1 + 0x2e8, &performanceCount, *(rax + 0x18))
int64_t performanceCount_1 = sx.q(performanceCount)
void* const rcx_2

if (performanceCount_1.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = *(arg1 + 0x2e8) + performanceCount_1 * 0x18

uint32_t rcx_3 = zx.d(*(arg2 + 0x2c))
int64_t rdx_2

if (rcx_3 == 0)
    rdx_2 = 0x28
else if (rcx_3 == 1)
    rdx_2 = 0x40
else if (rcx_3 == 2)
    rdx_2 = 0x48
else if (rcx_3 == 3)
    rdx_2 = 0x30
else if (rcx_3 == 4)
    rdx_2 = 0x38
else
    rdx_2 = 0x20

void* rcx_7 = *(*(arg1 + 0x450) + 0x48)
int64_t rdx_3 = *(*(rcx_7 + 0xc8) + rdx_2)
sub_1418c63e0(rcx_7, *(rdx_3 + (r15 << 2)), zx.d(*(rdx_3 + (r15 << 2) + 2)), rax, *(rcx_2 + 8))
QueryPerformanceCounter(&performanceCount)
int64_t* rax_4 = arg4[9]
double result[0x2] = zx.o(0)
result[0] = float.d(performanceCount.q)
result[0] = result[0] f* data_143d796f8
result[0] = result[0] + 16777216.0
result = _mm_cvtpd_ps(result)
int64_t zmm1 = _mm_cvtps_pd(result[0]).q

if (not(zmm1 f== *rax_4))
    *rax_4 = zmm1

return result
