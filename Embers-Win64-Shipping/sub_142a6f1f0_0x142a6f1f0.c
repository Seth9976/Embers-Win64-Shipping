// 函数: sub_142a6f1f0
// 地址: 0x142a6f1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 

int32_t rax_1 = *(arg1 + 0x5c)

if (rax_1 != 0 && rax_1 != 3)
    *(arg1 + 0x58) = sub_142a6fb00(arg1 + 0x18, *(arg1 + 0x58))

uint64_t rax = sx.q(*(arg1 + 0x5c))

if (rax.d u> 0x19)
    *arg2 = 0x10100
    return 

bool cond:1_1

switch (rax)
    case 0, 3
        rax = zx.q(*(arg1 + 0x58))
        
        if (rax.d != 0xa && rax.d != 0x1c)
            *arg2 = 0x10100
    case 1
        rax = zx.q(*(arg1 + 0x58))
        
        if (rax.d u> 0x1c)
            *arg2 = 0x10100
        else if (not(test_bit(0x101bd94c, rax.d)))
            *arg2 = 0x10100
    case 2, 8, 0xd, 0xf, 0x10, 0x11, 0x13
        if (*(arg1 + 0x58) != 1)
            *arg2 = 0x10100
    case 4, 7, 9, 0x12
        *arg2 = 0x10100
    case 5
        int32_t rcx_4 = *(arg1 + 0x58)
        
        if (rcx_4 - 0x15 u> 4 && rcx_4 != 6)
            *arg2 = 0x10100
    case 6
        cond:1_1 = *(arg1 + 0x58) - 0x1a u<= 1
        goto label_142a6f370
    case 0xa
        if (*(arg1 + 0x58) != 5)
            *arg2 = 0x10100
    case 0xb, 0xc
        cond:1_1 = *(arg1 + 0x58) - 0x15 u<= 4
    label_142a6f370:
        
        if (not(cond:1_1))
            *arg2 = 0x10100
    case 0xe
        rax = zx.q(*(arg1 + 0x58))
        
        if (rax.d u> 0x13)
            *arg2 = 0x10100
        else if (not(test_bit(0x88002, rax.d)))
            *arg2 = 0x10100
    case 0x14
        rax = zx.q(*(arg1 + 0x58))
        
        if (rax.d != 1 && rax.d != 0xe)
            *arg2 = 0x10100
    case 0x15, 0x16, 0x17, 0x18, 0x19
        int32_t rcx_3 = *(arg1 + 0x58)
        
        if (((rcx_3 - 0xd) & 0xfffffff8) != 0)
            *arg2 = 0x10100
        else if (rcx_3 == 0x12)
            *arg2 = 0x10100
