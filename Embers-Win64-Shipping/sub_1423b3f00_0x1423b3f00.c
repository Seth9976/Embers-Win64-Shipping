// 函数: sub_1423b3f00
// 地址: 0x1423b3f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rdi_1 = sx.q(arg2)

if (rdi_1.d s>= *(arg1 + 0x130))
    return 

int32_t* rdx = *(arg1 + 0x158)
int32_t* r8_1 = rdx
void* rcx = &rdx[sx.q(*(arg1 + 0x160))]

if (rdx != rcx)
    do
        if (*r8_1 == rdi_1.d)
            int32_t r8_3 = ((r8_1 - rdx) s>> 2).d
            
            if (r8_3 != 0xffffffff)
                rdx[sx.q(r8_3)] = 0xffffffff
            
            break
        
        r8_1 = &r8_1[1]
    while (r8_1 != rcx)

if (rdi_1.d s>= *(arg1 + 0x130))
    return 

if (*(arg1 + 0x140) + 1 != *(arg1 + 0x18) << 2)
    int64_t rbp = sx.q(*(arg1 + 0x140))
    int32_t rax_2 = (rbp + 1).d
    *(arg1 + 0x140) = rax_2
    
    if (rax_2 s> *(arg1 + 0x144))
        sub_1405a4cf0(arg1 + 0x138)
    
    *(*(arg1 + 0x138) + (rbp << 2)) = rdi_1.d
    int32_t temp0
    int32_t temp1
    temp0:temp1 = sx.q(rdi_1.d)
    int32_t rdx_3 = temp0 & 3
    int32_t rax_6 = temp1 + rdx_3
    int64_t rcx_8 = sx.q((rax_6 & 3) - rdx_3)
    int64_t rdx_5 = sx.q(rax_6 s>> 2) * 0xf0 + *(arg1 + 0x10)
    *(rdx_5 + (rcx_8 << 2)) = 0
    *(rdx_5 + (rcx_8 << 2) + 0x10) = 0
    *(rdx_5 + (rcx_8 << 2) + 0x20) = 0
    *(rdx_5 + (rcx_8 << 2) + 0x30) = 0
    *(rdx_5 + (rcx_8 << 2) + 0x40) = 0
    *(rdx_5 + (rcx_8 << 2) + 0x50) = 0
    *(rdx_5 + (rcx_8 << 2) + 0x60) = 0
    *(rdx_5 + (rcx_8 << 2) + 0x70) = 0
    *(rdx_5 + (rcx_8 << 2) + 0x80) = 0
    *(rdx_5 + (rcx_8 << 2) + 0x90) = 0
    *(rdx_5 + (rcx_8 << 2) + 0xa0) = 0
    *(rdx_5 + (rcx_8 << 2) + 0xb0) = 0
    *(rdx_5 + (rcx_8 << 2) + 0xc0) = 0
    *(rdx_5 + (rcx_8 << 2) + 0xd0) = 0x7f7fffff
    *(rdx_5 + (rcx_8 << 2) + 0xe0) = 0xff7fffff
    *(*(arg1 + 0x128) + (rdi_1 << 3)) = 0
    return 

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) != 0)
    sub_141cac630(arg1 + 0x10, 0)

*(arg1 + 0x130) = 0

if (*(arg1 + 0x134) != 0)
    sub_1405c5570(arg1 + 0x128, 0)

*(arg1 + 0x140) = 0

if (*(arg1 + 0x144) != 0)
    sub_1405dadb0(arg1 + 0x138, 0)
