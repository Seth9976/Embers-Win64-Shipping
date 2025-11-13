// 函数: sub_141e129b0
// 地址: 0x141e129b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dde9b0(arg1, arg2)
*arg1 = &data_143243300
arg1[5] = &data_143243648
arg1[6] = &data_143243678
sub_141ddd6c0(&arg1[0x15], 0x3e4ccccd)
sub_141ddd6c0(&arg1[0x1c], 0x3e4ccccd)
arg1[0x23] = 0
__builtin_memset(&arg1[0x25], 0, 0x50)
__builtin_memset(&arg1[0x30], 0, 0x20)
arg1[0x34].d = 0x42700000
*(arg1 + 0x1a4) = 0x3c23d70a
__builtin_memset(&arg1[0x35], 0, 0x1c)
arg1[0x39] = 0
sub_141defc90(&arg1[0x15], 0x3e800000)
sub_141defc90(&arg1[0x1c], 0x3e800000)
*(arg1 + 0x114) = 0xbf800000
*(arg1 + 0x17a) = 1
arg1[0x24].d = 0
arg1[0x1b].d = 0xbf800000
arg1[0x22].d = 0xbf800000
int64_t rdi = sx.q(arg1[0x2c].d)
int64_t rbx = data_143f398e0
int32_t rax = (rdi + 1).d
arg1[0x2c].d = rax

if (rax s> *(arg1 + 0x164))
    sub_1405a4df0(&arg1[0x2b])

int64_t rdx_1 = rdi * 3
int64_t rcx_5 = arg1[0x2b]
*(rcx_5 + (rdx_1 << 3)) = data_143f398e0
*(rcx_5 + (rdx_1 << 3) + 8) = 0
*(rcx_5 + (rdx_1 << 3) + 0x10) = 0
arg1[0x2b][rdx_1] = rbx
arg1[0x39] = data_143f395d0
return arg1
