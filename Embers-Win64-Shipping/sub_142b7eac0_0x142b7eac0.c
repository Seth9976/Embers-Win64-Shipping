// 函数: sub_142b7eac0
// 地址: 0x142b7eac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_140 = -2
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
uint64_t rbx = zx.q(arg3)

if (*arg5 s> 0)
    goto label_142b7edd1

int32_t result = rbx.d

if (rbx.b u< 0xc0)
    __security_check_cookie(rax_1 ^ &var_198)
    return result

if ((result & 0xf) - 1 u> 0xe)
    abort()
    noreturn

int32_t* var_178_1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_f8
int32_t rax_6
uint64_t r8_6

switch (result & 0xf)
    case 1, 2, 4
        goto label_142b7ef2c
    case 3, 7, 0xa, 0xb, 0xd
        abort()
        noreturn
    case 5
        rax_6 = sub_142b7f200(arg1, *(*(arg1 + 0x10) + 8) + (rbx u>> 0xd << 2), rbx.d u>> 8 & 0x1f, 
            arg5)
    label_142b7ef2a:
        rbx = zx.q(rax_6)
        goto label_142b7ef2c
    case 6
        rax_6 = sub_142b7f3c0(arg1, *(*(arg1 + 0x10) + 0x10) + (rbx u>> 0xd << 3), 
            rbx.d u>> 8 & 0x1f, arg5)
        goto label_142b7ef2a
    case 8
        int16_t* rax_9 = *(*(arg1 + 0x10) + 0x18) + (rbx u>> 0xd << 1)
        uint32_t rbx_7 = zx.d(*rax_9) << 0x10 | zx.d(rax_9[1])
        
        if (arg4 != 0)
            var_f8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_f0_1 = 2
            int32_t var_b8_1 = 0
            int32_t var_b4_1 = 1
            int32_t var_b0_1 = 1
            int32_t var_ac_1 = 0xffffffff
            sub_142a47fc0(&var_138, 0)
            int32_t rax_13
            int32_t rbx_8
            
            if (rbx_7.b u< 0xc0 || (rbx_7.b & 0xf) != 9)
                rbx_8 = arg2
                rax_13 = sub_142b7d330(arg1, &var_138, 
                    sub_142b7eac0(arg1, zx.q(rbx_8), zx.q(rbx_7), 1, arg5), arg5)
                var_ac_1 = rax_13
            else
                rbx_8 = arg2
                rax_13 = sub_142b7e7f0(arg1, &var_138, rbx_8, rbx_7, &var_f8, arg5)
            
            if (*arg5 s> 0)
            label_142b7edc2:
                sub_142a47ff0(&var_138)
                sub_142a47ff0(&var_f8)
            label_142b7edd1:
                __security_check_cookie(rax_1 ^ &var_198)
                return 0
            
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_158_1 =
                sub_142ae72d0(arg1 + 0x68, rax_13)
            void var_a8
            sub_142b74060(&var_a8, &rax_9[2], 0, arg5)
            
            if (sub_142b743d0(&var_a8, arg5) == 0)
            label_142b7edde:
                rbx = zx.q(var_ac_1 << 0xd) | 0xc7
                sub_142a9e7d0(arg1 + 0x90, arg2)
                sub_142b74110(&var_a8)
                sub_142a47ff0(&var_138)
                sub_142a47ff0(&var_f8)
                goto label_142b7ef2c
            
            while (true)
                void var_80
                sub_142a48100(&var_138, &var_80)
                int16_t var_130
                int32_t var_12c
                int32_t r8_11
                
                if (var_130 s< 0)
                    r8_11 = var_12c
                else
                    r8_11 = sx.d(var_130) s>> 5
                
                sub_142a49810(&var_138, 0, r8_11)
                int16_t rax_18
                
                if (var_130 s< 0)
                    rax_18 = var_12c.w
                else
                    rax_18 = var_130 s>> 5
                
                int16_t var_168 = rax_18
                int32_t* var_170
                var_170.d = 1
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_178_2
                var_178_2.d = 0
                sub_142a49390(&var_138, 0, 0, &var_168, var_178_2.d, var_170.d)
                int32_t var_3c
                int32_t rax_21
                
                if (var_3c.b u< 0xc0 || (var_3c.b & 0xf) != 9)
                    int64_t r9_6
                    r9_6.b = 1
                    rax_21 = sub_142b7d330(arg1, &var_138, 
                        sub_142b7eac0(arg1, zx.q(rbx_8), var_3c, r9_6, arg5), arg5)
                    *(var_158_1 + 0x4c) = rax_21
                else
                    rax_21 = sub_142b7e7f0(arg1, &var_138, rbx_8, var_3c, var_158_1, arg5)
                
                if (*arg5 s> 0)
                    sub_142b74110(&var_a8)
                    break
                
                var_158_1 = sub_142ae72d0(arg1 + 0x68, rax_21)
                
                if (sub_142b743d0(&var_a8, arg5) == 0)
                    goto label_142b7edde
            
            goto label_142b7edc2
        
        var_178_1 = arg5
        r8_6 = zx.q(rbx_7)
    case 9
        if (arg4 != 0)
            var_f8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_f0_2 = 2
            int32_t var_b8_2 = 0
            int32_t var_b4_2 = 1
            int32_t var_b0_2 = 1
            int32_t var_ac_2 = 0xffffffff
            sub_142a47fc0(&var_138, 0)
            sub_142b7e7f0(arg1, &var_138, arg2, rbx.d, &var_f8, arg5)
            rbx = zx.q(var_ac_2 << 0xd) | 0xc7
            sub_142a9e7d0(arg1 + 0x90, arg2)
            sub_142a47ff0(&var_138)
            sub_142a47ff0(&var_f8)
            goto label_142b7ef2c
        
        uint64_t rdx_20 = rbx u>> 0xd
        int64_t rcx_30 = *(*(arg1 + 0x10) + 0x18)
        r8_6 = zx.q(zx.d(*(rcx_30 + (rdx_20 << 1))) << 0x10) | zx.q(*(rcx_30 + (rdx_20 << 1) + 2))
        var_178_1 = arg5
    case 0xc
        *arg5 = 0x10
    label_142b7ef2c:
        __security_check_cookie(rax_1 ^ &var_198)
        return rbx.d
    case 0xe
        rbx = zx.q(sub_142b2c2e0(arg2, *(*(*(arg1 + 0x10) + 0x10) + (rbx u>> 0xd << 3)))) | 0xc1
        goto label_142b7ef2c
    case 0xf
        rax_6 = sub_142b7f570(arg1, zx.q(sub_142b2c470(arg2)) << 0x20 | 0x5000500, arg5)
        goto label_142b7ef2a

result = sub_142b7eac0(arg1, zx.q(arg2), r8_6, 0, var_178_1)
__security_check_cookie(rax_1 ^ &var_198)
return result
