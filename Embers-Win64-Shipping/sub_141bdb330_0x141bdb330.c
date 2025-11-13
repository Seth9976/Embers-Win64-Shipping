// 函数: sub_141bdb330
// 地址: 0x141bdb330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= arg1[0x22].d)
    int64_t rax
    rax.b = 0
    return rax

int64_t r10 = sx.q(arg2) << 3
int64_t* rsi = *(r10 + arg1[0x21])
void* rax_3 = rsi[6]

if (rax_3 != 0)
    *(rax_3 + 0x28) = 0

int32_t rcx = arg1[0x22].d
int32_t rax_5 = rcx - arg2

if (rax_5 != 1)
    int64_t r9_1 = arg1[0x21]
    memmove(r9_1 + r10, r9_1 + (sx.q(arg2 + 1) << 3), (rax_5 - 1) << 3)
    rcx = arg1[0x22].d

arg1[0x22].d = rcx - 1
sub_1405c53d0(&arg1[0x21])
(*(*arg1 + 0x2d8))(arg1, rsi)
int64_t rdx_3
rdx_3.b = 1
(*(*rsi + 0x260))(rsi, rdx_3)
rsi[5] = 0
rsi[6] = 0
sub_141bb7f50(arg1)
int64_t* rax_11
rax_11.b = 1
return rax_11
