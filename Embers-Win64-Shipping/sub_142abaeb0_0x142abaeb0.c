// 函数: sub_142abaeb0
// 地址: 0x142abaeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 1
arg1[8] = 1
int64_t* rcx = *(arg1 + 0x30)

if (rcx != 0)
    (**rcx)(rcx, 1)

*(arg1 + 0x30) = 0
arg1[0x38] = 1
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = -1
arg1[0x4c] = 1
*(arg1 + 0x50) = 0
__builtin_memset(&arg1[0x54], 0xff, 0x20)
*(arg1 + 0x74) = 1
sub_142a4ab40(&arg1[0x80])
sub_142a4ab40(&arg1[0xc0])
sub_142a4ab40(&arg1[0x100])
sub_142a4ab40(&arg1[0x140])
arg1[0x180] = 1
sub_142a4ab40(&arg1[0x188])
*(arg1 + 0x1c8) = 0
arg1[0x1cc] = 1
*(arg1 + 0x1d4) = 0
*(arg1 + 0x1d8) = 2
sub_142a4ab40(&arg1[0x1e0])
sub_142a4ab40(&arg1[0x220])
sub_142a4ab40(&arg1[0x260])
sub_142a4ab40(&arg1[0x2a0])
*(arg1 + 0x2e0) = 0
arg1[0x2e8] = 1
*(arg1 + 0x2f0) = 0xffffffff
arg1[0x2f4] = 0
return 0
