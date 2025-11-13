// 函数: sub_14181d750
// 地址: 0x14181d750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe] = arg2[0xe]
arg1[0xf] = arg2[0xf]
arg1[0x10] = arg2[0x10]
arg1[0x11] = arg2[0x11]
*(arg1 + 0x48) = *(arg2 + 0x48)
arg1[0x14] = arg2[0x14]
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x68) = *(arg2 + 0x68)
arg1[0x1c] = arg2[0x1c]
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0xa0) = *(arg2 + 0xa0)
arg1[0x2a] = arg2[0x2a]
arg1[0x2b] = arg2[0x2b]
arg1[0x2c] = arg2[0x2c]
arg1[0x2d] = arg2[0x2d]
arg1[0x2e] = arg2[0x2e]
arg1[0x2f] = arg2[0x2f]
arg1[0x30] = arg2[0x30]
arg1[0x31] = arg2[0x31]
arg1[0x32] = arg2[0x32]
arg1[0x33] = arg2[0x33]
arg1[0x34] = arg2[0x34]
arg1[0x35].b = arg2[0x35].b
arg1[0x36] = arg2[0x36]
arg1[0x37] = arg2[0x37]
*(arg1 + 0xe0) = 0
int64_t rbp = sx.q(arg2[0x3a])
int64_t r14 = *(arg2 + 0xe0)
arg1[0x3a] = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg1[0x38], rbp.d, 0)
    memcpy(*(arg1 + 0xe0), r14, (rbp << 2).d)
else
    arg1[0x3b] = 0

sub_140596d10(&arg1[0x3c], &arg2[0x3c])
*(arg1 + 0x100) = 0
int32_t i_1 = arg2[0x42]
void* r14_1 = *(arg2 + 0x100)
arg1[0x42] = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[0x40], i_1, 0)
    int64_t* rbx_1 = *(arg1 + 0x100)
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rbp_1 = *(r14_1 + 8)
        int64_t r12_1 = *r14_1
        rbx_1[1].d = rbp_1
        
        if (rbp_1 != 0)
            sub_1405a4c70(rbx_1, rbp_1, 0)
            memcpy(*rbx_1, r12_1, rbp_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        r14_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    arg1[0x43] = 0

*(arg1 + 0x110) = *(arg2 + 0x110)
void* rax_45 = *(arg2 + 0x118)
*(arg1 + 0x118) = rax_45

if (rax_45 != 0)
    *(rax_45 + 8) += 1

arg1[0x48] = arg2[0x48]
arg1[0x4a] = arg2[0x4a]
arg1[0x4b] = arg2[0x4b]
arg1[0x4c] = arg2[0x4c]
arg1[0x4d] = arg2[0x4d]
arg1[0x4e] = arg2[0x4e]
arg1[0x4f] = arg2[0x4f]
arg1[0x50] = arg2[0x50]
arg1[0x51] = arg2[0x51]
arg1[0x52] = arg2[0x52]
arg1[0x53] = arg2[0x53]
arg1[0x54] = arg2[0x54]
arg1[0x55] = arg2[0x55]
*(arg1 + 0x158) = *(arg2 + 0x158)
*(arg1 + 0x160) = *(arg2 + 0x160)
return arg1
