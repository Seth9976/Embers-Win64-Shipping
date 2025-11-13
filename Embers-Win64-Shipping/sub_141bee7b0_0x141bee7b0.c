// 函数: sub_141bee7b0
// 地址: 0x141bee7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
int32_t rax = arg1[0x21].d
int32_t rdx

if (rax s>= 1)
    rdx = 0x19
    
    if (rax s< 0x19)
        rdx = rax
else
    rdx = 1

int32_t rcx_1
int32_t rdx_1
rcx_1, rdx_1 = sub_140f16490(arg1[0x34], rdx)
int32_t rax_3
rax_3.b = *(arg1 + 0x10d) != 0
return sub_140f15330(arg1[0x34], 
    (sbb.d(rdx_1, rdx_1, *(arg1 + 0x10e) != 0) & 4)
        | (sbb.d(rcx_1, rcx_1, *(arg1 + 0x10c) != 0) & 2) | rax_3) __tailcall
