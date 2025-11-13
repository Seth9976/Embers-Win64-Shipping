// 函数: sub_1423e9f90
// 地址: 0x1423e9f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
char rax = sub_140b21a10(&data_143dbb3f0, u"nosound")

if (rax != 0 || data_143dbb3b5 != rax)
    *(arg1 + 0x980) &= 0xfffffffe
else if (data_143de5426 != rax && data_143de5428 == rax)
    *(arg1 + 0x980) &= 0xfffffffe

sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"enablesound") != 0)
    *(arg1 + 0x980) |= 1

sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"noailogging") != 0)
    *(arg1 + 0x978) |= 8

sub_140af2b60()
char result = sub_140b21a10(&data_143dbb3f0, u"enableailogging")

if (result != 0)
    *(arg1 + 0x978) &= 0xfffffff7

return result
