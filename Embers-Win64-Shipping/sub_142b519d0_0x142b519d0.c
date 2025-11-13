// 函数: sub_142b519d0
// 地址: 0x142b519d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2

if (*arg2 s<= 0)
    void* result_1 = j_sub_142a7dd00(0x10)
    struct icu_64::TimeZoneGenericNames::VTable** result = result_1
    void* result_2 = result_1
    
    if (result_1 == 0)
        *arg2 = 7
    else
        *result = &icu_64::TimeZoneGenericNames::`vftable'
        result[1] = 0
        sub_142b529e0()
        result_2 = &data_144016d20
        sub_142a860a0(&data_144016d20)
        
        if (data_144016d80 != 0)
            goto label_142b51aa9
        
        int64_t* rax_1 = sub_142a86f30(sub_142a86cb0, sub_142a86ad0, 0, arg2)
        data_144016d78 = rax_1
        
        if (*arg2 s> 0)
            sub_142a860d0(&data_144016d20)
        else
            std::ios_base::precision(rax_1, sub_142a7dcd0)
            std::ios_base::width(data_144016d78, sub_142ac6a80)
            data_144016d80 = 1
            sub_142aa75d0(0xf, sub_142b53b00)
        label_142b51aa9:
            
            if (*arg2 s<= 0)
                char* rdi_1 = *(arg1 + 0x28)
                struct icu_64::TZGNCore::VTable*** rax_2 = sub_142a86c30(data_144016d78, rdi_1)
                struct icu_64::TZGNCore::VTable*** rsi_1 = rax_2
                
                if (rax_2 != 0)
                    rax_2[1].d += 1
                    rsi_1[2] = sub_142a4bbc0()
                else
                    int64_t rbp_1 = 0
                    struct icu_64::TZGNCore::VTable** rax_3 = j_sub_142a7dd00(0x1d8)
                    struct icu_64::TZGNCore::VTable** arg_18 = rax_3
                    struct icu_64::TZGNCore::VTable** r12_1
                    
                    if (rax_3 == 0)
                        r12_1 = nullptr
                    else
                        r12_1 = sub_142b515d0(rax_3, arg1, arg2)
                    
                    if (r12_1 != 0)
                        if (*arg2 s> 0)
                            goto label_142b51bca
                        
                        int64_t rcx_4 = -1
                        
                        do
                            rcx_4 += 1
                        while (rdi_1[rcx_4] != 0)
                        
                        int64_t rax_5 = sub_142a7dd00(rcx_4 + 1)
                        rbp_1 = rax_5
                        
                        if (rax_5 != 0)
                            char* rcx_7 = rbp_1 - rdi_1
                            char i
                            
                            do
                                i = *rdi_1
                                *(rcx_7 + rdi_1) = i
                                rdi_1 = &rdi_1[1]
                            while (i != 0)
                            
                            if (*arg2 s> 0)
                                goto label_142b51bca
                            
                            struct icu_64::TZGNCore::VTable*** rax_6 = sub_142a7dd00(0x18)
                            rsi_1 = rax_6
                            
                            if (rax_6 == 0)
                                *arg2 = 7
                                goto label_142b51bca
                            
                            *rax_6 = r12_1
                            rax_6[1].d = 1
                            rsi_1[2] = sub_142a4bbc0()
                            sub_142a86f50(data_144016d78, rbp_1, rsi_1, arg2)
                            
                            if (*arg2 s> 0)
                                goto label_142b51bca
                        else
                            *arg2 = 7
                        label_142b51bca:
                            (*r12_1)->vFunc_0(r12_1, 1)
                            
                            if (rbp_1 != 0)
                                sub_142a7dcd0(rbp_1)
                            
                            if (rsi_1 != 0)
                                sub_142a7dcd0(rsi_1)
                            
                            rsi_1 = nullptr
                    else
                        *arg2 = 7
                        rsi_1 = nullptr
                
                int32_t rax_9 = data_144016d84 + 1
                data_144016d84 = rax_9
                
                if (rax_9 s>= 0x64)
                    sub_142b53940()
                    data_144016d84 = 0
                
                sub_142a860d0(&data_144016d20)
                
                if (rsi_1 != 0)
                    result[1] = rsi_1
                    return result
                
                (*result)->vFunc_0(result, zx.q((rsi_1 + 1).d))
            else
                sub_142a860d0(&data_144016d20)

return nullptr
