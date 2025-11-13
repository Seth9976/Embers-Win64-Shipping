// 函数: sub_141c483d0
// 地址: 0x141c483d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t zmm1 = float.d(zx.q(performanceCount - arg1[4].d)) f* data_143d796f8
arg1[6] += 1
int64_t result = arg1[6]
int64_t zmm2 = zmm1 f+ arg1[2]
arg1[3] = zmm1 f+ arg1[3]
arg1[2] = zmm2
int64_t zmm0 = float.d(result)

if (result s< 0)
    zmm0 = zmm0 f+ 1.8446744073709552e+19

bool cond:0 = zmm1 f<= arg1[1]
*arg1 = zmm2 f/ zmm0

if (not(cond:0))
    arg1[1] = zmm1

if (not(zmm1 f<= arg1[5]))
    arg1[5] = zmm1

if (data_143f34a04 == 1 && (result.b & 0x1f) == 0)
    result = 0
    arg1[3] = 0
    arg1[5] = 0

return result
