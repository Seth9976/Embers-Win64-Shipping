// 函数: sub_142ae8040
// 地址: 0x142ae8040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = arg2
*arg1 = &icu_64::CharacterIterator::`vftable'{for `icu_64::ForwardCharacterIterator'}
*(arg1 + 0xc) = 0
*(arg1 + 0x14) = arg2

if (arg2 s< 0)
    *(arg1 + 0x14) = 0
    arg1[1].d = 0

return arg1
