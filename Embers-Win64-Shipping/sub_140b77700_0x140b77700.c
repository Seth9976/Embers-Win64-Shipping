// 函数: sub_140b77700
// 地址: 0x140b77700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_140596d10(&arg1[2], &arg2[2])
sub_140596d10(&arg1[6], &arg2[6])
sub_140596d10(&arg1[0xa], &arg2[0xa])
sub_140596d10(&arg1[0xe], &arg2[0xe])
sub_140596d10(&arg1[0x12], &arg2[0x12])
sub_140596d10(&arg1[0x16], &arg2[0x16])
sub_140596d10(&arg1[0x1a], &arg2[0x1a])
sub_140596d10(&arg1[0x1e], &arg2[0x1e])
sub_140596d10(&arg1[0x22], &arg2[0x22])
sub_140596d10(&arg1[0x26], &arg2[0x26])
*(arg1 + 0xa8) = 0
int32_t i_5 = arg2[0x2c]
void* rsi = *(arg2 + 0xa8)
arg1[0x2c] = i_5

if (i_5 != 0)
    sub_1405a4be0(&arg1[0x2a], i_5, 0)
    int64_t* rbx_1 = *(arg1 + 0xa8)
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rdi_1 = *(rsi + 8)
        int64_t r12_1 = *rsi
        rbx_1[1].d = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(rbx_1, rdi_1, 0)
            memcpy(*rbx_1, r12_1, rdi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rsi += 0x10
        i = i_5
        i_5 -= 1
    while (i != 1)
else
    arg1[0x2d] = 0

*(arg1 + 0xb8) = 0
int32_t i_6 = arg2[0x30]
void* rsi_1 = *(arg2 + 0xb8)
arg1[0x30] = i_6

if (i_6 != 0)
    sub_1405a4be0(&arg1[0x2e], i_6, 0)
    int64_t* rbx_2 = *(arg1 + 0xb8)
    int32_t i_1
    
    do
        *rbx_2 = 0
        int32_t rdi_2 = *(rsi_1 + 8)
        int64_t r12_2 = *rsi_1
        rbx_2[1].d = rdi_2
        
        if (rdi_2 != 0)
            sub_1405a4c70(rbx_2, rdi_2, 0)
            memcpy(*rbx_2, r12_2, rdi_2 * 2)
        else
            *(rbx_2 + 0xc) = 0
        
        rbx_2 = &rbx_2[2]
        rsi_1 += 0x10
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)
else
    arg1[0x31] = 0

sub_140596d10(&arg1[0x32], &arg2[0x32])
*(arg1 + 0xd8) = 0
int32_t i_7 = arg2[0x38]
int64_t* rbx_3 = *(arg2 + 0xd8)
arg1[0x38] = i_7

if (i_7 != 0)
    sub_14083a0c0(&arg1[0x36], i_7, 0)
    int64_t* rdi_3 = *(arg1 + 0xd8)
    int32_t i_2
    
    do
        sub_140b77330(rdi_3, rbx_3)
        rdi_3 = &rdi_3[0x14]
        rbx_3 = &rbx_3[0x14]
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)
else
    arg1[0x39] = 0

*(arg1 + 0xe8) = 0
int32_t i_8 = arg2[0x3c]
void* rbx_4 = *(arg2 + 0xe8)
arg1[0x3c] = i_8

if (i_8 != 0)
    sub_140808f70(&arg1[0x3a], i_8, 0)
    void* rdi_4 = *(arg1 + 0xe8)
    int32_t i_3
    
    do
        sub_140596d10(rdi_4, rbx_4)
        int32_t rax_1 = *(rbx_4 + 0x10)
        rbx_4 += 0x18
        *(rdi_4 + 0x10) = rax_1
        rdi_4 += 0x18
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)
else
    arg1[0x3d] = 0

arg1[0x3e].b = arg2[0x3e].b
void* rdx_21 = &arg1[0x46]
*(arg1 + 0xf9) = *(arg2 + 0xf9)
*(arg1 + 0xfa) = *(arg2 + 0xfa)
*(arg1 + 0xfb) = *(arg2 + 0xfb)
arg1[0x3f].b = arg2[0x3f].b
*(arg1 + 0xfd) = *(arg2 + 0xfd)
*(arg1 + 0xfe) = *(arg2 + 0xfe)
*(arg1 + 0xff) = *(arg2 + 0xff)
arg1[0x40].b = arg2[0x40].b
*(arg1 + 0x108) = 0
*(arg1 + 0x110) = 0
*(rdx_21 + 0x10) = 0
*(rdx_21 + 0x18) = 0
*(rdx_21 + 0x1c) = 0x80
void* rax_11 = *(rdx_21 + 0x10)

if (rax_11 != 0)
    rdx_21 = rax_11

*rdx_21 = 0
*(rdx_21 + 8) = 0
arg1[0x4e] = 0xffffffff
arg1[0x4f] = 0
*(arg1 + 0x148) = 0
arg1[0x54] = 0
sub_140b792e0(&arg1[0x42], &arg2[0x42])
*(arg1 + 0x158) = 0
void* rdx_23 = &arg1[0x5a]
*(arg1 + 0x160) = 0
*(rdx_23 + 0x10) = 0
*(rdx_23 + 0x18) = 0
*(rdx_23 + 0x1c) = 0x80
void* rax_12 = *(rdx_23 + 0x10)

if (rax_12 != 0)
    rdx_23 = rax_12

*rdx_23 = 0
*(rdx_23 + 8) = 0
arg1[0x62] = 0xffffffff
arg1[0x63] = 0
*(arg1 + 0x198) = 0
arg1[0x68] = 0
sub_140b792e0(&arg1[0x56], &arg2[0x56])
*(arg1 + 0x1a8) = 0
int32_t i_9 = arg2[0x6c]
int64_t* rdi_5 = *(arg2 + 0x1a8)
arg1[0x6c] = i_9

if (i_9 == 0)
    arg1[0x6d] = 0
    return arg1

sub_140976950(&arg1[0x6a], i_9, 0)
int64_t* rbx_5 = *(arg1 + 0x1a8)
int32_t i_4

do
    sub_140b78080(rbx_5, rdi_5)
    rbx_5 = &rbx_5[0x15]
    rdi_5 = &rdi_5[0x15]
    i_4 = i_9
    i_9 -= 1
while (i_4 != 1)
return arg1
