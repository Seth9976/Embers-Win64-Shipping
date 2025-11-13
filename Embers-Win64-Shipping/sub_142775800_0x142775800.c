// 函数: sub_142775800
// 地址: 0x142775800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
*(arg1 + 0x64) = 0
*(arg1 + 0x6c) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0x84) = 0
memset(arg1, 0, 0x88)
*(arg1 + 8) = 0
sub_140d3a3a0(&arg1[0x70], *(arg2 + 8))

if (sub_140d3e110(&arg1[0x70]) != 0)
    rdi = *(sub_140d3c6e0(arg1 + 0x70) + 0xa0)

sub_140d3a3a0(&arg1[0x68], rdi)
*arg1 |= 1
int32_t rax_2 = *(arg2 + 0x24)
*(arg1 + 0x28) = *(arg2 + 0x1c)
*(arg1 + 0x30) = rax_2
int32_t rax_3 = *(arg2 + 0x24)
*(arg1 + 0x34) = *(arg2 + 0x1c)
*(arg1 + 0x3c) = rax_3
int32_t rax_4 = *(arg2 + 0x18)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x18) = rax_4
int32_t rax_5 = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x10)
*(arg1 + 0x24) = rax_5
return arg1
