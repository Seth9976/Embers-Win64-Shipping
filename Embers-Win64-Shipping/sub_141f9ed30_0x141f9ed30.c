// 函数: sub_141f9ed30
// 地址: 0x141f9ed30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
uint64_t* var_240 = nullptr
void* r15 = arg1
int64_t var_238 = 0
int64_t* rbx
rbx.b = 0
uint64_t rax_2
int512_t zmm3
rax_2, zmm3 = sub_141f87cb0(arg1, &var_240)
char* var_268
int32_t* result_1
uint64_t result

if (rax_2 != 0)
    if (arg2 != 0)
        int64_t var_c8
        void var_78
        int64_t* rax_4 = sub_140aae2f0(&var_78, sub_140d21e10(rax_2, &var_c8, 0))
        void var_a0
        char* var_88
        char** rax_6 = sub_140a96390(&var_88, 
            _vfprintf_p_l(&var_a0, 
                Cyclic dependency found. Table {0} depends on itself. Please fix your data", 
            CompositeCurveTables"))
        int64_t rcx_4 = *rax_4
        int64_t* rcx_5 = rax_4[1]
        int32_t var_60_1 = 4
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
        
        int32_t rcx_6 = rax_4[2].d
        char var_38_1 = 1
        result_1 = nullptr
        int32_t var_200_1 = 1
        sub_1405a4b40(&result_1, 1, 0)
        int32_t* result_2 = result_1
        *result_2 = var_60_1
        int64_t var_58
        *(result_2 + 8) = var_58
        *(result_2 + 8) = var_58
        result_2[2] = var_58.d
        *(result_2 + 8) = var_58
        result_2[0xa].b = 0
        
        if (var_38_1 != 0)
            *(result_2 + 0x10) = rcx_4
            *(result_2 + 0x18) = rcx_5
            
            if (rcx_5 != 0)
                rcx_5[1].d += 1
            
            result_2[8] = rcx_6
            result_2[0xa].b = 1
        
        var_268 = *rax_6
        void* rax_14 = rax_6[1]
        void* var_260_1 = rax_14
        
        if (rax_14 != 0)
            *(rax_14 + 8) += 1
        
        void var_b8
        int64_t* rax_15
        rax_15, zmm3 = sub_140aac870(&var_b8, &var_268, &result_1)
        rbx = rax_15[1]
        
        if (rbx != 0)
            rbx[1].d += 1
        
        int64_t* var_b0
        
        if (var_b0 != 0)
            var_b0[1].d -= 1
            
            if (var_b0[1].d == 1)
                (**var_b0)(var_b0)
                int32_t rax_18 = *(var_b0 + 0xc)
                *(var_b0 + 0xc) -= 1
                
                if (rax_18 == 1)
                    (*(*var_b0 + 8))(var_b0, 1)
        
        sub_140596f50(&result_1)
        
        if (var_38_1 != 0)
            char var_38_2 = 0
            
            if (rcx_5 != 0)
                rcx_5[1].d -= 1
                
                if (rcx_5[1].d == 1)
                    (**rcx_5)(rcx_5)
                    int32_t rax_22 = *(rcx_5 + 0xc)
                    *(rcx_5 + 0xc) -= 1
                    
                    if (rax_22 == 1)
                        (*(*rcx_5 + 8))(rcx_5, 1)
        
        int64_t* rdi_3 = rax_6[1]
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_26 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_26 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* rdi_4 = rax_4[1]
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rax_30 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        int64_t* var_98
        
        if (var_98 != 0)
            var_98[1].d -= 1
            
            if (var_98[1].d == 1)
                (**var_98)(var_98)
                int32_t rax_34 = *(var_98 + 0xc)
                *(var_98 + 0xc) -= 1
                
                if (rax_34 == 1)
                    (*(*var_98 + 8))(var_98, 1)
        
        int64_t rcx_20 = var_c8
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rax_38 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rax_38 == 1)
                    (*(*rbx + 8))(rbx, 1)
    
    result = zx.q(*(r15 + 0x38))
    rbx.b = 1

if (rax_2 == 0 || result.d != *(r15 + 0x64))
    result = sub_141f86a90(r15)
    
    if (rbx.b == 0)
        *(r15 + 0x98) = 1
        
        for (int64_t* i = *(r15 + 0xa0); i != &i[sx.q(*(r15 + 0xa8))]; i = &i[1])
            void* rax_41 = *i
            
            if (rax_41 != 0 && *(rax_41 + 0x98) == 2)
                *(r15 + 0x98) = 2
                break
        
        uint64_t* rdx_6 = *(r15 + 0xa0)
        int64_t rax_42 = sx.q(*(r15 + 0xa8))
        var_240 = rdx_6
        result = &rdx_6[rax_42]
        result_1 = result
        
        if (rdx_6 != result)
            do
                result = *rdx_6
                
                if (result != 0)
                    bool cond:0_1 = *(r15 + 0x98) != 1
                    void* rdi_6 = r15 + 0x30
                    char* r10_1 = result + 0x30
                    void* var_250 = rdi_6
                    var_268 = r10_1
                    int32_t var_258
                    void* var_218
                    int32_t var_1f8
                    void* var_1f0
                    int32_t var_1e8
                    int64_t var_1e4
                    int32_t var_1d0
                    void* var_1c8
                    int32_t var_1c0
                    int64_t var_1bc
                    int128_t zmm0_2
                    double zmm2_1[0x2]
                    
                    if (not(cond:0_1))
                        int32_t r11_1 = *(r10_1 + 0x28)
                        int32_t var_1f4_1 = 1
                        int32_t rcx_24 = 0
                        var_1f8 = 0
                        void* r13_1 = &r10_1[0x10]
                        var_1f0 = r13_1
                        int32_t r8_2 = 0
                        var_1e8 = 0xffffffff
                        var_1e4 = 0
                        
                        if (r11_1 != 0)
                            void* rax_43 = *(r13_1 + 0x10)
                            void* r9_2 = r13_1
                            
                            if (rax_43 != 0)
                                r9_2 = rax_43
                            
                            int32_t temp1_1
                            int32_t temp2_1
                            temp1_1:temp2_1 = sx.q(r11_1 - 1)
                            int32_t rdx_9 = *r9_2
                            
                            if (rdx_9 != 0)
                            label_141f9f1d8:
                                int32_t rax_50 = neg.d(rdx_9) & rdx_9
                                uint64_t rflags_1
                                int32_t temp0_13
                                temp0_13, rflags_1 = _bit_scan_reverse(rax_50)
                                int32_t var_1f4_2 = rax_50
                                int32_t rax_51
                                
                                if (rax_50 == 0)
                                    rax_51 = 0x20
                                else
                                    rax_51 = 0x1f - temp0_13
                                
                                var_1e4.d = r8_2 - rax_51 + 0x1f
                                
                                if (r8_2 - rax_51 + 0x1f s> r11_1)
                                    var_1e4.d = r11_1
                            else
                                while (true)
                                    int64_t rdx_10 = sx.q(rcx_24)
                                    r8_2 += 0x20
                                    rcx_24 += 1
                                    var_1e4:4.d = r8_2
                                    var_1f8 = rcx_24
                                    
                                    if (rdx_10.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_9 = *(r9_2 + (rdx_10 << 2) + 4)
                                    var_1e8 = 0xffffffff
                                    
                                    if (rdx_9 != 0)
                                        goto label_141f9f1d8
                                
                                var_1e4.d = r11_1
                        
                        int32_t r12_1 = *(r10_1 + 0x28)
                        var_1d0.q = r10_1
                        zmm2_1 = var_1e8.o
                        var_1c8.o = var_1f8.o
                        int32_t r8_5 = r12_1 s>> 5
                        zmm0_2 = var_1d0.o
                        int32_t r9_4 = r12_1 & 0xffffffe0
                        var_1bc:4.o = zmm2_1
                        int64_t var_150_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                        int128_t var_170 = zmm0_2
                        int128_t var_160_1 = var_1c0.o
                        
                        if (r12_1 != r11_1)
                            void* rax_53 = *(r13_1 + 0x10)
                            void* r10_2 = r13_1
                            
                            if (rax_53 != 0)
                                r10_2 = rax_53
                            
                            int32_t temp5_1
                            int32_t temp6_1
                            temp5_1:temp6_1 = sx.q(r11_1 - 1)
                            int32_t rdx_14 =
                                *(r10_2 + (sx.q(r8_5) << 2)) & 0xffffffff << (r12_1.b & 0x1f)
                            
                            if (rdx_14 != 0)
                            label_141f9f29b:
                                int32_t rax_60 = neg.d(rdx_14) & rdx_14
                                uint64_t rflags_2
                                int32_t temp0_15
                                temp0_15, rflags_2 = _bit_scan_reverse(rax_60)
                                int32_t rax_61
                                
                                if (rax_60 == 0)
                                    rax_61 = 0x20
                                else
                                    rax_61 = 0x1f - temp0_15
                                
                                r12_1 = r9_4 - rax_61 + 0x1f
                                
                                if (r12_1 s<= r11_1)
                                    goto label_141f9f2bf
                            else
                                while (true)
                                    int64_t rcx_29 = sx.q(r8_5)
                                    r9_4 += 0x20
                                    r8_5 += 1
                                    
                                    if (rcx_29.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_14 = *(r10_2 + (rcx_29 << 2) + 4)
                                    
                                    if (rdx_14 != 0)
                                        goto label_141f9f29b
                            
                            r12_1 = r11_1
                            goto label_141f9f2bf
                        
                        while (true)
                            result = sx.q(var_160_1:0xc.d)
                            int64_t* rcx_31 = var_170.q
                            
                            if (result.d == r12_1 && var_160_1.q == r13_1 && rcx_31 == r10_1)
                                break
                            
                            int64_t r15_1 = *rcx_31
                            uint64_t r14_2 = result * 3
                            void*** rax_62 = j_sub_140a82f30(0x88)
                            void*** rsi_3 = rax_62
                            
                            if (rax_62 == 0)
                                rsi_3 = nullptr
                            else
                                int64_t* rcx_32 = &rsi_3[3]
                                *rsi_3 = &data_142d6a040
                                rsi_3[1] = 0
                                rsi_3[2] = 0
                                rcx_32[2] = 0
                                rcx_32[3].d = 0
                                *(rcx_32 + 0x1c) = 0x80
                                int64_t* rax_63 = rcx_32[2]
                                
                                if (rax_63 != 0)
                                    rcx_32 = rax_63
                                
                                *rcx_32 = 0
                                rcx_32[1] = 0
                                rsi_3[7].d = 0xffffffff
                                *(rsi_3 + 0x3c) = 0
                                rsi_3[9] = 0
                                rsi_3[0xa].d = 0
                                rsi_3[0xb] = 0
                                rsi_3[0xc] = 0
                                rsi_3[0xd].d = 0x7f7fffff
                                *(rsi_3 + 0x6c) = 0x404
                                *rsi_3 = &data_1432848c8
                                rsi_3[0xe].b = 0
                                rsi_3[0xf] = 0
                                rsi_3[0x10] = 0
                            
                            void* rbx_2 = *(r15_1 + (r14_2 << 3) + 8)
                            sub_141f9cdf0(rsi_3, rbx_2 + 0x78)
                            char rax_64 = *(rbx_2 + 0x70)
                            
                            if (rax_64 != 2)
                                rsi_3[0xe].b = rax_64
                            
                            void* rbx_3 = *(r15_1 + (r14_2 << 3))
                            int32_t rax_65 = *(rdi_6 + 8)
                            var_218 = rbx_3
                            var_258.q = rsi_3
                            void* const rcx_37
                            
                            if (rax_65 == *(rdi_6 + 0x34))
                            label_141f9f40b:
                                rcx_37 = nullptr
                            else
                                var_250 = rbx_3
                                int32_t rax_67 = sub_140b5ead0(rbx_3.d) + var_250:4.d
                                void* r8_6 = rdi_6 + 0x38
                                void* rcx_35 = *(r8_6 + 8)
                                
                                if (rcx_35 != 0)
                                    r8_6 = rcx_35
                                
                                int32_t rax_69 =
                                    *(r8_6 + (((sx.q(*(rdi_6 + 0x48)) - 1) & sx.q(rax_67)) << 2))
                                
                                if (rax_69 == 0xffffffff)
                                label_141f9f40b_1:
                                    rcx_37 = nullptr
                                else
                                    int64_t r8_7 = *rdi_6
                                    
                                    while (true)
                                        int64_t rdx_19 = sx.q(rax_69) * 3
                                        rcx_37 = r8_7 + (rdx_19 << 3)
                                        
                                        if (*(r8_7 + (rdx_19 << 3)) == rbx_3)
                                            break
                                        
                                        rax_69 = *(rcx_37 + 0x10)
                                        
                                        if (rax_69 == 0xffffffff)
                                            goto label_141f9f40b_2
                                    
                                    if (rax_69 == 0xffffffff)
                                    label_141f9f40b_2:
                                        rcx_37 = nullptr
                            
                            void* rbx_4 = rcx_37 + 8
                            
                            if (rcx_37 == 0)
                                rbx_4 = nullptr
                            
                            if (rbx_4 == 0)
                                void** var_f8 = &var_218
                                int32_t* var_f0_1 = &var_258
                                void var_188
                                sub_140bbe950(rdi_6, &var_188, &var_f8, nullptr)
                            else
                                int64_t* rcx_38 = *rbx_4
                                
                                if (rcx_38 != 0)
                                    (**rcx_38)(rcx_38, 1)
                                
                                *rbx_4 = var_258.q
                            
                            var_160_1:8.d &= not.d(var_170:0xc.d)
                            sub_14059bdd0(&var_170:8)
                        label_141f9f2bf:
                            r10_1 = var_268
                    else if (*(result + 0x98) != 1)
                        int32_t r15_3 = *(r10_1 + 0x28)
                        void* r12_3 = &r10_1[0x10]
                        var_1c8 = r12_3
                        var_1d0 = 0
                        int32_t var_1cc_1 = 1
                        var_1c0 = 0xffffffff
                        var_1bc = 0
                        
                        if (r15_3 != 0)
                            sub_14059bdd0(&var_1d0)
                            r10_1 = var_268
                            r15_3 = *(r10_1 + 0x28)
                        
                        var_1f8.q = r10_1
                        zmm2_1 = var_1c0.o
                        var_1f0.o = var_1d0.o
                        var_1e4:4.o = zmm2_1
                        zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
                        int128_t var_120 = var_1f8.o
                        int128_t var_110_1 = var_1e8.o
                        int64_t var_100_1 = zmm2_1.q
                        
                        while (true)
                            result = sx.q(var_110_1:0xc.d)
                            int64_t* rcx_68 = var_120.q
                            
                            if (result.d == r15_3 && var_110_1.q == r12_3 && rcx_68 == r10_1)
                                break
                            
                            int64_t r14_6 = *rcx_68
                            uint64_t rsi_6 = result * 3
                            void* rax_112 = j_sub_140a82f30(0x80)
                            void* rbx_9 = rax_112
                            
                            if (rax_112 == 0)
                                rbx_9 = nullptr
                            else
                                memset(rax_112, 0, 0x80)
                                sub_141f7a010(rbx_9)
                                *rbx_9 = &data_142da7f70
                                *(rbx_9 + 0x70) = 0
                                *(rbx_9 + 0x78) = 0
                            
                            sub_141f9cbc0(rbx_9, *(r14_6 + (rsi_6 << 3) + 8) + 0x70)
                            int64_t r8_16 = *(r14_6 + (rsi_6 << 3))
                            int64_t var_178 = r8_16
                            var_250 = rbx_9
                            int32_t var_228
                            sub_1409bd4b0(rdi_6, &var_228, r8_16)
                            int64_t rax_113 = sx.q(var_228)
                            void* const rcx_73
                            
                            if (rax_113.d == 0xffffffff)
                                rcx_73 = nullptr
                            else
                                rcx_73 = *rdi_6 + rax_113 * 0x18
                            
                            void** rbx_10 = rcx_73 + 8
                            
                            if (rcx_73 == 0)
                                rbx_10 = nullptr
                            
                            if (rbx_10 == 0)
                                int64_t* var_d8 = &var_178
                                void** var_d0_1 = &var_250
                                void var_180
                                sub_140bbe950(rdi_6, &var_180, &var_d8, nullptr)
                            else
                                void* rcx_74 = *rbx_10
                                
                                if (rcx_74 != 0)
                                    (**rcx_74)(rcx_74, 1)
                                
                                *rbx_10 = var_250
                            
                            var_110_1:8.d &= not.d(var_120:0xc.d)
                            sub_14059bdd0(&var_120:8)
                            r10_1 = var_268
                    else
                        int32_t r11_2 = *(r10_1 + 0x28)
                        void* r14_3 = &r10_1[0x10]
                        int32_t var_1a4_1 = 1
                        int32_t rcx_41 = 0
                        int32_t var_1a8_1 = 0
                        int32_t r8_9 = 0
                        void* var_1a0_1 = r14_3
                        int32_t var_198_1 = 0xffffffff
                        int64_t var_194_1 = 0
                        
                        if (r11_2 != 0)
                            void* rax_74 = *(r14_3 + 0x10)
                            void* r9_6 = r14_3
                            
                            if (rax_74 != 0)
                                r9_6 = rax_74
                            
                            int32_t temp3_1
                            int32_t temp4_1
                            temp3_1:temp4_1 = sx.q(r11_2 - 1)
                            int32_t rdx_23 = *r9_6
                            
                            if (rdx_23 != 0)
                            label_141f9f518:
                                int32_t rax_81 = neg.d(rdx_23) & rdx_23
                                uint64_t rflags_3
                                int32_t temp0_16
                                temp0_16, rflags_3 = _bit_scan_reverse(rax_81)
                                int32_t var_1a4_2 = rax_81
                                int32_t rax_82
                                
                                if (rax_81 == 0)
                                    rax_82 = 0x20
                                else
                                    rax_82 = 0x1f - temp0_16
                                
                                var_194_1.d = r8_9 - rax_82 + 0x1f
                                
                                if (r8_9 - rax_82 + 0x1f s> r11_2)
                                    var_194_1.d = r11_2
                            else
                                while (true)
                                    int64_t rdx_24 = sx.q(rcx_41)
                                    r8_9 += 0x20
                                    rcx_41 += 1
                                    var_194_1:4.d = r8_9
                                    var_1a8_1 = rcx_41
                                    
                                    if (rdx_24.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_23 = *(r9_6 + (rdx_24 << 2) + 4)
                                    var_198_1 = 0xffffffff
                                    
                                    if (rdx_23 != 0)
                                        goto label_141f9f518
                                
                                var_194_1.d = r11_2
                        
                        int32_t rdx_29 = *(r10_1 + 0x28)
                        var_1d0.q = r10_1
                        zmm2_1 = var_198_1.o
                        var_1c8.o = var_1a8_1.o
                        int32_t r8_12 = rdx_29 s>> 5
                        zmm0_2 = var_1d0.o
                        int32_t r9_8 = rdx_29 & 0xffffffe0
                        var_258 = rdx_29
                        var_1bc:4.o = zmm2_1
                        int64_t var_128_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                        int128_t var_148 = zmm0_2
                        int128_t var_138_1 = var_1c0.o
                        
                        if (rdx_29 != r11_2)
                            void* rax_84 = *(r14_3 + 0x10)
                            void* r10_3 = r14_3
                            
                            if (rax_84 != 0)
                                r10_3 = rax_84
                            
                            int32_t temp7_1
                            int32_t temp8_1
                            temp7_1:temp8_1 = sx.q(r11_2 - 1)
                            int32_t rdx_28 =
                                *(r10_3 + (sx.q(r8_12) << 2)) & 0xffffffff << (rdx_29.b & 0x1f)
                            
                            if (rdx_28 != 0)
                            label_141f9f5db:
                                int32_t rax_91 = neg.d(rdx_28) & rdx_28
                                uint64_t rflags_4
                                int32_t temp0_18
                                temp0_18, rflags_4 = _bit_scan_reverse(rax_91)
                                int32_t rax_92
                                
                                if (rax_91 == 0)
                                    rax_92 = 0x20
                                else
                                    rax_92 = 0x1f - temp0_18
                                
                                rdx_29 = r9_8 - rax_92 + 0x1f
                                var_258 = rdx_29
                                
                                if (rdx_29 s<= r11_2)
                                    goto label_141f9f605
                            else
                                while (true)
                                    int64_t rcx_46 = sx.q(r8_12)
                                    r9_8 += 0x20
                                    r8_12 += 1
                                    
                                    if (rcx_46.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_28 = *(r10_3 + (rcx_46 << 2) + 4)
                                    
                                    if (rdx_28 != 0)
                                        goto label_141f9f5db
                            
                            rdx_29 = r11_2
                            var_258 = r11_2
                            goto label_141f9f605
                        
                        while (true)
                            result = sx.q(var_138_1:0xc.d)
                            int64_t* rcx_48 = var_148.q
                            
                            if (result.d == rdx_29 && var_138_1.q == r14_3 && rcx_48 == r10_1)
                                break
                            
                            int64_t r14_4 = *rcx_48
                            uint64_t rbx_6 = result * 3
                            uint64_t var_248 = rbx_6
                            int64_t var_210 = r14_4
                            uint64_t rax_93
                            char r9_10
                            rax_93, r9_10 = j_sub_140a82f30(0x80)
                            uint64_t rsi_5 = rax_93
                            
                            if (rax_93 == 0)
                                rsi_5 = 0
                            else
                                r9_10 = memset(rax_93 + 0x10, 0, 0x70)
                                int64_t* rcx_50 = rsi_5 + 0x18
                                *rsi_5 = &data_142d6a040
                                *(rsi_5 + 8) = 0
                                *(rsi_5 + 0x10) = 0
                                rcx_50[2] = 0
                                rcx_50[3].d = 0
                                *(rcx_50 + 0x1c) = 0x80
                                int64_t* rax_94 = rcx_50[2]
                                
                                if (rax_94 != 0)
                                    rcx_50 = rax_94
                                
                                *rcx_50 = 0
                                rcx_50[1] = 0
                                *(rsi_5 + 0x38) = 0xffffffff
                                *(rsi_5 + 0x3c) = 0
                                *(rsi_5 + 0x48) = 0
                                *(rsi_5 + 0x50) = 0
                                *(rsi_5 + 0x58) = 0
                                *(rsi_5 + 0x60) = 0
                                *(rsi_5 + 0x68) = 0x7f7fffff
                                *(rsi_5 + 0x6c) = 0x404
                                *rsi_5 = &data_142da7f70
                                *(rsi_5 + 0x70) = 0
                                *(rsi_5 + 0x78) = 0
                            
                            void* rax_95 = *(r14_4 + (rbx_6 << 3) + 8)
                            var_218 = rax_95
                            double (* r14_5)[0x2] = *(rax_95 + 0x78)
                            void* r12_2 = &(*r14_5)[sx.q(*(rax_95 + 0x80))]
                            
                            if (r14_5 != r12_2)
                                void* rdi_7 = var_218
                                
                                do
                                    zmm3.o = *(r14_5 + 4)
                                    int32_t rax_98 = data_143a2d8ec + 1
                                    zmm2_1 = *r14_5
                                    int32_t var_270_1 = rax_98
                                    char var_278_1 = 0
                                    data_143a2d8ec = rax_98
                                    int32_t var_230
                                    sub_141f7f6d0(rsi_5, &var_230, zmm2_1[0].d, r9_10)
                                    char r13_2 = *(rdi_7 + 0x70)
                                    int32_t rax_100 = (*(*rsi_5 + 8))(rsi_5)
                                    sub_141f86d30(rsi_5, rax_100)
                                    int32_t rbx_7 = var_230
                                    void* rax_101
                                    rax_101, r9_10 = sub_141f87c30(rsi_5, rbx_7)
                                    
                                    if (rax_101 != 0)
                                        int32_t rcx_55 = *rax_101
                                        
                                        if (rcx_55 s>= 0 && rcx_55 s< rax_100)
                                            sub_141f86d30(rsi_5, (*(*rsi_5 + 8))(rsi_5))
                                            (sx.q(*sub_141f87c30(rsi_5, rbx_7)) * 0x1c)[
                                                *(rsi_5 + 0x70)] = r13_2
                                            r9_10, zmm3 = sub_141f814e0(rsi_5, (zx.o(0)).d)
                                    
                                    r14_5 = &(*r14_5)[1]
                                while (r14_5 != r12_2)
                                
                                rdi_6 = var_250
                                rbx_6 = var_248
                            
                            sub_141f814e0(rsi_5, zx.o(0).d)
                            int64_t r8_13 = var_210
                            var_248 = rsi_5
                            int64_t r8_14 = *(r8_13 + (rbx_6 << 3))
                            var_210 = r8_14
                            int32_t var_22c
                            sub_1409bd4b0(rdi_6, &var_22c, r8_14)
                            int64_t rax_106 = sx.q(var_22c)
                            void* const rcx_63
                            
                            if (rax_106.d == 0xffffffff)
                                rcx_63 = nullptr
                            else
                                rcx_63 = *rdi_6 + rax_106 * 0x18
                            
                            uint64_t* rbx_8 = rcx_63 + 8
                            
                            if (rcx_63 == 0)
                                rbx_8 = nullptr
                            
                            if (rbx_8 == 0)
                                int64_t* var_e8 = &var_210
                                uint64_t* var_e0_1 = &var_248
                                void var_184
                                sub_140bbe950(rdi_6, &var_184, &var_e8, nullptr)
                            else
                                uint64_t rcx_64 = *rbx_8
                                
                                if (rcx_64 != 0)
                                    (**rcx_64)(rcx_64, 1)
                                
                                *rbx_8 = var_248
                            
                            var_138_1:8.d &= not.d(var_148:0xc.d)
                            sub_14059bdd0(&var_148:8)
                            rdx_29 = var_258
                            r14_3 = var_1a0_1
                        label_141f9f605:
                            r10_1 = var_268
                    rdx_6 = var_240
                    r15 = arg1
                
                rdx_6 = &rdx_6[1]
                var_240 = rdx_6
            while (rdx_6 != result_1)

__security_check_cookie(rax_1 ^ &var_298)
return result
