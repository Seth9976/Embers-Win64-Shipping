// 函数: sub_140743c60
// 地址: 0x140743c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg3
void var_68
int64_t* rax = sub_140745220(&var_68, arg2)
arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
*arg1 = &data_142d9aae0
arg1[2].b = 0
sub_140745220(&arg1[4], rax)
int64_t rcx_2 = rax[3]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t i_2 = 4
void* r8 = &arg1[9]
*arg1 = &data_142d9adc8
void* rdx_1 = r8 + 0x68
int64_t i

do
    *r8 = &data_142d4c350
    void* rcx_3 = rdx_1 - 0x10
    *(rdx_1 - 0x60) = 0x404
    r8 += 0xa0
    __builtin_memset(rdx_1 - 0x58, 0, 0x25)
    __builtin_memset(rdx_1 - 0x30, 0, 0x20)
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    *(rdx_1 + 0xc) = 0x80
    void* rax_1 = *rdx_1
    rdx_1 += 0xa0
    
    if (rax_1 != 0)
        rcx_3 = rax_1
    
    *rcx_3 = 0
    *(rcx_3 + 8) = 0
    *(rdx_1 - 0x90) = 0xffffffff
    *(rdx_1 - 0x8c) = 0
    *(rdx_1 - 0x80) = 0
    *(rdx_1 - 0x78) = 0
    *(rdx_1 - 0x70) = 0xea60
    *(rdx_1 - 0x6c) = 1
    i = i_2
    i_2 -= 1
while (i != 1)
arg1[0x59].d = arg4
int32_t i_1 = 0

if (arg4 s> 0)
    void* rbx_1 = arg1 + 0x64
    
    do
        void* rdi_2 = rbx_1 + -0x64 - arg1 + *rsi
        *(rbx_1 - 0x14) = *(rdi_2 + 8)
        *(rbx_1 - 0x13) = *(rdi_2 + 9)
        
        if (rbx_1 - 0xc != rdi_2 + 0x10)
            int64_t rsi_1 = sx.q(*(rdi_2 + 0x18))
            int64_t r12_1 = *(rdi_2 + 0x10)
            int32_t r8_1 = *rbx_1
            *(rbx_1 - 4) = rsi_1.d
            
            if (rsi_1.d != 0 || r8_1 != 0)
                sub_1405c4a90(rbx_1 - 0xc, rsi_1.d, r8_1)
                memcpy(*(rbx_1 - 0xc), r12_1, (rsi_1 << 2).d)
            else
                *rbx_1 = 0
        
        if (rbx_1 + 4 != rdi_2 + 0x20)
            int32_t rsi_2 = *(rdi_2 + 0x28)
            int64_t r12_2 = *(rdi_2 + 0x20)
            int32_t r8_4 = *(rbx_1 + 0x10)
            *(rbx_1 + 0xc) = rsi_2
            
            if (rsi_2 != 0 || r8_4 != 0)
                sub_1405c4b20(rbx_1 + 4, rsi_2, r8_4)
                memcpy(*(rbx_1 + 4), r12_2, rsi_2 * 0x1c)
            else
                *(rbx_1 + 0x10) = 0
        
        *(rbx_1 + 0x14) = *(rdi_2 + 0x30)
        *(rbx_1 + 0x18) = *(rdi_2 + 0x34)
        sub_141f98dc0(rbx_1 + 0x1c)
        i_1 += 1
        rsi = arg3
        *(rbx_1 + 0x7c) = *(rdi_2 + 0x98)
        rbx_1 += 0xa0
    while (i_1 s< arg1[0x59].d)

int64_t rcx_10 = arg2[3]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return arg1
