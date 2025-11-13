// 函数: sub_1429ded40
// 地址: 0x1429ded40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t i_3 = arg3
int32_t r12 = *(arg1 + 0x3784)
int32_t i = i_3
void* rdx = *(arg1 + 0x12a0)
int32_t var_140 = *(arg1 + 0x1e78) + r12
int32_t r10 = 1 << (*(arg1 + 0x34e4)).b
int32_t* rcx_3 = *(arg1 + 0x12a8)
int64_t r8 = sx.q(*(rdx + 0x24))
int64_t r13 = *(rdx + 0x38)
int64_t var_90 = *(rcx_3 + 0x38)
int64_t var_88 = *(rcx_3 + 0x40)
int64_t var_80 = *(rcx_3 + 0x48)
void* rcx_4 = *(arg1 + 0x12b0)
int32_t var_bc = rcx_3[0x22]
uint64_t r14 = zx.q(*(rdx + 0x10))
int64_t var_78 = *(rcx_4 + 0x38)
int64_t var_70 = *(rcx_4 + 0x40)
int64_t var_68 = *(rcx_4 + 0x48)
void* rcx_5 = *(arg1 + 0x12b8)
int32_t var_b8 = *(rcx_4 + 0x88)
int32_t var_16c = r12
int32_t var_134 = r10
int64_t var_60 = *(rcx_5 + 0x38)
int64_t var_58 = *(rcx_5 + 0x40)
int64_t var_50 = *(rcx_5 + 0x48)
int32_t var_b4 = *(rcx_5 + 0x88)
int64_t rax_14 = *(rdx + 0x40)
int64_t rax_15 = *(rdx + 0x48)
int32_t var_13c = r14.d
int32_t rax_16
rax_16.b = i_3 != 0
int32_t var_170 = r8.d
*(arg2 + 0xf10) = rax_16
int32_t var_c0 = 0
int64_t var_108 = r13
int32_t i_1 = i_3
*(arg2 + 0xf00) = sx.q(i_3 * *(arg1 + 0x1e7c)) * 0x4c + *(arg1 + 0x1eb0)
*(arg2 + 0xf08) = *(arg1 + 0x1e7c)

if (i_3 s< *(arg1 + 0x1e74))
    void* r15_1 = arg1 + 0x1ed0
    int64_t var_100_1 = r8
    int32_t i_2
    
    do
        i_2 = i
        *(arg2 + 0xfb8) = arg1 + 0x3520 + sx.q(mods.dp.d(sx.q(i), r10)) * 0x30
        int32_t* rdx_3
        
        if (i s<= 0)
            rdx_3 = &var_140
        else
            rdx_3 = *(arg1 + 0x3788) + (sx.q(i - 1) << 2)
        
        int64_t i_4 = sx.q(i)
        int32_t* rax_29 = *(arg1 + 0x3788) + (i_4 << 2)
        int64_t i_5 = i_4
        *(arg2 + 0xf50) = *(arg1 + 0x2c18)
        int64_t* rax_31 = *(arg2 + 0xf58)
        int32_t r9_2 = (i * r14.d) << 4
        int32_t r10_3 = (i * r8.d) << 3
        int32_t var_154_1 = r9_2
        *rax_31 = 0
        rax_31[1].b = 0
        *(arg2 + 0xf14) = 0
        *(arg2 + 0xf8c) = neg.d(i) << 7
        int32_t var_150_1 = r10_3
        *(arg2 + 0xf90) = (*(arg1 + 0x1e74) - i - 1) << 7
        
        if (*(arg1 + 0x2be0) == 0)
            int64_t rcx_20 = sx.q(r10_3)
            *(arg2 + 0xf18) = sx.q(r9_2) + r13
            *(arg2 + 0xf20) = rax_14 + rcx_20
            *(arg2 + 0xf28) = rax_15 + rcx_20
            int64_t rcx_21 = *(arg2 + 0xf18)
            int64_t rdx_4 = *(arg2 + 0xf20)
            int64_t r8_1 = *(arg2 + 0xf28)
            *(arg2 + 0xf30) = rcx_21 - 1
            *(arg2 + 0xf38) = rdx_4 - 1
            *(arg2 + 0xf40) = r8_1 - 1
            char* r13_1 = *(arg2 + 0xf40)
            *(arg2 + 0xf18) = rcx_21 - sx.q(*(arg2 + 0xe80))
            int64_t j_3 = 0x10
            *(arg2 + 0xf20) = rdx_4 - sx.q(*(arg2 + 0xe94))
            char* rdx_6 = *(arg2 + 0xf38)
            *(arg2 + 0xf28) = r8_1 - sx.q(*(arg2 + 0xe94))
            *(arg2 + 0xf48) = *(arg2 + 0xe80)
            *(arg2 + 0xf4c) = *(arg2 + 0xe94)
            int64_t rsi = sx.q(*(arg2 + 0xe94))
            char* rax_59 = *(arg2 + 0xf30)
            int64_t r8_3 = sx.q(*(arg2 + 0xe80))
            int64_t j
            
            do
                *rax_59 = 0x81
                rax_59 = &rax_59[r8_3]
                j = j_3
                j_3 -= 1
            while (j != 1)
            *rdx_6 = 0x81
            rdx_6[rsi] = 0x81
            int64_t r11_1 = sx.q((rsi * 2).d)
            int64_t r10_4 = sx.q((rsi * 3).d)
            int64_t r9_3 = sx.q((rsi << 2).d)
            int64_t r8_4 = sx.q((rsi * 5).d)
            rdx_6[r11_1] = 0x81
            rdx_6[r10_4] = 0x81
            rdx_6[r9_3] = 0x81
            rdx_6[r8_4] = 0x81
            int64_t rdx_7 = sx.q((rsi * 3).d * 2)
            rdx_6[rdx_7] = 0x81
            int64_t rcx_23 = sx.q(rsi.d * 7)
            rdx_6[rcx_23] = 0x81
            *r13_1 = 0x81
            r13_1[rsi] = 0x81
            r13_1[r11_1] = 0x81
            i_4 = i_5
            r13_1[r10_4] = 0x81
            r13_1[r9_3] = 0x81
            r13_1[r8_4] = 0x81
            r13_1[rdx_7] = 0x81
            r13_1[rcx_23] = 0x81
        else
            *(arg2 + 0xf18) = *(*(arg1 + 0x37c0) + (i_4 << 3)) + 0x20
            *(arg2 + 0xf20) = *(*(arg1 + 0x37c8) + (i_4 << 3)) + 0x10
            *(arg2 + 0xf28) = *(*(arg1 + 0x37d0) + (i_4 << 3)) + 0x10
            *(arg2 + 0xf30) = *(*(arg1 + 0x37d8) + (i_4 << 3))
            *(arg2 + 0xf38) = *(*(arg1 + 0x37e0) + (i_4 << 3))
            *(arg2 + 0xf40) = *(*(arg1 + 0x37e8) + (i_4 << 3))
            *(arg2 + 0xf48) = 1
            *(arg2 + 0xf4c) = 1
        
        int32_t j_1 = 0
        
        if (*(arg1 + 0x1e78) s> 0)
            int32_t r8_5 = 0
            int64_t var_148_2 = 0x20
            int64_t r13_2 = 0x10
            int32_t var_14c_1 = 0
            int64_t var_160_1 = 0x10
            
            do
                if (mods.dp.d(sx.q(j_1 - 1), r12) == 0)
                    *rax_29 = j_1 - 1
                
                if (i_4 != 0 && (j_1 & (r12 - 1)) == 0)
                    if (j_1 s> *rdx_3 - r12)
                        do
                            Sleep(0)
                        while (j_1 s> *rdx_3 - r12)
                        
                        r8_5 = var_14c_1
                    
                    r13_2 = var_160_1
                
                int64_t r9_4 = sx.q(var_150_1)
                int64_t rdx_10 = sx.q(var_154_1)
                *(arg2 + 0xf84) = r8_5
                void* r8_6 = *(arg2 + 0xf00)
                *(arg2 + 0xf88) = (*(arg1 + 0x1e78) - j_1 - 1) << 7
                *(arg2 + 0xea8) = var_108 + rdx_10
                *(arg2 + 0xeb0) = rax_14 + r9_4
                *(arg2 + 0xeb8) = rax_15 + r9_4
                int64_t var_a8[0x3]
                *(arg2 + 0xe18) = (&var_a8)[zx.q(*(r8_6 + 2))][0] + rdx_10
                var_a0
                *(arg2 + 0xe20) = *(&var_a0 + zx.q(*(r8_6 + 2)) * 0x18) + r9_4
                var_98
                *(arg2 + 0xe28) = *(&var_98 + zx.q(*(r8_6 + 2)) * 0x18) + r9_4
                *(arg2 + 0xfc0) |= (&var_c0)[zx.q(*(r8_6 + 2))]
                sub_1429de8f0(arg1, arg2)
                void* rax_92 = *(arg2 + 0xfb8)
                *(arg2 + 0xf14) = 1
                int32_t rax_93
                rax_93.b = *(rax_92 + 0x18) - 0x41 u<= 0x3fffffbe
                *(arg2 + 0xfc0) |= rax_93
                *(arg2 + 0xf18) += 0x10
                *(arg2 + 0xf20) += 8
                *(arg2 + 0xf28) += 8
                
                if (*(arg1 + 0x2be0) == 0)
                    *(arg2 + 0xf30) += 0x10
                    *(arg2 + 0xf38) += 8
                    *(arg2 + 0xf40) += 8
                
                if (*(arg1 + 0x2be0) == 0)
                    i_4 = i_5
                else
                    char* rax_94 = *(arg2 + 0xf00)
                    char r8_8 = *rax_94
                    int32_t var_158_1
                    
                    if (r8_8 != 4 && r8_8 != 9)
                        var_158_1 = 1
                    
                    if (r8_8 == 4 || r8_8 == 9 || rax_94[9] == 0)
                        var_158_1 = 0
                    
                    i_4 = i_5
                    uint32_t r12_1 = zx.d(*(zx.q(*(zx.q(r8_8) + r15_1 + 0xd00)) + r15_1
                        + ((zx.q(rax_94[2]) + (zx.q(rax_94[0xb]) << 2)) << 2) + 0xc40))
                    
                    if (i_1 != *(arg1 + 0x1e74) - 1)
                        int64_t* r8_10 = var_100_1 * 7
                        *(*(*(arg1 + 0x37c0) + (i_4 << 3) + 8) + var_148_2) =
                            *(sx.q(r14.d) * 0xf + *(arg2 + 0xea8))
                        *(*(*(arg1 + 0x37c8) + (i_4 << 3) + 8) + r13_2) = *(r8_10 + *(arg2 + 0xeb0))
                        *(*(*(arg1 + 0x37d0) + (i_4 << 3) + 8) + r13_2) = *(r8_10 + *(arg2 + 0xeb8))
                    
                    uint64_t r9_6
                    
                    if (j_1 == *(arg1 + 0x1e78) - 1 || *(*(arg2 + 0xf00) + 0x4e) != 0)
                        r9_6 = zx.q(var_170)
                    else
                        int64_t r9_5 = 0
                        int64_t r8_11 = sx.q(((r14 << 1) + 0xf).d)
                        int64_t k_1 = 4
                        int64_t r11_3 = sx.q((r14 + 0xf).d) - r8_11
                        int64_t r12_3 = sx.q((r14 + 5).d * 3) - r8_11
                        int64_t r13_4 = 0xf - r8_11
                        int64_t k
                        
                        do
                            r9_5 += 4
                            *(r9_5 + *(*(arg1 + 0x37d8) + (i_5 << 3)) - 4) =
                                (*(arg2 + 0xea8) + r13_4)[r8_11]
                            *(*(*(arg1 + 0x37d8) + (i_5 << 3)) + r9_5 - 3) =
                                (*(arg2 + 0xea8) + r11_3)[r8_11]
                            *(*(*(arg1 + 0x37d8) + (i_5 << 3)) + r9_5 - 2) =
                                *(r8_11 + *(arg2 + 0xea8))
                            char rax_123 = (*(arg2 + 0xea8) + r12_3)[r8_11]
                            r8_11 += sx.q((r14 << 2).d)
                            *(*(*(arg1 + 0x37d8) + (i_5 << 3)) + r9_5 - 1) = rax_123
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                        i_4 = i_5
                        r9_6 = zx.q(var_170)
                        **(*(arg1 + 0x37e0) + (i_5 << 3)) = *(*(arg2 + 0xeb0) + 7)
                        **(*(arg1 + 0x37e8) + (i_5 << 3)) = *(*(arg2 + 0xeb8) + 7)
                        int64_t r8_12 = sx.q((r9_6 + 7).d)
                        *(*(*(arg1 + 0x37e0) + (i_5 << 3)) + 1) = *(r8_12 + *(arg2 + 0xeb0))
                        *(*(*(arg1 + 0x37e8) + (i_5 << 3)) + 1) = *(r8_12 + *(arg2 + 0xeb8))
                        int64_t r8_13 = sx.q(((r9_6 << 1) + 7).d)
                        *(*(*(arg1 + 0x37e0) + (i_5 << 3)) + 2) = *(r8_13 + *(arg2 + 0xeb0))
                        *(*(*(arg1 + 0x37e8) + (i_5 << 3)) + 2) = *(r8_13 + *(arg2 + 0xeb8))
                        int64_t r8_14 = sx.q(((r9_6 << 1) + 7).d + r9_6.d)
                        *(*(*(arg1 + 0x37e0) + (i_5 << 3)) + 3) = *(r8_14 + *(arg2 + 0xeb0))
                        *(*(*(arg1 + 0x37e8) + (i_5 << 3)) + 3) = *(r8_14 + *(arg2 + 0xeb8))
                        int64_t r8_15 = sx.q(((r9_6 << 2) + 7).d)
                        *(*(*(arg1 + 0x37e0) + (i_5 << 3)) + 4) = *(r8_15 + *(arg2 + 0xeb0))
                        *(*(*(arg1 + 0x37e8) + (i_5 << 3)) + 4) = *(r8_15 + *(arg2 + 0xeb8))
                        int64_t r8_16 = sx.q(((r9_6 << 2) + 7).d + r9_6.d)
                        *(*(*(arg1 + 0x37e0) + (i_5 << 3)) + 5) = *(r8_16 + *(arg2 + 0xeb0))
                        *(*(*(arg1 + 0x37e8) + (i_5 << 3)) + 5) = *(r8_16 + *(arg2 + 0xeb8))
                        int64_t r8_17 = sx.q(((zx.q((r9_6 * 3).d) << 1) + 7).d)
                        r15_1 = arg1 + 0x1ed0
                        *(*(*(arg1 + 0x37e0) + (i_5 << 3)) + 6) = *(r8_17 + *(arg2 + 0xeb0))
                        *(*(*(arg1 + 0x37e8) + (i_5 << 3)) + 6) = *(r8_17 + *(arg2 + 0xeb8))
                        int64_t r8_18 = sx.q((r9_6 + 1).d * 7)
                        *(*(*(arg1 + 0x37e0) + (i_5 << 3)) + 7) = *(r8_18 + *(arg2 + 0xeb0))
                        r14 = zx.q(var_13c)
                        *(*(*(arg1 + 0x37e8) + (i_5 << 3)) + 7) = *(r8_18 + *(arg2 + 0xeb8))
                    
                    if (r12_1 == 0)
                        r12 = var_16c
                        r13_2 = var_160_1
                    else if (*(arg1 + 0x1ec0) != 0)
                        if (j_1 s> 0)
                            sub_1403ad7f3(*(arg2 + 0xea8), r14.d, (zx.q(r12_1) << 4) + r15_1)
                            i_4 = i_5
                        
                        if (var_158_1 == 0)
                            sub_142a21c40(*(arg2 + 0xea8), r14.d, 
                                ((zx.q(r12_1) + 0x40) << 4) + r15_1)
                            i_4 = i_5
                        
                        if (i_4 s> 0)
                            sub_1403ad6ab(*(arg2 + 0xea8), r14.d, (zx.q(r12_1) << 4) + r15_1)
                            i_4 = i_5
                        
                        if (var_158_1 != 0)
                            r12 = var_16c
                            r13_2 = var_160_1
                        else
                            sub_142a21b50(*(arg2 + 0xea8), zx.q(r14.d), 
                                ((zx.q(r12_1) + 0x40) << 4) + r15_1)
                        label_1429df850:
                            r12 = var_16c
                            r13_2 = var_160_1
                            i_4 = i_5
                    else
                        uint64_t rcx_65 = zx.q(r12_1) << 4
                        void* var_e0 = rcx_65 + r15_1
                        void* var_d8_1 = r15_1 + 0x400 + rcx_65
                        void* var_d0_1 = rcx_65 + 0x800 + r15_1
                        void* var_c8_1 = ((
                            zx.q(*(((sx.q(*(arg1 + 0x1e64)) + 0x32) << 6) + zx.q(r12_1) + r15_1))
                            + 0xc0) << 4) + r15_1
                        
                        if (j_1 s> 0)
                            sub_142a21d00(*(arg2 + 0xea8), *(arg2 + 0xeb0), *(arg2 + 0xeb8), r14.d, 
                                r9_6.d, &var_e0)
                            i_4 = i_5
                        
                        if (var_158_1 == 0)
                            sub_142a21bc0(*(arg2 + 0xea8), *(arg2 + 0xeb0), *(arg2 + 0xeb8), r14.d, 
                                var_170, &var_e0)
                            i_4 = i_5
                        
                        if (i_4 s> 0)
                            sub_142a21c90(*(arg2 + 0xea8), *(arg2 + 0xeb0), *(arg2 + 0xeb8), r14.d, 
                                var_170, &var_e0)
                            i_4 = i_5
                        
                        if (var_158_1 == 0)
                            sub_142a21ac0(*(arg2 + 0xea8), *(arg2 + 0xeb0), *(arg2 + 0xeb8), r14.d, 
                                var_170, &var_e0)
                            goto label_1429df850
                        
                        r12 = var_16c
                        r13_2 = var_160_1
                
                r13_2 += 8
                var_154_1 += 0x10
                r8_5 = var_14c_1 - 0x80
                var_150_1 += 8
                j_1 += 1
                *(arg2 + 0xf00) += 0x4c
                *(arg2 + 0xf50) += 9
                var_148_2 += 0x10
                var_14c_1 = r8_5
                var_160_1 = r13_2
            while (j_1 s< *(arg1 + 0x1e78))
        
        if (*(arg1 + 0x2be0) == 0)
            sub_142a21d90(rdx, *(arg2 + 0xea8) + 0x10, *(arg2 + 0xeb0) + 8, *(arg2 + 0xeb8) + 8)
        else if (i_1 != *(arg1 + 0x1e74) - 1)
            int32_t rcx_74 = *rcx_3
            int64_t r9_11 = sx.q((rcx_74 s>> 1) + 0x10)
            
            for (char* j_2 = nullptr; j_2 s< 4; j_2 = &j_2[1])
                void* rdx_45 = *(*(arg1 + 0x37c0) + (i_4 << 3) + 8) + sx.q(rcx_74 + 0x20)
                *(j_2 + rdx_45) = *(rdx_45 - 1)
                void* rdx_47 = *(*(arg1 + 0x37c8) + (i_4 << 3) + 8) + r9_11
                *(j_2 + rdx_47) = *(rdx_47 - 1)
                void* rdx_49 = *(*(arg1 + 0x37d0) + (i_4 << 3) + 8) + r9_11
                *(j_2 + rdx_49) = *(rdx_49 - 1)
        
        r8 = zx.q(var_170)
        r13 = var_108
        r10 = var_134
        *rax_29 = j_1 + r12
        *(arg2 + 0xf00) += 0x4c
        *(arg2 + 0xf10) = 1
        *(arg2 + 0xf00) += zx.q(*(arg1 + 0x376c) * *(arg2 + 0xf08)) * 0x4c
        i = i_1 + 1 + *(arg1 + 0x376c)
        i_1 = i
    while (i s< *(arg1 + 0x1e74))
    
    i_3 = i_2

BOOL result = *(arg1 + 0x1e74) - 1

if (i_3 == result)
    result = ReleaseSemaphore(*(arg1 + 0x3810), 1, nullptr)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
