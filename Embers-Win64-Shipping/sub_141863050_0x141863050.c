// 函数: sub_141863050
// 地址: 0x141863050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)
sub_140596d10(&arg1[2], &arg2[2])
arg1[4] = 0
void* r8 = &arg1[6]
arg1[5] = 0
*(r8 + 0x10) = 0
*(r8 + 0x18) = 0
*(r8 + 0x1c) = 0x80
void* rax = *(r8 + 0x10)

if (rax != 0)
    r8 = rax

*r8 = 0
*(r8 + 8) = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
sub_1418235f0(&arg1[4], &arg2[4])
arg1[0xe] = 0
arg1[0xf] = 0
void* rdx_2 = &arg1[0x10]
*(rdx_2 + 0x1c) = 0x80
void* rax_1 = *(rdx_2 + 0x10)

if (rax_1 != 0)
    rdx_2 = rax_1

__builtin_memset(rdx_2, 0, 0x1c)
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
sub_1418235f0(&arg1[0xe], &arg2[0xe])
arg1[0x18] = 0
int32_t i_1 = arg2[0x19].d
int64_t* rsi = arg2[0x18]
arg1[0x19].d = i_1

if (i_1 != 0)
    sub_140808ed0(&arg1[0x18], i_1, 0)
    int64_t* rdi_1 = arg1[0x18]
    void* rbx_1 = &rdi_1[4]
    int32_t i
    
    do
        *rdi_1 = 0
        int64_t* rcx_4 = rbx_1 - 0x10
        *(rbx_1 - 0x18) = 0
        *rbx_1 = 0
        *(rbx_1 + 8) = 0
        *(rbx_1 + 0xc) = 0x80
        int64_t* rax_2 = *rbx_1
        
        if (rax_2 != 0)
            rcx_4 = rax_2
        
        *rcx_4 = 0
        rcx_4[1] = 0
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
    *(arg1 + 0xcc) = 0

sub_140596d10(&arg1[0x1a], &arg2[0x1a])
return arg1
