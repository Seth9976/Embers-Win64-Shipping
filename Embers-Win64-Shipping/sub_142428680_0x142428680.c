// 函数: sub_142428680
// 地址: 0x142428680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
*arg1 = &data_14334b860
arg1[4].d = 0xffffffff
*(arg1 + 0x24) = 4
arg1[2] = &data_14334ab28
arg1[3] = &data_14334ab30
__builtin_memset(&arg1[5], 0, 0x24)
int64_t rbp = sx.q(arg1[8].d)
int32_t rax = (rbp + 1).d
arg1[8].d = rax

if (rax s> *(arg1 + 0x44))
    sub_1405c4fe0(&arg1[7])

__builtin_memset(&arg1[7][rbp * 8], 0, 0x40)
arg1[7][7] = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xe] = &data_14399e5d8
*(arg1 + 0x64) = 0
arg1[0xf] = 0
arg1[0xc].d = 0x400
arg1[0xd].d = 0
int64_t rbp_1 = sx.q(arg1[0xb].d)
int32_t rax_5 = (rbp_1 + 2).d
arg1[0xb].d = rax_5

if (rax_5 s> *(arg1 + 0x5c))
    sub_1405c4fe0(&arg1[0xa])

int32_t i_2 = 2
void* rax_9 = (rbp_1 << 6) + 0x18 + arg1[0xa]
int32_t i

do
    *(rax_9 - 0x10) = 0
    *(rax_9 - 8) = 0
    __builtin_memset(rax_9, 0, 0x18)
    rax_9 += 0x40
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t i_1 = 0
int64_t rdx_3 = 0

do
    int64_t rax_10 = arg1[0xa]
    rdx_3 += 0x40
    *(rdx_3 + rax_10 - 6) = i_1.w
    *(rdx_3 + rax_10 - 8) = i_1.w
    i_1 += 1
    *(rdx_3 + rax_10 - 0xc) = 0
while (i_1 s< 2)

void* rcx_2 = &arg1[3]

if (arg1 == -0x10)
    rcx_2 = nullptr

sub_141997e80(rcx_2)
return arg1
