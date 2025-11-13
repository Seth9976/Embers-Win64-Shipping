// 函数: sub_1426623c0
// 地址: 0x1426623c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd15d0(arg1)

if (sub_140cdd6a0(arg1) s< 0x1ad && *(arg1 + 0x2ac) == 3)
    *(arg1 + 0x2ac) = ((arg1[0x55].d u>> 5).b & 1) * 2

char rax_3 = sub_142669020(arg1)
*(arg1 + 0x59) &= 0xfe
*(arg1 + 0x59) |= rax_3
return sub_142666dd0(arg1) __tailcall
