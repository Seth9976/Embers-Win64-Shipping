// 函数: sub_141529db0
// 地址: 0x141529db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *arg1
uint128_t zmm5 = 0x3fe0000000000000
uint128_t zmm6 = -0x8000000000000000
uint128_t zmm2 = zx.o(*(rdi + 0x78))
uint128_t zmm10 = zx.o(0)
uint128_t zmm11 = zx.o(0)
uint128_t zmm12 = zx.o(0)
int64_t rbp = sx.q(arg3)
int64_t r8 = sx.q(rdi[0x32] * arg4)
int64_t rcx = *(*(rdi + 0xb0) + (rbp << 3))
uint128_t zmm7 = zx.o(*(rcx + (r8 << 3)))
void* rax_3 = rcx + (r8 << 3)
uint128_t zmm8 = zx.o(*(rax_3 + 8))
uint128_t zmm13 = zx.o(*(rax_3 + 0x10))
uint64_t var_118 = zmm7.q
uint64_t var_110 = zmm8.q
uint64_t var_e8 = zmm13.q
int32_t rax_4
uint128_t zmm4

if (rdi[0x28].b == 0)
    zmm2.q = zmm2.q f- zmm7.q
    rax_4 = arg5
    zmm4.q = *(rdi + 0x70) f- zmm7.q
else
    zmm2.q = zmm2.q f- *(rdi + 0x70)
    rax_4 = *rdi
    zmm2.q = zmm2.q f* zmm5.q
    zmm4 = zmm2 ^ zmm6

uint128_t zmm0 = zx.o(*(rdi + 0x88))
int32_t r13
uint128_t zmm3

if (*(rdi + 0xa1) == 0)
    zmm0.q = zmm0.q f- zmm8.q
    r13 = arg6
    zmm3.q = *(rdi + 0x80) f- zmm8.q
else
    zmm0.q = zmm0.q f- *(rdi + 0x80)
    r13 = rdi[1]
    zmm0.q = zmm0.q f* zmm5.q
    zmm3 = zmm0 ^ zmm6

uint128_t zmm1 = zx.o(*(rdi + 0x98))
int32_t r12

if (*(rdi + 0xa2) == 0)
    zmm1.q = zmm1.q f- zmm13.q
    r12 = arg7
    zmm5.q = *(rdi + 0x90) f- zmm13.q
else
    zmm1.q = zmm1.q f- *(rdi + 0x90)
    r12 = rdi[2]
    zmm1.q = zmm1.q f* zmm5.q
    zmm5 = zmm1 ^ zmm6

uint128_t zmm9
uint128_t var_78 = zmm9
uint128_t zmm14
uint128_t var_c8 = zmm14
uint128_t zmm15
uint128_t var_d8 = zmm15
sub_1415271a0(arg2, zmm4.q, zmm2.q, zmm3.q, zmm0.q, zmm5.q, zmm1.q)
int64_t* r14 = *(rdi + 0x50)
int64_t result

if (r14 u>= *(rdi + 0x58))
label_141529fca:
    int32_t var_15c_1 = 3
    void* const r13_1 = &data_142fc2858
    int32_t rdi_1 = 0
    void* const var_108_1 = &data_142fc2858
    int32_t rcx_5 = arg3 - (rdi[1] * r12 + r13) * *rdi - rax_4
    double var_198
    double zmm2_1
    uint128_t zmm3_1
    uint128_t zmm4_1
    uint128_t zmm5_1
    
    if (arg4 s<= 0)
    label_14152a091:
        int32_t i = rdi_1 + 1
        
        if (i s< *(arg1[0xc] + (rbp << 2)))
            int64_t r14_2 = sx.q(i) << 2
            
            do
                int64_t rdx_3 = sx.q(*(arg1 + 0x4c) * i)
                int64_t rcx_9 = *(arg1[0xb] + (rbp << 3))
                zmm2_1 = *(rcx_9 + (rdx_3 << 3)) f- zmm7.q
                zmm3_1.q = *(rcx_9 + (rdx_3 << 3) + 8) f- zmm8.q
                zmm5_1.q = *(rcx_9 + (rdx_3 << 3) + 0x10) f- zmm13.q
                zmm4_1.q = zmm3_1.q f* zmm3_1.q
                var_198.d = *(r14_2 + *(arg1[0xa] + (rbp << 3)))
                zmm4_1.q = zmm4_1.q f+ zmm2_1 * zmm2_1
                zmm4_1.q = zmm4_1.q f+ zmm5_1.q f* zmm5_1.q
                uint64_t var_1a0_2 = zmm4_1.q
                uint64_t var_1a8_3 = zmm5_1.q
                
                if (sub_141522e90(arg2, arg2).b == 0)
                    goto label_14152b3aa_1
                
                i += 1
                r14_2 += 4
            while (i s< *(arg1[0xc] + (rbp << 2)))
        
        uint128_t zmm0_2 = sub_141527890(arg2)
        void* rax_23 = *arg1
        zmm9 = zmm0_2
        uint128_t zmm2_2 = 0x4020000000000000
        zmm6.q = zmm7.q f- *(rax_23 + 0x70)
        uint128_t zmm3_2
        zmm3_2.q = zmm8.q f- *(rax_23 + 0x80)
        zmm4_1.q = zmm13.q f- *(rax_23 + 0x90)
        uint128_t zmm1_2 = _mm_cvtepi32_pd(zx.q(arg5))
        zmm0_2 = _mm_cvtepi32_pd(zx.q(arg7))
        zmm1_2.q = zmm1_2.q f* *(rax_23 + 0x18)
        zmm0_2.q = zmm0_2.q f* *(rax_23 + 0x28)
        zmm6.q = zmm6.q f- zmm1_2.q
        zmm4_1.q = zmm4_1.q f- zmm0_2.q
        uint64_t var_128_1 = zmm6.q
        zmm1_2.q = _mm_cvtepi32_pd(zx.q(arg6)).q f* *(rax_23 + 0x20)
        uint64_t var_138_1 = zmm4_1.q
        zmm3_2.q = zmm3_2.q f- zmm1_2.q
        zmm1_2.q = zmm6.q f* arg1[4]
        uint64_t var_130_1 = zmm3_2.q
        zmm0_2.q = zmm3_2.q f* arg1[5]
        zmm1_2.q = zmm1_2.q f* zmm2_2.q
        zmm0_2.q = zmm0_2.q f* zmm2_2.q
        int32_t r8_1 = int.d(zmm1_2.q)
        zmm1_2.q = zmm4_1.q f* arg1[6]
        int32_t rcx_13 = int.d(zmm0_2.q)
        zmm1_2.q = zmm1_2.q f* zmm2_2.q
        uint64_t rdx_5 = zx.q(int.d(zmm1_2.q))
        int32_t rdi_2
        int32_t r14_3
        
        if (r8_1 s< 4)
            rdi_2 = 0
            r14_3 = 0
            zmm15.q = arg1[1] f- zmm6.q
        else
            zmm15 = zmm6
            int32_t rax_24 = 7 - r8_1
            bool cond:3_1 = 7 - r8_1 s>= 0
            r14_3 = 0x60007f
            r8_1 = 0
            rdi_2 = 0x200001
            
            if (cond:3_1)
                r8_1 = rax_24
        
        int32_t arg_8 = r14_3
        int32_t var_164_1 = rdi_2
        
        if (rcx_13 s< 4)
            zmm14.q = arg1[2] f- zmm3_2.q
        else
            r14_3 |= 0x3003f80
            rdi_2 |= 0x1000080
            arg_8 = r14_3
            int32_t rax_25 = 7 - rcx_13
            bool cond:4_1 = 7 - rcx_13 s>= 0
            var_164_1 = rdi_2
            rcx_13 = 0
            zmm14 = zmm3_2
            
            if (cond:4_1)
                rcx_13 = rax_25
        
        if (rdx_5.d s< 4)
            zmm13.q = arg1[3] f- zmm4_1.q
        else
            r14_3 |= 0x181fc000
            rdi_2 |= 0x8004000
            int32_t r9 = 7 - rdx_5.d
            bool cond:5_1 = 7 - rdx_5.d s>= 0
            arg_8 = r14_3
            rdx_5 = 0
            var_164_1 = rdi_2
            
            if (cond:5_1)
                rdx_5 = zx.q(r9)
            
            zmm13 = zmm4_1
        
        zmm15.q = zmm15.q f* zmm15.q
        int32_t r11_1 = 0
        zmm14.q = zmm14.q f* zmm14.q
        int64_t rdx_6 = sx.q((r8_1 + ((rcx_13 + (rdx_5 << 2).d) << 2)) << 6)
        zmm13.q = zmm13.q f* zmm13.q
        int64_t i_3 = 0
        int32_t var_168_1 = 0
        int64_t r15_1 = arg1[0x10] + (rdx_6 << 3)
        int64_t rax_28 = arg1[0xf]
        int64_t r12_1 = sx.q(*(rax_28 + (rdx_6 << 2)))
        result = rax_28 + (rdx_6 << 2)
        int64_t result_1 = result
        int64_t var_f0_1 = r15_1
        
        while (true)
            if (r11_1 == var_15c_1)
                zmm9 = sub_141527890(arg2)
                zmm3_2 = zx.o(var_130_1)
                zmm4_1 = zx.o(var_138_1)
                r11_1 = var_168_1
                
                if (r13_1 != data_1439b8d38)
                    int32_t rax_29 = *r13_1
                    r13_1 += 4
                    var_108_1 = r13_1
                    var_15c_1 = rax_29
                
                result = result_1
            
            if (zmm9.q f< *(r15_1 + (i_3 << 3)))
                break
            
            int32_t r9_1 = *(result + (i_3 << 2) + 4)
            i_3 += 1
            int32_t r10_1 = r12
            int32_t r9_3 = (r9_1 ^ r14_3) + rdi_2
            r11_1 += 1
            var_168_1 = r11_1
            int32_t r15_3 = rax_4 + (r9_3 & 0x7f) - 0x40
            uint64_t var_100
            
            if (rax_4 + (r9_3 & 0x7f) - 0x40 s>= 0 && r15_3 s< arg1[7].d)
                int32_t r14_5 = r13 + (r9_3 u>> 7 & 0x7f) - 0x40
                
                if (r13 + (r9_3 u>> 7 & 0x7f) - 0x40 s>= 0 && r14_5 s< *(arg1 + 0x3c))
                    int32_t rdi_3 = (r9_3 u>> 0xe & 0x7f) - 0x40 + r10_1
                    
                    if (rdi_3 s>= 0 && rdi_3 s< arg1[8].d)
                        char rax_30 = sub_14152c270(arg1, (r9_3 & 0x7f) - 0x40, 
                            (r9_3 u>> 7 & 0x7f) - 0x40, (r9_3 u>> 0xe & 0x7f) - 0x40, zmm6.q, 
                            zmm3_2.q, zmm4_1.q, zmm15.q, zmm14.q, zmm13.q, &var_100, zmm9.q)
                        
                        if (rax_30 == 0)
                            int32_t* rcx_18 = *arg1
                            
                            if (rcx_18[0x28].b != rax_30)
                                int32_t rdx_10 = *rcx_18
                                int32_t r8_7 = arg5 + r15_3
                                
                                if (r8_7 s< rdx_10)
                                    r15_3 += rdx_10
                                    zmm12.q = *(rcx_18 + 0x70) f- *(rcx_18 + 0x78)
                                else if (r8_7 s< rdx_10 * 2)
                                    zmm12 = zx.o(0)
                                else
                                    r15_3 -= rdx_10
                                    zmm12.q = *(rcx_18 + 0x78) f- *(rcx_18 + 0x70)
                            
                            if (*(rcx_18 + 0xa1) != 0)
                                int32_t rdx_11 = rcx_18[1]
                                int32_t r8_9 = arg6 + r14_5
                                
                                if (r8_9 s< rdx_11)
                                    r14_5 += rdx_11
                                    zmm11.q = *(rcx_18 + 0x80) f- *(rcx_18 + 0x88)
                                else if (r8_9 s< rdx_11 * 2)
                                    zmm11 = zx.o(0)
                                else
                                    r14_5 -= rdx_11
                                    zmm11.q = *(rcx_18 + 0x88) f- *(rcx_18 + 0x80)
                            
                            if (*(rcx_18 + 0xa2) != 0)
                                int32_t rdx_12 = rcx_18[2]
                                int32_t r8_11 = arg7 + rdi_3
                                
                                if (r8_11 s< rdx_12)
                                    rdi_3 += rdx_12
                                    zmm10.q = *(rcx_18 + 0x90) f- *(rcx_18 + 0x98)
                                else if (r8_11 s< rdx_12 * 2)
                                    zmm10 = zx.o(0)
                                else
                                    rdi_3 -= rdx_12
                                    zmm10.q = *(rcx_18 + 0x98) f- *(rcx_18 + 0x90)
                            
                            int64_t rbp_1 =
                                sx.q((rcx_18[1] * rdi_3 + r14_5) * *rcx_18 + r15_3 + rcx_5)
                            
                            if (*(arg1[0xc] + (rbp_1 << 2)) s> 0)
                                zmm6.q = zmm7.q f- zmm12.q
                                zmm7.q = zmm8.q f- zmm11.q
                                int32_t i_1 = 0
                                zmm8.q = var_e8 f- zmm10.q
                                int32_t* r14_6 = nullptr
                                
                                if (var_100 f> zmm9.q)
                                    do
                                        int64_t rdx_15 = sx.q(i_1 * *(arg1 + 0x4c))
                                        int64_t rcx_22 = *(arg1[0xb] + (rbp_1 << 3))
                                        zmm2_2.q = *(rcx_22 + (rdx_15 << 3)) f- zmm6.q
                                        zmm3_2.q = *(rcx_22 + (rdx_15 << 3) + 8) f- zmm7.q
                                        zmm5_1.q = *(rcx_22 + (rdx_15 << 3) + 0x10) f- zmm8.q
                                        zmm0_2.q = zmm2_2.q f* zmm2_2.q
                                        zmm4_1.q = zmm3_2.q f* zmm3_2.q
                                        zmm1_2.q = zmm5_1.q f* zmm5_1.q
                                        zmm4_1.q = zmm4_1.q f+ zmm0_2.q
                                        zmm4_1.q = zmm4_1.q f+ zmm1_2.q
                                        
                                        if (not(zmm4_1.q f>= zmm9.q))
                                            var_198.d = *(r14_6 + *(arg1[0xa] + (rbp_1 << 3)))
                                            uint64_t var_1a0_5 = zmm4_1.q
                                            uint64_t var_1a8_6 = zmm5_1.q
                                            
                                            if (sub_141522e90(arg2, arg2).b == 0)
                                                goto label_14152b3aa_1
                                        
                                        i_1 += 1
                                        r14_6 = &r14_6[1]
                                    while (i_1 s< *(arg1[0xc] + (rbp_1 << 2)))
                                else
                                    do
                                        int64_t rdx_13 = sx.q(i_1 * *(arg1 + 0x4c))
                                        int64_t rcx_19 = *(arg1[0xb] + (rbp_1 << 3))
                                        zmm2_2.q = *(rcx_19 + (rdx_13 << 3)) f- zmm6.q
                                        zmm3_2.q = *(rcx_19 + (rdx_13 << 3) + 8) f- zmm7.q
                                        zmm5_1.q = *(rcx_19 + (rdx_13 << 3) + 0x10) f- zmm8.q
                                        zmm4_1.q = zmm3_2.q f* zmm3_2.q
                                        var_198.d = *(r14_6 + *(arg1[0xa] + (rbp_1 << 3)))
                                        zmm0_2.q = zmm2_2.q f* zmm2_2.q
                                        zmm1_2.q = zmm5_1.q f* zmm5_1.q
                                        zmm4_1.q = zmm4_1.q f+ zmm0_2.q
                                        zmm4_1.q = zmm4_1.q f+ zmm1_2.q
                                        uint64_t var_1a0_4 = zmm4_1.q
                                        uint64_t var_1a8_5 = zmm5_1.q
                                        
                                        if (sub_141522e90(arg2, arg2).b == 0)
                                            goto label_14152b3aa_1
                                        
                                        i_1 += 1
                                        r14_6 = &r14_6[1]
                                    while (i_1 s< *(arg1[0xc] + (rbp_1 << 2)))
                                
                                zmm6 = zx.o(var_128_1)
                                zmm8 = zx.o(var_110)
                                zmm7 = zx.o(var_118)
                        
                        result = result_1
                        r11_1 = var_168_1
                        r10_1 = r12
                    
                    rdi_2 = var_164_1
                
                r14_3 = arg_8
            
            zmm3_2 = zx.o(var_130_1)
            zmm4_1 = zx.o(var_138_1)
            r15_1 = var_f0_1
            
            if (i_3 s>= r12_1)
                arg1[0xe].d += 1
                
                if (arg1[0xe].d == 0xffffffff)
                    int32_t* i_2 = arg1[0x11]
                    
                    if (i_2 u< &i_2[sx.q(arg1[9].d)])
                        do
                            *i_2 = 0
                            i_2 = &i_2[1]
                        while (i_2 u< arg1[0x11] + (sx.q(arg1[9].d) << 2))
                    
                    arg1[0xe].d = 1
                
                int32_t* r13_2 = arg1[0x12]
                int32_t* var_120 = r13_2
                int32_t* rcx_28 = r13_2
                int32_t* var_150 = rcx_28
                
                if (i_3 s< 0x3f)
                    do
                        if (r11_1 == var_15c_1)
                            zmm9 = sub_141527890(arg2)
                            r11_1 = var_168_1
                            
                            if (var_108_1 != data_1439b8d38)
                                int32_t rcx_30 = *var_108_1
                                var_108_1 += 4
                                var_15c_1 = rcx_30
                        
                        if (zmm9.q f< *(var_f0_1 + (i_3 << 3)))
                            goto label_14152b3ae
                        
                        i_3 += 1
                        r11_1 += 1
                        var_168_1 = r11_1
                        int32_t rdi_6 = (*(result_1 + (i_3 << 2)) ^ r14_3) + var_164_1
                        int32_t r13_4 = rax_4 + (rdi_6 & 0x7f) - 0x40
                        
                        if (rax_4 + (rdi_6 & 0x7f) - 0x40 s< 0)
                            r10_1 = r12
                        else
                            int32_t rcx_31 = arg1[7].d
                            
                            if (r13_4 s>= rcx_31)
                                r10_1 = r12
                            else
                                int32_t r12_3 = r13 + (rdi_6 u>> 7 & 0x7f) - 0x40
                                r10_1 = r12
                                
                                if (r13 + (rdi_6 u>> 7 & 0x7f) - 0x40 s>= 0)
                                    int32_t rax_58 = *(arg1 + 0x3c)
                                    
                                    if (r12_3 s< rax_58)
                                        int32_t r15_4 = (rdi_6 u>> 0xe & 0x7f) - 0x40 + r10_1
                                        
                                        if (r15_4 s>= 0 && r15_4 s< arg1[8].d)
                                            int32_t* r14_7 = arg1[0x11] + ((
                                                sx.q((rax_58 * r15_4 + r12_3) * rcx_31)
                                                + sx.q(r13_4)) << 2)
                                            *r14_7 = arg1[0xe].d
                                            char rax_65 = sub_14152c270(arg1, 
                                                (rdi_6 & 0x7f) - 0x40, (rdi_6 u>> 7 & 0x7f) - 0x40, 
                                                (rdi_6 u>> 0xe & 0x7f) - 0x40, zmm6.q, var_130_1, 
                                                var_138_1, zmm15.q, zmm14.q, zmm13.q, &var_100, 
                                                zmm9.q)
                                            
                                            if (rax_65 == 0)
                                                int32_t* rcx_35 = *arg1
                                                int32_t r9_11 = r15_4
                                                int32_t r10_2 = r12_3
                                                int32_t r11_2 = r13_4
                                                
                                                if (rcx_35[0x28].b != rax_65)
                                                    int32_t rdx_20 = *rcx_35
                                                    int32_t r8_17 = arg5 + r13_4
                                                    
                                                    if (r8_17 s< rdx_20)
                                                        r11_2 = rdx_20 + r13_4
                                                        zmm12.q =
                                                            *(rcx_35 + 0x70) f- *(rcx_35 + 0x78)
                                                    else if (r8_17 s< rdx_20 * 2)
                                                        zmm12 = zx.o(0)
                                                    else
                                                        r11_2 -= rdx_20
                                                        zmm12.q =
                                                            *(rcx_35 + 0x78) f- *(rcx_35 + 0x70)
                                                
                                                if (*(rcx_35 + 0xa1) != 0)
                                                    int32_t rdx_21 = rcx_35[1]
                                                    int32_t r8_19 = arg6 + r12_3
                                                    
                                                    if (r8_19 s< rdx_21)
                                                        r10_2 = r12_3 + rdx_21
                                                        zmm11.q =
                                                            *(rcx_35 + 0x80) f- *(rcx_35 + 0x88)
                                                    else if (r8_19 s< rdx_21 * 2)
                                                        zmm11 = zx.o(0)
                                                    else
                                                        r10_2 -= rdx_21
                                                        zmm11.q =
                                                            *(rcx_35 + 0x88) f- *(rcx_35 + 0x80)
                                                
                                                if (*(rcx_35 + 0xa2) != 0)
                                                    int32_t rdx_22 = rcx_35[2]
                                                    int32_t r8_21 = arg7 + r15_4
                                                    
                                                    if (r8_21 s< rdx_22)
                                                        r9_11 = r15_4 + rdx_22
                                                        zmm10.q =
                                                            *(rcx_35 + 0x90) f- *(rcx_35 + 0x98)
                                                    else if (r8_21 s< rdx_22 * 2)
                                                        zmm10 = zx.o(0)
                                                    else
                                                        r9_11 -= rdx_22
                                                        zmm10.q =
                                                            *(rcx_35 + 0x98) f- *(rcx_35 + 0x90)
                                                
                                                int64_t rbp_2 = sx.q(
                                                    (rcx_35[1] * r9_11 + r10_2) * *rcx_35 + r11_2
                                                    + rcx_5)
                                                uint64_t var_1a8_7
                                                uint64_t var_1a0_6
                                                
                                                if (*(arg1[0xc] + (rbp_2 << 2)) s> 0)
                                                    zmm6.q = zmm7.q f- zmm12.q
                                                    zmm7.q = zmm8.q f- zmm11.q
                                                    int32_t j = 0
                                                    zmm8.q = var_e8 f- zmm10.q
                                                    int32_t* r14_8 = nullptr
                                                    
                                                    if (var_100 f> zmm9.q)
                                                        do
                                                            int64_t rdx_25 =
                                                                sx.q(*(arg1 + 0x4c) * j)
                                                            int64_t rcx_39 =
                                                                *(arg1[0xb] + (rbp_2 << 3))
                                                            zmm2_2.q =
                                                                *(rcx_39 + (rdx_25 << 3)) f- zmm6.q
                                                            zmm3_2.q =
                                                                *(rcx_39 + (rdx_25 << 3) + 8) f- zmm7.q
                                                            zmm5_1.q =
                                                                *(rcx_39 + (rdx_25 << 3) + 0x10)
                                                                f- zmm8.q
                                                            zmm0_2.q = zmm2_2.q f* zmm2_2.q
                                                            zmm4_1.q = zmm3_2.q f* zmm3_2.q
                                                            zmm1_2.q = zmm5_1.q f* zmm5_1.q
                                                            zmm4_1.q = zmm4_1.q f+ zmm0_2.q
                                                            zmm4_1.q = zmm4_1.q f+ zmm1_2.q
                                                            
                                                            if (not(zmm4_1.q f>= zmm9.q))
                                                                var_198.d =
                                                                    *(r14_8 + *(arg1[0xa] + (rbp_2 << 3)))
                                                                var_1a0_6 = zmm4_1.q
                                                                var_1a8_7 = zmm5_1.q
                                                                
                                                                if (sub_141522e90(arg2, arg2).b == 0)
                                                                    goto label_14152b3aa_1
                                                            
                                                            j += 1
                                                            r14_8 = &r14_8[1]
                                                        while (j s< *(arg1[0xc] + (rbp_2 << 2)))
                                                    else
                                                        do
                                                            int64_t rdx_23 =
                                                                sx.q(*(arg1 + 0x4c) * j)
                                                            int64_t rcx_36 =
                                                                *(arg1[0xb] + (rbp_2 << 3))
                                                            zmm2_2.q =
                                                                *(rcx_36 + (rdx_23 << 3)) f- zmm6.q
                                                            zmm3_2.q =
                                                                *(rcx_36 + (rdx_23 << 3) + 8) f- zmm7.q
                                                            zmm5_1.q =
                                                                *(rcx_36 + (rdx_23 << 3) + 0x10)
                                                                f- zmm8.q
                                                            zmm4_1.q = zmm3_2.q f* zmm3_2.q
                                                            var_198.d =
                                                                *(r14_8 + *(arg1[0xa] + (rbp_2 << 3)))
                                                            zmm0_2.q = zmm2_2.q f* zmm2_2.q
                                                            zmm1_2.q = zmm5_1.q f* zmm5_1.q
                                                            zmm4_1.q = zmm4_1.q f+ zmm0_2.q
                                                            zmm4_1.q = zmm4_1.q f+ zmm1_2.q
                                                            var_1a0_6 = zmm4_1.q
                                                            var_1a8_7 = zmm5_1.q
                                                            
                                                            if (sub_141522e90(arg2, arg2).b == 0)
                                                                goto label_14152b3aa_1
                                                            
                                                            j += 1
                                                            r14_8 = &r14_8[1]
                                                        while (j s< *(arg1[0xc] + (rbp_2 << 2)))
                                                    
                                                    zmm6 = zx.o(var_128_1)
                                                
                                                if (var_150 u> arg1[0x13] - 0x48)
                                                    sub_14152bed0(arg1, &var_120, &var_150)
                                                
                                                var_1a0_6.d = r15_4
                                                var_1a8_7.d = r12_3
                                                sub_14152d980(arg1, rdi_6, r14_7, r13_4, 
                                                    var_1a8_7.d, var_1a0_6.d, &var_150)
                                            
                                            r14_3 = arg_8
                                            r11_1 = var_168_1
                                            r10_1 = r12
                        
                        zmm7 = zx.o(var_118)
                        zmm8 = zx.o(var_110)
                    while (i_3 s< 0x3f)
                    
                    r13_2 = var_120
                    rcx_28 = var_150
                
                if (not(zmm9.q f< *(var_f0_1 + (sx.q(r11_1) << 3))) && r13_2 != rcx_28)
                    zmm9 = zx.o(var_118)
                    zmm13 = zx.o(var_110)
                    zmm14 = zx.o(var_138_1)
                    int32_t* rbp_3 = var_150
                    
                    while (true)
                        if (r13_2 == arg1[0x13])
                            r13_2 = arg1[0x12]
                        
                        int32_t r14_9 = *r13_2
                        int32_t r12_4 = r13_2[1]
                        int32_t rdi_7 = r13_2[2]
                        r13_2 = &r13_2[3]
                        zmm1_2 = zx.o(arg1[1])
                        zmm4_1 = zx.o(arg1[2])
                        zmm5_1 = zx.o(arg1[3])
                        zmm2_2 = _mm_cvtepi32_pd(zx.q(r14_9 - rax_4))
                        var_120 = r13_2
                        zmm2_2.q = zmm2_2.q f* zmm1_2.q
                        zmm2_2.q = zmm2_2.q f- zmm6.q
                        zmm1_2.q = zmm1_2.q f+ zmm2_2.q
                        zmm3_2.q = _mm_cvtepi32_pd(zx.q(r12_4 - r13)).q f* zmm4_1.q
                        zmm0_2.q = _mm_cvtepi32_pd(zx.q(rdi_7 - r10_1)).q f* zmm5_1.q
                        zmm3_2.q = zmm3_2.q f- var_130_1
                        zmm0_2.q = zmm0_2.q f- zmm14.q
                        zmm4_1.q = zmm4_1.q f+ zmm3_2.q
                        zmm5_1.q = zmm5_1.q f+ zmm0_2.q
                        
                        if (r14_9 s<= rax_4)
                            if (r14_9 s>= rax_4)
                                if (r12_4 s<= r13)
                                    if (r12_4 s< r13)
                                        if (rdi_7 s> r10_1)
                                            result, zmm6, zmm9, zmm11, zmm12 = sub_14152b620(arg1, 
                                                arg2, zmm2_2, zmm4_1, zmm0_2.q, zmm1_2.q, zmm3_2.q, 
                                                zmm5_1.q)
                                        else if (rdi_7 s>= r10_1)
                                            result, zmm6, zmm9 = sub_14152bb80(arg1, arg2, zmm2_2, 
                                                zmm4_1, zmm0_2.q, zmm1_2.q, zmm5_1.q)
                                        else
                                            result, zmm6, zmm9, zmm11, zmm12 = sub_14152b620(arg1, 
                                                arg2, zmm2_2, zmm4_1, zmm5_1.q, zmm1_2.q, zmm3_2.q, 
                                                zmm0_2.q)
                                        
                                        goto label_14152b11e
                                    
                                    uint64_t var_1a8_32
                                    uint64_t var_1a0_31
                                    
                                    if (rdi_7 s<= r10_1)
                                        if (rdi_7 s>= r10_1)
                                            goto label_14152b126
                                        
                                        var_198 = zmm4_1.q
                                        var_1a0_31 = zmm1_2.q
                                        var_1a8_32 = zmm5_1.q
                                        goto label_14152b119
                                    
                                    var_198 = zmm4_1.q
                                    var_1a0_31 = zmm1_2.q
                                    var_1a8_32 = zmm0_2.q
                                label_14152b119:
                                    result, zmm6, zmm9, zmm10 = sub_14152bc60(arg1, arg2, zmm2_2, 
                                        zmm3_2, var_1a8_32, var_1a0_31, var_198)
                                else if (rdi_7 s> r10_1)
                                    result, zmm6, zmm9, zmm11, zmm12 = sub_14152b620(arg1, arg2, 
                                        zmm2_2, zmm3_2, zmm0_2.q, zmm1_2.q, zmm4_1.q, zmm5_1.q)
                                else if (rdi_7 s>= r10_1)
                                    result, zmm6, zmm9 = sub_14152bb80(arg1, arg2, zmm2_2, zmm3_2, 
                                        zmm0_2.q, zmm1_2.q, zmm5_1.q)
                                else
                                    result, zmm6, zmm9, zmm11, zmm12 = sub_14152b620(arg1, arg2, 
                                        zmm2_2, zmm3_2, zmm5_1.q, zmm1_2.q, zmm4_1.q, zmm0_2.q)
                            else if (r12_4 s<= r13)
                                if (r12_4 s>= r13)
                                    if (rdi_7 s> r10_1)
                                        result, zmm6, zmm9, zmm11, zmm12 = sub_14152b7a0(arg1, 
                                            arg2, zmm1_2, zmm3_2, zmm0_2.q, zmm2_2.q, zmm4_1.q, 
                                            zmm5_1.q)
                                    else if (rdi_7 s>= r10_1)
                                        result, zmm6, zmm9 = sub_14152baa0(arg1, arg2, zmm1_2, 
                                            zmm3_2, zmm0_2.q, zmm4_1.q, zmm5_1.q)
                                    else
                                        result, zmm6, zmm9, zmm11, zmm12 = sub_14152b7a0(arg1, 
                                            arg2, zmm1_2, zmm3_2, zmm5_1.q, zmm2_2.q, zmm4_1.q, 
                                            zmm0_2.q)
                                else if (rdi_7 s> r10_1)
                                    result, zmm6, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                                        sub_14152b420(arg1, arg2, zmm1_2, zmm4_1, zmm0_2.q, 
                                        zmm2_2.q, zmm3_2.q, zmm5_1.q)
                                else if (rdi_7 s>= r10_1)
                                    result, zmm6, zmm9, zmm12 = sub_14152b920(arg1, arg2, zmm1_2, 
                                        zmm4_1, zmm0_2.q, zmm2_2.q, zmm3_2.q, zmm5_1.q)
                                else
                                    result, zmm6, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                                        sub_14152b420(arg1, arg2, zmm1_2, zmm4_1, zmm5_1.q, 
                                        zmm2_2.q, zmm3_2.q, zmm0_2.q)
                            else if (rdi_7 s> r10_1)
                                result, zmm6, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                                    sub_14152b420(arg1, arg2, zmm1_2, zmm3_2, zmm0_2.q, zmm2_2.q, 
                                    zmm4_1.q, zmm5_1.q)
                            else if (rdi_7 s>= r10_1)
                                result, zmm6, zmm9, zmm12 = sub_14152b920(arg1, arg2, zmm1_2, 
                                    zmm3_2, zmm0_2.q, zmm2_2.q, zmm4_1.q, zmm5_1.q)
                            else
                                result, zmm6, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                                    sub_14152b420(arg1, arg2, zmm1_2, zmm3_2, zmm5_1.q, zmm2_2.q, 
                                    zmm4_1.q, zmm0_2.q)
                        else if (r12_4 s<= r13)
                            if (r12_4 s>= r13)
                                if (rdi_7 s> r10_1)
                                    result, zmm6, zmm9, zmm11, zmm12 = sub_14152b7a0(arg1, arg2, 
                                        zmm2_2, zmm3_2, zmm0_2.q, zmm1_2.q, zmm4_1.q, zmm5_1.q)
                                else if (rdi_7 s>= r10_1)
                                    result, zmm6, zmm9 = sub_14152baa0(arg1, arg2, zmm2_2, zmm3_2, 
                                        zmm0_2.q, zmm4_1.q, zmm5_1.q)
                                else
                                    result, zmm6, zmm9, zmm11, zmm12 = sub_14152b7a0(arg1, arg2, 
                                        zmm2_2, zmm3_2, zmm5_1.q, zmm1_2.q, zmm4_1.q, zmm0_2.q)
                            else if (rdi_7 s> r10_1)
                                result, zmm6, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                                    sub_14152b420(arg1, arg2, zmm2_2, zmm4_1, zmm0_2.q, zmm1_2.q, 
                                    zmm3_2.q, zmm5_1.q)
                            else if (rdi_7 s>= r10_1)
                                result, zmm6, zmm9, zmm12 = sub_14152b920(arg1, arg2, zmm2_2, 
                                    zmm4_1, zmm0_2.q, zmm1_2.q, zmm3_2.q, zmm5_1.q)
                            else
                                result, zmm6, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                                    sub_14152b420(arg1, arg2, zmm2_2, zmm4_1, zmm5_1.q, zmm1_2.q, 
                                    zmm3_2.q, zmm0_2.q)
                        else if (rdi_7 s> r10_1)
                            result, zmm6, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 = sub_14152b420(
                                arg1, arg2, zmm2_2, zmm3_2, zmm0_2.q, zmm1_2.q, zmm4_1.q, zmm5_1.q)
                        else if (rdi_7 s>= r10_1)
                            result, zmm6, zmm9, zmm12 = sub_14152b920(arg1, arg2, zmm2_2, zmm3_2, 
                                zmm0_2.q, zmm1_2.q, zmm4_1.q, zmm5_1.q)
                        else
                            result, zmm6, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 = sub_14152b420(
                                arg1, arg2, zmm2_2, zmm3_2, zmm5_1.q, zmm1_2.q, zmm4_1.q, zmm0_2.q)
                        
                    label_14152b11e:
                        
                        if (result.b == 0)
                        label_14152b126:
                            int32_t* rcx_50 = *arg1
                            int32_t r8_24 = rdi_7
                            int32_t r9_13 = r12_4
                            int32_t r10_3 = r14_9
                            
                            if (rcx_50[0x28].b != 0)
                                int32_t rdx_35 = *rcx_50
                                int32_t r11_4 = arg5 + r14_9
                                
                                if (r11_4 s< rdx_35)
                                    r10_3 = rdx_35 + r14_9
                                    zmm12.q = *(rcx_50 + 0x70) f- *(rcx_50 + 0x78)
                                else if (r11_4 s< rdx_35 * 2)
                                    zmm12 = zx.o(0)
                                else
                                    r10_3 -= rdx_35
                                    zmm12.q = *(rcx_50 + 0x78) f- *(rcx_50 + 0x70)
                            
                            if (*(rcx_50 + 0xa1) != 0)
                                int32_t rdx_36 = rcx_50[1]
                                int32_t r11_6 = arg6 + r12_4
                                
                                if (r11_6 s< rdx_36)
                                    r9_13 = rdx_36 + r12_4
                                    zmm11.q = *(rcx_50 + 0x80) f- *(rcx_50 + 0x88)
                                else if (r11_6 s< rdx_36 * 2)
                                    zmm11 = zx.o(0)
                                else
                                    r9_13 -= rdx_36
                                    zmm11.q = *(rcx_50 + 0x88) f- *(rcx_50 + 0x80)
                            
                            if (*(rcx_50 + 0xa2) != 0)
                                int32_t rdx_37 = rcx_50[2]
                                int32_t r11_8 = arg7 + rdi_7
                                
                                if (r11_8 s< rdx_37)
                                    r8_24 = rdx_37 + rdi_7
                                    zmm10.q = *(rcx_50 + 0x90) f- *(rcx_50 + 0x98)
                                else if (r11_8 s< rdx_37 * 2)
                                    zmm10 = zx.o(0)
                                else
                                    r8_24 -= rdx_37
                                    zmm10.q = *(rcx_50 + 0x98) f- *(rcx_50 + 0x90)
                            
                            int64_t r15_5 =
                                sx.q((rcx_50[1] * r8_24 + r9_13) * *rcx_50 + r10_3 + rcx_5)
                            
                            if (*(arg1[0xc] + (r15_5 << 2)) s> 0)
                                int32_t i_4 = 0
                                zmm8.q = var_e8 f- zmm10.q
                                zmm6.q = zmm9.q f- zmm12.q
                                zmm7.q = zmm13.q f- zmm11.q
                                int32_t* r14_10 = nullptr
                                
                                do
                                    int64_t rdx_38 = sx.q(*(arg1 + 0x4c) * i_4)
                                    int64_t rcx_51 = *(arg1[0xb] + (r15_5 << 3))
                                    zmm2_2.q = *(rcx_51 + (rdx_38 << 3)) f- zmm6.q
                                    zmm3_2.q = *(rcx_51 + (rdx_38 << 3) + 8) f- zmm7.q
                                    zmm5_1.q = *(rcx_51 + (rdx_38 << 3) + 0x10) f- zmm8.q
                                    zmm4_1.q = zmm3_2.q f* zmm3_2.q
                                    var_198.d = *(r14_10 + *(arg1[0xa] + (r15_5 << 3)))
                                    zmm0_2.q = zmm2_2.q f* zmm2_2.q
                                    zmm1_2.q = zmm5_1.q f* zmm5_1.q
                                    zmm4_1.q = zmm4_1.q f+ zmm0_2.q
                                    zmm4_1.q = zmm4_1.q f+ zmm1_2.q
                                    uint64_t var_1a0_32 = zmm4_1.q
                                    uint64_t var_1a8_33 = zmm5_1.q
                                    
                                    if (sub_141522e90(arg2, arg2).b == 0)
                                        goto label_14152b3aa_1
                                    
                                    i_4 += 1
                                    r14_10 = &r14_10[1]
                                while (i_4 s< *(arg1[0xc] + (r15_5 << 2)))
                                
                                zmm6 = zx.o(var_128_1)
                            
                            int32_t* rax_112 = var_150
                            int64_t rcx_57
                            
                            if (r13_2 u> rax_112)
                                rcx_57 = (r13_2 - rax_112) s>> 2
                            else
                                rcx_57 =
                                    ((arg1[0x13] - rax_112) s>> 2) + ((r13_2 - arg1[0x12]) s>> 2)
                            
                            if (rcx_57 s< 0x12)
                                sub_14152bed0(arg1, &var_120, &var_150)
                                r13_2 = var_120
                            
                            sub_14152c000(arg1, r14_9, r12_4, rdi_7, &var_150)
                            rbp_3 = var_150
                        
                        if (r13_2 == rbp_3)
                            break
                        
                        r10_1 = r12
                
                break
        
    label_14152b3ae:
        result.b = 1
    else
        int32_t* r14_1 = nullptr
        
        while (true)
            int64_t rdx_1 = sx.q(*(arg1 + 0x4c) * rdi_1)
            int64_t rcx_6 = *(arg1[0xb] + (rbp << 3))
            zmm2_1 = *(rcx_6 + (rdx_1 << 3)) f- zmm7.q
            zmm3_1.q = *(rcx_6 + (rdx_1 << 3) + 8) f- zmm8.q
            zmm5_1.q = *(rcx_6 + (rdx_1 << 3) + 0x10) f- zmm13.q
            zmm4_1.q = zmm3_1.q f* zmm3_1.q
            var_198.d = *(r14_1 + *(arg1[0xa] + (rbp << 3)))
            zmm4_1.q = zmm4_1.q f+ zmm2_1 * zmm2_1
            zmm4_1.q = zmm4_1.q f+ zmm5_1.q f* zmm5_1.q
            uint64_t var_1a0_1 = zmm4_1.q
            uint64_t var_1a8_2 = zmm5_1.q
            
            if (sub_141522e90(arg2, arg2).b == 0)
                break
            
            rdi_1 += 1
            r14_1 = &r14_1[1]
            
            if (rdi_1 s>= arg4)
                goto label_14152a091
        
    label_14152b3aa:
        result.b = 0
else
    while (true)
        int64_t* rcx_2 = *r14
        
        if ((*(*rcx_2 + 0x10))(rcx_2, arg2, zmm7.q, zmm8, zmm13.q).b == 0)
            break
        
        r14 = &r14[1]
        
        if (r14 u>= *(rdi + 0x58))
            goto label_141529fca
    
label_14152b3aa_1:
    result.b = 0

return result
