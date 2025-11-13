// 函数: sub_142ac7ee0
// 地址: 0x142ac7ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1a0 = -2
int128_t zmm6
int128_t var_48 = zmm6
void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8

if (*arg5 s<= 0)
    zmm6 = j_sub_142a4bbc0()
    
    if (sub_1405f78c0(arg2) == 6)
        int64_t inptr = sub_142aa7fa0(arg2)
        int64_t* rax_3 = __RTDynamicCast(inptr, 0, &class icu_64::UObject `RTTI Type Descriptor', 
            &class icu_64::TimeZone `RTTI Type Descriptor', 0)
        int64_t* rsi_1 = rax_3
        
        if (rax_3 != 0)
        label_142ac7fd4:
            int32_t var_1b8_1
            int32_t var_1a8
            var_1b8_1.q = &var_1a8
            int512_t zmm1
            zmm1.o = zmm6
            int32_t var_1a4
            (*(*rsi_1 + 0x18))(rsi_1, zmm1, 0, &var_1a4, var_1b8_1, arg5)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_198
            int16_t var_158[0x80]
            sub_142a47d50(&var_198, &var_158, 0, 0x80)
            var_1b8_1.q = arg5
            sub_142ac8a50(arg1, var_1a8 + var_1a4, 0, &var_198, var_1b8_1)
            
            if (*arg5 s<= 0)
                int16_t var_190
                int32_t var_18c
                int32_t r9_3
                
                if (var_190 s< 0)
                    r9_3 = var_18c
                else
                    r9_3 = sx.d(var_190) s>> 5
                
                sub_142a48d00(arg3, &var_198, 0, r9_3)
                
                if (*(arg4 + 8) == 0x11)
                    *(arg4 + 0xc) = 0
                    int32_t rax_11
                    
                    if (var_190 s< 0)
                        rax_11 = var_18c
                    else
                        rax_11 = sx.d(var_190) s>> 5
                    
                    *(arg4 + 0x10) = rax_11
            
            sub_142a47ff0(&var_198)
        else
            int64_t* rax_4 = __RTDynamicCast(inptr, 0, 
                &class icu_64::UObject `RTTI Type Descriptor', 
                &class icu_64::Calendar `RTTI Type Descriptor', rax_3.d)
            
            if (rax_4 != 0)
                rsi_1 = Concurrency::details::UMSFreeThreadProxy::GetContext(rax_4)
                zmm6 = sub_142a6a540(rax_4, arg5)
                
                if (rsi_1 != 0)
                    goto label_142ac7fd4

__security_check_cookie(rax_1 ^ &var_1d8)
return arg3
