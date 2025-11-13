// 函数: sub_141b5e420
// 地址: 0x141b5e420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(*(arg2 + 0x50), 0) == 0
void* rax_1

if ((*(arg2 + 0x54) != 0 | r8) == 0)
    rax_1 = *(arg2 + 0x48)

int64_t rax_2

if ((*(arg2 + 0x54) != 0 | r8) != 0 || rax_1 == 0)
    rax_2 = *(arg2 + 0x50)
else
    rax_2 = *(rax_1 + 0x18)

int64_t arg_20 = rax_2

if (sub_140b5f8e0(rax_2.d) != 0)
    int32_t rcx_2
    rcx_2.b = sub_140b5b8a0(arg_20.d, 0) == 0
    
    if ((arg_20:4.d != 0 | rcx_2.b) != 0)
        int64_t* r13_1 = *(arg2 + 0x48)
        int32_t* var_98
        int64_t* var_90
        void*** var_88
        void* var_78
        int64_t* var_70
        int32_t arg_10
        int32_t arg_18
        int64_t* rbx_1
        int64_t rdi_2
        
        if (r13_1 == 0)
            sub_141b5f6a0(&arg1[0x13], &var_98, arg_20)
            int32_t* r14_3 = var_98
            
            if (r14_3 != 0)
                rbx_1 = var_90
            label_141b5eb32:
                rdi_2 = *r14_3
                
                if (rbx_1 == 0)
                    return rdi_2
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d != 1)
                    return rdi_2
                
                int64_t rdx_22 = *rbx_1
                (*rdx_22)(rbx_1, rdx_22)
            label_141b5e5dd:
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    int64_t r8_5 = *rbx_1
                    (*(r8_5 + 8))(rbx_1, 1, r8_5)
                
                return rdi_2
            
            int64_t rbx_6 = *arg1
            var_88 = nullptr
            int64_t var_80_2 = 0
            char rax_36 = (*(rbx_6 + 0x28))(arg1, &arg_20, sub_140b63b70(&arg_20, &var_78), 
                &arg_18, &arg_10, &var_88)
            void* rcx_43 = var_78
            
            if (rcx_43 != 0)
                sub_140a74f90(rcx_43)
            
            if (rax_36 == 0)
                rbx_1 = var_90
            else
                int32_t* var_a8_1
                var_a8_1.d = arg_10
                int64_t* rax_38 = sub_141b61b30(arg1, &var_78, arg_20, arg_18, var_a8_1.d, &var_88)
                rbx_1 = var_90
                
                if (&var_98 != rax_38)
                    r14_3 = *rax_38
                    int64_t* rsi_6 = rbx_1
                    *rax_38 = 0
                    int64_t* rcx_45 = rax_38[1]
                    
                    if (rcx_45 != rbx_1)
                        rax_38[1] = 0
                        rbx_1 = rcx_45
                        
                        if (rsi_6 != 0)
                            rsi_6[1].d -= 1
                            
                            if (rsi_6[1].d == 1)
                                (**rsi_6)(rsi_6)
                                int32_t temp11_1 = *(rsi_6 + 0xc)
                                *(rsi_6 + 0xc) -= 1
                                
                                if (temp11_1 == 1)
                                    (*(*rsi_6 + 8))(rsi_6, 1)
                
                if (var_70 != 0)
                    var_70[1].d -= 1
                    
                    if (var_70[1].d == 1)
                        (**var_70)(var_70)
                        int32_t temp6_1 = *(var_70 + 0xc)
                        *(var_70 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*var_70 + 8))(var_70, 1)
            
            void*** rcx_50 = var_88
            
            if (rcx_50 != 0)
                sub_140a74f90(rcx_50)
            
            if (r14_3 != 0)
                goto label_141b5eb32
            
            goto label_141b5eae1
        
        void* rax_5 = sub_1425b3bb0()
        void* rdx = r13_1[2]
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            void* rax_15 = sub_140d21950(r13_1, sub_14259a3f0())
            
            if (rax_15 != 0)
                int64_t r8_6 = *rax_15
                (*(r8_6 + 0x10))(rax_15, &var_78, r8_6)
                void* rdx_6 = var_78
                
                if (rdx_6 != 0)
                    sub_140d3a3a0(&arg_18, rdx_6)
                    sub_141b5e360(&arg1[0x31], &arg_10, arg_18.q)
                    int64_t rax_16 = sx.q(arg_10)
                    int64_t rbx_3
                    void* rbx_4
                    
                    if (rax_16.d != 0xffffffff)
                        rbx_3 = rax_16 << 5
                        rbx_4 = rbx_3 + arg1[0x31]
                    
                    int64_t* rbx_5
                    void*** r14_2
                    
                    if (rax_16.d == 0xffffffff || rbx_3 == neg.q(arg1[0x31]))
                        rbx_5 = nullptr
                    label_141b5e699:
                        void*** rax_17 = j_sub_140a82f30(0x60)
                        r14_2 = rax_17
                        
                        if (rax_17 == 0)
                            r14_2 = nullptr
                        else
                            rax_17[1] = var_78
                            void* rcx_19 = &r14_2[4]
                            *r14_2 = &data_14306c748
                            r14_2[2] = 0
                            r14_2[3] = 0
                            *(rcx_19 + 0x10) = 0
                            *(rcx_19 + 0x18) = 0
                            *(rcx_19 + 0x1c) = 0x80
                            void* rax_18 = *(rcx_19 + 0x10)
                            
                            if (rax_18 != 0)
                                rcx_19 = rax_18
                            
                            *rcx_19 = 0
                            *(rcx_19 + 8) = 0
                            r14_2[8].d = 0xffffffff
                            *(r14_2 + 0x44) = 0
                            r14_2[0xa] = 0
                            r14_2[0xb].d = 0
                        
                        int64_t* rax_19 = j_sub_140a82f30(0x18)
                        int64_t* rsi_2 = rax_19
                        
                        if (rax_19 == 0)
                            rsi_2 = nullptr
                        else
                            rax_19[1].d = 1
                            *(rax_19 + 0xc) = 1
                            *rsi_2 = &data_142e4cf50
                            rsi_2[2] = r14_2
                        
                        int64_t* var_90_1 = rsi_2
                        var_98 = nullptr
                        int64_t* r15_1 = rbx_5
                        
                        if (rsi_2 == rbx_5)
                        label_141b5e783:
                            
                            if (rsi_2 != 0)
                                rsi_2[1].d -= 1
                                
                                if (rsi_2[1].d == 1)
                                    (**rsi_2)(rsi_2)
                                    int32_t temp18_1 = *(rsi_2 + 0xc)
                                    *(rsi_2 + 0xc) -= 1
                                    
                                    if (temp18_1 == 1)
                                        (*(*rsi_2 + 8))(rsi_2, 1)
                        else
                            int64_t* var_90_2 = nullptr
                            rbx_5 = rsi_2
                            
                            if (r15_1 != 0)
                                r15_1[1].d -= 1
                                
                                if (r15_1[1].d == 1)
                                    (**r15_1)(r15_1)
                                    int32_t temp19_1 = *(r15_1 + 0xc)
                                    *(r15_1 + 0xc) -= 1
                                    
                                    if (temp19_1 == 1)
                                        (*(*r15_1 + 8))(r15_1, 1)
                                
                                rsi_2 = var_90_2
                                goto label_141b5e783
                        
                        if (rbx_5 != 0)
                            rbx_5[1].d += 1
                        
                        void* rdx_8 = var_78
                        
                        if (rdx_8 != 0)
                            var_88 = r14_2
                            
                            if (rbx_5 != 0)
                                rbx_5[1].d += 1
                            
                            sub_140d3a3a0(&arg_18, rdx_8)
                            var_98 = &arg_18
                            void** var_90_3 = &var_88
                            sub_141b48520(&arg1[0x31], &arg_10, &var_98, nullptr)
                            
                            if (rbx_5 != 0)
                                rbx_5[1].d -= 1
                                
                                if (rbx_5[1].d == 1)
                                    (**rbx_5)(rbx_5)
                                    int32_t temp24_1 = *(rbx_5 + 0xc)
                                    *(rbx_5 + 0xc) -= 1
                                    
                                    if (temp24_1 == 1)
                                        (*(*rbx_5 + 8))(rbx_5, 1)
                        
                        if (rbx_5 != 0)
                            rbx_5[1].d -= 1
                            
                            if (rbx_5[1].d == 1)
                                (**rbx_5)(rbx_5)
                                int32_t temp22_1 = *(rbx_5 + 0xc)
                                *(rbx_5 + 0xc) -= 1
                                
                                if (temp22_1 == 1)
                                    (*(*rbx_5 + 8))(rbx_5, 1)
                    else
                        r14_2 = *(rbx_4 + 8)
                        rbx_5 = *(rbx_4 + 0x10)
                        
                        if (rbx_5 != 0)
                            rbx_5[1].d += 1
                        
                        if (r14_2 == 0)
                            goto label_141b5e699
                    
                    int128_t zmm0_1 = sub_140d3a3a0(&arg_18, r13_1)
                    sub_141b5e2a0(&r14_2[2], &arg_10, arg_18.q)
                    int64_t rax_28 = sx.q(arg_10)
                    void* rsi_4
                    
                    if (rax_28.d != 0xffffffff)
                        rsi_4 = &r14_2[2][rax_28 * 3]
                    
                    int64_t rsi_5
                    
                    if (rax_28.d == 0xffffffff || rsi_4 == 0)
                        rsi_5 = 0
                    else
                        rsi_5 = *(rsi_4 + 8)
                    
                    if (rsi_5 == 0)
                        int64_t* rcx_32 = r14_2[1]
                        (*(*rcx_32 + 0x340))(rcx_32)
                        int64_t* rcx_33 = r14_2[1]
                        int32_t var_64
                        int128_t zmm7
                        zmm7.d = zmm0_1.d f* var_64
                        (*(*rcx_33 + 0x338))(rcx_33)
                        int32_t var_68
                        int128_t zmm6
                        zmm6.d = zmm0_1.d f* var_68
                        int64_t* rax_32 = j_sub_140a82f30(zx.q((rsi_5 + 0x30).d))
                        int64_t* rcx_35 = rax_32
                        
                        if (rax_32 == 0)
                            rcx_35 = nullptr
                        else
                            *rax_32 = 0
                            __builtin_memset(&rax_32[2], 0, 0x20)
                            rax_32[1].d = 0x3f800000
                            *(rax_32 + 0xc) = 0x3f800000
                        
                        rcx_35[2] = r14_2
                        zmm6.d = zmm6.d f+ zmm6.d
                        arg_10.q = rcx_35
                        zmm7.d = zmm7.d f+ zmm7.d
                        zmm6.d = zmm6.d f+ 0.5f
                        zmm7.d = zmm7.d f+ 0.5f
                        rcx_35[3].d = int.d(zmm6.d) s>> 1
                        *(rcx_35 + 0x1c) = int.d(zmm7.d) s>> 1
                        *rcx_35 = var_70
                        rcx_35[1] = var_68.q
                        sub_140d3a3a0(&var_98, r13_1)
                        sub_141b48250(&r14_2[2], &var_98, &arg_10)
                        rsi_5 = arg_10.q
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d -= 1
                        
                        if (rbx_5[1].d == 1)
                            int64_t rdx_17 = *rbx_5
                            (*rdx_17)(rbx_5, rdx_17)
                            int32_t temp20_1 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (temp20_1 == 1)
                                int64_t r8_11 = *rbx_5
                                (*(r8_11 + 8))(rbx_5, 1, r8_11)
                    
                    return rsi_5
        else
            sub_141b602d0(&arg1[0x13], &var_98, r13_1)
            int32_t* r14_1 = var_98
            
            if (r14_1 != 0)
                rbx_1 = var_90
            label_141b5e5a2:
                void* rax_13 = *(r14_1 + 8)
                
                if (rax_13 != 0 && *(rax_13 + 0x78) != 0)
                    sub_141b6bfb0(r14_1, r13_1)
                    rdi_2 = *(r14_1 + 0x10)
                    
                    if (rbx_1 == 0)
                        return rdi_2
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d != 1)
                        return rdi_2
                    
                    (**rbx_1)(rbx_1)
                    goto label_141b5e5dd
            else
                int64_t* rax_8 = sub_141b62100(arg1, &var_88, r13_1)
                rbx_1 = var_90
                
                if (&var_98 != rax_8)
                    r14_1 = *rax_8
                    *rax_8 = 0
                    int64_t* rsi_1 = rbx_1
                    int64_t* rcx_6 = rax_8[1]
                    
                    if (rcx_6 != rbx_1)
                        rax_8[1] = 0
                        rbx_1 = rcx_6
                        
                        if (rsi_1 != 0)
                            rsi_1[1].d -= 1
                            
                            if (rsi_1[1].d == 1)
                                (**rsi_1)(rsi_1)
                                int32_t temp14_1 = *(rsi_1 + 0xc)
                                *(rsi_1 + 0xc) -= 1
                                
                                if (temp14_1 == 1)
                                    (*(*rsi_1 + 8))(rsi_1, 1)
                
                int64_t* var_80
                
                if (var_80 != 0)
                    var_80[1].d -= 1
                    
                    if (var_80[1].d == 1)
                        (**var_80)(var_80)
                        int32_t temp9_1 = *(var_80 + 0xc)
                        *(var_80 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*var_80 + 8))(var_80, 1)
                
                if (r14_1 != 0)
                    goto label_141b5e5a2
            
        label_141b5eae1:
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp12_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)

return 0
