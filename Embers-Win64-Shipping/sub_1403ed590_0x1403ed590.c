// 函数: sub_1403ed590
// 地址: 0x1403ed590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3

if (arg4 s> arg3)
    arg4 = arg3

int32_t rsi = 0
int64_t i = 0

if (arg4 s<= 0)
    return 

do
    int64_t rax
    float zmm0_1[0x2]
    zmm0_1, rax = sub_1403f1cf0(arg2, arg2 + (sx.q(rsi) << 2), rdi)
    i += 1
    rsi += 1
    rdi -= 1
    *(arg1 + (i << 2) - 4) = fconvert.s(zmm0_1)
while (i s< sx.q(arg4))
