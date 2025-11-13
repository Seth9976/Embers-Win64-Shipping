// 函数: sub_141ac4d00
// 地址: 0x141ac4d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = data_143f393d0
sub_140b34200("AnimDynamicsInit", rbp)
ModQueryFile(arg1, arg2)
sub_141e29640(&arg1[2], arg2)
int64_t rax = *arg1
*(arg1 + 0x41) = 0
*(arg1 + 0x8b) = 0
void* rbx = *arg2
(*(rax + 0x108))(arg1, rbx + 0x4a0)

if (sub_141ea6180(&arg1[0x28], rbx + 0x4a0) != 0)
    char rax_2 = *(arg1 + 0x243)
    
    if (rax_2 u< 2)
        rax_2 = 2
    
    *(arg1 + 0x243) = rax_2

void* rax_3 = *arg2
*(arg1 + 0xd0) = *(rax_3 + 0x10)
*(arg1 + 0xe0) = *(rax_3 + 0x20)
*(arg1 + 0xf0) = *(rax_3 + 0x30)
void* rax_4 = *arg2
*(arg1 + 0x100) = *(rax_4 + 0x70)
*(arg1 + 0x110) = *(rax_4 + 0x80)
*(arg1 + 0x120) = *(rax_4 + 0x90)
arg1[0x70] = 0
return sub_140b38680("AnimDynamicsInit", rbp) __tailcall
