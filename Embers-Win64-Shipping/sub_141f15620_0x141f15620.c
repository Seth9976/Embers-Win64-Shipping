// 函数: sub_141f15620
// 地址: 0x141f15620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x130)
int32_t rax_1
int64_t zmm0

if (rax == 0)
    zmm0 = data_143dbb1f8.q
    rax_1 = data_143dbb200
else
    zmm0 = *(rax + 0x270)
    rax_1 = *(rax + 0x278)

*arg2 = zmm0
arg2[1].d = rax_1
return arg2
