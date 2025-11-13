// 函数: sub_141c81de0
// 地址: 0x141c81de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14320f690
arg1[1] = 0
void* r10 = &arg1[3]
arg1[2] = 0
*(r10 + 0x1c) = 0x80
void* rax = *(r10 + 0x10)

if (rax != 0)
    r10 = rax

__builtin_memset(r10, 0, 0x1c)
arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
arg1[9] = 0
arg1[0xa].d = 0
sub_140747450(&arg1[1], arg4)
arg1[0xb] = *arg5
void* rax_2 = arg5[1]
arg1[0xc] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[0xd] = *arg11
arg1[0xe] = arg2
__builtin_memset(&arg1[0xf], 0, 0x18)
int64_t rsi = sx.q(arg7[1].d)
int64_t rbp = *arg7
arg1[0x12].d = rsi.d

if (rsi.d != 0)
    sub_1405a4be0(&arg1[0x11], rsi.d, 0)
    memcpy(arg1[0x11], rbp, (rsi << 4).d)
else
    *(arg1 + 0x94) = 0

arg1[0x13].b = arg8
*(arg1 + 0x9c) = arg9
arg1[0x16].d = arg12
*(arg1 + 0xa0) = *arg6
arg1[0x17] = *arg10
sub_140d3a3a0(&arg1[0x18], arg3)
return arg1
