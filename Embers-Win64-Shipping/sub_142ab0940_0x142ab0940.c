// 函数: sub_142ab0940
// 地址: 0x142ab0940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
uint128_t zmm6
uint128_t var_48 = zmm6
void var_1e8
int64_t result = __security_cookie ^ &var_1e8
int64_t result_1 = result

if (*(arg1 + 0x170) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_178
    Concurrency::details::_SyncOriginator<enum Concurrency::agent_status>::_SyncOriginator<enum Concurrency::agent_status>(
        &var_178, arg2, *(arg4 + 8))
    struct icu_64::UObject::icu_64::ParsePosition::VTable* var_198 =
        &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
    int32_t rsi_1 = 0
    int32_t var_190_1 = 0
    int32_t var_18c_1 = 0xffffffff
    struct icu_64::UObject::icu_64::ParsePosition::VTable* var_1b8 =
        &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
    int32_t var_1b0_1 = 0
    int32_t var_1ac_1 = 0xffffffff
    struct icu_64::UObject::icu_64::Formattable::VTable* var_c8
    sub_142aa7770(&var_c8)
    int64_t* rdi_1 = *(arg1 + 0x170)
    void* i = *rdi_1
    
    if (i != 0)
        zmm6 = 0x42b0000000000000
        
        do
            if (*(i + 0x99) != 0 && *(i + 0x9a) != 0)
                struct icu_64::UObject::icu_64::ParsePosition::VTable* var_1a8 =
                    &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
                int32_t var_1a0_1 = 0
                int32_t var_19c_1 = 0xffffffff
                struct icu_64::UObject::icu_64::Formattable::VTable* var_138
                sub_142aa7770(&var_138)
                zmm6 = sub_142b363a0(i, &var_178, &var_1a8, zmm6, 0, &var_138)
                
                if (var_1a0_1 s> var_1b0_1)
                    var_1b0_1 = var_1a0_1
                    var_1ac_1 = var_19c_1
                    sub_142aa7870(&var_c8, &var_138)
                    int16_t var_170
                    int32_t rax_5
                    int32_t var_16c
                    
                    if (var_170 s< 0)
                        rax_5 = var_16c
                    else
                        rax_5 = sx.d(var_170) s>> 5
                    
                    if (var_1b0_1 == rax_5)
                        sub_142aa7840(&var_138)
                        sub_142aa8450(&var_1a8)
                        break
                
                sub_142aa7840(&var_138)
                sub_142aa8450(&var_1a8)
            
            rdi_1 = &rdi_1[1]
            i = *rdi_1
        while (i != 0)
    
    int32_t rdx_2 = *(arg4 + 8)
    *(arg4 + 8) = var_1b0_1 + rdx_2
    
    if (var_1b0_1 s<= 0)
        if (var_1ac_1 s> 0)
            rsi_1 = var_1ac_1
        
        *(arg4 + 0xc) = rsi_1 + rdx_2
    else
        *(arg4 + 0xc) = 0xffffffff
    
    sub_142aa7870(arg3, &var_c8)
    
    if (sub_1405f78c0(arg3) == 1)
        zmm6 = zx.o(*(arg3 + 8))
        
        if (boost::math::detail::isnan_impl<long double>(zmm6.q) == 0)
            double zmm0_2 = sub_142a4bd80(zmm6.q)
            zmm6.q f- zmm0_2
            
            if (not(is_unordered.q(zmm6.q, zmm0_2)) && not(zmm6.q f!= zmm0_2)
                    && not(zmm6.q f< -2147483648.0) && not(2147483647.0 f< zmm6.q))
                sub_142aa8170(arg3, int.d(zmm6.q))
    
    sub_142aa7840(&var_c8)
    sub_142aa8450(&var_1b8)
    sub_142aa8450(&var_198)
    result = sub_142a47ff0(&var_178)
else
    *(arg4 + 0xc) = 0

__security_check_cookie(result_1 ^ &var_1e8)
return result
