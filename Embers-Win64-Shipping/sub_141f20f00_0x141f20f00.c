// 函数: sub_141f20f00
// 地址: 0x141f20f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = arg1[0x15]

if (rsi == 0)
    rsi = sub_141ee69e0(arg1)

if ((*(arg1 + 0x8a) & 1) != 0)
    int64_t rdx_1 = *arg1
    char rbx_1 = arg1[0x3f].b
    arg1[0x3f].b = rbx_1 & 0xfe
    (*(rdx_1 + 0x528))(arg1, rdx_1)
    uint64_t rax
    rax.b = arg1[0x3f].b ^ rbx_1
    rax.b &= 1
    arg1[0x3f].b ^= rax.b

if (arg1[0x3e] == 0 || rsi == 0)
    return 

sub_141ef4e60(arg1, 1)
arg1[0x59].d = arg2.d
int64_t* arg_8 = arg1
sub_1405a7050(sub_141f12590(rsi, 1) + 0x20, &arg_8)
