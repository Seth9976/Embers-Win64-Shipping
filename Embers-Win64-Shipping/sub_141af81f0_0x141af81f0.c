// 函数: sub_141af81f0
// 地址: 0x141af81f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a30780(arg1, *(arg3 + 0x60), arg3 + 0x68)
int64_t i_2 = 4
void*** rdx_1 = &arg1[9]
*arg1 = &data_143058a78
void* r8_1 = &rdx_1[0xd]
int64_t i

do
    *rdx_1 = &data_142d4c350
    int64_t* rcx = r8_1 - 0x10
    *(r8_1 - 0x60) = 0x404
    rdx_1 = &rdx_1[0x14]
    __builtin_memset(r8_1 - 0x58, 0, 0x25)
    __builtin_memset(r8_1 - 0x30, 0, 0x20)
    *r8_1 = 0
    *(r8_1 + 8) = 0
    *(r8_1 + 0xc) = 0x80
    int64_t* rax_1 = *r8_1
    r8_1 += 0xa0
    
    if (rax_1 != 0)
        rcx = rax_1
    
    *rcx = 0
    rcx[1] = 0
    *(r8_1 - 0x90) = 0xffffffff
    *(r8_1 - 0x8c) = 0
    *(r8_1 - 0x80) = 0
    *(r8_1 - 0x78) = 0
    *(r8_1 - 0x70) = 0xea60
    *(r8_1 - 0x6c) = 1
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t rcx_1 = *(arg2 + 0x360)
int32_t i_1 = 0
arg1[0x59].d = rcx_1
*(arg1 + 0x2cc) = *(arg2 + 0xc9)

if (rcx_1 s> 0)
    void* rdi_1 = arg2 - arg1
    void* rbx_1 = arg1 + 0x64
    
    do
        *(rbx_1 - 0x14) = *(rdi_1 + rbx_1 + 0x84)
        *(rbx_1 - 0x13) = *(rdi_1 + rbx_1 + 0x85)
        void* rax_6 = rdi_1 + 0x8c + rbx_1
        
        if (rbx_1 - 0xc != rax_6)
            int64_t rsi_1 = sx.q(*(rbx_1 + rdi_1 + 0x94))
            int64_t r12_1 = *rax_6
            int32_t r8_2 = *rbx_1
            *(rbx_1 - 4) = rsi_1.d
            
            if (rsi_1.d != 0 || r8_2 != 0)
                sub_1405c4a90(rbx_1 - 0xc, rsi_1.d, r8_2)
                memcpy(*(rbx_1 - 0xc), r12_1, (rsi_1 << 2).d)
            else
                *rbx_1 = 0
        
        int64_t* rax_8 = rdi_1 + 0x9c + rbx_1
        
        if (rbx_1 + 4 != rax_8)
            int32_t rsi_2 = *(rdi_1 + rbx_1 + 0xa4)
            int64_t r12_2 = *rax_8
            int32_t r8_5 = *(rbx_1 + 0x10)
            *(rbx_1 + 0xc) = rsi_2
            
            if (rsi_2 != 0 || r8_5 != 0)
                sub_1405c4b20(rbx_1 + 4, rsi_2, r8_5)
                memcpy(*(rbx_1 + 4), r12_2, rsi_2 * 0x1c)
            else
                *(rbx_1 + 0x10) = 0
        
        *(rbx_1 + 0x14) = *(rdi_1 + rbx_1 + 0xac)
        *(rbx_1 + 0x18) = *(rdi_1 + rbx_1 + 0xb0)
        sub_141f98dc0(rbx_1 + 0x1c)
        i_1 += 1
        *(rbx_1 + 0x7c) = *(rdi_1 + rbx_1 + 0x114)
        rbx_1 += 0xa0
    while (i_1 s< arg1[0x59].d)

return arg1
