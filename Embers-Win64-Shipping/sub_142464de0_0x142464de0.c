// 函数: sub_142464de0
// 地址: 0x142464de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_1407473e0(&arg1[1], &arg2[1])
sub_1407473e0(&arg1[3], &arg2[3])
arg1[5].b = arg2[5].b
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x30) = *(arg2 + 0x30)

if (&arg1[8] != &arg2[8])
    int64_t rbp_1 = sx.q(arg2[9].d)
    int64_t r14_1 = arg2[8]
    int32_t r8_1 = *(arg1 + 0x4c)
    arg1[9].d = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1407c3650(&arg1[8], rbp_1.d, r8_1)
        memcpy(arg1[8], r14_1, (rbp_1 * 0xc).d)
    else
        *(arg1 + 0x4c) = rbp_1.d

arg1[0xa].b = arg2[0xa].b
*(arg1 + 0x51) = *(arg2 + 0x51)
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
arg1[0xd].d = arg2[0xd].d
*(arg1 + 0x6c) = *(arg2 + 0x6c)
arg1[0xe].d = arg2[0xe].d
*(arg1 + 0x74) = *(arg2 + 0x74)
arg1[0xf].b = arg2[0xf].b
*(arg1 + 0x7c) = *(arg2 + 0x7c)
arg1[0x10].d = arg2[0x10].d
*(arg1 + 0x84) = *(arg2 + 0x84)
arg1[0x11].b = arg2[0x11].b
*(arg1 + 0x89) = *(arg2 + 0x89)
*(arg1 + 0x8c) = *(arg2 + 0x8c)
sub_140627690(&arg1[0x12], &arg2[0x12])
sub_140627690(&arg1[0x14], &arg2[0x14])
arg1[0x16].d = arg2[0x16].d
*(arg1 + 0xb4) = *(arg2 + 0xb4)
arg1[0x17].b = arg2[0x17].b
*(arg1 + 0xbc) = *(arg2 + 0xbc)
arg1[0x18].d = arg2[0x18].d
sub_140627690(&arg1[0x19], &arg2[0x19])
sub_140627690(&arg1[0x1b], &arg2[0x1b])
sub_14090a0d0(&arg1[0x1d], &arg2[0x1d])
sub_14090a0d0(&arg1[0x1f], &arg2[0x1f])
arg1[0x21] = arg2[0x21]
arg1[0x22].d = arg2[0x22].d

if (&arg1[0x23] != &arg2[0x23])
    int32_t i_2 = arg1[0x24].d
    void*** rax_26 = arg1[0x23]
    
    if (i_2 != 0)
        int32_t i
        
        do
            rax_26[0xc] = &data_142e0b890
            *rax_26 = &data_142e0b890
            rax_26 = &rax_26[0x17]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[0x24].d
    void* r14_2 = arg2[0x23]
    int32_t r8_5 = *(arg1 + 0x124)
    arg1[0x24].d = i_3
    
    if (i_3 != 0 || r8_5 != 0)
        sub_1409768a0(&arg1[0x23], i_3, r8_5)
        void*** r8_6 = arg1[0x23]
        
        if (i_3 != 0)
            int32_t* rdx_12 = r14_2 + 0x10
            void* rcx_11 = &r8_6[0xe]
            int32_t i_1
            
            do
                *r8_6 = &data_142e0b890
                rcx_11 += 0xb8
                r8_6 = &r8_6[0x17]
                *(rcx_11 - 0x120) = *(rdx_12 - 8)
                int32_t rax_28 = *rdx_12
                rdx_12 = &rdx_12[0x2e]
                *(rcx_11 - 0x118) = rax_28
                *(rcx_11 - 0x114) = rdx_12[-0x2d]
                *(rcx_11 - 0x110) = rdx_12[-0x2c].b
                *(rcx_11 - 0x10f) = *(rdx_12 - 0xaf)
                *(rcx_11 - 0x10c) = rdx_12[-0x2b]
                *(rcx_11 - 0x108) = rdx_12[-0x2a]
                *(rcx_11 - 0x104) = rdx_12[-0x29]
                *(rcx_11 - 0x100) = *(rdx_12 - 0xa0)
                r8_6[-0x17] = &data_14323d4b8
                *(rcx_11 - 0xf8) = rdx_12[-0x26]
                *(rcx_11 - 0xf4) = rdx_12[-0x25]
                *(rcx_11 - 0xf0) = rdx_12[-0x24]
                *(rcx_11 - 0xec) = rdx_12[-0x23]
                *(rcx_11 - 0xe8) = *(rdx_12 - 0x88)
                *(rcx_11 - 0xe0) = *(rdx_12 - 0x80)
                *(rcx_11 - 0xd8) = *(rdx_12 - 0x78)
                *(rcx_11 - 0xd0) = rdx_12[-0x1c]
                *(rcx_11 - 0xc8) = &data_142e0b890
                *(rcx_11 - 0xc0) = *(rdx_12 - 0x60)
                *(rcx_11 - 0xb8) = rdx_12[-0x16]
                *(rcx_11 - 0xb4) = rdx_12[-0x15]
                *(rcx_11 - 0xb0) = rdx_12[-0x14].b
                *(rcx_11 - 0xaf) = *(rdx_12 - 0x4f)
                *(rcx_11 - 0xac) = rdx_12[-0x13]
                *(rcx_11 - 0xa8) = rdx_12[-0x12]
                *(rcx_11 - 0xa4) = rdx_12[-0x11]
                *(rcx_11 - 0xa0) = *(rdx_12 - 0x40)
                *(rcx_11 - 0x98) = rdx_12[-0xe].b
                *(rcx_11 - 0x97) = *(rdx_12 - 0x37)
                *(rcx_11 - 0x94) = rdx_12[-0xd]
                *(rcx_11 - 0x90) = rdx_12[-0xc].b
                *(rcx_11 - 0x8c) = rdx_12[-0xb]
                *(rcx_11 - 0x88) = rdx_12[-0xa].b
                *(rcx_11 - 0x87) = *(rdx_12 - 0x27)
                *(rcx_11 - 0x84) = rdx_12[-9]
                *(rcx_11 - 0x80) = *(rdx_12 - 0x20)
                *(rcx_11 - 0x78) = *(rdx_12 - 0x18)
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x124) = i_3

arg1[0x25].d = arg2[0x25].d
*(arg1 + 0x12c) = *(arg2 + 0x12c)
*(arg1 + 0x130) = *(arg2 + 0x130)
*(arg1 + 0x140) = *(arg2 + 0x140)
*(arg1 + 0x150) = *(arg2 + 0x150)
arg1[0x2c].b = arg2[0x2c].b
*(arg1 + 0x164) = *(arg2 + 0x164)
arg1[0x2d].d = arg2[0x2d].d
*(arg1 + 0x16c) = *(arg2 + 0x16c)
arg1[0x2e].d = arg2[0x2e].d
*(arg1 + 0x174) = *(arg2 + 0x174)

if (&arg2[0x2f] != &arg1[0x2f])
    if (*(arg1 + 0x17c) != 0)
        *(arg1 + 0x17c) = 0
    
    if (*(arg2 + 0x17c) != 0)
        arg1[0x2f].d = arg2[0x2f].d
        *(arg1 + 0x17c) = 1

if (&arg2[0x30] != &arg1[0x30])
    if (*(arg1 + 0x184) != 0)
        *(arg1 + 0x184) = 0
    
    if (*(arg2 + 0x184) != 0)
        arg1[0x30].d = arg2[0x30].d
        *(arg1 + 0x184) = 1

arg1[0x31].d = arg2[0x31].d

if (&arg1[0x32] != &arg2[0x32])
    int64_t rbp_2 = sx.q(arg2[0x33].d)
    int64_t r14_3 = arg2[0x32]
    int32_t r8_7 = *(arg1 + 0x19c)
    arg1[0x33].d = rbp_2.d
    
    if (rbp_2.d != 0 || r8_7 != 0)
        sub_1405c4a00(&arg1[0x32], rbp_2.d, r8_7)
        memcpy(arg1[0x32], r14_3, (rbp_2 << 3).d)
    else
        *(arg1 + 0x19c) = rbp_2.d

arg1[0x34] = arg2[0x34]
arg1[0x35].d = arg2[0x35].d
return arg1
