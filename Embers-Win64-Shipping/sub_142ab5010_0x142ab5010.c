// 函数: sub_142ab5010
// 地址: 0x142ab5010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
int128_t zmm6
int128_t var_18 = zmm6
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
char result = (*(*arg1 + 0x10))()

if (result == 0)
    if ((*(*arg1 + 0x18))(arg1) == 0)
        void* rdi_1 = nullptr
        int32_t var_98 = 0
        int128_t var_90_1 = zx.o(0)
        void* const var_80_1 = &data_1434cce10
        void* const var_78_1 = &data_1434cce10
        int16_t var_70_1 = 0
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
        sub_142ab5460(arg1, &var_68)
        int16_t var_60
        int32_t r8_2
        int32_t var_5c
        
        if (var_60 s< 0)
            r8_2 = var_5c
        else
            r8_2 = sx.d(var_60) s>> 5
        
        if ((var_60.b & 0x11) == 0)
            void var_5e
            rdi_1 = &var_5e
            void* var_50
            
            if ((var_60.b & 2) == 0)
                rdi_1 = var_50
        
        void var_a8
        int128_t zmm0_1 = sub_142b38e70(&var_98, rdi_1, r8_2, &var_a8)
        int512_t zmm0_2
        result, zmm0_2 = sub_142a47ff0(&var_68)
        zmm0_2.o = zmm0_1
    else
        result = *(arg1 + 0x14)
        float zmm0[0x2]
        
        if ((data_143ccaf50 & result) == 0)
            zmm0 = 0x7f800000
        else
            zmm0 = 0xff800000
        
        _mm_cvtps_pd(zmm0)

__security_check_cookie(rax_1 ^ &var_c8)
return result
