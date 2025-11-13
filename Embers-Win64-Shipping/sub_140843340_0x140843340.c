// 函数: sub_140843340
// 地址: 0x140843340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ddadd8
sub_140596d10(&arg1[1], arg2 + 8)
sub_140596d10(&arg1[3], arg2 + 0x18)
arg1[5] = *(arg2 + 0x28)
arg1[6] = 0
int32_t i_5 = *(arg2 + 0x38)
void* r14 = *(arg2 + 0x30)
arg1[7].d = i_5

if (i_5 != 0)
    sub_1405a4be0(&arg1[6], i_5, 0)
    int64_t* rbx_1 = arg1[6]
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rbp_1 = *(r14 + 8)
        int64_t r12_1 = *r14
        rbx_1[1].d = rbp_1
        
        if (rbp_1 != 0)
            sub_1405a4c70(rbx_1, rbp_1, 0)
            memcpy(*rbx_1, r12_1, rbp_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        r14 += 0x10
        i = i_5
        i_5 -= 1
    while (i != 1)
else
    *(arg1 + 0x3c) = 0

void* rcx_5 = *(arg2 + 0x40)
arg1[8] = rcx_5

if (rcx_5 != 0)
    sub_140883b30(rcx_5)

arg1[9] = *(arg2 + 0x48)
arg1[0xa] = 0
int32_t i_4 = *(arg2 + 0x58)
void* rbx_2 = *(arg2 + 0x50)
arg1[0xb].d = i_4

if (i_4 != 0)
    sub_1405a4b40(&arg1[0xa], i_4, 0)
    void* rbp_2 = arg1[0xa]
    void* rbx_3 = rbx_2 + 0x10
    int32_t i_1
    
    do
        sub_140596d10(rbp_2, rbx_3 - 0x10)
        sub_140596d10(rbp_2 + 0x10, rbx_3)
        *(rbp_2 + 0x20) = 0
        sub_1408416a0(rbp_2 + 0x20, *(rbx_3 + 0x10), *(rbx_3 + 0x18), 0, 0)
        rbp_2 += 0x30
        rbx_3 += 0x30
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x5c) = 0

*(arg1 + 0x60) = *(arg2 + 0x60)
arg1[0xe] = 0
int32_t i_6 = *(arg2 + 0x78)
void* r14_1 = *(arg2 + 0x70)
arg1[0xf].d = i_6

if (i_6 != 0)
    sub_1405a4be0(&arg1[0xe], i_6, 0)
    int64_t* rbx_4 = arg1[0xe]
    int32_t i_2
    
    do
        *rbx_4 = 0
        int32_t rbp_3 = *(r14_1 + 8)
        int64_t r12_2 = *r14_1
        rbx_4[1].d = rbp_3
        
        if (rbp_3 != 0)
            sub_1405a4c70(rbx_4, rbp_3, 0)
            memcpy(*rbx_4, r12_2, rbp_3 * 2)
        else
            *(rbx_4 + 0xc) = 0
        
        rbx_4 = &rbx_4[2]
        r14_1 += 0x10
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x7c) = 0

arg1[0x10].b = *(arg2 + 0x80)
arg1[0x11] = 0
uint32_t count = *(arg2 + 0x90)
int64_t r14_2 = *(arg2 + 0x88)
arg1[0x12].d = count

if (count != 0)
    sub_1405da9e0(&arg1[0x11], count, 0)
    memcpy(arg1[0x11], r14_2, count)
else
    *(arg1 + 0x94) = 0

*(arg1 + 0x98) = *(arg2 + 0x98)
arg1[0x15] = 0
int32_t i_7 = *(arg2 + 0xb0)
void* r14_3 = *(arg2 + 0xa8)
arg1[0x16].d = i_7

if (i_7 != 0)
    sub_1405a4be0(&arg1[0x15], i_7, 0)
    int64_t* rbx_5 = arg1[0x15]
    int32_t i_3
    
    do
        *rbx_5 = 0
        uint32_t count_1 = *(r14_3 + 8)
        int64_t r12_3 = *r14_3
        rbx_5[1].d = count_1
        
        if (count_1 != 0)
            sub_1405da9e0(rbx_5, count_1, 0)
            memcpy(*rbx_5, r12_3, count_1)
        else
            *(rbx_5 + 0xc) = 0
        
        rbx_5 = &rbx_5[2]
        r14_3 += 0x10
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
else
    *(arg1 + 0xb4) = 0

void* rbx_6 = &arg1[0x17]
*(rbx_6 + 8) = 0
void* rbp_4 = arg2 + 0xb8
int64_t r14_4 = sx.q(*(rbp_4 + 0x10))
void* r15 = *(rbp_4 + 8)
*(rbx_6 + 0x10) = r14_4.d

if (r14_4.d != 0)
    sub_1405e3d70(rbx_6, r14_4.d, 0)
    void* rax_3 = *(rbx_6 + 8)
    
    if (r15 != 0)
        rbp_4 = r15
    
    if (rax_3 != 0)
        rbx_6 = rax_3
    
    memcpy(rbx_6, rbp_4, (r14_4 << 2).d)
else
    *(rbx_6 + 0x14) = 1

arg1[0x1a].d = *(arg2 + 0xd0)
*(arg1 + 0xd4) = *(arg2 + 0xd4)
arg1[0x1b].d ^= (arg1[0x1b].d ^ *(arg2 + 0xd8)) & 1
int32_t rax_9 = arg1[0x1b].d
arg1[0x1b].d = ((*(arg2 + 0xd8) ^ rax_9) & 2) ^ rax_9
*(arg1 + 0xe0) = *(arg2 + 0xe0)
arg1[0x1e].d = *(arg2 + 0xf0)
*(arg1 + 0xf4) = *(arg2 + 0xf4)
arg1[0x21] = 0
void* rdx_19 = *(arg2 + 0x108)

if ((rdx_19.b & 1) != 0)
    rdx_19 = (rdx_19 s>> 1) + arg2 + 0x108

sub_140841790(&arg1[0x21], rdx_19, *(arg2 + 0x110), 0, 0)
*(arg1 + 0x118) = *(arg2 + 0x118)
arg1[0x25].d = *(arg2 + 0x128)
arg1[0x26] = nullptr
void* r14_5 = *(arg2 + 0x130)
int64_t rbp_5 = sx.q(*(arg2 + 0x138))

if ((r14_5.b & 1) != 0)
    r14_5 = (r14_5 s>> 1) + 0x130 + arg2

arg1[0x27].d = rbp_5.d

if (rbp_5.d != 0)
    sub_14085a1c0(&arg1[0x26], rbp_5.d, 0)
    void* rcx_26 = arg1[0x26]
    
    if ((rcx_26.b & 1) != 0)
        rcx_26 = (rcx_26 s>> 1) + &arg1[0x26]
    
    memcpy(rcx_26, r14_5, (rbp_5 * 0x14).d)
else
    *(arg1 + 0x13c) = 0

arg1[0x28] = *(arg2 + 0x140)
arg1[0x29].b = *(arg2 + 0x148)
sub_1405d5180(&arg1[0x2a], arg2 + 0x150)
sub_140596d10(&arg1[0x2c], arg2 + 0x160)
return arg1
