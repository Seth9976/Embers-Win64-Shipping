// 函数: sub_1418b52d0
// 地址: 0x1418b52d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2

if (arg2[1].d s> 1)
    int64_t* var_98 = nullptr
    int32_t i_9 = 0
    sub_140a2ccb0(result, &var_98, U"(", 1)
    int64_t* rcx_1 = var_98
    int64_t* var_b8 = nullptr
    int32_t i_8 = 0
    result = sub_140a2ccb0(rcx_1, &var_b8, U",", 1)
    int64_t* r13_1 = nullptr
    int64_t* var_e8 = nullptr
    int32_t i_6 = 0
    int32_t var_dc_1 = 0
    int32_t r12_1 = 0
    int64_t var_108
    int16_t* var_f8
    int64_t* var_d8
    int32_t var_d0
    
    if (i_9 == 1)
        int32_t i_7 = 1
        result = sub_1405a4f90(&var_e8)
        r13_1 = var_e8
        *r13_1 = 0
        int32_t rbx_1 = (data_143efaf28.q).d
        int64_t rdi_1 = data_143efaf20
        r13_1[1].d = rbx_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(r13_1, rbx_1, 0)
            result = memcpy(*r13_1, rdi_1, rbx_1 * 2)
            i_6 = i_7
        else
            i_6 = i_7
            *(r13_1 + 0xc) = 0
        
    label_1418b569d:
        
        if (i_6 s> 0)
            result = (*(*arg1 + 0xc0))(arg1, &var_b8)
            
            if (result.b != 0)
                int64_t* rax_4 = var_b8
                var_f8 = nullptr
                int32_t rbx_3 = rax_4[1].d
                int64_t rdi_6 = *rax_4
                
                if (rbx_3 != 0)
                    sub_1405a4c70(&var_f8, rbx_3, 0)
                    memcpy(var_f8, rdi_6, rbx_3 * 2)
                else
                    int32_t var_ec_1 = 0
                
                _DeleteExceptionPtr(&var_f8)
                var_108 = 0
                int32_t var_100_2 = 0
                sub_1405947f0(&var_108, 2)
                int32_t rax_5 = var_100_2 + 2
                var_100_2 = rax_5
                
                if (rax_5 s> 0)
                    sub_140594770(&var_108)
                
                sub_1405a7220(var_108, 2, U"(", 2, 0x3f)
                int64_t zmm0_1 = sub_140a2fba0(&var_f8, &var_108, 1)
                int64_t rcx_39 = var_108
                
                if (rcx_39 != 0)
                    zmm0_1 = sub_140a74f90(rcx_39)
                
                (*(*arg1 + 0xb8))(arg1, &var_d8, &var_b8[2])
                int64_t* rcx_41 = var_b8
                wchar16* _String
                
                if (rcx_41[5].d == 0)
                    _String = &data_142d40450
                else
                    _String = rcx_41[4]
                
                _wtof(_String)
                int64_t* rcx_42 = var_b8
                int128_t zmm7
                zmm7.d = fconvert.s(zmm0_1)
                wchar16* _String_1
                
                if (rcx_42[7].d == 0)
                    _String_1 = &data_142d40450
                else
                    _String_1 = rcx_42[6]
                
                result = _wtof(_String_1)
                int16_t* rsi_3 = var_f8
                int64_t rbx_4 = 0
                int64_t var_88 = 0
                int32_t var_80_1 = rbx_3
                int128_t zmm6
                zmm6.d = fconvert.s(zmm0_1)
                
                if (rbx_3 != 0)
                    sub_1405a4c70(&var_88, rbx_3, 0)
                    rbx_4 = var_88
                    result = memcpy(rbx_4, rsi_3, rbx_3 * 2)
                else
                    int32_t var_7c_1 = 0
                
                int64_t rsi_4 = 0
                int64_t var_78 = 0
                int64_t* r15_2 = var_d8
                int32_t var_70_1 = var_d0
                
                if (var_d0 != 0)
                    sub_1405a4c70(&var_78, var_d0, 0)
                    rsi_4 = var_78
                    result = memcpy(rsi_4, r15_2, var_d0 * 2)
                    rbx_4 = var_88
                else
                    int32_t var_6c_1 = var_d0
                
                int64_t* rdi_9 = r13_1
                void* r15_5 = &r13_1[sx.q(i_6) * 2]
                int32_t var_68_1 = zmm7.d
                int32_t var_64_1 = zmm6.d
                
                if (r13_1 != r15_5)
                    do
                        int16_t* rdx_27
                        
                        if (rdi_9[1].d == 0)
                            rdx_27 = &data_142d40450
                        else
                            rdx_27 = *rdi_9
                        
                        void arg_18
                        int64_t rbx_5 = *sub_140b58260(&arg_18, rdx_27, 1)
                        int64_t* rdx_33
                        
                        if (arg1[0x37].d == *(arg1 + 0x1e4))
                        label_1418b594b:
                            result = nullptr
                            rdx_33 = nullptr
                        else
                            int32_t rax_10 = sub_140b5ead0(rbx_5.d) + rbx_5:4.d
                            void* r8_15 = &arg1[0x3d]
                            void* rcx_49 = *(r8_15 + 8)
                            
                            if (rcx_49 != 0)
                                r8_15 = rcx_49
                            
                            int32_t rax_12 =
                                *(r8_15 + (((sx.q(arg1[0x3f].d) - 1) & sx.q(rax_10)) << 2))
                            
                            if (rax_12 == 0xffffffff)
                                goto label_1418b594b
                            
                            while (true)
                                rdx_33 = (sx.q(rax_12) << 5) + arg1[0x36]
                                
                                if (*rdx_33 == rbx_5)
                                    break
                                
                                rax_12 = rdx_33[3].d
                                
                                if (rax_12 == 0xffffffff)
                                    goto label_1418b594b
                            
                            if (rax_12 == 0xffffffff)
                                goto label_1418b594b
                            
                            result = nullptr
                        
                        void* rbx_6 = &rdx_33[1]
                        
                        if (rdx_33 == 0)
                            rbx_6 = nullptr
                        
                        if (rbx_6 != 0)
                            int64_t rsi_5 = sx.q(*(rbx_6 + 8))
                            int32_t rax_13 = (rsi_5 + 1).d
                            *(rbx_6 + 8) = rax_13
                            
                            if (rax_13 s> *(rbx_6 + 0xc))
                                sub_1405c4ec0(rbx_6)
                            
                            int64_t* rbx_7 = *rbx_6 + rsi_5 * 0x28
                            sub_140596d10(rbx_7, &var_88)
                            result = sub_140596d10(&rbx_7[2], &var_78)
                            rbx_7[4].d = var_68_1
                            *(rbx_7 + 0x24) = var_64_1
                        
                        rdi_9 = &rdi_9[2]
                    while (rdi_9 != r15_5)
                    
                    rsi_4 = var_78
                    rbx_4 = var_88
                
                if (rsi_4 != 0)
                    result = sub_140a74f90(rsi_4)
                
                if (rbx_4 != 0)
                    result = sub_140a74f90(rbx_4)
                
                int64_t* rcx_56 = var_d8
                
                if (rcx_56 != 0)
                    result = sub_140a74f90(rcx_56)
                
                int16_t* rcx_57 = var_f8
                
                if (rcx_57 != 0)
                    result = sub_140a74f90(rcx_57)
    else if (i_9 == 2)
        var_d8 = nullptr
        var_d0 = 0
        result = sub_140a2ccb0(&var_98[2], &var_d8, U",", 1)
        int64_t* rbx_2 = var_d8
        int64_t rdi_2 = sx.q(var_d0)
        void* r13_4 = &rbx_2[rdi_2 * 2]
        
        if (rbx_2 != r13_4)
            do
                int32_t rdi_3 = rbx_2[1].d
                int64_t rsi_1 = *rbx_2
                int16_t* var_c8 = nullptr
                
                if (rdi_3 != 0)
                    sub_1405a4c70(&var_c8, rdi_3, 0)
                    memcpy(var_c8, rsi_1, rdi_3 * 2)
                else
                    int32_t var_bc_1 = 0
                
                _DeleteExceptionPtr(&var_c8)
                int64_t var_a8 = 0
                int32_t var_a0_1 = 0
                sub_1405947f0(&var_a8, 2)
                int32_t rax = var_a0_1 + 2
                var_a0_1 = rax
                
                if (rax s> 0)
                    sub_140594770(&var_a8)
                
                sub_1405a7220(var_a8, 2, U"(", 2, 0x3f)
                sub_140a2fba0(&var_c8, &var_a8, 1)
                int64_t rcx_14 = var_a8
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                var_f8 = nullptr
                int32_t var_f0
                var_f0.q = 0
                sub_1405947f0(&var_f8, 2)
                int32_t rax_1 = var_f0 + 2
                var_f0 = rax_1
                int32_t var_ec
                
                if (rax_1 s> var_ec)
                    sub_140594770(&var_f8)
                
                sub_1405a7220(var_f8, 2, U")\n", 2, 0x3f)
                sub_140a2f8e0(&var_c8, &var_f8, 1)
                int16_t* rcx_19 = var_f8
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                var_108 = 0
                int32_t var_100_1 = 0
                sub_1405947f0(&var_108, 2)
                int32_t rax_2 = var_100_1 + 2
                var_100_1 = rax_2
                
                if (rax_2 s> 0)
                    sub_140594770(&var_108)
                
                sub_1405a7220(var_108, 2, U")\n", 2, 0x3f)
                result = sub_140a2f8e0(&var_c8, &var_108, 1)
                int64_t rcx_24 = var_108
                
                if (rcx_24 != 0)
                    result = sub_140a74f90(rcx_24)
                
                int64_t i_10 = sx.q(i_6)
                i_6 = (i_10 + 1).d
                
                if (i_6 s> r12_1)
                    result = sub_1405a4f90(&var_e8)
                    r12_1 = var_dc_1
                
                void* rdi_5 = &var_e8[i_10 * 2]
                *rdi_5 = 0
                int16_t* r15_1 = var_c8
                *(rdi_5 + 8) = rdi_3
                
                if (rdi_3 != 0)
                    sub_1405a4c70(rdi_5, rdi_3, 0)
                    result = memcpy(*rdi_5, r15_1, rdi_3 * 2)
                else
                    *(rdi_5 + 0xc) = 0
                
                int16_t* rcx_28 = var_c8
                
                if (rcx_28 != 0)
                    result = sub_140a74f90(rcx_28)
                
                rbx_2 = &rbx_2[2]
            while (rbx_2 != r13_4)
            
            rdi_2 = zx.q(var_d0)
            rbx_2 = var_d8
        
        if (rdi_2.d != 0)
            int32_t i
            
            do
                int64_t rcx_29 = *rbx_2
                
                if (rcx_29 != 0)
                    result = sub_140a74f90(rcx_29)
                
                rbx_2 = &rbx_2[2]
                i = rdi_2.d
                rdi_2 = zx.q(rdi_2.d - 1)
            while (i != 1)
            rbx_2 = var_d8
        
        if (rbx_2 != 0)
            result = sub_140a74f90(rbx_2)
        
        r13_1 = var_e8
        goto label_1418b569d
    int64_t* rbx_8 = r13_1
    
    if (i_6 != 0)
        int32_t i_1
        
        do
            int64_t rcx_58 = *rbx_8
            
            if (rcx_58 != 0)
                result = sub_140a74f90(rcx_58)
            
            rbx_8 = &rbx_8[2]
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    if (r13_1 != 0)
        result = sub_140a74f90(r13_1)
    
    int32_t i_4 = i_8
    int64_t* rbx_9 = var_b8
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            int64_t rcx_60 = *rbx_9
            
            if (rcx_60 != 0)
                result = sub_140a74f90(rcx_60)
            
            rbx_9 = &rbx_9[2]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        rbx_9 = var_b8
    
    if (rbx_9 != 0)
        result = sub_140a74f90(rbx_9)
    
    int32_t i_5 = i_9
    int64_t* rbx_10 = var_98
    
    if (i_5 != 0)
        int32_t i_3
        
        do
            int64_t rcx_62 = *rbx_10
            
            if (rcx_62 != 0)
                result = sub_140a74f90(rcx_62)
            
            rbx_10 = &rbx_10[2]
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
        rbx_10 = var_98
    
    if (rbx_10 != 0)
        return sub_140a74f90(rbx_10)

return result
