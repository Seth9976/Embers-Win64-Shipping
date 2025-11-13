// 函数: sub_140f9fa80
// 地址: 0x140f9fa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg2 == 0 && (*(arg1 + 0x490) != arg2 || *(arg1 + 0x410) != arg2))
    rax.b = 0
    return rax

if (*(arg1 + 0x491) != 0 && *(arg1 + 0x502) == 0)
    rax.b = 0
    return rax

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int128_t zmm6
zmm6.q = float.d(performanceCount)
zmm6.q = zmm6.q f* data_143d796f8

if (*(arg1 + 0x491) == 0 || *(arg1 + 0x502) != 0)
    zmm6 = sub_140fc3530(arg1)

QueryPerformanceCounter(&performanceCount)

if (not(float.d(performanceCount) f* data_143d796f8 f- zmm6.q f<= 0.10000000000000001))
    *(arg1 + 0x410) = 1

int64_t rax_1
rax_1.b = 1
return rax_1
