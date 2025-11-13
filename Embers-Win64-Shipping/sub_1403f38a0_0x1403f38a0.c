// 函数: sub_1403f38a0
// 地址: 0x1403f38a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

int64_t i = 0
int64_t rdi_1 = arg1 + (sx.q(arg4 - 1) << 2)

do
    int64_t rax
    float zmm0_1[0x2]
    zmm0_1, rax = sub_1403f1cf0(rdi_1, arg2, arg3)
    i += 1
    rdi_1 -= 4
    *(arg5 + (i << 2) - 4) = fconvert.s(zmm0_1)
while (i s< sx.q(arg4))
