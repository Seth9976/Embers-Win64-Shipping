// 函数: sub_140ce3250
// 地址: 0x140ce3250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    *(arg1 + 0x28) &= 0xfe

*(arg1 + 0x70) = 0x206
*(arg1 + 0x74) = 0
*(arg1 + 0x58) = 0xffffffff
return 0
