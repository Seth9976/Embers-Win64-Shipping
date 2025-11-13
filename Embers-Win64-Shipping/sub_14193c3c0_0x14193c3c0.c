// 函数: sub_14193c3c0
// 地址: 0x14193c3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 1
void* r11 = arg2 + 2
int64_t i_1 = 8
void* r10 = arg1 + 0x20
int64_t i

do
    int32_t rax_1 = *(r10 - 4)
    char r8
    
    if (rax_1 == 0x8007)
        r8 = 2
    else if (rax_1 == 0x8008)
        r8 = 3
    else if (rax_1 == 0x800a)
        r8 = 1
    else if (rax_1 == 0x800b)
        r8 = 4
    else
        r8 = 0
    
    *(r11 - 2) = r8
    *(r11 - 1) = sub_14194e950(*r10)
    *r11 = sub_14194e950(*(r10 + 4))
    char rdx = 0
    *(arg2 + 0x38) &= r8 == *arg2
    
    if (*(r11 - 1) == *(arg2 + 1))
        rdx = *(arg2 + 0x38)
    
    *(arg2 + 0x38) = rdx
    *(arg2 + 0x38) = *r11 == *(arg2 + 2) & rdx
    int32_t rcx_3 = *(r10 + 0xc)
    
    if (rcx_3 == 0x8007)
        r8 = 2
    else if (rcx_3 == 0x8008)
        r8 = 3
    else if (rcx_3 == 0x800a)
        r8 = 1
    else if (rcx_3 == 0x800b)
        r8 = 4
    else
        r8 = 0
    
    *(r11 + 1) = r8
    *(r11 + 2) = sub_14194e950(*(r10 + 0x10))
    *(r11 + 3) = sub_14194e950(*(r10 + 0x14))
    char rdx_1 = 0
    *(arg2 + 0x38) &= r8 == *(arg2 + 3)
    
    if (*(r11 + 2) == *(arg2 + 4))
        rdx_1 = *(arg2 + 0x38)
    
    *(arg2 + 0x38) = rdx_1
    *(arg2 + 0x38) = *(r11 + 3) == *(arg2 + 5) & rdx_1
    bool rax_13 = *(r10 + 0x18) & 0xf
    *(r11 + 4) = rax_13
    r10 += 0x24
    *(arg2 + 0x38) &= rax_13 == *(arg2 + 6)
    r11 += 7
    i = i_1
    i_1 -= 1
while (i != 1)
return true
