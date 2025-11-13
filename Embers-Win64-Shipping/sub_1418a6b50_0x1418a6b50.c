// 函数: sub_1418a6b50
// 地址: 0x1418a6b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x48)
int64_t rax = _Query_perf_frequency()
int64_t result = *(arg1 + 0x78)

if (result s> 0)
    int64_t rsi_1 = sx.q(*(arg1 + 0x70))
    int64_t rdi_1 = *(arg1 + 0x80)
    double zmm0_1
    zmm0_1.d = fconvert.s(sub_141831760(rax - result) f+ _mm_cvtps_pd(*(rdi_1 + (rsi_1 << 2))))
    *(rdi_1 + (rsi_1 << 2)) = zmm0_1.d

*(arg1 + 0x70) = arg2
*(arg1 + 0x78) = rax

if (arg1 == -0x48)
    return result

return LeaveCriticalSection(arg1 + 0x48) __tailcall
