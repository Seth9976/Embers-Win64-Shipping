// 函数: sub_141c4f020
// 地址: 0x141c4f020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14234f680(arg1)
*arg1 = &data_143209bf0
arg1[0xe] = 0
arg1[0xf].b = 0
sub_141c30d00(arg1 + 0x7c)
InitializeCriticalSection(&arg1[0x16])
SetCriticalSectionSpinCount(&arg1[0x16], 0xfa0)
arg1[0x1b].b = 0
*(arg1 + 0xdc) = 0x3f800000
InitializeCriticalSection(&arg1[0x1d])
SetCriticalSectionSpinCount(&arg1[0x1d], 0xfa0)
void* rcx_5 = &arg1[0x28]
arg1[0x23] = 0
arg1[0x22].d = 0xbf800000
*(arg1 + 0x114) = 0xbf800000
arg1[0x24] = 0
arg1[0x25] = &data_142d6a040
arg1[0x26] = 0
arg1[0x27] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax = *(rcx_5 + 0x10)

if (rax != 0)
    rcx_5 = rax

*rcx_5 = 0
*(rcx_5 + 8) = 0
*(arg1 + 0x164) = 0
arg1[0x2c].d = 0xffffffff
arg1[0x2e] = 0
arg1[0x2f].d = 0
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x32].d = 0x7f7fffff
*(arg1 + 0x194) = 0x404
arg1[0x25] = &data_142da7f70
arg1[0x33] = 0
arg1[0x34] = 0
return arg1
