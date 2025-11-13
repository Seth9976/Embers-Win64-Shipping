// 函数: sub_140e26150
// 地址: 0x140e26150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r15 = arg1

if (*(arg1 + 9) != 0)
    int64_t* var_108
    void* var_c8
    int64_t* var_c0
    void* var_b8
    void* var_a8
    int64_t* var_a0
    void* var_98
    
    if (*(arg1 + 0x78) != 0 && *(arg1 + 0x28) == 0)
        *(arg1 + 0x78) = 0
        int64_t* rcx = data_143e20d08
        (*(*rcx + 0x38))(rcx, &var_108)
        int32_t i
        
        if (i s> 0)
            do
                int64_t* rcx_1 = var_108
                int64_t rbx_2 = sx.q(i - 1) * 2
                void* r14_1 = rcx_1[rbx_2]
                int64_t* rbx_3 = rcx_1[rbx_2 + 1]
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                    rcx_1 = var_108
                
                int64_t* rdi_1 = rcx_1[sx.q(i - 1) * 2 + 1]
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp5_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
                    
                    rcx_1 = var_108
                
                if (1 != 1)
                    memmove(&rcx_1[sx.q(i - 1) * 2], &rcx_1[sx.q(i) * 2], 0 << 4)
                
                i -= 1
                var_a8 = r14_1
                var_a0 = rbx_3
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                
                int64_t* rax_9 = sub_140e11740(&var_98, &var_a8)
                int64_t rdi_2 = sx.q(*(r15 + 0x28))
                int32_t rcx_6 = (rdi_2 + 1).d
                *(r15 + 0x28) = rcx_6
                
                if (rcx_6 s> *(r15 + 0x2c))
                    sub_1405c4e40(r15 + 0x20)
                
                int64_t* rcx_10 = (rdi_2 << 5) + *(r15 + 0x20)
                var_c8 = *rax_9
                int64_t* rax_11 = rax_9[1]
                var_c0 = rax_11
                
                if (rax_11 != 0)
                    rax_11[1].d += 1
                
                var_b8 = r14_1
                int64_t* var_b0_1 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                sub_140ddd840(rcx_10, &var_b8, &var_c8)
                int64_t* var_90
                
                if (var_90 != 0)
                    var_90[1].d -= 1
                    
                    if (var_90[1].d == 1)
                        (**var_90)(var_90)
                        int32_t temp16_1 = *(var_90 + 0xc)
                        *(var_90 + 0xc) -= 1
                        
                        if (temp16_1 == 1)
                            (*(*var_90 + 8))(var_90, 1)
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp17_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp17_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                int32_t j_4 = *(r14_1 + 0xa08)
                
                if (j_4 != 0)
                    int32_t i_5 = i
                    int32_t rdx_8 = i_5 + j_4
                    int32_t var_fc
                    
                    if (rdx_8 s> var_fc)
                        sub_1405a5410(&var_108, rdx_8)
                        i_5 = i
                    
                    int64_t* rdx_9 = *(r14_1 + 0xa00)
                    int32_t j_3 = j_4
                    int64_t* rcx_18 = &var_108[sx.q(i_5) * 2]
                    int32_t j
                    
                    do
                        *rcx_18 = *rdx_9
                        void* rax_17 = rdx_9[1]
                        rcx_18[1] = rax_17
                        
                        if (rax_17 != 0)
                            *(rax_17 + 8) += 1
                        
                        rcx_18 = &rcx_18[2]
                        rdx_9 = &rdx_9[2]
                        j = j_3
                        j_3 -= 1
                    while (j != 1)
                    i += j_4
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp19_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp19_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
            while (i s> 0)
            
            r15 = arg1
        
        sub_140596d80(&var_108)
    
    result = zx.q(*(r15 + 0x28))
    
    if (result.d s> 0)
        int32_t i_1 = 0
        int32_t i_4 = 0
        int32_t var_f8
        
        while (i_1 s< data_1439ae6a8)
            int64_t rax_20 = *(r15 + 0x20)
            int64_t rcx_23 = sx.q(*(r15 + 0x28)) << 5
            int64_t* r12_1 = *(rcx_23 + rax_20 - 0x18)
            int64_t* rbx_4 = *(rcx_23 + rax_20 - 0x20)
            *(rcx_23 + rax_20 - 0x18) = 0
            *(rcx_23 + rax_20 - 0x20) = 0
            int64_t* rdi_4 = *(rcx_23 + rax_20 - 8)
            void* rdx_10 = *(rcx_23 + rax_20 - 0x10)
            var_108 = r12_1
            var_b8 = rdx_10
            
            if (rdi_4 != 0)
                rdi_4[1].d += 1
            
            sub_140e210a0(r15 + 0x20, *(r15 + 0x28) - 1, 1, 0)
            
            if (rbx_4 != 0 && r12_1 != 0)
                int32_t rax_21 = r12_1[1].d
                
                if (rax_21 s> 0)
                    r12_1[1].d = rax_21 + 1
                    
                    if (*(rbx_4 + 0x29) s< 0)
                        int64_t* rax_24 = (*(*rbx_4 + 0x188))(rbx_4)
                        int32_t r15_3 = 0
                        int32_t arg_10 = 0
                        int64_t* rsi_4 = rax_24
                        int64_t rdx_13 = *rax_24
                        
                        if ((*rdx_13)(rax_24, rdx_13) s> 0)
                            void* r12_2 = var_b8
                            int32_t rax_39
                            
                            do
                                int64_t r9_1 = *rsi_4
                                (*(r9_1 + 0x10))(rsi_4, &var_c8, zx.q(r15_3), r9_1)
                                uint128_t zmm0
                                
                                if (*(var_c8 + 0x2a) == 0)
                                    int64_t rbx_7 = sx.q(*(r15 + 0x28))
                                    int32_t rax_54 = (rbx_7 + 1).d
                                    *(r15 + 0x28) = rax_54
                                    
                                    if (rax_54 s> *(r15 + 0x2c))
                                        sub_1405c4e40(r15 + 0x20)
                                    
                                    var_98 = r12_2
                                    int64_t* rcx_50 = (rbx_7 << 5) + *(r15 + 0x20)
                                    int64_t* var_90_1 = rdi_4
                                    
                                    if (rdi_4 != 0)
                                        rdi_4[1].d += 1
                                    
                                    zmm0 = var_c8.o
                                    var_f8.o = zmm0
                                    void* rax_55 = _mm_bsrli_si128(zmm0, 8).q
                                    
                                    if (rax_55 != 0)
                                        *(rax_55 + 0xc) += 1
                                    
                                    sub_140ddd840(rcx_50, &var_f8, &var_98)
                                else
                                    int512_t zmm1_1 = sub_140e11740(&var_a8, &var_c8)
                                    void* r13_2 = var_a8
                                    int32_t rax_27 = *(r12_2 + 0x58)
                                    void* var_88 = r12_2
                                    int64_t* var_80_1 = rdi_4
                                    *(r13_2 + 0x60) = rax_27
                                    
                                    if (rdi_4 != 0)
                                        rdi_4[1].d += 1
                                    
                                    sub_140e27540(r13_2, &var_88, zmm1_1)
                                    
                                    if (var_a0 != 0)
                                        *(var_a0 + 0xc) += 1
                                    
                                    int64_t r15_4 = sx.q(*(r12_2 + 0x58))
                                    int32_t rax_28 = (r15_4 + 1).d
                                    *(r12_2 + 0x58) = rax_28
                                    
                                    if (rax_28 s> *(r12_2 + 0x5c))
                                        sub_1405a4f90(r12_2 + 0x50)
                                    
                                    void** rax_31 = (r15_4 << 4) + *(r12_2 + 0x50)
                                    *rax_31 = r13_2
                                    rax_31[1] = var_a0
                                    int64_t rsi_5 = sx.q(*(r15 + 0x28))
                                    int32_t rax_32 = (rsi_5 + 1).d
                                    *(r15 + 0x28) = rax_32
                                    
                                    if (rax_32 s> *(r15 + 0x2c))
                                        sub_1405c4e40(r15 + 0x20)
                                    
                                    int64_t* rcx_34 = (rsi_5 << 5) + *(r15 + 0x20)
                                    var_b8.o = var_a8.o
                                    
                                    if (var_a0 != 0)
                                        var_a0[1].d += 1
                                    
                                    zmm0 = var_c8.o
                                    var_f8.o = zmm0
                                    void* rax_33 = _mm_bsrli_si128(zmm0, 8).q
                                    
                                    if (rax_33 != 0)
                                        *(rax_33 + 0xc) += 1
                                    
                                    sub_140ddd840(rcx_34, &var_f8, &var_b8)
                                    
                                    if (var_a0 != 0)
                                        var_a0[1].d -= 1
                                        
                                        if (var_a0[1].d == 1)
                                            (**var_a0)(var_a0)
                                            int32_t temp24_1 = *(var_a0 + 0xc)
                                            *(var_a0 + 0xc) -= 1
                                            
                                            if (temp24_1 == 1)
                                                (*(*var_a0 + 8))(var_a0, 1)
                                    
                                    r15_3 = arg_10
                                    rsi_4 = rax_24
                                
                                if (var_c0 != 0)
                                    var_c0[1].d -= 1
                                    
                                    if (var_c0[1].d == 1)
                                        (**var_c0)(var_c0)
                                        int32_t temp22_1 = *(var_c0 + 0xc)
                                        *(var_c0 + 0xc) -= 1
                                        
                                        if (temp22_1 == 1)
                                            (*(*var_c0 + 8))(var_c0, 1)
                                
                                r15_3 += 1
                                arg_10 = r15_3
                                rax_39 = (**rsi_4)(rsi_4)
                            while (r15_3 s< rax_39)
                            r12_1 = var_108
                        
                        r15 = arg1
                        i_1 = i_4
                    
                    r12_1[1].d -= 1
                    
                    if (r12_1[1].d == 1)
                        (**r12_1)(r12_1)
                        int32_t temp9_1 = *(r12_1 + 0xc)
                        *(r12_1 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*r12_1 + 8))(r12_1, 1)
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t temp7_1 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rdi_4 + 8))(rdi_4, 1)
            
            if (r12_1 != 0)
                int32_t temp6_1 = *(r12_1 + 0xc)
                *(r12_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*r12_1 + 8))(r12_1, 1)
            
            result = zx.q(*(r15 + 0x28))
            i_1 += 1
            i_4 = i_1
            
            if (result.d s<= 0)
                break
        
        if (result.d == 0)
            int32_t r10_1 = (data_1439af098).d
            void* r9_2 = &data_1439af080
            int32_t var_f4_1 = 1
            int32_t rcx_45 = 0
            var_f8 = 0
            int32_t r8_6 = 0
            void* var_f0 = &data_1439af080
            int32_t var_e8_1 = 0xffffffff
            int64_t var_e4_1 = 0
            
            if (r10_1 != 0)
                void* rax_45 = data_1439af090
                
                if (rax_45 != 0)
                    r9_2 = rax_45
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r10_1 - 1)
                int32_t rdx_22 = *r9_2
                
                if (rdx_22 != 0)
                label_140e2674f:
                    int32_t rax_52 = neg.d(rdx_22) & rdx_22
                    uint64_t rflags_1
                    int32_t temp0_3
                    temp0_3, rflags_1 = _bit_scan_reverse(rax_52)
                    int32_t var_f4_2 = rax_52
                    int32_t rax_53
                    
                    if (rax_52 == 0)
                        rax_53 = 0x20
                    else
                        rax_53 = 0x1f - temp0_3
                    
                    var_e4_1.d = r8_6 - rax_53 + 0x1f
                    
                    if (r8_6 - rax_53 + 0x1f s> r10_1)
                        var_e4_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_23 = sx.q(rcx_45)
                        r8_6 += 0x20
                        rcx_45 += 1
                        var_e4_1:4.d = r8_6
                        var_f8 = rcx_45
                        
                        if (rdx_23.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_22 = *(r9_2 + (rdx_23 << 2) + 4)
                        var_e8_1 = 0xffffffff
                        
                        if (rdx_22 != 0)
                            goto label_140e2674f
                    
                    var_e4_1.d = r10_1
            
            uint128_t zmm2 = var_e8_1.o
            uint128_t var_70_1 = var_f8.o
            result = zmm2.q u>> 0x20
            uint128_t var_60_1 = zmm2
            var_f8.o = (&data_1439af070).o
            uint64_t var_d8_1 = (_mm_unpackhi_pd(zmm2, zmm2.q)).q
            var_e8_1.o = var_70_1
            
            if (result.d s< r10_1)
                int32_t i_3
                int32_t i_2 = i_3
                
                do
                    int64_t rdx_27 = sx.q(i_2) << 5
                    int64_t rcx_51 = *var_f8.q
                    int64_t* rbx_8 = *(rdx_27 + rcx_51 + 0x10)
                    void* r14_3 = *(rdx_27 + rcx_51 + 8)
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d += 1
                    
                    if (r14_3 + 0x40 != r14_3 + 0x50)
                        int32_t j_2 = *(r14_3 + 0x48)
                        void* rcx_52 = *(r14_3 + 0x40)
                        
                        if (j_2 != 0)
                            int64_t* rdi_5 = rcx_52 + 8
                            int32_t j_1
                            
                            do
                                int64_t* rcx_53 = *rdi_5
                                
                                if (rcx_53 != 0)
                                    int32_t temp14_1 = *(rcx_53 + 0xc)
                                    *(rcx_53 + 0xc) -= 1
                                    
                                    if (temp14_1 == 1)
                                        (*(*rcx_53 + 8))(rcx_53, 1)
                                
                                rdi_5 = &rdi_5[2]
                                j_1 = j_2
                                j_2 -= 1
                            while (j_1 != 1)
                            rcx_52 = *(r14_3 + 0x40)
                        
                        if (rcx_52 != 0)
                            sub_140a74f90(rcx_52)
                        
                        *(r14_3 + 0x40) = *(r14_3 + 0x50)
                        *(r14_3 + 0x50) = 0
                        *(r14_3 + 0x48) = *(r14_3 + 0x58)
                        *(r14_3 + 0x4c) = *(r14_3 + 0x5c)
                        *(r14_3 + 0x58) = 0
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d -= 1
                        
                        if (rbx_8[1].d == 1)
                            (**rbx_8)(rbx_8)
                            int32_t temp11_1 = *(rbx_8 + 0xc)
                            *(rbx_8 + 0xc) -= 1
                            
                            if (temp11_1 == 1)
                                (*(*rbx_8 + 8))(rbx_8, 1)
                    
                    var_e4_1:4.d &= not.d(var_f0:4.d)
                    sub_14059bdd0(&var_f0)
                    result = var_e8_1.q
                    i_2 = i_3
                while (i_2 s< result[3].d)

return result
