// 函数: sub_1421d74f0
// 地址: 0x1421d74f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9880(arg1, arg2)
*arg1 = &data_1432f7720
__builtin_memset(&arg1[6], 0, 0x1d)
arg1[0xa] = 0
arg1[0xb] = data_143dbb1f8.q
arg1[0xc].d = data_143dbb200
*(arg1 + 0x64) = data_143dbb1f8.q
*(arg1 + 0x6c) = data_143dbb200
__builtin_memset(&arg1[0xe], 0, 0x25)
arg1[0x13] = 0
arg1[0x14] = data_143dbb1f8.q
arg1[0x15].d = data_143dbb200
*(arg1 + 0xac) = data_143dbb1f8.q
*(arg1 + 0xb4) = data_143dbb200
__builtin_memset(&arg1[0x17], 0, 0x25)
arg1[0x1c] = 0
arg1[0x1d] = 0
__builtin_memset(&arg1[0x1f], 0, 0x15)
__builtin_memset(&arg1[0x23], 0, 0x1d)
arg1[0x27] = 0
arg1[0x28] = 0
__builtin_memset(&arg1[0x2b], 0, 0x1d)
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x22].d &= 0xfffffffe
arg1[0x22].d |= 2
arg1[5].b |= 3
*(arg1 + 0x29) &= 0xfd
*(arg1 + 0x14c) |= 1
arg1[0x31].d |= 7
arg1[0x1e].b = 0
arg1[0x29].d = 0x40600000
arg1[0x2a].d = 0x3dcccccd
*(arg1 + 0x18c) = 0x447a0000
char rax_4 = sub_141ffdeb0(0)
int64_t rsi = sx.q(arg1[0x20].d)
int32_t rcx = (rsi + 1).d
arg1[0x20].d = rcx

if (rcx s> *(arg1 + 0x104))
    sub_1405daba0(&arg1[0x1f])

*(rsi + arg1[0x1f]) = rax_4
return arg1
