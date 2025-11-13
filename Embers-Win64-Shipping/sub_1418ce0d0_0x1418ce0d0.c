// 函数: sub_1418ce0d0
// 地址: 0x1418ce0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].w = arg2[1].w
*(arg1 + 6) = *(arg2 + 6)
arg1[2] = arg2[2]
*(arg1 + 0x10) = 0
int64_t rsi = sx.q(arg2[6])
int64_t rbp = *(arg2 + 0x10)
arg1[6] = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&arg1[4], rsi.d, 0)
    memcpy(*(arg1 + 0x10), rbp, (rsi << 3).d)
else
    arg1[7] = 0

*(arg1 + 0x20) = 0
int32_t i_1 = arg2[0xa]
void* r14 = *(arg2 + 0x20)
arg1[0xa] = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[8], i_1, 0)
    int64_t* rbx_1 = *(arg1 + 0x20)
    int32_t i
    
    do
        *rbx_1 = 0
        int64_t rsi_1 = sx.q(*(r14 + 8))
        int64_t r12_1 = *r14
        rbx_1[1].d = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_1405c4a00(rbx_1, rsi_1.d, 0)
            memcpy(*rbx_1, r12_1, (rsi_1 << 3).d)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        r14 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    arg1[0xb] = 0

*(arg1 + 0x30) = 0
int64_t rsi_2 = sx.q(arg2[0xe])
int64_t rbp_1 = *(arg2 + 0x30)
arg1[0xe] = rsi_2.d

if (rsi_2.d != 0)
    sub_1405c4a00(&arg1[0xc], rsi_2.d, 0)
    memcpy(*(arg1 + 0x30), rbp_1, (rsi_2 << 3).d)
else
    arg1[0xf] = 0

*(arg1 + 0x40) = 0
int64_t rsi_3 = sx.q(arg2[0x12])
int64_t rbp_2 = *(arg2 + 0x40)
arg1[0x12] = rsi_3.d

if (rsi_3.d != 0)
    sub_1405a4be0(&arg1[0x10], rsi_3.d, 0)
    memcpy(*(arg1 + 0x40), rbp_2, (rsi_3 << 4).d)
else
    arg1[0x13] = 0

*(arg1 + 0x50) = *(arg2 + 0x50)
arg1[0x16] = arg2[0x16]
*(arg1 + 0x5c) = *(arg2 + 0x5c)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
*(arg1 + 0x7c) = *(arg2 + 0x7c)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xc8) = 0
int64_t rsi_4 = sx.q(arg2[0x34])
int64_t rbp_3 = *(arg2 + 0xc8)
arg1[0x34] = rsi_4.d

if (rsi_4.d != 0)
    sub_1405a4be0(&arg1[0x32], rsi_4.d, 0)
    memcpy(*(arg1 + 0xc8), rbp_3, (rsi_4 << 4).d)
else
    arg1[0x35] = 0

*(arg1 + 0xd8) = 0
int64_t rbp_4 = sx.q(arg2[0x38])
int64_t r14_1 = *(arg2 + 0xd8)
arg1[0x38] = rbp_4.d

if (rbp_4.d != 0)
    sub_1405a4be0(&arg1[0x36], rbp_4.d, 0)
    memcpy(*(arg1 + 0xd8), r14_1, (rbp_4 << 4).d)
else
    arg1[0x39] = 0

*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xf8) = *(arg2 + 0xf8)
*(arg1 + 0x108) = 0
int64_t rbp_5 = sx.q(arg2[0x44])
int64_t r14_2 = *(arg2 + 0x108)
arg1[0x44] = rbp_5.d

if (rbp_5.d != 0)
    sub_14083a1f0(&arg1[0x42], rbp_5.d, 0)
    memcpy(*(arg1 + 0x108), r14_2, (rbp_5 << 5).d)
else
    arg1[0x45] = 0

arg1[0x46].b = arg2[0x46].b
*(arg1 + 0x119) = *(arg2 + 0x119)
*(arg1 + 0x11a) = *(arg2 + 0x11a)
*(arg1 + 0x11b) = *(arg2 + 0x11b)
arg1[0x47].b = arg2[0x47].b
*(arg1 + 0x11d) = *(arg2 + 0x11d)
arg1[0x48] = arg2[0x48]
*(arg1 + 0x124) = *(arg2 + 0x124)
arg1[0x4b] = arg2[0x4b]
arg1[0x4c].b = arg2[0x4c].b
return arg1
