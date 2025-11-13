// 函数: sub_14222caa0
// 地址: 0x14222caa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422499d0(arg1 + 0x28)
sub_14222c510(arg1 + 0x28, arg2 + 0x28)
int32_t i = 0

if (*(arg1 + 0x60) s> 0)
    int64_t rcx_2 = 0
    
    do
        int64_t rax_1 = *(arg1 + 0x58)
        rcx_2 += 0xb0
        i += 1
        *(rcx_2 + rax_1 - 0x10) = 0
        *(rcx_2 + rax_1 - 8) = 0
    while (i s< *(arg1 + 0x60))

j_sub_14220baf0(arg1 + 0x120, arg2 + 0x120)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x89) ^= (*(arg2 + 0x89) ^ *(arg1 + 0x89)) & 8
char result = *(arg2 + 0x8c)
*(arg1 + 0x8c) = result
return result
