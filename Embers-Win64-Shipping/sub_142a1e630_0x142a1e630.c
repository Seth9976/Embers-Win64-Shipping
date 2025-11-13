// 函数: sub_142a1e630
// 地址: 0x142a1e630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* var_d8 = *(arg1 + 0xf00)
int32_t var_b0 = 0
int32_t rax_3 = 1 << (*(arg1 + 0x34e4)).b
int32_t r15 = 0
int32_t* r12 = *(arg1 + 0x12a0)
void* rcx_1 = *(arg1 + 0x12a8)
int32_t var_e4 = 0
int32_t rax_4 = r12[4]
int32_t rax_5 = r12[9]
int64_t var_80 = *(rcx_1 + 0x38)
int64_t var_78 = *(rcx_1 + 0x40)
int64_t var_70 = *(rcx_1 + 0x48)
void* rcx_2 = *(arg1 + 0x12b0)
int32_t var_ac = *(rcx_1 + 0x88)
int32_t var_f8 = 0
int32_t* var_b8 = r12
int64_t var_68 = *(rcx_2 + 0x38)
int64_t var_60 = *(rcx_2 + 0x40)
int64_t var_58 = *(rcx_2 + 0x48)
void* rcx_3 = *(arg1 + 0x12b8)
int32_t var_a8 = *(rcx_2 + 0x88)
int64_t var_50 = *(rcx_3 + 0x38)
int64_t var_48 = *(rcx_3 + 0x40)
int64_t var_40 = *(rcx_3 + 0x48)
int32_t var_a4 = *(rcx_3 + 0x88)
void* rax_18 = *(r12 + 0x38)
void* rsi = rax_18
void* var_100 = rax_18
void* var_128 = rax_18
void* rax_19 = *(r12 + 0x40)
void* rbp = rax_19
void* var_108 = rax_19
void* var_120 = rax_19
void* rax_20 = *(r12 + 0x48)
void* r14 = rax_20
*(arg1 + 0xf10) = 0
int32_t r8 = *(arg1 + 0x2be0)
void* var_110 = rax_20
void* var_118 = rax_20

if (r8 != 0)
    sub_142a1d450(arg1 + 0x12c0, arg1, r8)

sub_142a230d0(r12)
int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 0x1e74) s> 0)
    int32_t rdx_2 = 0
    int64_t r10_1 = sx.q(rax_3)
    int32_t r9_1 = 0
    int64_t rcx_6 = r10_1
    int32_t var_e8_1 = 0
    int32_t var_ec_1 = 0
    int32_t r8_1 = 0
    uint32_t rax_22 = rax_5 << 3
    int32_t var_f0_1 = 0
    int32_t rax_24 = rax_4 << 4
    
    do
        if (rcx_6 s> 1)
            int32_t r15_1 = r15 + 1
            *(arg1 + 0xfb8) = arg1 + 0x3520 + sx.q(r15) * 0x30
            
            if (r15_1 == r10_1.d)
                r15_1 = 0
            
            var_e4 = r15_1
        
        *(arg1 + 0xf50) = *(arg1 + 0x2c18)
        int32_t r15_2 = rdx_2
        int64_t* rax_29 = *(arg1 + 0xf58)
        int32_t r14_1 = r8_1
        *rax_29 = 0
        rax_29[1].b = 0
        *(arg1 + 0xf14) = 0
        *(arg1 + 0xf8c) = r9_1
        int64_t rcx_9 = sx.q(rdx_2)
        *(arg1 + 0xf90) = (*(arg1 + 0x1e74) - i - 1) << 7
        *(arg1 + 0xf18) = sx.q(r8_1) + rax_18
        *(arg1 + 0xf20) = rax_19 + rcx_9
        *(arg1 + 0xf28) = rax_20 + rcx_9
        int64_t rcx_10 = *(arg1 + 0xf18)
        int64_t rdx_3 = *(arg1 + 0xf20)
        int64_t r8_2 = *(arg1 + 0xf28)
        *(arg1 + 0xf30) = rcx_10 - 1
        *(arg1 + 0xf38) = rdx_3 - 1
        char* r12_1 = *(arg1 + 0xf38)
        *(arg1 + 0xf40) = r8_2 - 1
        char* rbp_1 = *(arg1 + 0xf40)
        *(arg1 + 0xf18) = rcx_10 - sx.q(*(arg1 + 0xe80))
        int64_t j_2 = 0x10
        *(arg1 + 0xf20) = rdx_3 - sx.q(*(arg1 + 0xe94))
        *(arg1 + 0xf28) = r8_2 - sx.q(*(arg1 + 0xe94))
        *(arg1 + 0xf48) = *(arg1 + 0xe80)
        *(arg1 + 0xf4c) = *(arg1 + 0xe94)
        int64_t rsi_1 = sx.q(*(arg1 + 0xe94))
        char* rax_48 = *(arg1 + 0xf30)
        int64_t rdx_5 = sx.q(*(arg1 + 0xe80))
        int64_t j
        
        do
            *rax_48 = 0x81
            rax_48 = &rax_48[rdx_5]
            j = j_2
            j_2 -= 1
        while (j != 1)
        *r12_1 = 0x81
        r12_1[rsi_1] = 0x81
        int64_t r11_1 = sx.q((rsi_1 * 2).d)
        int64_t r10_2 = sx.q((rsi_1 * 3).d)
        int64_t r9_2 = sx.q((rsi_1 << 2).d)
        int64_t r8_4 = sx.q((rsi_1 * 5).d)
        r12_1[r11_1] = 0x81
        r12_1[r10_2] = 0x81
        r12_1[r9_2] = 0x81
        r12_1[r8_4] = 0x81
        int64_t rdx_6 = sx.q((rsi_1 * 3).d * 2)
        r12_1[rdx_6] = 0x81
        int64_t rcx_12 = sx.q(rsi_1.d * 7)
        r12_1[rcx_12] = 0x81
        *rbp_1 = 0x81
        rbp_1[rsi_1] = 0x81
        rbp_1[r11_1] = 0x81
        rbp_1[r10_2] = 0x81
        rbp_1[r9_2] = 0x81
        rbp_1[r8_4] = 0x81
        rbp_1[rdx_6] = 0x81
        rbp_1[rcx_12] = 0x81
        int32_t j_1 = 0
        
        if (*(arg1 + 0x1e78) s> 0)
            int32_t r12_2 = var_f8
            int32_t rbp_2 = 0
            
            do
                void* r10_3 = *(arg1 + 0xf00)
                *(arg1 + 0xf84) = rbp_2
                int64_t r8_5 = sx.q(r15_2)
                int64_t r9_3 = sx.q(r14_1)
                *(arg1 + 0xf88) = (*(arg1 + 0x1e78) - j_1 - 1) << 7
                *(arg1 + 0xea8) = r9_3 + rax_18
                *(arg1 + 0xeb0) = rax_19 + r8_5
                *(arg1 + 0xeb8) = rax_20 + r8_5
                char rax_65 = *(r10_3 + 2)
                
                if (rax_65 u< 1)
                    __builtin_memset(arg1 + 0xe18, 0, 0x18)
                else
                    uint64_t rdx_7 = zx.q(rax_65)
                    int64_t var_98[0x3]
                    *(arg1 + 0xe18) = (&var_98)[rdx_7][0] + r9_3
                    var_90
                    *(arg1 + 0xe20) = *(&var_90 + rdx_7 * 0x18) + r8_5
                    var_88
                    *(arg1 + 0xe28) = *(&var_88 + rdx_7 * 0x18) + r8_5
                
                *(arg1 + 0xfc0) |= (&var_b0)[zx.q(*(r10_3 + 2))]
                sub_142a1e270(arg1, arg1)
                void* rax_76 = *(arg1 + 0xfb8)
                *(arg1 + 0xf14) = 1
                r12_2 += 1
                int32_t rax_77
                rax_77.b = *(rax_76 + 0x18) - 0x41 u<= 0x3fffffbe
                r14_1 += 0x10
                *(arg1 + 0xfc0) |= rax_77
                r15_2 += 8
                *(arg1 + 0xf18) += 0x10
                j_1 += 1
                *(arg1 + 0xf20) += 8
                rbp_2 -= 0x80
                *(arg1 + 0xf28) += 8
                *(arg1 + 0xf30) += 0x10
                *(arg1 + 0xf38) += 8
                *(arg1 + 0xf40) += 8
                *(arg1 + 0xf00) += 0x4c
                *(arg1 + 0xf50) += 9
            while (j_1 s< *(arg1 + 0x1e78))
            
            i = i_1
            var_f8 = r12_2
        
        r12 = var_b8
        sub_142a21d90(r12, *(arg1 + 0xea8) + 0x10, *(arg1 + 0xeb0) + 8, *(arg1 + 0xeb8) + 8)
        *(arg1 + 0xf00) += 0x4c
        *(arg1 + 0xf10) = 1
        
        if (*(arg1 + 0x2be0) != 0)
            if (i s> 0)
                char* r15_3 = var_d8
                
                if (*(arg1 + 0x1ec0) != 0)
                    sub_142a1d880(arg1 + 0x12c0, r15_3, i - 1, rax_4, rax_5)
                else
                    sub_142a1d660(arg1 + 0x12c0, r15_3, i - 1, rax_4, rax_5, var_100, var_108, 
                        var_110)
                
                int64_t rcx_20
                int64_t rdx_13
                
                if (i s<= 1)
                    rcx_20 = zx.q(rax_24)
                    rdx_13 = zx.q(rax_22)
                else
                    char* rsi_2 = var_128
                    sub_142a20e70(r12, rsi_2, var_120, var_118)
                    rdx_13 = sx.q(rax_22)
                    rcx_20 = sx.q(rax_24)
                    var_120 += rdx_13
                    var_128 = &rsi_2[rcx_20]
                    var_118 += rdx_13
                
                var_100 += sx.q(rcx_20.d)
                int64_t rax_83 = sx.q(rdx_13.d)
                var_108 += rax_83
                var_110 += rax_83
                var_d8 = &r15_3[sx.q(*(arg1 + 0x1e78)) * 0x4c + 0x4c]
            
            goto label_142a1ecce
        
        if (i s<= 0)
        label_142a1ecce:
            rsi = var_128
            rbp = var_120
            r14 = var_118
        else
            sub_142a20e70(r12, var_128, var_120, var_118)
            int64_t rdx_17 = sx.q(rax_22)
            rbp = var_120 + rdx_17
            rsi = var_128 + sx.q(rax_24)
            var_120 = rbp
            r14 = var_118 + rdx_17
            var_128 = rsi
            var_118 = r14
        
        i += 1
        r8_1 = var_f0_1 + rax_24
        r9_1 = var_e8_1 - 0x80
        rdx_2 = var_ec_1 + rax_22
        r10_1 = sx.q(rax_3)
        rcx_6 = r10_1
        r15 = var_e4
        i_1 = i
        var_f0_1 = r8_1
        var_ec_1 = rdx_2
        var_e8_1 = r9_1
    while (i s< *(arg1 + 0x1e74))

if (*(arg1 + 0x2be0) != 0)
    char* rdx_15 = var_d8
    
    if (*(arg1 + 0x1ec0) != 0)
        sub_142a1d880(arg1 + 0x12c0, rdx_15, i - 1, rax_4, rax_5)
    else
        sub_142a1d660(arg1 + 0x12c0, rdx_15, i - 1, rax_4, rax_5, var_100, var_108, var_110)
    
    sub_142a20e70(r12, rsi, rbp, r14)
    rsi += sx.q(rax_4 << 4)
    int64_t r10_4 = sx.q(rax_5 << 3)
    rbp += r10_4
    r14 += r10_4

sub_142a20e70(r12, rsi, rbp, r14)
sub_142a20fc0(r12)
int64_t result = sub_142a20d60(r12)
__security_check_cookie(rax_1 ^ &var_178)
return result
