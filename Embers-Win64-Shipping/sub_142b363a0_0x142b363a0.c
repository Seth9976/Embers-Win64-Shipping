// 函数: sub_142b363a0
// 地址: 0x142b363a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int128_t zmm6 = arg4
sub_142aa8170(arg6, 0)
int16_t rax_3 = *(arg2 + 8)
int32_t result

if (rax_3 s< 0)
    result = *(arg2 + 0xc)
else
    result = sx.d(rax_3) s>> 5

if (result != 0)
    struct icu_64::UObject::icu_64::ParsePosition::VTable* var_108 =
        &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
    int32_t var_100_1 = 0
    int32_t var_fc_1 = 0xffffffff
    struct icu_64::UObject::icu_64::ParsePosition::VTable* var_118 =
        &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
    int32_t var_110_1 = *(arg3 + 8)
    int32_t var_10c_1 = *(arg3 + 0xc)
    int32_t i = 0
    int32_t rbx_1 = 1
    int64_t* rsi_1 = arg1 + 0x50
    int32_t r12_1 = arg5
    struct icu_64::UObject::icu_64::Formattable::VTable* var_d8
    
    do
        if (*rsi_1 != 0 && ((r12_1 u>> i.b).b & 1) == 0)
            r12_1 |= rbx_1
            sub_142aa7770(&var_d8)
            zmm6 = sub_142b332a0(*rsi_1, arg2, &var_118, 0, zmm6.q, r12_1, &var_d8)
            
            if (var_110_1 s> var_100_1)
                sub_142aa7870(arg6, &var_d8)
                var_100_1 = var_110_1
                var_fc_1 = var_10c_1
            
            var_110_1 = *(arg3 + 8)
            var_10c_1 = *(arg3 + 0xc)
            sub_142aa7840(&var_d8)
        
        i += 1
        rbx_1 = rol.d(rbx_1, 1)
        rsi_1 = &rsi_1[1]
    while (i s< 6)
    
    int64_t rdi_1 = 0
    
    if (boost::math::detail::isnan_impl<long double>(zmm6.q) == 0)
        int128_t zmm0_2 = sub_142a4bcc0()
        int128_t zmm1_1 = zmm0_2
        uint128_t zmm2 = -0x8000000000000000
        zmm0_2 ^= zmm2
        
        if (not(zmm0_2.q f> zmm6.q))
            zmm0_2 = _mm_min_sd(zmm1_1.q, zmm6.q)
        
        rbx_1.b = 0.0 f> zmm0_2.q
        
        if (rbx_1.b != 0)
            zmm0_2 ^= zmm2
        
        rdi_1 = int.q(sub_142a4b9b0(zmm0_2.q))
        
        if (rbx_1.b != 0)
            rdi_1 = neg.q(rdi_1)
    
    int32_t rax_15 = *(arg1 + 0x48)
    int64_t rbx_2 = sx.q(rax_15 - 1)
    
    if (rax_15 - 1 s>= 0)
        int64_t temp1_1
        
        do
            if (var_100_1 s>= sub_142a4a1f0(arg2))
                break
            
            int64_t* rax_18
            
            if (*(arg1 + 0x98) == 0)
                rax_18 = *(arg1 + 0x40)
                
                if (rax_18 != 0)
                    rax_18 = rax_18[rbx_2]
            
            if (*(arg1 + 0x98) != 0 || *rax_18 s< rdi_1)
                sub_142aa7770(&var_d8)
                int64_t rax_19 = *(arg1 + 0x40)
                int64_t* rcx_8
                
                if (rax_19 == 0)
                    rcx_8 = nullptr
                else
                    rcx_8 = *(rax_19 + (rbx_2 << 3))
                
                zmm6 = sub_142b332a0(rcx_8, arg2, &var_118, *(arg1 + 0x98), zmm6.q, r12_1, &var_d8)
                
                if (var_110_1 s> var_100_1)
                    sub_142aa7870(arg6, &var_d8)
                    var_100_1 = var_110_1
                    var_fc_1 = var_10c_1
                
                var_110_1 = *(arg3 + 8)
                var_10c_1 = *(arg3 + 0xc)
                sub_142aa7840(&var_d8)
            
            temp1_1 = rbx_2
            rbx_2 -= 1
        while (temp1_1 - 1 s>= 0)
    
    *(arg3 + 8) = var_100_1
    *(arg3 + 0xc) = var_fc_1
    sub_142aa8450(&var_118)
    sub_142aa8450(&var_108)
    result.b = 1

__security_check_cookie(rax_1 ^ &var_158)
return result
