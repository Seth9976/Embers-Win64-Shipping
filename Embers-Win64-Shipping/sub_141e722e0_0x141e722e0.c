// 函数: sub_141e722e0
// 地址: 0x141e722e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143f39f50)
LeaveCriticalSection(&data_143f39f50)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
void* rax = *(arg1 + 0x10)
void* rcx_1 = arg1 + 0x20
int128_t zmm6
zmm6.q = float.d(performanceCount)

if (rax != 0)
    rcx_1 = rax

zmm6.q = zmm6.q f* data_143d796f8
(*arg1)((*(*rcx_1 + 8))(rcx_1))
int64_t result = QueryPerformanceCounter(&performanceCount)
int128_t zmm7
zmm7.q = float.d(performanceCount)
zmm7.q = zmm7.q f* data_143d796f8
zmm7.q = zmm7.q f- zmm6.q
zmm7.q = zmm7.q f* 1000.0

if (zmm7.q f<= data_143f39fc8)
    return result

EnterCriticalSection(&data_143f39f50)
data_143f39fc8 = zmm7.q
return LeaveCriticalSection(&data_143f39f50)
