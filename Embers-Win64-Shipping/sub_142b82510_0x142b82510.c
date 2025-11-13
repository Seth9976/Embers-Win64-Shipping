// 函数: sub_142b82510
// 地址: 0x142b82510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
(*(*arg1 + 0x38))()
int32_t* result

if (_finite(arg5.q) == 0)
    int64_t rdx
    uint128_t zmm0_1
    zmm0_1, result, rdx = sub_142a4b9b0(arg5.q)
    arg5.q f- zmm0_1.q
    
    if (is_unordered.q(arg5.q, zmm0_1.q) || arg5.q f!= zmm0_1.q || arg1[2] == 0)
        void* rcx_4 = arg1[2]
        
        if (rcx_4 == 0)
            int64_t* rcx_5 = arg1[3]
            
            if (rcx_5 != 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_80_1 = 2
                sub_142a58ac0(rcx_5, rdx, &var_88)
                int32_t rax_11
                int32_t var_7c
                
                if (var_80_1 s< 0)
                    rax_11 = var_7c
                else
                    rax_11 = sx.d(var_80_1) s>> 5
                sub_142a49310(arg3, arg4 + arg1[1].d, 0, &var_88, 0, rax_11)
                result = sub_142a47ff0(&var_88)
        else
            result = sub_142b362a0(rcx_4, arg5, arg3, arg1[1].d + arg4, arg6, arg7)
    else
        int32_t rbx_1 = arg4 + arg1[1].d
        int64_t rax_5 = sub_142b36c50(arg5)
        result = sub_142b36320(arg1[2], rax_5, arg3, rbx_1, arg6, arg7)
else
    uint128_t zmm0 = sub_142a4bba0()
    int64_t* rax_4
    int128_t zmm6_1
    rax_4, zmm6_1 = sub_142b35d80(arg1[2], zmm0)
    result = sub_142b32b70(rax_4, zmm6_1, arg3, arg1[1].d + arg4, arg6, arg7)

__security_check_cookie(rax_1 ^ &var_c8)
return result
