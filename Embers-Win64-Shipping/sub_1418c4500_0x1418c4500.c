// 函数: sub_1418c4500
// 地址: 0x1418c4500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount = arg2
int64_t r14 = sx.q(arg3)
void* rax = sub_1418c0e20(arg4)

if ((*(rax + 0x78) & 6) != 0)
    *(arg1 + 0x140)

sub_140865c40(arg1 + 0x2e8, &performanceCount, *(rax + 0x18))
int64_t rax_1 = sx.q(performanceCount.d)
void* const rcx_2

if (rax_1.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = *(arg1 + 0x2e8) + rax_1 * 0x18

void* rcx_3 = *(*(arg1 + 0x458) + 0x20)
int64_t rdx_3 = *(*(rcx_3 + 0xc8) + 8)
sub_1418c63e0(rcx_3, *(rdx_3 + (r14 << 2)), zx.d(*(rdx_3 + (r14 << 2) + 2)), rax, *(rcx_2 + 8))
QueryPerformanceCounter(&performanceCount)
int64_t* rax_5 = arg4[9]
double result[0x2] = zx.o(0)
result[0] = float.d(performanceCount)
result[0] = result[0] f* data_143d796f8
result[0] = result[0] + 16777216.0
result = _mm_cvtpd_ps(result)
int64_t temp0_1 = _mm_cvtps_pd(result[0])

if (not(temp0_1 f== *rax_5))
    *rax_5 = temp0_1

return result
