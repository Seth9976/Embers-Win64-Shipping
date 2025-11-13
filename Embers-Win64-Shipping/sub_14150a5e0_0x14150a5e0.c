// 函数: sub_14150a5e0
// 地址: 0x14150a5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t result = __security_cookie ^ &var_f8
uint64_t result_1 = result
int32_t i = 0

if (*(arg1 + 0x15) u> 0)
    uint64_t arg_18 = arg2
    int64_t r15_1 = 0
    
    do
        uint32_t rbx_1 = zx.d(*(r15_1 + arg1 + 0x16))
        
        if (rbx_1 != 2)
        label_14150a6a8:
            char rax_3 = data_143f0f1c9
            
            if (rbx_1 == 5)
                arg2 = zx.q(sbb.d(arg2.d, arg2.d, rax_3 != 0)) & 0x44
            else if (rbx_1 u<= 5)
                arg2 = zx.q(rbx_1)
            else if (rbx_1 u<= 7 || rbx_1 == 0x17)
                arg2 = zx.q(sbb.d(arg2.d, arg2.d, rax_3 != 0)) & 0x30
            else if (rbx_1 != 0x27)
                arg2 = zx.q(rbx_1)
            else
                arg2 = zx.q(sbb.d(arg2.d, arg2.d, rax_3 != 0)) & 0x44
        else
            int64_t rax_1 = sx.q(data_143f0f1a0)
            
            if ((rax_1.d u> 0x18 || not(test_bit(0x100a040, rax_1.d)))
                    && *(rax_1 * 0x14 + &data_143f025f0) != data_143f025b8)
                goto label_14150a6a8
            
            if (rax_1.d u> 0x1e)
                if ((*(rax_1 * 0x14 + &data_143f025fc) & 1) == 0)
                    goto label_14150a6a8
                
                rbx_1 = 0x25
                arg2 = zx.q(rbx_1)
            else
                if (not(test_bit(0x6562c800, rax_1.d))
                        && (*(rax_1 * 0x14 + &data_143f025fc) & 1) == 0)
                    goto label_14150a6a8
                
                rbx_1 = 0x25
                arg2 = zx.q(rbx_1)
        
        char rsi_1
        
        if (arg2.d == 0 || arg2.d == rbx_1)
            rsi_1 = 0
        else
            rsi_1 = 1
        
        int32_t rcx_2 = *(arg1 + 0x10) * *(arg1 + 0x1b8)
        int32_t var_78_1 = data_143f02318
        int32_t rax_5 = 0
        char var_c0_1 = 0
        
        if (data_1439c7a08 s> 1)
            rax_5 = 0x10
        
        int32_t var_74_1 = rcx_2
        int32_t var_58_1 = rax_5
        int32_t var_70_1 = rcx_2
        int32_t var_54_1 = (zx.d(rsi_1) << 0x10) + 8
        int32_t var_68_1 = 1
        int16_t var_60_1 = 1
        char var_c8_1 = 1
        char var_d0_1 = 1
        int16_t var_50_1 = 0
        int128_t var_88 = data_143f02308
        int32_t var_6c_1 = 0
        int32_t var_64_1 = 0x10000
        uint32_t var_5c_1 = rbx_1
        wchar16 const* const var_48_1 = u"UnknownTexture2D"
        int16_t var_40_1 = 1
        char var_3e_1 = 0
        sub_1419a0ce0(&data_1439c9260, &data_143f02b98, &var_88, arg1 + 0xb8 + (sx.q(i) << 3), 
            PhysicalTexture", var_d0_1, var_c8_1, var_c0_1)
        int64_t* rcx_3 = data_143f0f180
        char var_98
        char* var_d8_2 = &var_98
        int64_t r14_1 = *(*(arg1 + (r15_1 << 3) + 0xb8) + 0x10)
        int64_t var_90_1 = 0
        int16_t var_97_1 = 0x100
        int32_t var_94_1 = 1
        var_98 = rbx_1.b
        int64_t* var_b0
        (*(*rcx_3 + 0x5d0))(rcx_3, &var_b0, &data_143f02b98, r14_1, var_d8_2)
        void* rcx_5 = arg1 + 0xf8 + (r15_1 << 3)
        
        if (rcx_5 == &var_b0)
        label_14150a896:
            int64_t* rbx_3 = var_b0
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    char rax_23
                    
                    if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                        rax_23 = sub_1405949a0()
                    
                    if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_23 != 0))
                        (**rbx_3)(rbx_3, 1)
                    else
                        bool z_2
                        
                        if (0 == *(rbx_3 + 0xc))
                            *(rbx_3 + 0xc) = 1
                            z_2 = true
                        else
                            *(rbx_3 + 0xc)
                            z_2 = false
                        
                        if (z_2)
                            int32_t rax_25 = sub_140a20af0()
                            uint64_t rdx_4 = zx.q(rax_25)
                            void* const rax_26
                            
                            if (rax_25 != 0)
                                rax_26 = *((rdx_4 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_4.d) & 0x3fff) * 0x18
                            else
                                rax_26 = nullptr
                            
                            *(rax_26 + 8) = rbx_3
                            sub_1405a42f0(&data_143f02390, rdx_4.d)
        else
            int64_t* rbx_2 = *rcx_5
            *rcx_5 = var_b0
            var_b0 = nullptr
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    char rax_14
                    
                    if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                        rax_14 = sub_1405949a0()
                    
                    if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_14 != 0))
                        (**rbx_2)(rbx_2, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_2 + 0xc))
                            *(rbx_2 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_2 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_16 = sub_140a20af0()
                            uint64_t rdx_3 = zx.q(rax_16)
                            void* const rax_17
                            
                            if (rax_16 != 0)
                                rax_17 = *((rdx_3 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                            else
                                rax_17 = nullptr
                            
                            *(rax_17 + 8) = rbx_2
                            sub_1405a42f0(&data_143f02390, rdx_3.d)
                
                goto label_14150a896
        
        int64_t* rcx_14 = data_143f0f180
        int32_t var_94_2 = 0
        int64_t* var_a8
        (*(*rcx_14 + 0x5d0))(rcx_14, &var_a8, &data_143f02b98, r14_1, &var_98)
        void* rcx_16 = arg1 + 0x138 + (r15_1 << 3)
        
        if (rcx_16 == &var_a8)
        label_14150aa18:
            int64_t* rbx_5 = var_a8
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    char rax_43
                    
                    if (rbx_5[2].b == 0 && data_143f0f1d0 == 0)
                        rax_43 = sub_1405949a0()
                    
                    if (rbx_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_43 != 0))
                        (**rbx_5)(rbx_5, 1)
                    else
                        bool z_4
                        
                        if (0 == *(rbx_5 + 0xc))
                            *(rbx_5 + 0xc) = 1
                            z_4 = true
                        else
                            *(rbx_5 + 0xc)
                            z_4 = false
                        
                        if (z_4)
                            int32_t rax_45 = sub_140a20af0()
                            uint64_t rdx_7 = zx.q(rax_45)
                            void* const rax_46
                            
                            if (rax_45 != 0)
                                rax_46 = *((rdx_7 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_7.d) & 0x3fff) * 0x18
                            else
                                rax_46 = nullptr
                            
                            *(rax_46 + 8) = rbx_5
                            sub_1405a42f0(&data_143f02390, rdx_7.d)
        else
            int64_t* rbx_4 = *rcx_16
            *rcx_16 = var_a8
            var_a8 = nullptr
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    char rax_34
                    
                    if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                        rax_34 = sub_1405949a0()
                    
                    if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_34 != 0))
                        (**rbx_4)(rbx_4, 1)
                    else
                        bool z_3
                        
                        if (0 == *(rbx_4 + 0xc))
                            *(rbx_4 + 0xc) = 1
                            z_3 = true
                        else
                            *(rbx_4 + 0xc)
                            z_3 = false
                        
                        if (z_3)
                            int32_t rax_36 = sub_140a20af0()
                            uint64_t rdx_6 = zx.q(rax_36)
                            void* const rax_37
                            
                            if (rax_36 != 0)
                                rax_37 = *((rdx_6 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                            else
                                rax_37 = nullptr
                            
                            *(rax_37 + 8) = rbx_4
                            sub_1405a42f0(&data_143f02390, rdx_6.d)
                
                goto label_14150aa18
        
        if (rsi_1 != 0)
            int64_t* rcx_25 = data_143f0f180
            char* var_d8_3
            var_d8_3.d = 0
            int64_t* var_a0
            (*(*rcx_25 + 0x598))(rcx_25, &var_a0, &data_143f02b98, r14_1, var_d8_3, arg2.b)
            void* rcx_27 = arg1 + 0x178 + (r15_1 << 3)
            
            if (rcx_27 == &var_a0)
            label_14150aba3:
                arg2 = 1
            label_14150aba8:
                int64_t* rbx_7 = var_a0
                
                if (rbx_7 != 0)
                    rbx_7[1].d -= 1
                    
                    if (rbx_7[1].d == 1)
                        char rax_63
                        
                        if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
                            rax_63 = sub_1405949a0()
                        
                        if (rbx_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_63 != 0))
                            (**rbx_7)(rbx_7, 1)
                        else
                            bool z_6
                            
                            if (0 == *(rbx_7 + 0xc))
                                *(rbx_7 + 0xc) = 1
                                z_6 = true
                            else
                                *(rbx_7 + 0xc)
                                z_6 = false
                            
                            if (z_6)
                                int32_t rax_65 = sub_140a20af0()
                                uint64_t rdx_10 = zx.q(rax_65)
                                void* const rax_66
                                
                                if (rax_65 != 0)
                                    rax_66 = *((rdx_10 u>> 0xe << 3) + &data_143cf0bf8)
                                        + (zx.q(rdx_10.d) & 0x3fff) * 0x18
                                else
                                    rax_66 = nullptr
                                
                                *(rax_66 + 8) = rbx_7
                                sub_1405a42f0(&data_143f02390, rdx_10.d)
            else
                int64_t* rbx_6 = *rcx_27
                *rcx_27 = var_a0
                var_a0 = nullptr
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d != 1)
                        goto label_14150aba3
                    
                    char rax_54
                    
                    if (rbx_6[2].b == 0 && data_143f0f1d0 == 0)
                        rax_54 = sub_1405949a0()
                    
                    if (rbx_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_54 != 0))
                        arg2 = 1
                        (**rbx_6)(rbx_6, 1)
                    else
                        arg2 = 1
                        bool z_5
                        
                        if (0 == *(rbx_6 + 0xc))
                            *(rbx_6 + 0xc) = 1
                            z_5 = true
                        else
                            *(rbx_6 + 0xc)
                            z_5 = false
                        
                        if (z_5)
                            int32_t rax_56 = sub_140a20af0()
                            uint64_t rdx_9 = zx.q(rax_56)
                            void* const rax_57
                            
                            if (rax_56 != 0)
                                rax_57 = *((rdx_9 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_9.d) & 0x3fff) * 0x18
                            else
                                rax_57 = nullptr
                            
                            *(rax_57 + 8) = rbx_6
                            sub_1405a42f0(&data_143f02390, rdx_9.d)
                    
                    goto label_14150aba8
        
        result = zx.q(*(arg1 + 0x15))
        i += 1
        r15_1 += 1
    while (i s< result.d)

__security_check_cookie(result_1 ^ &var_f8)
return result
