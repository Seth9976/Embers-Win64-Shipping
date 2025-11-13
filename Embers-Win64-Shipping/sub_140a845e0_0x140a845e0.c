// 函数: sub_140a845e0
// 地址: 0x140a845e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x18)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t rdi_1 = performanceCount - *(arg1 + 0xf8)
int64_t rsi = *(arg1 + 0x100)
double zmm0 = sub_140a48b40()

if (rdi_1 u<= rsi)
    rsi = rdi_1

int64_t zmm1 = float.d(rsi + *(arg1 + 0xf0))

if (rsi + *(arg1 + 0xf0) s< 0)
    zmm1 = zmm1 f+ 1.8446744073709552e+19

bool cond:2 = data_14399eaa4 == 0
int64_t result = *(arg1 + 0xd0)
*(arg1 + 0xa8) = result
*(arg1 + 0x90) = zmm0 f* zmm1

if (not(cond:2))
    *(arg1 + 0xa0) -= 1
    data_14399eaa4 = 0

if (arg1 == -0x18)
    return result

return LeaveCriticalSection(arg1 + 0x18)
