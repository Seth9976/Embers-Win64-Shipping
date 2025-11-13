// 函数: sub_141ac78e0
// 地址: 0x141ac78e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t rbx = sx.q(data_143f2bad0)
int128_t zmm6
zmm6.q = float.d(performanceCount)
int32_t rax = (rbx + 1).d
bool cond:0 = rax s<= data_143f2bad4
zmm6.q = zmm6.q f* data_143d796f8
data_143f2bad0 = rax
zmm6.q = zmm6.q f* 1000.0
zmm6.q = zmm6.q f+ 16777216000.0

if (not(cond:0))
    sub_1405a4f90(&data_143f2bac8)

int64_t result = data_143f2bac8
int64_t rcx_2 = rbx * 2
*(result + (rcx_2 << 3)) = zmm6.q
*(result + (rcx_2 << 3) + 8) = 0
return result
