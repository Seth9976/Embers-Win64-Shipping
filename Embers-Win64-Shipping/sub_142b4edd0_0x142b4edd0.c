// 函数: sub_142b4edd0
// 地址: 0x142b4edd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
uint128_t zmm6
uint128_t var_48 = zmm6
void var_e8
void* result = __security_cookie ^ &var_e8
void* result_1 = result
int32_t* r14 = arg3

if (*arg7 s<= 0 && (*(arg2 + 8) & 0xffe0) != 0)
    char* rdi_1 = nullptr
    sub_142b4ea20()
    void* var_c0_1 = &data_144016b80
    sub_142a860a0(&data_144016b80)
    int64_t* rax_1
    int512_t zmm2_1
    rax_1, zmm2_1 = sub_142b50530(arg1, arg2, arg7)
    
    if (*arg7 s<= 0)
        result = sub_142a860d0(&data_144016b80)
        int32_t rsi_1 = 0
        int32_t rbx_1 = arg4
        
        if (rbx_1 s> 0)
            do
                int32_t rax_2 = sub_142b4f540(*r14)
                int64_t rbp_1 = sx.q(rax_2)
                int64_t r8_1
                
                if (rax_2 s>= 0)
                    r8_1 = rax_1[rbp_1]
                
                if (rax_2 s>= 0 && r8_1 != 0)
                    result = sub_142a4aa20((sx.q(rsi_1) << 6) + arg6, 1, r8_1, 0xffffffff)
                else
                    if (rdi_1 == 0)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_90_1 = 2
                        zmm2_1.o = zx.o(arg5)
                        void* var_b8
                        (*(*arg1 + 0x30))(arg1, arg2, zmm2_1, &var_98, arg4, rax_1, var_b8, arg2, 
                            var_a8)
                        
                        if ((var_90_1 & 0xffe0) != 0)
                            sub_142b4ea20()
                            var_b8 = &data_144016b80
                            sub_142a860a0(&data_144016b80)
                            char* rax_5
                            rax_5, zmm2_1 = sub_142b50130(arg1, &var_98, arg7)
                            
                            if (*arg7 s> 0)
                                sub_142a860d0(&data_144016b80)
                                result = sub_142a47ff0(&var_98)
                                break
                            
                            rdi_1 = "<empty>"
                            
                            if (rax_5 != 0)
                                rdi_1 = rax_5
                            
                            sub_142a860d0(&data_144016b80)
                            rbx_1 = arg4
                        else
                            rdi_1 = "<empty>"
                        
                        sub_142a47ff0(&var_98)
                    
                    if (rdi_1 != "<empty>" && rbp_1.d s>= 0)
                        r8_1 = *(rdi_1 + (rbp_1 << 3))
                    
                    if (rdi_1 == "<empty>" || rbp_1.d s< 0 || r8_1 == 0)
                        result = sub_142a4ab40((sx.q(rsi_1) << 6) + arg6)
                    else
                        result = sub_142a4aa20((sx.q(rsi_1) << 6) + arg6, 1, r8_1, 0xffffffff)
                
                rsi_1 += 1
                r14 = &r14[1]
            while (rsi_1 s< rbx_1)
    else
        result = sub_142a860d0(&data_144016b80)

__security_check_cookie(result_1 ^ &var_e8)
return result
