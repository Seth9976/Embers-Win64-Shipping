// 函数: sub_142b81a30
// 地址: 0x142b81a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t result

if (arg1[4].b != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_128
    sub_142a479b0(&var_128, arg2)
    struct icu_64::UObject::icu_64::ParsePosition::VTable* var_1a0 =
        &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
    int32_t var_198_1 = 1
    int32_t var_194_1 = 0xffffffff
    void var_178
    sub_142ab2be0(&var_178)
    int32_t r15_1 = 0
    int64_t* rbx_1 = nullptr
    uint128_t zmm6 = 0x4024000000000000
    int512_t zmm2
    
    while (true)
        int16_t var_120
        int32_t var_11c
        int32_t rax_6
        
        if (var_120 s< 0)
            rax_6 = var_11c
        else
            rax_6 = sx.d(var_120) s>> 5
        
        if (rax_6 s<= 0)
            break
        
        if (var_198_1 == 0)
            break
        
        var_198_1 = 0
        struct icu_64::UObject::icu_64::Formattable::VTable* var_e8
        sub_142aa7770(&var_e8)
        char var_1c0
        var_1c0.q = &var_e8
        zmm2, zmm6 = sub_142b363a0(arg1[2], &var_128, &var_1a0, zmm6, arg6, var_1c0)
        int32_t var_1a8 = 0
        char rsi_1 = sub_142aa7e50(&var_e8, &var_1a8)
        
        if (arg5 == 0)
        label_142b81bdb:
            
            if (var_198_1 != 0)
                goto label_142b81bf5
        else
            if (var_198_1 == 0)
                if (rbx_1 != 0)
                    (*(*rbx_1 + 0xa0))(rbx_1, &var_128, &var_e8, &var_1a0)
                    rsi_1 = sub_142aa7e50(&var_e8, &var_1a8)
                else
                    var_1a8 = rbx_1.d
                    int64_t* rax_8 = sub_142a58680(&var_1a8)
                    rbx_1 = rax_8
                    
                    if (var_1a8 s> 0)
                        if (rax_8 != 0)
                            int64_t r8_1 = *rax_8
                            (*r8_1)(rax_8, 1, r8_1)
                        
                        rbx_1 = nullptr
                    else if (rax_8 != 0)
                        (*(*rbx_1 + 0xa0))(rbx_1, &var_128, &var_e8, &var_1a0)
                        rsi_1 = sub_142aa7e50(&var_e8, &var_1a8)
                
                goto label_142b81bdb
            
        label_142b81bf5:
            sub_142ab3100(&var_178, rsi_1, 0, 1)
            r15_1 += 1
            *(arg3 + 8) += var_198_1
            var_1c0.d = 0
            sub_142a49390(&var_128, 0, var_198_1, 0, 0, var_1c0)
            
            while (true)
                int32_t rax_12 = var_11c
                int32_t rdx_6
                
                if (var_120 s< 0)
                    rdx_6 = rax_12
                else
                    rdx_6 = sx.d(var_120) s>> 5
                
                if (rdx_6 s<= 0)
                    break
                
                if (var_120 s>= 0)
                    rax_12 = sx.d(var_120) s>> 5
                
                if (rax_12 == 0)
                    break
                
                void var_11e
                void* rax_13 = &var_11e
                void* var_110
                
                if ((var_120.b & 2) == 0)
                    rax_13 = var_110
                
                if (*rax_13 != 0x20)
                    break
                
                var_1c0.d = 0
                sub_142a49390(&var_128, 0, 1, 0, 0, var_1c0)
                *(arg3 + 8) += 1
        
        sub_142aa7840(&var_e8)
    
    if (rbx_1 != 0)
        (**rbx_1)(rbx_1, 1)
    
    sub_142ab3060(&var_178, neg.d(r15_1))
    int128_t zmm0_1
    int128_t zmm7_1
    zmm0_1, zmm7_1 = sub_142ab5010(&var_178)
    zmm2.o = zmm7_1
    (*(*arg1 + 0x50))(arg1, zmm0_1, zmm2)
    sub_142aa8140(arg7, zmm0_1)
    sub_142ab2c10(&var_178)
    sub_142aa8450(&var_1a0)
    sub_142a47ff0(&var_128)
    result.b = 1
else
    result = sub_142b81e00(arg1, arg2, arg3, arg4, zx.o(0), (zx.o(0)).q, arg5, arg6, arg7)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
