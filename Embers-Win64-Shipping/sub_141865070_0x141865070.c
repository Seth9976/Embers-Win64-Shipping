// 函数: sub_141865070
// 地址: 0x141865070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_140596d10(&arg1[2], &arg2[2])
sub_140596d10(&arg1[6], &arg2[6])
*(arg1 + 0x28) = 0
int32_t i_1 = arg2[0xc]
int64_t* rsi = *(arg2 + 0x28)
arg1[0xc] = i_1

if (i_1 != 0)
    sub_140808ed0(&arg1[0xa], i_1, 0)
    int64_t* rdi_1 = *(arg1 + 0x28)
    void* rbx_1 = &rdi_1[4]
    int32_t i
    
    do
        *rdi_1 = 0
        int64_t* rcx_3 = rbx_1 - 0x10
        *(rbx_1 - 0x18) = 0
        *rbx_1 = 0
        *(rbx_1 + 8) = 0
        *(rbx_1 + 0xc) = 0x80
        int64_t* rax_1 = *rbx_1
        
        if (rax_1 != 0)
            rcx_3 = rax_1
        
        *rcx_3 = 0
        rcx_3[1] = 0
        *(rbx_1 + 0x10) = 0xffffffff
        *(rbx_1 + 0x14) = 0
        *(rbx_1 + 0x20) = 0
        *(rbx_1 + 0x28) = 0
        sub_1418235f0(rdi_1, rsi)
        rdi_1 = &rdi_1[0xa]
        rbx_1 += 0x50
        rsi = &rsi[0xa]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    __builtin_memset(&arg1[0xd], 0, 0x14)

void* rdx_4 = &arg1[0x12]
*(rdx_4 + 0x1c) = 0x80
void* rax_2 = *(rdx_4 + 0x10)

if (rax_2 != 0)
    rdx_4 = rax_2

__builtin_memset(rdx_4, 0, 0x1c)
arg1[0x1a] = 0xffffffff
arg1[0x1b] = 0
*(arg1 + 0x78) = 0
arg1[0x20] = 0
sub_1418235f0(&arg1[0xe], &arg2[0xe])
sub_140596d10(&arg1[0x22], &arg2[0x22])
sub_140596d10(&arg1[0x26], &arg2[0x26])
*(arg1 + 0xa8) = *(arg2 + 0xa8)
sub_140596d10(&arg1[0x2c], &arg2[0x2c])
return arg1
