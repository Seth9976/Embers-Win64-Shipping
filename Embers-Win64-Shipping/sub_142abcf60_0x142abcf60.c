// 函数: sub_142abcf60
// 地址: 0x142abcf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1 + 0x134
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
char* r14_1 = arg2 - arg1
*(arg1 + 0x18) = *(arg2 + 0x18)
int64_t i_1 = 6
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xc8) = *(arg2 + 0xc8)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xd8) = *(arg2 + 0xd8)
*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xf0) = *(arg2 + 0xf0)
*(arg1 + 0xf8) = *(arg2 + 0xf8)
*(arg1 + 0x108) = *(arg2 + 0x108)
*(arg1 + 0x110) = *(arg2 + 0x110)
*(arg1 + 0x118) = *(arg2 + 0x118)
int64_t i

do
    if (*rbx != 0)
        sub_142a7dcd0(*(rbx - 0xc))
    
    *(rbx - 4) = *(r14_1 + rbx - 4)
    *rbx = *(r14_1 + rbx)
    int64_t rcx_1 = *(rbx + r14_1 - 0xc)
    void* rax_30 = &r14_1[4] + rbx
    
    if (rcx_1 != rax_30)
        *(rbx - 0xc) = rcx_1
        *(rbx + r14_1 - 0xc) = rax_30
        *(r14_1 + rbx - 4) = 3
        *(r14_1 + rbx) = 0
    else
        *(rbx - 0xc) = &rbx[4]
        memcpy(&rbx[4], rax_30, *(r14_1 + rbx - 4) << 3)
    
    *(rbx + 0x1c) = *(rbx + r14_1 + 0x1c)
    
    if (rbx[0x30] != 0)
        sub_142a7dcd0(*(rbx + 0x24))
    
    *(rbx + 0x2c) = *(rbx + r14_1 + 0x2c)
    rbx[0x30] = *(rbx + r14_1 + 0x30)
    int64_t rcx_4 = *(rbx + r14_1 + 0x24)
    void* rax_35 = &r14_1[0x32] + rbx
    
    if (rcx_4 != rax_35)
        *(rbx + 0x24) = rcx_4
        *(rbx + r14_1 + 0x24) = rax_35
        *(rbx + r14_1 + 0x2c) = 4
        *(rbx + r14_1 + 0x30) = 0
    else
        *(rbx + 0x24) = &rbx[0x32]
        memcpy(&rbx[0x32], rax_35, *(rbx + r14_1 + 0x2c) * 2)
    
    rbx = &rbx[0x50]
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x300) = *(arg2 + 0x300)
return arg1
