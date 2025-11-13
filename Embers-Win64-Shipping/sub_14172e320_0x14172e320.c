// 函数: sub_14172e320
// 地址: 0x14172e320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int128_t zmm6 = *arg3
int128_t zmm7 = arg3[1]
int128_t zmm8 = arg3[2]
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405c4fe0(arg2)

int64_t result = *arg2
int64_t rcx_2 = rdi << 6
*(rcx_2 + result) = arg1.o
*(rcx_2 + result + 0x10) = zmm6
*(rcx_2 + result + 0x20) = zmm7
*(rcx_2 + result + 0x30) = zmm8
return result
