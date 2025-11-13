// 函数: sub_141d6ccc0
// 地址: 0x141d6ccc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* r13 = *(arg2 + 0x68)
void* result

if (r13 == 0)
    result = nullptr
else
    void* rax_2 = sub_142452380()
    void* rcx = *(r13 + 0x10)
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s> *(rcx + 0x38) || *(*(rcx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
        result = nullptr
    else
        uint64_t rax_6 = (*(*arg4 + 0x78))(arg4, rax_3)
        uint64_t r14_1 = rax_6
        void* rax_7
        int64_t rax_8
        void* rdx_1
        
        if (rax_6 != 0)
            rax_7 = sub_1425be5e0()
            rdx_1 = *(r14_1 + 0x10)
            rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_6 == 0 || rax_8.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
            r14_1 = data_143f5e920
        
        int64_t rax_10 = *(arg2 + 0x84)
        int64_t var_158 = rax_10
        int32_t rcx_3
        rcx_3.b = sub_140b5b8a0(rax_10.d, 0) == 0
        int32_t rdi_1 = 0
        
        if ((var_158:4.d != 0 | rcx_3.b) != 0)
            void* rax_12 = sub_141d68bd0(&var_158, r14_1)
            
            if (rax_12 != 0)
                uint64_t rax_13 = sub_140d3c6e0(rax_12 + 0x28)
                uint64_t rbx_1 = rax_13
                
                if (rax_13 != 0)
                label_141d6ce28:
                    void* rax_17 = sub_1425be5e0()
                    void* rdx_4 = *(rbx_1 + 0x10)
                    int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                    
                    if (rax_18.d s<= *(rdx_4 + 0x38)
                            && *(*(rdx_4 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
                        uint64_t rax_20 = sub_140d3c6e0(rax_12 + 0x28)
                        r14_1 = rax_20
                        
                        if (rax_20 != 0)
                        label_141d6cebd:
                            void* rax_24 = sub_1425be5e0()
                            void* rdx_6 = *(r14_1 + 0x10)
                            int64_t rax_25 = sx.q(*(rax_24 + 0x38))
                            
                            if (rax_25.d s> *(rdx_6 + 0x38)
                                    || *(*(rdx_6 + 0x30) + (rax_25 << 3)) != rax_24 + 0x30)
                                r14_1 = 0
                        else if (*(rax_12 + 0x38) == 0)
                            r14_1 = 0
                        else
                            if (rax_20.d == data_1439aaa30)
                                data_1439aaa30 = 0
                            else
                                rax_20 = zx.q(data_1439aaa30)
                            
                            if (rax_20.d != *(rax_12 + 0x30) || *(rax_12 + 0x28) != 0xffffffff)
                                void* rax_21 = sub_140d2bce0(rax_12 + 0x38)
                                sub_140d3a3a0(rax_12 + 0x28, rax_21)
                                
                                if (rax_21 != 0 || data_143e1d7b4 == 0)
                                    int32_t rax_22 = 0
                                    
                                    if (0 == data_1439aaa30)
                                        data_1439aaa30 = 0
                                    else
                                        rax_22 = data_1439aaa30
                                    
                                    *(rax_12 + 0x30) = rax_22
                                
                                uint64_t rax_23 = sub_140d3c6e0(rax_12 + 0x28)
                                r14_1 = rax_23
                                
                                if (rax_23 != 0)
                                    goto label_141d6cebd
                                
                                r14_1 = 0
                            else
                                r14_1 = 0
                else if (*(rax_12 + 0x38) != 0)
                    if (rax_13.d == data_1439aaa30)
                        data_1439aaa30 = 0
                    else
                        rax_13 = zx.q(data_1439aaa30)
                    
                    if (rax_13.d != *(rax_12 + 0x30) || *(rax_12 + 0x28) != 0xffffffff)
                        void* rax_14 = sub_140d2bce0(rax_12 + 0x38)
                        sub_140d3a3a0(rax_12 + 0x28, rax_14)
                        
                        if (rax_14 != 0 || data_143e1d7b4 == 0)
                            int32_t rax_15 = 0
                            
                            if (0 == data_1439aaa30)
                                data_1439aaa30 = 0
                            else
                                rax_15 = data_1439aaa30
                            
                            *(rax_12 + 0x30) = rax_15
                        
                        uint64_t rax_16 = sub_140d3c6e0(rax_12 + 0x28)
                        rbx_1 = rax_16
                        
                        if (rax_16 != 0)
                            goto label_141d6ce28
        
        int64_t var_150_1 = 0
        int64_t var_e8
        sub_142427eb0(&var_e8)
        char var_bf
        char var_bf_1 = var_bf | 4
        var_e8 = 0
        int32_t var_bc_1 = 0x40
        char var_c0_1 = 1
        void* var_e0_1 = r13
        int64_t var_c8_1 = *(r14_1 + 0x30)
        sub_141dbe680(r13)
        uint32_t var_58_1[0x4] = __andps_xmmxud_memxud(data_143f37f90, data_143f37fa0)
        void* rcx_17 = *(r13 + 0x130)
        uint32_t var_78[0x4]
        
        if (rcx_17 == 0)
            uint32_t zmm1_1[0x4] = arg2[1]
            var_78 = *arg2
            uint32_t var_58_2[0x4] = arg2[2]
            uint32_t var_68_2[0x4] = zmm1_1
        else
            uint128_t zmm5_1 = zx.o(*(rcx_17 + 0x11c))
            int32_t rax_28 = *(rcx_17 + 0x124)
            uint32_t zmm0_1[0x4] = zmm5_1
            uint32_t zmm2_1[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55), 0)
            uint128_t var_68_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, rax_28[0].q), zmm2_1[0].q)
            int32_t rax_29 = *(rcx_17 + 0x130)
            int64_t var_13c = *(rcx_17 + 0x128)
            int32_t var_134_1 = rax_29
            float var_88[0x4]
            var_78 = *sub_140ade170(&var_13c, &var_88)
        
        int32_t var_178_1 = 0
        int32_t r10_1 = *(r13 + 0x1c8)
        int32_t var_174_1 = 1
        int32_t rcx_19 = 0
        void* var_170_1 = r13 + 0x1b0
        int32_t var_168_1 = 0xffffffff
        int32_t var_164_1 = 0
        int32_t var_160_1 = 0
        
        if (r10_1 != 0)
            void* rax_31 = *(r13 + 0x1c0)
            void* r8_4 = r13 + 0x1b0
            
            if (rax_31 != 0)
                r8_4 = rax_31
            
            int32_t temp0_6
            int32_t temp1_1
            temp0_6:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_10 = *r8_4
            int32_t var_164_3
            
            if (rdx_10 != 0)
            label_141d6d04a:
                int32_t rax_38 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
                uint64_t rflags_1
                int32_t temp0_7
                temp0_7, rflags_1 = _bit_scan_reverse(rax_38)
                int32_t var_174_2 = rax_38
                int32_t rax_39
                
                if (rax_38 == 0)
                    rax_39 = 0x20
                else
                    rax_39 = 0x1f - temp0_7
                
                int32_t var_164_2 = rcx_19 - rax_39 + 0x1f
                
                if (rcx_19 - rax_39 + 0x1f s> r10_1)
                    var_164_3 = r10_1
            else
                while (true)
                    int64_t rdx_11 = sx.q(rdi_1)
                    rcx_19 += 0x20
                    rdi_1 += 1
                    int32_t var_160_2 = rcx_19
                    var_178_1 = rdi_1
                    
                    if (rdx_11.d s>= (temp1_1 + (temp0_6 & 0x1f)) s>> 5)
                        break
                    
                    rdx_10 = *(r8_4 + (rdx_11 << 2) + 4)
                    int32_t var_168_2 = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_141d6d04a
                
                var_164_3 = r10_1
        
        int32_t rdx_13 = *(r13 + 0x1c8)
        int32_t var_f4_1 = rdx_13
        uint32_t var_b0_1[0x4] = var_178_1.o
        int32_t r12_1 = 0xffffffff << (rdx_13 & 0x1f).b
        int128_t var_a0_1 = 0xffffffff
        int32_t r8_6 = rdx_13 s>> 5
        int32_t r9_1 = rdx_13 & 0xffffffe0
        int64_t var_110_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        int32_t var_f8_1 = r12_1
        uint32_t var_130[0x4] = (r13 + 0x1a0).o
        
        if (rdx_13 != r10_1)
            void* rax_43 = *(r13 + 0x1c0)
            void* r11_1 = r13 + 0x1b0
            
            if (rax_43 != 0)
                r11_1 = rax_43
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_17 = *(r11_1 + (sx.q(r8_6) << 2)) & r12_1
            int32_t var_f4_3
            
            if (rdx_17 != 0)
            label_141d6d126:
                int32_t rax_49 = ((rdx_17 - 1) & rdx_17) ^ rdx_17
                uint64_t rflags_2
                int32_t temp0_9
                temp0_9, rflags_2 = _bit_scan_reverse(rax_49)
                int32_t rbx_4
                
                if (rax_49 == 0)
                    rbx_4 = 0x20
                else
                    rbx_4 = 0x1f - temp0_9
                
                int32_t var_f4_2 = r9_1 - rbx_4 + 0x1f
                
                if (r9_1 - rbx_4 + 0x1f s> r10_1)
                    var_f4_3 = r10_1
            else
                while (true)
                    int64_t rcx_23 = sx.q(r8_6)
                    r9_1 += 0x20
                    r8_6 += 1
                    
                    if (rcx_23.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_17 = *(r11_1 + (rcx_23 << 2) + 4)
                    var_f8_1 = 0xffffffff
                    
                    if (rdx_17 != 0)
                        goto label_141d6d126
                
                var_f4_3 = r10_1
        
        while (true)
            int64_t rdx_18 = sx.q(var_b0_1[3])
            int32_t rax_42
            
            if (rdx_18.d != (var_f8_1.q u>> 0x20).d || var_b0_1[0].q != r13 + 0x1b0)
                rax_42.b = 0
            else
                rax_42.b = 1
            
            int64_t* rcx_25 = var_130[0].q
            
            if (rax_42.b == 0 || rcx_25 != r13 + 0x1a0)
                rax_42.b = 1
            else
                rax_42.b = 0
            
            if (rax_42.b == 0)
                break
            
            void* rbx_5 = *(*rcx_25 + rdx_18 * 0x10)
            
            if (rbx_5 != 0)
                void* rax_52 = sub_14255cbc0()
                void* rdx_19 = *(rbx_5 + 0x10)
                int64_t rax_53 = sx.q(*(rax_52 + 0x38))
                
                if (rax_53.d s<= *(rdx_19 + 0x38)
                        && *(*(rdx_19 + 0x30) + (rax_53 << 3)) == rax_52 + 0x30)
                    sub_141ef4e60(rbx_5, 0)
                    *(rbx_5 + 0x89) &= 0x7f
            
            var_b0_1[2] &= not.d(var_130[3])
            sub_14059bdd0(&var_130[2])
        
        void* result_1 = sub_1420efba0(r14_1, *(r13 + 0x10), &var_78, &var_e8)
        
        if (result_1 == 0)
            result = nullptr
        else
            int64_t* r8_9 = *(result_1 + 0x170)
            int64_t r9_4 = sx.q(*(result_1 + 0x178))
            int64_t* rcx_31 = r8_9
            void* rdx_21 = &r8_9[r9_4]
            
            if (r8_9 != rdx_21)
                while (*rcx_31 != data_143f38008)
                    rcx_31 = &rcx_31[1]
                    
                    if (rcx_31 == rdx_21)
                        goto label_141d6d24f
            
            if (r8_9 == rdx_21 || ((rcx_31 - r8_9) s>> 3).d == 0xffffffff)
            label_141d6d24f:
                int32_t rax_58 = (r9_4 + 1).d
                *(result_1 + 0x178) = rax_58
                
                if (rax_58 s> *(result_1 + 0x17c))
                    sub_1405a4d70(result_1 + 0x170)
                
                *(*(result_1 + 0x170) + (r9_4 << 3)) = data_143f38008
            
            r8_9.b = 1
            sub_141dc3850(result_1, &var_78, r8_9.b, nullptr)
            result = result_1

__security_check_cookie(rax_1 ^ &var_198)
return result
