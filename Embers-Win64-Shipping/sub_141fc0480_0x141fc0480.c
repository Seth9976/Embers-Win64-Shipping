// 函数: sub_141fc0480
// 地址: 0x141fc0480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (*(arg1 + 0xb0c) != 0)
label_141fc04c4:
    result = sub_141dce3a0(arg2)
    
    if (result.b != 0 && (*(arg2 + 0x59) & 0x10) == 0)
        int64_t var_78
        sub_140d21830(arg2, &var_78, 0, 0)
        int32_t arg_18
        result = sub_141fb2f50(arg1 + 0x840, &arg_18, &var_78)
        
        if (*result == 0xffffffff)
            int64_t* arg_20 = &var_78
            sub_141fa1e30(arg1 + 0x840, &arg_18, &arg_20, nullptr)
            int64_t r13_1 = *(arg1 + 0x840)
            void* r12_1 = sx.q(arg_18) * 0xc8
            *(r12_1 + r13_1 + 0x10) = *(arg2 + 0x18)
            *(r12_1 + r13_1 + 0x18) = sub_140d209c0(arg2)
            void* rax_4 = *(arg2 + 0x130)
            int64_t var_f8
            float var_f0_1
            float zmm1_1[0x4]
            
            if (rax_4 == 0)
                float rax_5 = data_143dbb200
                var_f8 = data_143dbb1f8.q
                var_f0_1 = rax_5
            else
                zmm1_1 = *(rax_4 + 0x1d0)
                var_f8.d = zmm1_1[0]
                float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_f0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                var_f8:4.d = temp0_1[0]
            
            *(r12_1 + r13_1 + 0x20) = var_f8
            *(r12_1 + r13_1 + 0x28) = var_f0_1
            void* rbx_1 = *(arg2 + 0x130)
            float var_88[0x4]
            int32_t rax_10
            float zmm0_1[0x4]
            
            if (rbx_1 == 0)
                zmm0_1 = zx.o(data_143dbb208)
                rax_10 = data_143dbb210
            else
                zmm1_1 = *(rbx_1 + 0x1c0)
                uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1_1, 4))
                var_88 = zmm1_1
                
                if (temp0_4 != 0)
                    *(rbx_1 + 0x180) = zmm1_1
                    int32_t* rax_8 = sub_140adf5d0(&var_88, &var_f8)
                    *(rbx_1 + 0x190) = *rax_8
                    *(rbx_1 + 0x198) = rax_8[2]
                
                zmm0_1 = zx.o(*(rbx_1 + 0x190))
                rax_10 = *(rbx_1 + 0x198)
            
            var_f8 = zmm0_1.q
            *(r12_1 + r13_1 + 0x2c) = var_f8
            *(r12_1 + r13_1 + 0x34) = rax_10
            int32_t* rax_12 = sub_141dc53e0(arg2, &var_f8)
            *(r12_1 + r13_1 + 0x38) = *rax_12
            *(r12_1 + r13_1 + 0x40) = rax_12[2]
            result = sub_141dc9840(arg2)
            *(r12_1 + r13_1 + 0x48) = result
            
            if (data_143a2dbc0 != 0)
                void*** rax_14 = j_sub_140a82f30(0xf0)
                
                if (rax_14 != 0)
                    rax_14[1].d = 1
                    *(rax_14 + 0xc) = 1
                    *rax_14 = &data_14328f958
                    sub_141fa4db0(&rax_14[2])
                
                int32_t var_f0_2
                var_f0_2.q = rax_14
                var_f8 = &rax_14[2]
                int64_t* rdi_1 = var_f0_2.q
                int64_t r15_1 = var_f8
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                    int64_t* rbx_3 = var_f0_2.q
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp2_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                
                sub_141fb87a0(r15_1, sub_140d209c0(arg2), *(arg1 + 0x88), 0)
                void* rcx_13 = *(r15_1 + 0x20)
                
                if (rcx_13 != 0)
                    int64_t* r9_1 = *(r15_1 + 0x30)
                    
                    if (r9_1 != 0
                            && sub_1422b2990(rcx_13, nullptr, r12_1 + 0xb0 + r13_1, **r9_1, arg2)
                            != 0)
                        int64_t rsi_1 = *(r15_1 + 0x30)
                        *(r15_1 + 0x30) = 0
                        void*** rax_19 = j_sub_140a82f30(0x18)
                        void*** rbx_4 = rax_19
                        
                        if (rax_19 == 0)
                            rbx_4 = nullptr
                        else
                            rax_19[1].d = 1
                            *(rax_19 + 0xc) = 1
                            *rbx_4 = &data_14328f968
                            rbx_4[2] = rsi_1
                        
                        var_f8 = rsi_1
                        var_f0_2.q = rbx_4
                        void* r15_3 = r12_1 + 0x50 + r13_1
                        
                        if (r15_3 == &var_f8)
                        label_141fc0843:
                            
                            if (rbx_4 != 0)
                                rbx_4[1].d -= 1
                                
                                if (rbx_4[1].d == 1)
                                    (**rbx_4)(rbx_4)
                                    int32_t temp9_1 = *(rbx_4 + 0xc)
                                    *(rbx_4 + 0xc) -= 1
                                    
                                    if (temp9_1 == 1)
                                        (*rbx_4)[1](rbx_4, 1)
                        else
                            *r15_3 = rsi_1
                            int64_t* rsi_2 = *(r15_3 + 8)
                            var_f8 = 0
                            
                            if (rbx_4 == rsi_2)
                                goto label_141fc0843
                            
                            var_f0_2.q = 0
                            *(r15_3 + 8) = rbx_4
                            
                            if (rsi_2 != 0)
                                rsi_2[1].d -= 1
                                
                                if (rsi_2[1].d == 1)
                                    (**rsi_2)(rsi_2)
                                    int32_t temp11_1 = *(rsi_2 + 0xc)
                                    *(rsi_2 + 0xc) -= 1
                                    
                                    if (temp11_1 == 1)
                                        (*(*rsi_2 + 8))(rsi_2, 1)
                                
                                rbx_4 = var_f0_2.q
                                goto label_141fc0843
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp3_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
                
                int32_t rcx_20 = 0
                int32_t var_e4_1 = 1
                int64_t* r10_1 = arg2 + 0x1a0
                int32_t var_e8_1 = 0
                int32_t r11_1 = r10_1[5].d
                void* r14_1 = &r10_1[2]
                int32_t r8_6 = 0
                arg_20 = r10_1
                void* var_e0_1 = r14_1
                int32_t var_d8_1 = 0xffffffff
                int64_t var_d4_1 = 0
                
                if (r11_1 != 0)
                    void* rax_26 = *(r14_1 + 0x10)
                    void* r9_4 = r14_1
                    
                    if (rax_26 != 0)
                        r9_4 = rax_26
                    
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(r11_1 - 1)
                    int32_t rdx_9 = *r9_4
                    
                    if (rdx_9 != 0)
                    label_141fc091b:
                        int32_t rax_33 = neg.d(rdx_9) & rdx_9
                        uint64_t rflags_1
                        int32_t temp0_6
                        temp0_6, rflags_1 = _bit_scan_reverse(rax_33)
                        int32_t var_e4_2 = rax_33
                        int32_t rax_34
                        
                        if (rax_33 == 0)
                            rax_34 = 0x20
                        else
                            rax_34 = 0x1f - temp0_6
                        
                        var_d4_1.d = r8_6 - rax_34 + 0x1f
                        
                        if (r8_6 - rax_34 + 0x1f s> r11_1)
                            var_d4_1.d = r11_1
                    else
                        while (true)
                            int64_t rdx_10 = sx.q(rcx_20)
                            r8_6 += 0x20
                            rcx_20 += 1
                            var_d4_1:4.d = r8_6
                            var_e8_1 = rcx_20
                            
                            if (rdx_10.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_9 = *(r9_4 + (rdx_10 << 2) + 4)
                            var_d8_1 = 0xffffffff
                            
                            if (rdx_9 != 0)
                                goto label_141fc091b
                        
                        var_d4_1.d = r11_1
                
                int32_t rdx_11 = r10_1[5].d
                int64_t* var_c8 = r10_1
                double zmm2_1[0x2] = var_d8_1.o
                int128_t var_c0_1 = var_e8_1.o
                int32_t rsi_3 = 0xffffffff << (rdx_11.b & 0x1f)
                int128_t zmm0_3 = var_c8.o
                int32_t r8_9 = rdx_11 s>> 5
                int32_t r9_6 = rdx_11 & 0xffffffe0
                double var_b0_1[0x2] = zmm2_1
                int64_t var_48_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                int128_t zmm1_2 = var_c0_1
                var_c0_1:8.d = rsi_3
                var_c0_1:0xc.d = rdx_11
                int128_t var_68 = zmm0_3
                int128_t var_58_1 = zmm1_2
                
                if (rdx_11 != r11_1)
                    void* rax_36 = *(r14_1 + 0x10)
                    void* r10_2 = r14_1
                    
                    if (rax_36 != 0)
                        r10_2 = rax_36
                    
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(r11_1 - 1)
                    int32_t rdx_15 = *(r10_2 + (sx.q(r8_9) << 2)) & rsi_3
                    
                    if (rdx_15 != 0)
                    label_141fc09f3:
                        int32_t rax_43 = neg.d(rdx_15) & rdx_15
                        uint64_t rflags_2
                        int32_t temp0_8
                        temp0_8, rflags_2 = _bit_scan_reverse(rax_43)
                        int32_t rbx_5
                        
                        if (rax_43 == 0)
                            rbx_5 = 0x20
                        else
                            rbx_5 = 0x1f - temp0_8
                        
                        var_c0_1:0xc.d = r9_6 - rbx_5 + 0x1f
                        
                        if (r9_6 - rbx_5 + 0x1f s> r11_1)
                            var_c0_1:0xc.d = r11_1
                    else
                        while (true)
                            int64_t rcx_25 = sx.q(r8_9)
                            r9_6 += 0x20
                            r8_9 += 1
                            
                            if (rcx_25.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_15 = *(r10_2 + (rcx_25 << 2) + 4)
                            var_c0_1:8.d = 0xffffffff
                            
                            if (rdx_15 != 0)
                                goto label_141fc09f3
                        
                        var_c0_1:0xc.d = r11_1
                    
                    r10_1 = arg_20
                
                while (true)
                    int64_t rcx_27 = sx.q(var_58_1:0xc.d)
                    result = var_68.q
                    
                    if (rcx_27.d == (var_c0_1:8.q u>> 0x20).d && var_58_1.q == r14_1
                            && result == r10_1)
                        break
                    
                    void* r14_2 = *(*result + rcx_27 * 0x10)
                    
                    if (r14_2 != 0)
                        void*** rax_46 = j_sub_140a82f30(0xf0)
                        void*** rbx_6 = rax_46
                        
                        if (rax_46 == 0)
                            rbx_6 = nullptr
                        else
                            rax_46[1].d = 1
                            *(rax_46 + 0xc) = 1
                            *rbx_6 = &data_14328f958
                            sub_141fa4db0(&rbx_6[2])
                        
                        var_f0_2.q = rbx_6
                        var_f8 = &rbx_6[2]
                        int64_t* rbx_7 = var_f0_2.q
                        int64_t rsi_4 = var_f8
                        
                        if (rbx_7 != 0)
                            rbx_7[1].d += 1
                            int64_t* rdi_2 = var_f0_2.q
                            
                            if (rdi_2 != 0)
                                rdi_2[1].d -= 1
                                
                                if (rdi_2[1].d == 1)
                                    (**rdi_2)(rdi_2)
                                    int32_t temp14_1 = *(rdi_2 + 0xc)
                                    *(rdi_2 + 0xc) -= 1
                                    
                                    if (temp14_1 == 1)
                                        (*(*rdi_2 + 8))(rdi_2, 1)
                        
                        sub_141fb87a0(rsi_4, sub_140d209c0(r14_2), *(arg1 + 0x88), 0)
                        void* rcx_34 = *(rsi_4 + 0x20)
                        
                        if (rcx_34 != 0)
                            int64_t* r9_8 = *(rsi_4 + 0x30)
                            
                            if (r9_8 != 0 && sub_1422b2990(rcx_34, nullptr, r12_1 + 0xb0 + r13_1, 
                                    **r9_8, r14_2) != 0)
                                int64_t rdi_3 = *(rsi_4 + 0x30)
                                *(rsi_4 + 0x30) = 0
                                void*** rax_52 = j_sub_140a82f30(0x18)
                                
                                if (rax_52 != 0)
                                    rax_52[1].d = 1
                                    *rax_52 = &data_14328f968
                                    *(rax_52 + 0xc) = 1
                                    rax_52[2] = rdi_3
                                
                                int64_t var_a0 = rdi_3
                                var_88[0].q = sub_140d21830(r14_2, &var_c8, 0, 0)
                                var_88[2].q = &var_a0
                                sub_141fa1fa0(r12_1 + 0x60 + r13_1, &arg_18, &var_88, nullptr)
                                int64_t* rcx_38 = var_c8
                                
                                if (rcx_38 != 0)
                                    sub_140a74f90(rcx_38)
                                
                                if (rax_52 != 0)
                                    rax_52[1].d -= 1
                                    
                                    if (rax_52[1].d == 1)
                                        (**rax_52)(rax_52)
                                        int32_t temp17_1 = *(rax_52 + 0xc)
                                        *(rax_52 + 0xc) -= 1
                                        
                                        if (temp17_1 == 1)
                                            (*rax_52)[1](rax_52, 1)
                        
                        if (rbx_7 != 0)
                            rbx_7[1].d -= 1
                            
                            if (rbx_7[1].d == 1)
                                (**rbx_7)(rbx_7)
                                int32_t temp15_1 = *(rbx_7 + 0xc)
                                *(rbx_7 + 0xc) -= 1
                                
                                if (temp15_1 == 1)
                                    (*(*rbx_7 + 8))(rbx_7, 1)
                    
                    var_58_1:8.d &= not.d(var_68:0xc.d)
                    sub_14059bdd0(&var_68:8)
                    r10_1 = arg_20
                    r14_1 = var_e0_1
        
        int64_t rcx_44 = var_78
        
        if (rcx_44 != 0)
            return sub_140a74f90(rcx_44)
else
    result = *(arg1 + 0x88)
    
    if (result != 0 && *(result + 0x134) != 1)
        goto label_141fc04c4

return result
