// 函数: sub_1409122c0
// 地址: 0x1409122c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2c) == 0)
    void* r13_1 = arg1 + 0x40
    int128_t zmm6 = 0x3c23d70a
    void* r15_2
    
    do
        int128_t var_108 = zx.o(0)
        int64_t* rbx_1
        int16_t r9
        
        while (true)
            void* r15_1 = **(arg1 + 0xb8)
            rbx_1 = var_108:8.q
            
            if (r15_1 == 0)
                break
            
            int64_t* r12_1
            
            if (&var_108 == r15_1 + 8)
                r12_1 = var_108.q
            else
                r12_1 = *(r15_1 + 8)
                int64_t* rsi_1 = rbx_1
                *(r15_1 + 8) = 0
                int64_t* rax_2 = *(r15_1 + 0x10)
                var_108.q = r12_1
                
                if (rax_2 != rbx_1)
                    *(r15_1 + 0x10) = 0
                    rbx_1 = rax_2
                    var_108:8.q = rax_2
                    
                    if (rsi_1 != 0)
                        rsi_1[1].d -= 1
                        
                        if (rsi_1[1].d == 1)
                            (**rsi_1)(rsi_1)
                            int32_t temp5_1 = *(rsi_1 + 0xc)
                            *(rsi_1 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rsi_1 + 8))(rsi_1, 1)
            
            void* r13_2 = *(arg1 + 0xb8)
            *(arg1 + 0xb8) = r15_1
            void var_68
            
            if (r15_1 + 8 != &var_68)
                *(r15_1 + 8) = 0
                int64_t* rsi_2 = *(r15_1 + 0x10)
                
                if (rsi_2 != 0)
                    *(r15_1 + 0x10) = 0
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp8_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
            
            if (r13_2 != 0)
                int64_t* rsi_3 = *(r13_2 + 0x10)
                
                if (rsi_3 != 0)
                    rsi_3[1].d -= 1
                    
                    if (rsi_3[1].d == 1)
                        (**rsi_3)(rsi_3)
                        int32_t temp9_1 = *(rsi_3 + 0xc)
                        *(rsi_3 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rsi_3 + 8))(rsi_3, 1)
                
                j_sub_140a74f90(r13_2)
            
            int64_t (* var_c8_1)(void* arg1, int64_t* arg2) = sub_140910400
            int32_t var_c0_1 = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 2
            
            void*** rax_9 = sub_140a84c80(0, 0x40, 0)
            void*** var_b8 = rax_9
            
            if (rax_9 != 0)
                int128_t zmm1 = var_108
                int128_t var_88 = var_c8_1.o
                int128_t var_98 = zmm1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                sub_14090d590(rax_9, arg1, &var_88, &var_98)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp12_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp13_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (&var_b8 == &r12_1[3])
                goto label_140912514
            
            if (rax_9 != 0)
                (*rax_9)[8](rax_9, &r12_1[3])
            label_140912514:
                
                if (rax_9 != 0)
                    (*rax_9)[7](rax_9, 0)
                    void*** rax_16 = sub_140a84c80(rax_9, 0, 0)
                    var_b8 = rax_16
                    
                    if (rax_16 != 0)
                        sub_140a74f90(rax_16)
            else if (r12_1[4].d != 0)
                int64_t* rcx_19 = r12_1[3]
                
                if (rcx_19 != 0)
                    (*(*rcx_19 + 0x38))(rcx_19, 0)
                    int64_t rcx_20 = r12_1[3]
                    
                    if (rcx_20 != 0)
                        r12_1[3] = sub_140a84c80(rcx_20, 0, 0)
                    
                    r12_1[4].d = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp15_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            r12_1[0x15].b = 1
            int64_t var_78
            int64_t* rax_19 = sub_140fcbd10(&r12_1[0xb], &var_78)
            int16_t* const r8_2
            
            if (rax_19[1].d == 0)
                r8_2 = &data_142d40450
            else
                r8_2 = *rax_19
            
            int16_t* var_d8
            sub_140a2e390(&var_d8, u"FTcpMessageTransportConnection %s", r8_2)
            int16_t* const rdx_5 = &data_142d40450
            int32_t var_d0
            
            if (var_d0 != 0)
                rdx_5 = var_d8
            
            void*** rax_22
            rax_22, r9 = sub_140a6e140(r12_1, rdx_5, 0x20000, 0, -1, 0)
            int16_t* rcx_23 = var_d8
            r12_1[0x12] = rax_22
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            int64_t rcx_24 = var_78
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            int64_t rsi_5 = sx.q(*(arg1 + 0x48))
            r13_1 = arg1 + 0x40
            int32_t rax_23 = (rsi_5 + 1).d
            *(r13_1 + 8) = rax_23
            
            if (rax_23 s> *(r13_1 + 0xc))
                sub_1405a4f90(r13_1)
            
            int64_t* rax_26 = (rsi_5 << 4) + *r13_1
            *rax_26 = r12_1
            rax_26[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        r15_2 = arg1
        
        while (true)
            void* rdx_7 = **(r15_2 + 0xc8)
            
            if (rdx_7 == 0)
                break
            
            int48_t rbx_2 = (*(rdx_7 + 8)).6
            int64_t rcx_28 = *(r15_2 + 0xc8)
            *(r15_2 + 0xc8) = rdx_7
            *(rdx_7 + 8) = arg1
            j_sub_140a74f90(rcx_28)
            int64_t rax_30 = sx.q(*(r15_2 + 0x48))
            int64_t rdx_9 = 0
            
            if (rax_30.d s> 0)
                int64_t* rcx_29 = *r13_1
                
                do
                    void* rsi_6 = *rcx_29
                    int64_t rax_31 = *(rsi_6 + 0x58)
                    
                    if (rax_31.d == rbx_2.d && (rax_31 u>> 0x20).w == rbx_2:4.w)
                        int64_t* rcx_30 = *(rsi_6 + 0x90)
                        
                        if (rcx_30 != 0)
                            *(rsi_6 + 0xa8) = 0
                            (*(*rcx_30 + 0x18))(rcx_30)
                            int64_t* rcx_31 = *(rsi_6 + 0x90)
                            
                            if (rcx_31 != 0)
                                (*(*rcx_31 + 0x20))(rcx_31, 1)
                            
                            *(rsi_6 + 0x90) = 0
                        
                        int64_t* rcx_32 = *(rsi_6 + 0x88)
                        
                        if (rcx_32 == 0)
                            break
                        
                        (*(*rcx_32 + 0x10))(rcx_32)
                        break
                    
                    rdx_9 += 1
                    rcx_29 = &rcx_29[2]
                while (rdx_9 s< rax_30)
        
        int32_t r14_3 = 0
        int32_t i = 0
        int32_t arg_10 = 0
        
        if (*(r15_2 + 0x48) s> 0)
            int64_t* rsi_7 = nullptr
            
            do
                int32_t rdx_10 = *(*(rsi_7 + *r13_1) + 0x28)
                
                if (rdx_10 == 1)
                    r14_3 += 1
                else if (rdx_10 == 3)
                    r9.b = 1
                    sub_140911e80(r13_1, i, rdx_10 - 2, r9.b)
                    i -= 1
                    rsi_7 -= 0x10
                
                i += 1
                rsi_7 = &rsi_7[2]
            while (i s< *(r15_2 + 0x48))
            
            arg_10 = r14_3
        
        int64_t* r12_2 = *r13_1
        void* r13_5 = &r12_2[sx.q(*(r13_1 + 8)) * 2]
        
        if (r12_2 != r13_5)
            do
                int64_t var_e8 = 0
                int128_t var_118 = zx.o(0)
                int64_t var_e0_1 = 0
                
                while (true)
                    void* r15_3 = *r12_2
                    void* rsi_8 = **(r15_3 + 0x48)
                    
                    if (rsi_8 == 0)
                        break
                    
                    if (&var_118 != rsi_8 + 8)
                        var_118.q = *(rsi_8 + 8)
                        *(rsi_8 + 8) = 0
                        sub_1405aeff0(&var_118:8, rsi_8 + 0x10)
                    
                    void* r14_4 = *(r15_3 + 0x48)
                    *(r15_3 + 0x48) = rsi_8
                    int128_t var_f8 = zx.o(0)
                    
                    if (rsi_8 + 8 != &var_f8)
                        *(rsi_8 + 8) = 0
                        sub_1405aeff0(rsi_8 + 0x10, &var_f8:8)
                        void* rcx_37 = var_f8:8.q
                        
                        if (rcx_37 != 0)
                            int32_t rax_39 = *(rcx_37 + 8)
                            *(rcx_37 + 8) -= 1
                            
                            if (rax_39 == 1)
                                int64_t* rbx_4 = var_f8:8.q
                                (**rbx_4)(rbx_4)
                                int32_t rax_41 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (rax_41 == 1)
                                    int64_t* rcx_39 = var_f8:8.q
                                    (*(*rcx_39 + 8))(rcx_39, 1)
                    
                    if (r14_4 != 0)
                        int64_t* rbx_5 = *(r14_4 + 0x10)
                        
                        if (rbx_5 != 0)
                            rbx_5[1].d -= 1
                            
                            if (rbx_5[1].d == 1)
                                (**rbx_5)(rbx_5)
                                int32_t rax_45 = *(rbx_5 + 0xc)
                                *(rbx_5 + 0xc) -= 1
                                
                                if (rax_45 == 1)
                                    (*(*rbx_5 + 8))(rbx_5, 1)
                        
                        j_sub_140a74f90(r14_4)
                    
                    void* rbx_6 = var_118:8.q
                    var_e8.o = *(r15_3 + 0x70)
                    
                    if (rbx_6 != 0)
                        *(rbx_6 + 8) += 1
                        rbx_6 = var_118:8.q
                    
                    int128_t var_a8 = var_118
                    
                    if (rbx_6 != 0)
                        *(rbx_6 + 8) += 1
                        rbx_6 = var_118:8.q
                    
                    int64_t* rcx_43 = *(arg1 + 0xd8)
                    (*(*rcx_43 + 0x10))(rcx_43, &var_a8, &var_e8)
                    int64_t* rsi_9 = var_a8:8.q
                    
                    if (rsi_9 != 0)
                        rsi_9[1].d -= 1
                        
                        if (rsi_9[1].d == 1)
                            (**rsi_9)(rsi_9)
                            int32_t rax_50 = *(rsi_9 + 0xc)
                            *(rsi_9 + 0xc) -= 1
                            
                            if (rax_50 == 1)
                                (*(*rsi_9 + 8))(rsi_9, 1)
                        
                        rbx_6 = var_118:8.q
                    
                    if (rbx_6 != 0)
                        int32_t rax_52 = *(rbx_6 + 8)
                        *(rbx_6 + 8) -= 1
                        
                        if (rax_52 == 1)
                            int64_t* rbx_7 = var_118:8.q
                            (**rbx_7)(rbx_7)
                            int32_t rax_54 = *(rbx_7 + 0xc)
                            *(rbx_7 + 0xc) -= 1
                            
                            if (rax_54 == 1)
                                int64_t* rcx_47 = var_118:8.q
                                (*(*rcx_47 + 8))(rcx_47, 1)
                
                void* rcx_48 = var_118:8.q
                
                if (rcx_48 != 0)
                    int32_t rax_56 = *(rcx_48 + 8)
                    *(rcx_48 + 8) -= 1
                    
                    if (rax_56 == 1)
                        int64_t* rbx_8 = var_118:8.q
                        (**rbx_8)(rbx_8)
                        int32_t rax_58 = *(rbx_8 + 0xc)
                        *(rbx_8 + 0xc) -= 1
                        
                        if (rax_58 == 1)
                            int64_t* rcx_50 = var_118:8.q
                            (*(*rcx_50 + 8))(rcx_50, 1)
                
                r12_2 = &r12_2[2]
            while (r12_2 != r13_5)
            
            r14_3 = arg_10
            r15_2 = arg1
        
        int128_t zmm0
        
        zmm0 = r14_3 s<= 0 ? 0x3f800000 : zmm6
        
        r9, zmm6 = sub_140b73230(zmm0)
        r13_1 = r15_2 + 0x40
    while (*(r15_2 + 0x2c) == 0)

return 0
