// 函数: sub_14104bb70
// 地址: 0x14104bb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg2 + 2
void* r8 = arg1 + 0x28
int64_t i_1 = 8
int64_t i

do
    int32_t rax_1 = *(r8 + 8)
    int32_t rax_2
    
    if (rax_1 == 2)
        rax_2.b = 1
    else if (rax_1 == 3)
        rax_2.b = 4
    else if (rax_1 == 4)
        rax_2.b = 2
    else if (rax_1 == 5)
        rax_2.b = 3
    else
        rax_2.b = 0
    
    *(r9 - 2) = rax_2.b
    *(r9 - 1) = sub_14105a3b0(*r8)
    *r9 = sub_14105a3b0(*(r8 + 4))
    int32_t rcx_2 = *(r8 + 0x14)
    char rax_4
    
    if (rcx_2 == 2)
        rax_4 = 1
    else if (rcx_2 == 3)
        rax_4 = 4
    else if (rcx_2 == 4)
        rax_4 = 2
    else if (rcx_2 == 5)
        rax_4 = 3
    else
        rax_4 = 0
    
    *(r9 + 1) = rax_4
    *(r9 + 2) = sub_14105a3b0(*(r8 + 0xc))
    *(r9 + 3) = sub_14105a3b0(*(r8 + 0x10))
    bool rax_7 = *(r8 + 0x1c)
    r8 += 0x28
    *(r9 + 4) = rax_7 & 0xf
    r9 += 7
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg2 + 0x38) = *(arg1 + 0x1c) != i_1.d
return true
