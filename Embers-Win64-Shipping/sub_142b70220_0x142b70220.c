// 函数: sub_142b70220
// 地址: 0x142b70220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax

if (arg3 != 0)
    rax = *(arg3 + 8)
else
    rax = 0

*(arg1 + 0xc) = 0
*arg1 = &icu_64::StringTrieBuilder::IntermediateValueNode::`vftable'{for `icu_64::StringTrieBuilder::ValueNode'}
arg1[3] = arg3
arg1[2].b = 1
*(arg1 + 0x14) = arg2
arg1[1].d = arg2 - 0x4977782e + rax * 0x25
return arg1
