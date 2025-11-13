// 函数: sub_14299b740
// 地址: 0x14299b740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_268 = -2
uint128_t zmm6
uint128_t var_38 = zmm6
void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc))).d f* 0.125f
int32_t rdi = int.d(ceilf(zmm0.d).d)
int32_t var_2c8 = rdi
uint128_t zmm0_1
zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10))).d f* 0.125f
int32_t i_3 = int.d(ceilf(zmm0_1.d))
int32_t i_4 = i_3
int64_t rax_2
int64_t rdx
rdx:rax_2 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x30) - *(arg1 + 0x28))
int64_t rdx_1 = rdx s>> 2
int64_t* var_298
sub_142995aa0(&var_298, rdx_1 + (rdx_1 u>> 0x3f))
int16_t* r12 = *(arg1 + 0x70)
int16_t* var_2b0 = r12
int64_t rax_5
int64_t rdx_3
rdx_3:rax_5 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x30) - *(arg1 + 0x28))
int64_t rdx_4 = rdx_3 s>> 2
void* r14 = arg1 + 0x58
sub_142992a30(r14, rdx_4 + (rdx_4 u>> 0x3f), r14)
*(arg1 + 0x20) = 0
int32_t rbx = 0
int32_t i_5 = 0
int64_t rax_8
int64_t rdx_6
rdx_6:rax_8 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x30) - *(arg1 + 0x28))
int64_t rdx_7 = rdx_6 s>> 2
uint64_t rax_10 = rdx_7 u>> 0x3f

if (rdx_7 != neg.q(rax_10))
    uint64_t i = 0
    
    do
        if (*(*(arg1 + 0x40) + (i << 2)) == 2)
            rbx += *(arg1 + 0xc) * *(arg1 + 0x10)
        
        i_5 += 1
        i = zx.q(i_5)
    while (i u< rdx_7 + rax_10)

char* var_280
sub_142995810(&var_280, sx.q(rbx))
char* r8_1 = nullptr

if (rbx != 0)
    r8_1 = var_280

char* var_2a0 = r8_1
int32_t i_7 = 0
int32_t i_8 = 0
int64_t rax_13
int64_t rdx_10
rdx_10:rax_13 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x30) - *(arg1 + 0x28))
int64_t rdx_11 = rdx_10 s>> 2
uint32_t zmm0_3[0x4]

if (rdx_11 != neg.q(rdx_11 u>> 0x3f))
    uint64_t i_1 = 0
    int64_t rdx_21
    
    do
        if (*(*(arg1 + 0x40) + (i_1 << 2)) == 2)
            int32_t j = 0
            int32_t j_3 = 0
            
            if (*(arg1 + 0x10) s> 0)
                uint64_t rdx_13 = zx.q(*(arg1 + 0xc))
                uint64_t rax_17 = i_1 * 3
                uint64_t var_2c0_1 = rax_17
                int64_t r13_1 = 0
                int64_t var_2a8_1 = 0
                
                do
                    int64_t rcx_18 = *(arg1 + 0x28)
                    char* r14_1 = *(*(rcx_18 + (rax_17 << 3)) + r13_1)
                    char* r15 = r8_1
                    int32_t k = 0
                    
                    if (rdx_13.d s> 0)
                        int32_t var_2d8_1 = 0x477fe000
                        int32_t var_2d0_1 = 0x477fe000
                        
                        do
                            uint32_t r9_1 = zx.d(*r14_1)
                            r14_1 = &r14_1[4]
                            uint32_t r8_8 =
                                ((zx.d(r14_1[3]) << 8 | zx.d(r14_1[2])) << 8 | zx.d(r14_1[1])) << 8
                                | r9_1
                            zmm6 = *(((zx.q(sub_142c998f0(0x477fe000)) ^ 0x8000) << 2) +
                                &data_1436bbc50)
                            uint32_t zmm1_1[0x4] =
                                *((zx.q(sub_142c998f0(0x477fe000)) << 2) + &data_1436bbc50)
                            zmm0_3 = r8_8
                            
                            if (not(zmm1_1[0] f> zmm0_3[0]))
                                zmm0_3 = zmm1_1
                            
                            if (not(zmm6.d f> zmm0_3[0]))
                                zmm6 = zmm0_3
                            
                            int32_t var_2d0_2 = zmm6.d
                            zmm6.d f- 0f
                            uint16_t rdx_17
                            
                            if (is_unordered.d(zmm6.d, 0f) || zmm6.d f!= 0f)
                                int16_t r8_9 = *((zx.q(var_2d0_2) u>> 0x17 << 1) + &data_1436fbc50)
                                
                                if (r8_9 == 0)
                                    rdx_17 = sub_142c998f0(var_2d0_2)
                                else
                                    int32_t rcx_16 = var_2d0_2 & 0x7fffff
                                    rdx_17 =
                                        ((rcx_16 + 0xfff + (rcx_16 u>> 0xd & 1)) u>> 0xd).w + r8_9
                            else
                                rdx_17 = (var_2d0_2 u>> 0x10).w
                            
                            *r15 = rdx_17.b
                            r15[1] = (rdx_17 u>> 8).b
                            r15 = &r15[2]
                            k += 1
                        while (k s< *(arg1 + 0xc))
                        
                        rcx_18 = *(arg1 + 0x28)
                        r13_1 = var_2a8_1
                        r8_1 = var_2a0
                        j = j_3
                    
                    *(*(rcx_18 + (var_2c0_1 << 3)) + r13_1) = r8_1
                    rdx_13 = sx.q(*(arg1 + 0xc))
                    r8_1 = &r8_1[rdx_13 << 1]
                    var_2a0 = r8_1
                    j += 1
                    j_3 = j
                    r13_1 += 8
                    var_2a8_1 = r13_1
                    rax_17 = var_2c0_1
                while (j s< *(arg1 + 0x10))
                
                i_7 = i_8
        
        i_7 += 1
        i_8 = i_7
        int64_t rax_33
        int64_t rdx_20
        rdx_20:rax_33 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x30) - *(arg1 + 0x28))
        rdx_21 = rdx_20 s>> 2
        i_1 = zx.q(i_7)
    while (i_1 u< rdx_21 + (rdx_21 u>> 0x3f))
    r12 = var_2b0
    r14 = arg1 + 0x58
    rdi = var_2c8
    i_3 = i_4

int64_t* rbx_1 = var_298
*rbx_1 = *(arg1 + 0x78)
int32_t i_6 = 1
int64_t rax_37
int64_t rdx_23
rdx_23:rax_37 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x30) - *(arg1 + 0x28))
int64_t rdx_24 = rdx_23 s>> 2

if (rdx_24 + (rdx_24 u>> 0x3f) u> 1)
    uint64_t i_2 = 1
    int64_t rdx_27
    
    do
        rbx_1[i_2] = rbx_1[zx.q(i_6 - 1)] + (sx.q(i_3 * rdi) << 1)
        i_6 += 1
        int64_t rax_44
        int64_t rdx_26
        rdx_26:rax_44 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x30) - *(arg1 + 0x28))
        rdx_27 = rdx_26 s>> 2
        i_2 = zx.q(i_6)
    while (i_2 u< rdx_27 + (rdx_27 u>> 0x3f))

uint32_t* r11 = nullptr
uint64_t r10_1 = 0
int32_t var_2cc_1 = 0

if (i_3 s> 0)
    do
        int32_t var_2d0_3 = r11.d
        
        if (rdi s> 0)
            int64_t r8_10 = *(arg1 + 0x30)
            int32_t r10_5
            
            do
                int32_t j_4 = r11.d
                int64_t r9_2 = *(arg1 + 0x28)
                int64_t var_2c0_2 = r9_2
                int64_t rax_47
                int64_t rdx_29
                rdx_29:rax_47 = muls.dp.q(0x2aaaaaaaaaaaaaab, r8_10 - r9_2)
                int64_t rdx_30 = rdx_29 s>> 2
                int64_t rcx_28 = r8_10
                
                if (rdx_30 != neg.q(rdx_30 u>> 0x3f))
                    uint32_t* j_1 = r11
                    int64_t r14_2 = *r14
                    int64_t r12_1 = r9_2
                    
                    do
                        int64_t r15_1 = *(r12_1 + j_1 * 0x18)
                        uint32_t* k_1 = r11
                        int32_t r10_2 = (r10_1 << 3).d
                        uint32_t* rbx_2
                        
                        do
                            uint32_t rdx_32 = var_2d0_3 << 3
                            rbx_2 = 8
                            uint32_t* temp6_1
                            
                            do
                                uint32_t rax_53 = rdx_32
                                int32_t rcx_29 = r10_2
                                int32_t r8_11 = *(arg1 + 0xc)
                                
                                if (rdx_32 s>= r8_11)
                                    rax_53 = r8_11 * 2 - rdx_32 - 1
                                
                                uint32_t r8_12 = r8_11 - 1
                                
                                if (rax_53 s>= 0)
                                    r8_12 = rax_53
                                
                                int32_t rax_54 = *(arg1 + 0x10)
                                
                                if (r10_2 s>= rax_54)
                                    rcx_29 = rax_54 * 2 - r10_2 - 1
                                
                                int32_t rax_55 = rax_54 - 1
                                
                                if (rcx_29 s>= 0)
                                    rax_55 = rcx_29
                                
                                uint16_t r8_13 =
                                    *(*(r15_1 + (sx.q(rax_55) << 3)) + (sx.q(r8_12) << 1))
                                i_8.w = r8_13
                                int64_t r11_1 = *(arg1 + 0x18)
                                uint16_t rcx_33
                                
                                if (r11_1 == 0)
                                    rcx_33 = r8_13 u>> 8 << 8 | zx.w(r8_13.b)
                                else
                                    rcx_33 = *(r11_1 + (zx.q(r8_13) << 1))
                                
                                *(k_1 + *(r14_2 + j_1 * 0x10)) =
                                    (*((zx.q(rcx_33) << 2) + &data_1436bbc50))[0]
                                rdx_32 += 1
                                k_1 = &k_1[1]
                                temp6_1 = rbx_2
                                rbx_2 -= 1
                            while (temp6_1 != 1)
                            r10_2 += 1
                        while (k_1 s< 0x100)
                        
                        j_4 += 1
                        r8_10 = *(arg1 + 0x30)
                        r9_2 = *(arg1 + 0x28)
                        j_1 = zx.q(j_4)
                        r12_1 = var_2c0_2
                        r10_1 = zx.q(var_2cc_1)
                        r11 = rbx_2
                    while (j_1 u< (r8_10 - r9_2) s/ 0x18)
                    
                    rcx_28 = r8_10
                    r12 = var_2b0
                    rbx_1 = var_298
                    rdi = var_2c8
                
                void* r10_3 = arg1 + 0x58
                
                if ((rcx_28 - r9_2) s/ 0x18 == 3)
                    int64_t* rcx_37 = *r10_3
                    sub_142999830(*rcx_37, rcx_37[2], rcx_37[4])
                    r8_10 = *(arg1 + 0x30)
                    r11 = nullptr
                
                int32_t j_5 = r11.d
                int64_t rax_68
                int64_t rdx_40
                rdx_40:rax_68 = muls.dp.q(0x2aaaaaaaaaaaaaab, r8_10 - *(arg1 + 0x28))
                int64_t rdx_41 = rdx_40 s>> 2
                
                if (rdx_41 != neg.q(rdx_41 u>> 0x3f))
                    uint64_t j_2 = 0
                    int64_t rdx_51
                    
                    do
                        uint64_t r14_4 = j_2 * 2
                        float zmm7_1
                        zmm6, zmm7_1 = sub_14299a160(*(*r10_3 + (r14_4 << 3)))
                        uint32_t (* k_2)[0x4] = nullptr
                        int16_t var_d8[0x40]
                        int16_t* rdi_2 = &var_d8
                        int128_t zmm1_2
                        int32_t zmm2_1
                        
                        if (j_5 != 0)
                            do
                                zmm0_3 = *(k_2 + *(*r10_3 + (r14_4 << 3)))
                                uint32_t var_2d8_4 = zmm0_3[0]
                                zmm0_3[0] f- zmm7_1
                                uint16_t r9_8
                                
                                if (is_unordered.d(zmm0_3[0], zmm7_1) || zmm0_3[0] f!= zmm7_1)
                                    int16_t r8_17 =
                                        *((zx.q(var_2d8_4) u>> 0x17 << 1) + &data_1436fbc50)
                                    
                                    if (r8_17 == 0)
                                        r9_8 = sub_142c998f0(var_2d8_4)
                                        r10_3 = arg1 + 0x58
                                    else
                                        int32_t rcx_50 = var_2d8_4 & 0x7fffff
                                        r9_8 = ((rcx_50 + 0xfff + (rcx_50 u>> 0xd & 1)) u>> 0xd).w
                                            + r8_17
                                else
                                    r9_8 = (var_2d8_4 u>> 0x10).w
                                
                                zmm1_2.d = (*(arg1 + k_2 + 0x180)).d f* *(arg1 + 8)
                                uint64_t r8_18 = zx.q(r9_8)
                                zmm2_1 = *((r8_18 << 2) + &data_1436bbc50)
                                uint32_t rdx_47 = zx.d(*((zx.q(r8_18.d) u>> 8 << 1) + 0x1435b5220))
                                    + zx.d(*((zx.q(r8_18.b) << 1) + 0x1435b5220))
                                int16_t* rcx_54 =
                                    (zx.q(*((r8_18 << 2) + 0x143b86af0)) << 1) + 0x143bc6af0
                                int32_t rdx_48 = rdx_47 - 1
                                uint64_t rax_94
                                
                                if (rdx_47 - 1 s< 0)
                                label_14299c019:
                                    rax_94 = zx.q(r9_8)
                                else
                                    while (true)
                                        rax_94 = zx.q(*rcx_54)
                                        zmm0_3 = *((rax_94 << 2) + &data_1436bbc50)
                                        zmm0_3[0] = zmm0_3[0] f- zmm2_1
                                        
                                        if (zmm1_2.d f> _mm_cvtpd_ps(_mm_and_ps(
                                                _mm_cvtps_pd(zmm0_3[0].q), zmm6))[0])
                                            break
                                        
                                        rcx_54 = &rcx_54[1]
                                        int32_t temp7_1 = rdx_48
                                        rdx_48 -= 1
                                        
                                        if (temp7_1 - 1 s< 0)
                                            goto label_14299c019
                                
                                *rdi_2 = rax_94.w
                                k_2 = &(*k_2)[1]
                                rdi_2 = &rdi_2[1]
                            while (k_2 s< 0x100)
                        else
                            do
                                zmm0_3 = *(k_2 + *(*r10_3 + (r14_4 << 3)))
                                uint32_t var_2d8_3 = zmm0_3[0]
                                zmm0_3[0] f- zmm7_1
                                uint16_t r9_4
                                
                                if (is_unordered.d(zmm0_3[0], zmm7_1) || zmm0_3[0] f!= zmm7_1)
                                    int16_t r8_15 =
                                        *((zx.q(var_2d8_3) u>> 0x17 << 1) + &data_1436fbc50)
                                    
                                    if (r8_15 == 0)
                                        r9_4 = sub_142c998f0(var_2d8_3)
                                        r10_3 = arg1 + 0x58
                                    else
                                        int32_t rcx_44 = var_2d8_3 & 0x7fffff
                                        r9_4 = ((rcx_44 + 0xfff + (rcx_44 u>> 0xd & 1)) u>> 0xd).w
                                            + r8_15
                                else
                                    r9_4 = (var_2d8_3 u>> 0x10).w
                                
                                zmm1_2.d = (*(arg1 + k_2 + 0x80)).d f* *(arg1 + 8)
                                uint64_t r8_16 = zx.q(r9_4)
                                zmm2_1 = *((r8_16 << 2) + &data_1436bbc50)
                                uint32_t rdx_44 = zx.d(*((zx.q(r8_16.d) u>> 8 << 1) + 0x1435b5220))
                                    + zx.d(*((zx.q(r8_16.b) << 1) + 0x1435b5220))
                                int16_t* rcx_48 =
                                    (zx.q(*((r8_16 << 2) + 0x143b86af0)) << 1) + 0x143bc6af0
                                int32_t rdx_45 = rdx_44 - 1
                                uint64_t rax_82
                                
                                if (rdx_44 - 1 s< 0)
                                label_14299bef9:
                                    rax_82 = zx.q(r9_4)
                                else
                                    while (true)
                                        rax_82 = zx.q(*rcx_48)
                                        zmm0_3 = *((rax_82 << 2) + &data_1436bbc50)
                                        zmm0_3[0] = zmm0_3[0] f- zmm2_1
                                        
                                        if (zmm1_2.d f> _mm_cvtpd_ps(_mm_and_ps(
                                                _mm_cvtps_pd(zmm0_3[0].q), zmm6))[0])
                                            break
                                        
                                        rcx_48 = &rcx_48[1]
                                        int32_t temp8_1 = rdx_45
                                        rdx_45 -= 1
                                        
                                        if (temp8_1 - 1 s< 0)
                                            goto label_14299bef9
                                
                                *rdi_2 = rax_82.w
                                k_2 = &(*k_2)[1]
                                rdi_2 = &rdi_2[1]
                            while (k_2 s< 0x100)
                        int128_t var_258
                        __builtin_memcpy(&var_258, 
                            "\x00\x00\x00\x00\x01\x00\x00\x00\x08\x00\x00\x00\x10\x00\x00\x00\x09\x00\x"
                        "00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x0a\x00\x00\x00\x11\x00\x00\x00\x18"
                        "00\x00\x00\x20\x00\x00\x00\x19\x00\x00\x00\x12\x00\x00\x00\x0b\x00\x00\x00"
                        "04\x00\x00\x00\x05\x00\x00\x00\x0c\x00\x00\x00\x13\x00\x00\x00\x1a\x00\x00"
                        "00\x21\x00\x00\x00\x28\x00\x00\x00\x30\x00\x00\x00\x29\x00\x00\x00\x22\x00"
                        "00\x00\x1b\x00\x00\x00\x14\x00\x00\x00\x0d\x00\x00\x00\x06\x00\x00\x00\x07"
                        "00\x00\x00\x0e\x00\x00\x00\x15\x00\x00\x00\x1c\x00\x00\x00\x"
                        "
                            0x100)
                        int16_t var_158
                        
                        for (int64_t k_3 = 0; k_3 s< 0x40; k_3 += 0x20)
                            (&var_158)[k_3] = var_d8[sx.q(*(&var_258 + (k_3 << 2)))]
                            void var_156
                            *(&var_156 + (k_3 << 1)) = var_d8[sx.q(*(&var_258:4 + (k_3 << 2)))]
                            void var_154
                            *(&var_154 + (k_3 << 1)) = var_d8[sx.q(*(&var_258:8 + (k_3 << 2)))]
                            void var_152
                            *(&var_152 + (k_3 << 1)) = var_d8[sx.q(*(&var_258:0xc + (k_3 << 2)))]
                            int128_t var_248
                            void var_150
                            *(&var_150 + (k_3 << 1)) = var_d8[sx.q(*(&var_248 + (k_3 << 2)))]
                            void var_14e
                            *(&var_14e + (k_3 << 1)) = var_d8[sx.q(*(&var_248:4 + (k_3 << 2)))]
                            void var_14c
                            *(&var_14c + (k_3 << 1)) = var_d8[sx.q(*(&var_248:8 + (k_3 << 2)))]
                            void var_14a
                            *(&var_14a + (k_3 << 1)) = var_d8[sx.q(*(&var_248:0xc + (k_3 << 2)))]
                            int128_t var_238
                            void var_148
                            *(&var_148 + (k_3 << 1)) = var_d8[sx.q(*(&var_238 + (k_3 << 2)))]
                            void var_146
                            *(&var_146 + (k_3 << 1)) = var_d8[sx.q(*(&var_238:4 + (k_3 << 2)))]
                            void var_144
                            *(&var_144 + (k_3 << 1)) = var_d8[sx.q(*(&var_238:8 + (k_3 << 2)))]
                            void var_142
                            *(&var_142 + (k_3 << 1)) = var_d8[sx.q(*(&var_238:0xc + (k_3 << 2)))]
                            int128_t var_228
                            void var_140
                            *(&var_140 + (k_3 << 1)) = var_d8[sx.q(*(&var_228 + (k_3 << 2)))]
                            void var_13e
                            *(&var_13e + (k_3 << 1)) = var_d8[sx.q(*(&var_228:4 + (k_3 << 2)))]
                            void var_13c
                            *(&var_13c + (k_3 << 1)) = var_d8[sx.q(*(&var_228:8 + (k_3 << 2)))]
                            void var_13a
                            *(&var_13a + (k_3 << 1)) = var_d8[sx.q(*(&var_228:0xc + (k_3 << 2)))]
                            int128_t var_218
                            void var_138
                            *(&var_138 + (k_3 << 1)) = var_d8[sx.q(*(&var_218 + (k_3 << 2)))]
                            void var_136
                            *(&var_136 + (k_3 << 1)) = var_d8[sx.q(*(&var_218:4 + (k_3 << 2)))]
                            void var_134
                            *(&var_134 + (k_3 << 1)) = var_d8[sx.q(*(&var_218:8 + (k_3 << 2)))]
                            void var_132
                            *(&var_132 + (k_3 << 1)) = var_d8[sx.q(*(&var_218:0xc + (k_3 << 2)))]
                            int128_t var_208
                            void var_130
                            *(&var_130 + (k_3 << 1)) = var_d8[sx.q(*(&var_208 + (k_3 << 2)))]
                            void var_12e
                            *(&var_12e + (k_3 << 1)) = var_d8[sx.q(*(&var_208:4 + (k_3 << 2)))]
                            void var_12c
                            *(&var_12c + (k_3 << 1)) = var_d8[sx.q(*(&var_208:8 + (k_3 << 2)))]
                            void var_12a
                            *(&var_12a + (k_3 << 1)) = var_d8[sx.q(*(&var_208:0xc + (k_3 << 2)))]
                            int128_t var_1f8
                            void var_128
                            *(&var_128 + (k_3 << 1)) = var_d8[sx.q(*(&var_1f8 + (k_3 << 2)))]
                            void var_126
                            *(&var_126 + (k_3 << 1)) = var_d8[sx.q(*(&var_1f8:4 + (k_3 << 2)))]
                            void var_124
                            *(&var_124 + (k_3 << 1)) = var_d8[sx.q(*(&var_1f8:8 + (k_3 << 2)))]
                            void var_122
                            *(&var_122 + (k_3 << 1)) = var_d8[sx.q(*(&var_1f8:0xc + (k_3 << 2)))]
                            int128_t var_1e8
                            void var_120
                            *(&var_120 + (k_3 << 1)) = var_d8[sx.q(*(&var_1e8 + (k_3 << 2)))]
                            void var_11e
                            *(&var_11e + (k_3 << 1)) = var_d8[sx.q(*(&var_1e8:4 + (k_3 << 2)))]
                            void var_11c
                            *(&var_11c + (k_3 << 1)) = var_d8[sx.q(*(&var_1e8:8 + (k_3 << 2)))]
                            int16_t var_11a[0x21]
                            var_11a[k_3] = var_d8[sx.q(*(&var_1e8:0xc + (k_3 << 2)))]
                        
                        for (int64_t k_4 = 0; k_4 s< 0x40; k_4 += 1)
                            uint16_t rcx_87 = (&var_158)[k_4]
                            i_8.b = rcx_87.b
                            i_8:1.b = (rcx_87 u>> 8).b
                            (&var_158)[k_4] = i_8.w
                        
                        rbx_1 = var_298
                        *rbx_1[j_2] = var_158
                        rbx_1[j_2] += 2
                        *(arg1 + 0x24) += 1
                        
                        for (int32_t k_5 = 1; k_5 s< 0x40; )
                            int32_t rdx_49 = 1
                            int16_t rcx_89 = (&var_158)[sx.q(k_5)]
                            
                            if (rcx_89 == 0)
                                int32_t rcx_90 = k_5 + 1
                                
                                if (rcx_90 s>= 0x40)
                                    rdx_49 = 1
                                    *r12 = 0
                                else
                                    while ((&var_158)[sx.q(rcx_90)] == 0)
                                        rdx_49 += 1
                                        rcx_90 += 1
                                        
                                        if (rcx_90 s>= 0x40)
                                            break
                                    
                                    if (rdx_49 == 1)
                                        rdx_49 = 1
                                        *r12 = 0
                                    else if (rdx_49 + k_5 != 0x40)
                                        *r12 = rdx_49.w | 0xff00
                                    else
                                        *r12 = 0xff00
                            else
                                *r12 = rcx_89
                            
                            *(arg1 + 0x20) += 1
                            k_5 += rdx_49
                            r12 = &r12[1]
                        
                        j_5 += 1
                        r8_10 = *(arg1 + 0x30)
                        int64_t rax_134
                        int64_t rdx_50
                        rdx_50:rax_134 = muls.dp.q(0x2aaaaaaaaaaaaaab, r8_10 - *(arg1 + 0x28))
                        rdx_51 = rdx_50 s>> 2
                        j_2 = zx.q(j_5)
                        r10_3 = arg1 + 0x58
                    while (j_2 u< rdx_51 + (rdx_51 u>> 0x3f))
                    var_2b0 = r12
                    rdi = var_2c8
                    r11 = nullptr
                
                r10_5 = var_2d0_3 + 1
                var_2d0_3 = r10_5
                r14 = arg1 + 0x58
                r10_1 = zx.q(var_2cc_1)
            while (r10_5 s< rdi)
            i_3 = i_4
        
        r10_1 = zx.q(r10_1.d + 1)
        var_2cc_1 = r10_1.d
        r14 = arg1 + 0x58
    while (r10_1.d s< i_3)

char* rcx_93 = var_280

if (rcx_93 != 0)
    char* rax_140 = rcx_93
    int64_t var_270
    
    if (((var_270 - rcx_93) s>> 1) * 2 u>= 0x1000)
        rcx_93 = *(rcx_93 - 8)
        
        if (rax_140 - rcx_93 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_93)

int64_t* rax_143 = rbx_1
int64_t var_288

if (((var_288 - rbx_1) & 0xfffffffffffffff8) u>= 0x1000)
    rbx_1 = rbx_1[-1]
    
    if (rax_143 - rbx_1 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn

int64_t result = j_sub_140a74f90(rbx_1)
__security_check_cookie(rax_1 ^ &var_2f8)
return result
