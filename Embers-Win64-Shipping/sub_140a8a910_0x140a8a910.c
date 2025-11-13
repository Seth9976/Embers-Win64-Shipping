// 函数: sub_140a8a910
// 地址: 0x140a8a910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t rbx_1 = performanceCount - arg1[1]
int64_t rdi = arg1[2]
double zmm0 = sub_140a48b40()

if (rbx_1 u<= rdi)
    rdi = rbx_1

int64_t zmm1 = float.d(rdi + *arg1)

if (rdi + *arg1 s< 0)
    zmm1 = zmm1 f+ 1.8446744073709552e+19

return zmm0 f* zmm1
