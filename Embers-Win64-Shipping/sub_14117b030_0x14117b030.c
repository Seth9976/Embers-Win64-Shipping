// 函数: sub_14117b030
// 地址: 0x14117b030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
*arg1 = rax

if (rax != 0)
    *(rax + 8) += 1

void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void* rax_2 = arg2[2]
arg1[2] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[4] = 0
void* r15 = &arg1[3]
int32_t i_3 = arg2[5].d
void* rbx = &arg2[3]
void* rbp = *(rbx + 8)
*(r15 + 0x10) = i_3

if (i_3 != 0)
    sub_14119a5f0(r15, i_3, 0)
    void* rax_3 = *(r15 + 8)
    
    if (rbp != 0)
        rbx = rbp
    
    if (rax_3 != 0)
        r15 = rax_3
    
    void* r15_1 = r15 - rbx
    int32_t i
    
    do
        void* rax_4 = *rbx
        *(r15_1 + rbx) = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        rbx += 8
        i = i_3
        i_3 -= 1
    while (i != 1)
else
    *(r15 + 0x14) = 1

arg1[9] = 0
void* rbx_1 = &arg1[6]
int32_t i_2 = arg2[0xa].d
void* rdi = &arg2[6]
void* r15_2 = *(rdi + 0x18)
*(rbx_1 + 0x20) = i_2

if (i_2 != 0)
    sub_14119a440(rbx_1, i_2, 0)
    void* rax_5 = *(rbx_1 + 0x18)
    
    if (r15_2 != 0)
        rdi = r15_2
    
    if (rax_5 != 0)
        rbx_1 = rax_5
    
    int64_t rcx_3 = rdi - rbx_1
    int32_t i_1
    
    do
        *rbx_1 = *rdi
        void* rax_6 = *(rcx_3 + rbx_1 + 0x10)
        *(rbx_1 + 0x10) = rax_6
        
        if (rax_6 != 0)
            *(rax_6 + 8) += 1
        
        rdi += 0x18
        rbx_1 += 0x18
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
else
    *(rbx_1 + 0x24) = 1

void* rax_7 = arg2[0xb]
arg1[0xb] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

void* rax_8 = arg2[0xc]
arg1[0xc] = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

void* rax_9 = arg2[0xd]
arg1[0xd] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

void* rax_10 = arg2[0xe]
arg1[0xe] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

return arg1
