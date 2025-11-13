// 函数: sub_141887960
// 地址: 0x141887960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t rdi = 0
int128_t* result = arg2
bool z

if (0 == *(arg1 + 0x144))
    *(arg1 + 0x144) = 0
    z = true
else
    *(arg1 + 0x144)
    z = false

if (not(z))
    *result = 0
    *(result + 8) = 0
else if (arg6[1].d - *(arg6 + 0x34) s<= 0)
    int32_t rbx_1 = 0
    int32_t* r9_2 = arg7 + 0x10
    int64_t var_1c8_1 = 0
    int32_t rcx_4 = 0
    int32_t var_1c0_1 = 0
    double zmm6[0x2] = sub_141840270()
    int32_t var_1bc_1 = 0
    int32_t r13_1 = 0
    int32_t var_198_1 = 0
    int32_t r15_1 = r9_2[6]
    int32_t r10_2 = 0
    int32_t var_194_1 = 1
    int32_t r11_2 = 0
    int32_t* var_190_1 = r9_2
    int32_t r8_2 = 0
    int32_t var_188_1 = 0xffffffff
    int64_t var_184_1 = 0
    
    if (r15_1 != 0)
        int32_t* rax_15 = *(r9_2 + 0x10)
        
        if (rax_15 != 0)
            r9_2 = rax_15
        
        int32_t temp0_2
        int32_t temp1_1
        temp0_2:temp1_1 = sx.q(r15_1 - 1)
        int32_t rdx_4 = *r9_2
        
        if (rdx_4 != 0)
        label_141887b3b:
            int32_t rax_22 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t var_194_2 = rax_22
            int32_t rax_23
            
            if (rax_22 == 0)
                rax_23 = 0x20
            else
                rax_23 = 0x1f - temp0_3
            
            var_184_1.d = r8_2 - rax_23 + 0x1f
            
            if (r8_2 - rax_23 + 0x1f s> r15_1)
                var_184_1.d = r15_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_4)
                r8_2 += 0x20
                rcx_4 += 1
                var_184_1:4.d = r8_2
                var_198_1 = rcx_4
                
                if (rdx_5.d s>= (temp1_1 + (temp0_2 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = r9_2[rdx_5 + 1]
                int32_t var_188_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_141887b3b
            
            var_184_1.d = r15_1
    
    void* rcx_6 = arg7
    double var_110_1[0x2] = var_198_1.o
    int128_t var_100_1 = 0xffffffff
    double var_158[0x2] = rcx_6.o
    int64_t var_138_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    
    if (0 s< r15_1)
        int32_t rcx_7 = var_110_1[1]:4.d
        int32_t rsi = var_1c8_1:4.d
        int32_t r12_1 = var_1c0_1
        
        while ((rbx_1 | r12_1 | rsi | r13_1) == 0)
            int64_t* r15_2 = var_158[0]
            int64_t r14_1 = sx.q(rcx_7) * 3
            int32_t var_1a8
            sub_141884510(arg3, &var_1a8, *r15_2 + (r14_1 << 3))
            int64_t rax_31 = sx.q(var_1a8)
            void* const rcx_11
            
            if (rax_31.d == 0xffffffff)
                rcx_11 = nullptr
            else
                rcx_11 = (rax_31 << 6) + *arg3
            
            int32_t r8_5 = *(rcx_11 + 0x20)
            zmm6[0] = zmm6[0] f- *(rcx_11 + 0x30)
            int32_t rdx_7 = *(arg1 + 0x48)
            int32_t rdx_8
            
            if (r8_5 - 1 s>= 0)
                if (r8_5 s<= rdx_7 - 1)
                    rdx_7 = r8_5
                
                rdx_8 = rdx_7 - 1
            else
                rdx_8 = 0
            
            double temp0_5[0x2] = _mm_cvtps_pd((*(*(arg1 + 0x40) + (sx.q(rdx_8) << 2)))[0])
            
            if (not(zmm6[0] < temp0_5[0]))
                var_1c8_1.o = *(*r15_2 + (r14_1 << 3))
                rbx_1 = var_1bc_1
                r13_1 = var_1c8_1.d
                rsi = var_1c8_1:4.d
                r12_1 = var_1c0_1
            
            var_110_1[1].d &= not.d(var_158[1]:4.d)
            sub_14059bdd0(&var_158[1])
            rcx_7 = var_110_1[1]:4.d
            
            if (rcx_7 s>= *(var_110_1[0] i+ 0x18))
                break
        
        result = arg2
        r10_2 = var_1c8_1:4.d
        r11_2 = var_1c0_1
        rcx_6 = arg7
    
    if ((rbx_1 | r11_2 | r10_2 | r13_1) == 0)
        int32_t r8_6 = *(arg4 + 0x34)
        int32_t rdx_9 = *(arg4 + 8)
        int64_t* rcx_14 = *(arg1 + 0x220)
        
        if (*(rcx_6 + 8) - *(rcx_6 + 0x34) - r8_6 + rdx_9
                u>= (**rcx_14)(rcx_14, zx.q(rdx_9 - r8_6), zx.q(arg10)))
            *result = 0
            *(result + 8) = 0
        else
            if (arg9[1].d == 0)
                int64_t* rcx_15 = *(arg1 + 0x78)
                int32_t rbx_9 = *(arg1 + 0x34)
                int64_t var_80_1 = arg5
                void** const var_88 = &data_142da2668
                int32_t* (* var_a8)(int64_t* arg1, int64_t* arg2) = sub_14187ad10
                void*** var_98_1 = nullptr
                int32_t rax_44 = (*(*rcx_15 + 0x20))(rcx_15)
                int64_t* rcx_16 = *(arg1 + 0x88)
                
                if (rax_44 s>= rbx_9)
                    rbx_9 = rax_44
                
                int64_t* var_170
                int64_t* rax_45 = (*(*rcx_16 + 0x28))(rcx_16, &var_170, zx.q(rbx_9), &var_a8, 
                    var_1c8_1, var_1c0_1)
                
                if (arg9 != rax_45)
                    int64_t rcx_17 = *arg9
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                    
                    *arg9 = *rax_45
                    *rax_45 = 0
                    arg9[1].d = rax_45[1].d
                    *(arg9 + 0xc) = *(rax_45 + 0xc)
                    rax_45[1] = 0
                
                int64_t* rcx_19 = var_170
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                var_170 = arg3
                void* var_168_1 = arg7
                double zmm0_1[0x2] = var_170.o
                void** const var_c8 = &data_142e345d8
                int32_t* (* var_e8)(int64_t* arg1, int64_t* arg2) = sub_14187b200
                void*** var_d8_1 = nullptr
                double var_c0_1[0x2] = zmm0_1
                int64_t var_b0_1 = arg8
                sub_14185e8a0(arg9, &var_e8)
                int32_t rdx_13 = *(arg1 + 0x38)
                
                if (arg9[1].d s<= rdx_13)
                    rdx_13 = arg9[1].d
                
                sub_141897740(arg9, rdx_13, 0)
                int32_t rax_51 = arg9[1].d
                double (* r9_5)[0x2] = *arg9
                int32_t r8_9 = rax_51 - 1
                int32_t i_3
                int32_t temp5_1
                i_3:temp5_1 = sx.q(rax_51)
                uint64_t i_1 = zx.q(i_3)
                int32_t i_2 = (temp5_1 - i_1.d) s>> 1
                
                if (i_2 s> 0)
                    double (* rcx_22)[0x2] = r9_5
                    i_1 = zx.q(i_2)
                    uint64_t i
                    
                    do
                        double (* rax_56)[0x2] = &r9_5[sx.q(r8_9)]
                        
                        if (rcx_22 != rax_56)
                            double zmm1_1[0x2] = *rcx_22
                            *rcx_22 = *rax_56
                            *rax_56 = zmm1_1
                        
                        rcx_22 = &rcx_22[1]
                        r8_9 -= 1
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                if (var_e8 != 0)
                    void** const* rcx_23 = &var_c8
                    
                    if (var_d8_1 != 0)
                        rcx_23 = var_d8_1
                    
                    (*rcx_23)[2](rcx_23, i_1, r8_9)
                
                if (var_a8 != 0)
                    void** const* rcx_24 = &var_88
                    
                    if (var_98_1 != 0)
                        rcx_24 = var_98_1
                    
                    (*rcx_24)[2](rcx_24)
            
            int64_t rax_61 = sx.q(arg9[1].d)
            
            if (rax_61.d s<= 0)
                *result = 0
                *(result + 8) = 0
            else
                *result = *(*arg9 + rax_61 * 0x10 - 0x10)
                arg9[1].d -= 1
    else
        *result = var_1c8_1.o
else
    int32_t r10_1 = arg6[5].d
    void* r9 = &arg6[2]
    int32_t var_1b8_1 = 0xffffffff
    int32_t r8 = 0
    int32_t var_1b4_1 = 0
    
    if (r10_1 != 0)
        void* rax_5 = *(r9 + 0x10)
        
        if (rax_5 != 0)
            r9 = rax_5
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rcx = *r9
        int32_t var_1b4_3
        
        if (rcx != 0)
        label_141887a32:
            int32_t rax_12 = neg.d(rcx) & rcx
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_1
            
            int32_t var_1b4_2 = r8 - rax_13 + 0x1f
            
            if (r8 - rax_13 + 0x1f s> r10_1)
                var_1b4_3 = r10_1
        else
            while (true)
                int64_t rcx_1 = sx.q(rdi)
                r8 += 0x20
                rdi += 1
                
                if (rcx_1.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rcx = *(r9 + (rcx_1 << 2) + 4)
                int32_t var_1b8_2 = 0xffffffff
                
                if (rcx != 0)
                    goto label_141887a32
            
            var_1b4_3 = r10_1
    
    *result = **arg6

__security_check_cookie(rax_1 ^ &var_1e8)
return result
