// 函数: sub_140a35180
// 地址: 0x140a35180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg1[6].d != 0)
    uint128_t zmm0
    zmm0.q = fconvert.d(arg2.d)
    char r15_1 = arg1[0x11].b
    arg1[0x11].b = 1
    zmm0.q = zmm0.q f+ *arg1
    *arg1 = zmm0.q
    
    while (arg1[6].d != 0)
        void* rax = arg1[5]
        void* rcx = &arg1[1]
        
        if (rax != 0)
            rcx = rax
        
        int64_t rax_2 = sx.q(arg1[6].d) << 5
        zmm0 = zx.o(*(rcx + rax_2 - 0x20))
        void* rdx_2 = rax_2 - 0x10 + rcx
        uint64_t var_58_1 = zmm0.q
        bool cond:3_1 = zmm0.q f<= *arg1
        int64_t var_48
        int64_t* rcx_1 = &var_48
        int32_t var_50_1 = (*(rcx + rax_2 - 0x18)).d
        var_48 = 0
        int32_t var_40_1 = 0
        
        if (cond:3_1)
            sub_1407473e0(rcx_1, rdx_2)
            void* rax_11 = arg1[5]
            void* rcx_11 = &arg1[1]
            int64_t r14_3 = sx.q(arg1[6].d)
            int32_t rbx_3 = (r14_3 - 1).d
            int64_t rbp_4 = sx.q(rbx_3) << 5
            
            if (rax_11 != 0)
                rcx_11 = rax_11
            
            sub_140745b20(rcx_11 + 0x10 + rbp_4)
            int32_t rax_12 = arg1[6].d
            int32_t rdx_12 = rax_12 - rbx_3
            
            if (rdx_12 != 1)
                void* rax_13 = arg1[5]
                void* rcx_14 = &arg1[1]
                
                if (rax_13 != 0)
                    rcx_14 = rax_13
                
                memmove(rcx_14 + rbp_4, (r14_3 << 5) + rcx_14, (rdx_12 - 1) << 5)
                rax_12 = arg1[6].d
            
            arg1[6].d = rax_12 - 1
            arg1[0xd] = var_58_1
            arg1[0xe].d = var_50_1
            sub_1407473e0(&arg1[0xf], &var_48)
            sub_140745b20(&var_48)
            *(arg1 + 0x89) = 0
            
            if (arg1[0x10].d != 0)
                int64_t* rcx_18 = arg1[0xf]
                
                if (rcx_18 != 0 && (*(*rcx_18 + 0x28))(rcx_18) != 0)
                    int64_t* rcx_19
                    
                    if (arg1[0x10].d == 0)
                        rcx_19 = nullptr
                    else
                        rcx_19 = arg1[0xf]
                    
                    if ((*(*rcx_19 + 0x48))(rcx_19, arg2) != 0 && *(arg1 + 0x89) == 0)
                        int64_t* rbx_4 = &arg1[7]
                        zmm0.q = _mm_cvtps_pd(arg1[0xe].d.q).q f+ *arg1
                        arg1[0xd] = zmm0.q
                        int64_t rbp_5 = sx.q(arg1[0xc].d)
                        int32_t rax_19 = (rbp_5 + 1).d
                        arg1[0xc].d = rax_19
                        
                        if (rax_19 s> *(arg1 + 0x64))
                            sub_140a30f00(rbx_4, rbp_5.d)
                        
                        int64_t* rax_20 = arg1[0xb]
                        
                        if (rax_20 != 0)
                            rbx_4 = rax_20
                        
                        rbx_4[rbp_5 * 4] = arg1[0xd]
                        void* rdx_20 = (rbp_5 << 5) + 0x10 + rbx_4
                        rbx_4[rbp_5 * 4 + 1].d = arg1[0xe].d
                        *rdx_20 = 0
                        *(rdx_20 + 8) = 0
                        
                        if (&arg1[0xf] != rdx_20 && arg1[0x10].d != 0)
                            int64_t* rcx_23 = arg1[0xf]
                            
                            if (rcx_23 != 0)
                                (*(*rcx_23 + 0x40))(rcx_23)
        else
            sub_1407473e0(rcx_1, rdx_2)
            void* rax_3 = arg1[5]
            void* rcx_2 = &arg1[1]
            int64_t rbp_1 = sx.q(arg1[6].d)
            int32_t rbx_1 = (rbp_1 - 1).d
            int64_t r14_2 = sx.q(rbx_1) << 5
            
            if (rax_3 != 0)
                rcx_2 = rax_3
            
            sub_140745b20(rcx_2 + 0x10 + r14_2)
            int32_t rax_4 = arg1[6].d
            int32_t rdx_4 = rax_4 - rbx_1
            
            if (rdx_4 != 1)
                void* rax_5 = arg1[5]
                void* rcx_5 = &arg1[1]
                
                if (rax_5 != 0)
                    rcx_5 = rax_5
                
                memmove(rcx_5 + r14_2, (rbp_1 << 5) + rcx_5, (rdx_4 - 1) << 5)
                rax_4 = arg1[6].d
            
            uint64_t* rbx_2 = &arg1[7]
            arg1[6].d = rax_4 - 1
            int64_t rbp_2 = sx.q(rbx_2[5].d)
            int32_t rax_7 = (rbp_2 + 1).d
            rbx_2[5].d = rax_7
            
            if (rax_7 s> *(rbx_2 + 0x2c))
                sub_140a30f00(rbx_2, rbp_2.d)
            
            uint64_t* rax_8 = rbx_2[4]
            
            if (rax_8 != 0)
                rbx_2 = rax_8
            
            rbx_2[rbp_2 * 4] = var_58_1
            void* rcx_9 = (rbp_2 << 5) + 0x10 + rbx_2
            rbx_2[rbp_2 * 4 + 1].d = var_50_1
            *rcx_9 = 0
            *(rcx_9 + 8) = 0
            sub_1407473e0(rcx_9, &var_48)
            sub_140745b20(&var_48)
    
    result = &arg1[1]
    
    if (&arg1[7] != result)
        int128_t zmm2 = *(arg1 + 0x38)
        int128_t zmm3 = *(arg1 + 0x48)
        int128_t zmm4 = *(arg1 + 0x58)
        *(arg1 + 0x38) = *result
        *(arg1 + 0x48) = *(result + 0x10)
        *(arg1 + 0x58) = *(result + 0x20)
        *result = zmm2
        *(result + 0x10) = zmm3
        *(result + 0x20) = zmm4
    
    if (arg1[0x10].d != 0)
        int64_t* rcx_25 = arg1[0xf]
        
        if (rcx_25 != 0)
            result = (*(*rcx_25 + 0x38))(rcx_25, 0)
            int64_t rcx_26 = arg1[0xf]
            
            if (rcx_26 != 0)
                result = sub_140a84c80(rcx_26, 0, 0)
                arg1[0xf] = result
            
            arg1[0x10].d = 0
    
    arg1[0x11].b = r15_1

return result
