// 函数: sub_141d38be0
// 地址: 0x141d38be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
uint64_t result = zx.q(*(arg1 + 0x50))

if (result.d != *(arg1 + 0x7c) && arg2 != 0)
    result = sub_141d3c3c0(arg1, arg2)
    uint64_t result_1 = result
    uint64_t result_2 = result
    
    if (result != 0)
        int32_t rsi_1 = 0
        int64_t rdi_1 = 0
        int64_t i_1 = sx.q(*(result + 8))
        int32_t r14_1 = 0
        int32_t r15_1 = 0
        int64_t var_200 = 0
        int32_t var_208_1 = 0
        int32_t var_1f4_1 = 0
        int32_t var_204_1 = 0
        int64_t i_2 = i_1
        
        if (i_1 s> 0)
            int64_t r12_1 = 0
            int64_t var_1f0_1 = 0
            int64_t i
            
            do
                int64_t* rdi_3 = *result_2 + r12_1
                int32_t rbx_1
                
                if (sub_141d3c610(rdi_3, 1) == 0)
                    rbx_1 = 0
                else
                    void* const rcx_5
                    
                    if (rdi_3[3].d == *(rdi_3 + 0x44))
                        rcx_5 = nullptr
                    else
                        void* rax_4 = rdi_3[0xa]
                        void* rdx = &rdi_3[9]
                        
                        if (rax_4 != 0)
                            rdx = rax_4
                        
                        int32_t rax_5 = *(rdx + ((zx.q(rdi_3[0xb].d - 1) & 1) << 2))
                        
                        if (rax_5 == 0xffffffff)
                            rcx_5 = nullptr
                        else
                            int64_t r8_1 = rdi_3[2]
                            
                            while (true)
                                int64_t rdx_1 = sx.q(rax_5) * 3
                                rcx_5 = r8_1 + (rdx_1 << 3)
                                
                                if (*(r8_1 + (rdx_1 << 3)) == 1)
                                    break
                                
                                rax_5 = *(rcx_5 + 0x10)
                                
                                if (rax_5 == 0xffffffff)
                                    rbx_1 = *(*8 + 8)
                                    goto label_141d38d38
                            
                            if (rax_5 == 0xffffffff)
                                rcx_5 = nullptr
                    
                    rbx_1 = *(*(rcx_5 + 8) + 8)
                
            label_141d38d38:
                int64_t var_130
                sub_140b58170(&var_130, "LinearForce", 1)
                int128_t* var_b8
                int64_t* var_58
                int64_t* rcx_17
                int64_t r12_2
                void* r13_1
                int64_t r14_3
                void* r15_2
                
                if (*rdi_3 != var_130)
                    int64_t var_128
                    sub_140b58170(&var_128, "AngularTorque", 1)
                    
                    if (*rdi_3 == var_128)
                        int64_t* rcx_30 = rdi_3[1]
                        
                        if ((*(*rcx_30 + 8))(rcx_30) != 4)
                            goto label_141d3902e
                        
                        int64_t var_180 = 0
                        int32_t var_178_1 = 0
                        sub_141d3bb30(&var_180, arg2, rbx_1, 1)
                        r12_2 = var_180
                        
                        if (var_178_1 == 0)
                            goto label_141d3901f
                        
                        void* var_170
                        __builtin_memset(&var_170, 0, 0x18)
                        r13_1 = nullptr
                        r15_2 = nullptr
                        int32_t r14_4 = var_178_1
                        int32_t var_154_1 = 0
                        
                        if (var_178_1 s> 0)
                            sub_140638a00(&var_170)
                            int32_t var_168
                            r14_4 = var_168
                            r13_1 = var_170
                        
                        int32_t rsi_5 = var_178_1
                        
                        if (var_178_1 s> 0)
                            void* var_160
                            sub_1405a4d70(&var_160)
                            rsi_5 = var_178_1
                            r15_2 = var_160
                        
                        int32_t r8_9 = 0
                        
                        if (var_178_1 s> 0)
                            void* r9_5 = r15_2
                            void* r10_2 = r13_1
                            
                            do
                                int64_t* rcx_34 = *(r12_2 - r15_2 + r9_5)
                                r9_5 += 8
                                int32_t var_1c8_1 = r8_9
                                r10_2 += 0xc
                                int32_t var_1c4_1 = r8_9
                                r8_9 += 1
                                int64_t rdx_15 = sx.q(rcx_34[1].d) * 3
                                int64_t rcx_35 = *(*rcx_34 + 0x28)
                                *(r10_2 - 0xc) = *(rcx_35 + (rdx_15 << 2))
                                *(r10_2 - 4) = *(rcx_35 + (rdx_15 << 2) + 8)
                                *(r9_5 - 8) = var_1c8_1.q
                            while (r8_9 s< var_178_1)
                        
                        void* var_e0 = r13_1
                        int32_t var_d8_1 = r14_4
                        void* var_d0 = r15_2
                        int32_t var_c8_1 = rsi_5
                        sub_141d2d270(&var_b8, &var_d0, &var_e0, &rdi_3[2])
                        r14_3 = 0
                        int64_t var_150 = 0
                        int32_t var_144_1 = 0
                        
                        if (var_178_1 s> 0)
                            sub_140638a00(&var_150)
                            r14_3 = var_150
                        
                        int64_t* rcx_38 = rdi_3[1]
                        int64_t var_110 = r14_3
                        int32_t var_108_1 = var_178_1
                        (*(*rcx_38 + 0x30))(rcx_38, &var_b8, &var_110)
                        rcx_17 = var_58
                        int32_t rax_35
                        int32_t* rdi_5
                        int96_t zmm0_4
                        
                        if (rcx_17[1].b != 0)
                            rdi_5 = rcx_17[2]
                            rax_35 = rcx_17[3].d
                        else
                            zmm0_4 = (*var_b8).12
                            rax_35 = zmm0_4:8.d
                            rdi_5 = zmm0_4.q
                        
                        void* rsi_6 = &rdi_5[sx.q(rax_35) * 2]
                        
                        if (rdi_5 == rsi_6)
                            goto label_141d38fc3
                        
                        do
                            int64_t* rbx_6 = nullptr
                            int64_t* rcx_39 = *(r12_2 + (sx.q(*rdi_5) << 3))
                            
                            if (*(rcx_39 + 0xc) u>= 2)
                                rbx_6 = rcx_39
                            
                            if (rbx_6 != 0)
                                void* r9_7 = *rbx_6
                                int64_t rdx_19 = sx.q(rbx_6[1].d)
                                char r8_12 = *(rdx_19 + *(r9_7 + 0x398))
                                
                                if (r8_12 == 4 || r8_12 == 1)
                                    if (r8_12 == 1)
                                        sub_14177fa60(r9_7, rdx_19, 4)
                                        rdx_19 = zx.q(rbx_6[1].d)
                                        r9_7 = *rbx_6
                                    
                                    int64_t rcx_41 = var_110
                                    int64_t r8_13 = sx.q(rdi_5[1]) * 3
                                    int64_t rdx_20 = sx.q(rdx_19.d) * 3
                                    int64_t rax_41 = *(r9_7 + 0x248)
                                    zmm0_4.d =
                                        (*(rax_41 + (rdx_20 << 2))).d f+ *(rcx_41 + (r8_13 << 2))
                                    *(rax_41 + (rdx_20 << 2)) = zmm0_4.d
                                    *(rax_41 + (rdx_20 << 2) + 4) = *(rcx_41 + (r8_13 << 2) + 4) f+
                                        *(rax_41 + (rdx_20 << 2) + 4)
                                    zmm0_4.d = (*(rcx_41 + (r8_13 << 2) + 8)).d f+
                                        *(rax_41 + (rdx_20 << 2) + 8)
                                    *(rax_41 + (rdx_20 << 2) + 8) = zmm0_4.d
                            
                            rdi_5 = &rdi_5[2]
                        while (rdi_5 != rsi_6)
                        
                    label_141d38fb9:
                        rcx_17 = var_58
                    label_141d38fc3:
                        
                        if (r14_3 != 0)
                            sub_140a74f90(r14_3)
                            rcx_17 = var_58
                        
                        if (rcx_17 != 0)
                            (**rcx_17)(rcx_17, 1)
                        
                        void var_a8
                        sub_1405ae080(&var_a8)
                        
                        if (r15_2 != 0)
                            sub_140a74f90(r15_2)
                        
                        if (r13_1 != 0)
                            sub_140a74f90(r13_1)
                        
                        i_1 = i_2
                        rsi_1 = var_208_1
                        r14_1 = var_1f4_1
                        r15_1 = var_204_1
                        goto label_141d3901f
                    
                    rdi_1 = var_200
                else
                    int64_t* rcx_7 = rdi_3[1]
                    
                    if ((*(*rcx_7 + 8))(rcx_7) != 4)
                        goto label_141d3902e
                    
                    int64_t var_1c0 = 0
                    int32_t var_1b8_1 = 0
                    sub_141d3bb30(&var_1c0, arg2, rbx_1, 1)
                    int64_t rbx_2 = sx.q(var_1b8_1)
                    r12_2 = var_1c0
                    
                    if (rbx_2.d != 0)
                        int32_t var_1a8_1 = rbx_2.d
                        void* var_1b0 = nullptr
                        r13_1 = nullptr
                        int32_t var_1a4_1 = 0
                        r15_2 = nullptr
                        void* var_1a0 = nullptr
                        int32_t r14_2 = rbx_2.d
                        int32_t var_194_1 = 0
                        
                        if (rbx_2.d s> 0)
                            sub_140638a00(&var_1b0)
                            r14_2 = var_1a8_1
                            r13_1 = var_1b0
                        
                        int32_t var_198_1 = rbx_2.d
                        int32_t rsi_2 = rbx_2.d
                        
                        if (rbx_2.d s> 0)
                            sub_1405a4d70(&var_1a0)
                            rsi_2 = var_198_1
                            r15_2 = var_1a0
                        
                        int32_t j = 0
                        
                        if (rbx_2.d s> 0)
                            void* r9_2 = r15_2
                            void* r10_1 = r13_1
                            
                            do
                                int64_t* rcx_11 = *(r12_2 - r15_2 + r9_2)
                                r9_2 += 8
                                int32_t j_1 = j
                                r10_1 += 0xc
                                int32_t j_2 = j
                                j += 1
                                int64_t rdx_5 = sx.q(rcx_11[1].d) * 3
                                int64_t rcx_12 = *(*rcx_11 + 0x28)
                                *(r10_1 - 0xc) = *(rcx_12 + (rdx_5 << 2))
                                *(r10_1 - 4) = *(rcx_12 + (rdx_5 << 2) + 8)
                                *(r9_2 - 8) = j_1.q
                            while (j s< rbx_2.d)
                        
                        void* var_100 = r13_1
                        int32_t var_f8_1 = r14_2
                        void* var_f0 = r15_2
                        int32_t var_e8_1 = rsi_2
                        sub_141d2d270(&var_b8, &var_f0, &var_100, &rdi_3[2])
                        r14_3 = 0
                        int32_t var_188_1 = rbx_2.d
                        int64_t var_190 = 0
                        int32_t rsi_3 = rbx_2.d
                        int32_t var_184_1 = 0
                        
                        if (rbx_2.d s> 0)
                            sub_140638a00(&var_190)
                            rsi_3 = var_188_1
                            r14_3 = var_190
                        
                        memset(r14_3, 0, rbx_2 * 0xc)
                        int64_t* rcx_16 = rdi_3[1]
                        int64_t var_120 = r14_3
                        int32_t var_118_1 = rsi_3
                        (*(*rcx_16 + 0x30))(rcx_16, &var_b8, &var_120)
                        rcx_17 = var_58
                        int32_t rax_17
                        int32_t* rdi_4
                        int96_t zmm0_2
                        
                        if (rcx_17[1].b != 0)
                            rdi_4 = rcx_17[2]
                            rax_17 = rcx_17[3].d
                        else
                            zmm0_2 = (*var_b8).12
                            rax_17 = zmm0_2:8.d
                            rdi_4 = zmm0_2.q
                        
                        void* rsi_4 = &rdi_4[sx.q(rax_17) * 2]
                        
                        if (rdi_4 == rsi_4)
                            goto label_141d38fc3
                        
                        do
                            int64_t* rbx_3 = nullptr
                            int64_t* rcx_18 = *(r12_2 + (sx.q(*rdi_4) << 3))
                            
                            if (*(rcx_18 + 0xc) u>= 2)
                                rbx_3 = rcx_18
                            
                            if (rbx_3 != 0)
                                int64_t rdx_9 = sx.q(rbx_3[1].d)
                                void* r9_4 = *rbx_3
                                
                                if (*(rdx_9 + *(r9_4 + 0x368)) == 0)
                                    char rcx_20 = *(rdx_9 + *(r9_4 + 0x398))
                                    
                                    if (rcx_20 == 4 || rcx_20 == 1)
                                        int64_t r8_7
                                        
                                        if (rcx_20 == 1)
                                            r8_7.b = 4
                                            sub_14177fa60(r9_4, rdx_9, r8_7.b)
                                            rdx_9 = zx.q(rbx_3[1].d)
                                            r9_4 = *rbx_3
                                        
                                        int64_t rcx_22 = var_120
                                        r8_7 = sx.q(rdi_4[1]) * 3
                                        int64_t rdx_10 = sx.q(rdx_9.d) * 3
                                        int64_t rax_24 = *(r9_4 + 0x230)
                                        zmm0_2.d =
                                            (*(rax_24 + (rdx_10 << 2))).d f+ *(rcx_22 + (r8_7 << 2))
                                        *(rax_24 + (rdx_10 << 2)) = zmm0_2.d
                                        *(rax_24 + (rdx_10 << 2) + 4) =
                                            *(rcx_22 + (r8_7 << 2) + 4) f+
                                            *(rax_24 + (rdx_10 << 2) + 4)
                                        zmm0_2.d = (*(rcx_22 + (r8_7 << 2) + 8)).d f+
                                            *(rax_24 + (rdx_10 << 2) + 8)
                                        *(rax_24 + (rdx_10 << 2) + 8) = zmm0_2.d
                            
                            rdi_4 = &rdi_4[2]
                        while (rdi_4 != rsi_4)
                        
                        goto label_141d38fb9
                    
                label_141d3901f:
                    
                    if (r12_2 != 0)
                        sub_140a74f90(r12_2)
                    
                    r12_1 = var_1f0_1
                label_141d3902e:
                    int64_t rbx_4 = sx.q(rsi_1)
                    rsi_1 = (rbx_4 + 1).d
                    var_208_1 = rsi_1
                    
                    if (rsi_1 s> r14_1)
                        sub_1405a4cf0(&var_200)
                        r14_1 = var_1f4_1
                        var_208_1 = rsi_1
                    
                    rdi_1 = var_200
                    *(rdi_1 + (rbx_4 << 2)) = r15_1
                result_2 = result_1
                r15_1 += 1
                r12_1 += 0x60
                var_204_1 = r15_1
                i = i_1
                i_1 -= 1
                var_1f0_1 = r12_1
                i_2 = i_1
            while (i != 1)
        
        result = zx.q(rsi_1 - 1)
        int64_t rbx_7 = sx.q(result.d)
        
        if (result.d s>= 0)
            int64_t temp0_1
            
            do
                result = sub_141d40ab0(result_2, *(rdi_1 + (rbx_7 << 2)), 1, 1)
                temp0_1 = rbx_7
                rbx_7 -= 1
                result_2 = result_1
            while (temp0_1 - 1 s>= 0)
        
        if (rdi_1 != 0)
            result = sub_140a74f90(rdi_1)

__security_check_cookie(rax_1 ^ &var_228)
return result
