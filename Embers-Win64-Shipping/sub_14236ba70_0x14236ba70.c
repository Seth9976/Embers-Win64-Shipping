// 函数: sub_14236ba70
// 地址: 0x14236ba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
sub_142361fb0(arg1)
sub_142361f00(arg1)
int32_t rsi = arg1[0xa].d
arg1[0xa].d = rsi + 1

if (rsi + 1 s> *(arg1 + 0x54))
    sub_1406105e0(&arg1[9])

int64_t rdx_1 = arg1[9] + (rbp << 2)
memmove(rdx_1 + 4, rdx_1, (rsi - rbp.d) << 2)
*(arg1[9] + (rbp << 2)) = 0x3f800000
int32_t rbx = arg1[0xc].d
arg1[0xc].d = rbx + 1

if (rbx + 1 s> *(arg1 + 0x64))
    sub_140679a80(&arg1[0xb])

int64_t rdx_4 = arg1[0xb] + rbp
memmove(rdx_4 + 1, rdx_4, rbx - rbp.d)
*(rbp + arg1[0xb]) = 0
return sub_14236b800(arg1, rbp.d) __tailcall
