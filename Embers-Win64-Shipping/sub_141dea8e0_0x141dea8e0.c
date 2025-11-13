// 函数: sub_141dea8e0
// 地址: 0x141dea8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)

if (*(rsi + arg1[3]) == 0)
    sub_141de5610(arg1, arg3)

int64_t rax_1 = *arg1
int64_t r8_1 = rsi * 6
int128_t zmm1 = *(rax_1 + (r8_1 << 3) + 0x10)
*arg2 = *(rax_1 + (r8_1 << 3))
int128_t zmm0 = *(rax_1 + (r8_1 << 3) + 0x20)
arg2[1] = zmm1
arg2[2] = zmm0
return arg2
