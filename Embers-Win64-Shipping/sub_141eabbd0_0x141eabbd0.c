// 函数: sub_141eabbd0
// 地址: 0x141eabbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142220730(arg1)
arg1[0x66].d &= 0xfffffffb
arg1[0x69].d = 0
(*(*arg1 + 0x7a8))(arg1)
int64_t rdx
rdx.b = 1
int64_t result = (*(*arg1 + 0x808))(arg1, rdx)
int64_t* rcx_2 = arg1[0x51]

if (rcx_2 == 0)
    return result

jump(*(*rcx_2 + 0x7d0))
