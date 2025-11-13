// 函数: sub_142b53750
// 地址: 0x142b53750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
sub_142b52ba0(arg1, arg2)
int32_t i = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_c0 = 2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
int32_t var_48 = 1
int64_t var_44 = 8
int64_t* rcx = *(arg1 + 0xe8)
int64_t* rax_3 = (*(*rcx + 0x20))(rcx, arg2, &i)
int64_t r8_1 = *rax_3
int64_t rax_4 = (*(r8_1 + 0x30))(rax_3, &i, r8_1)
int64_t rsi = rax_4

if (rax_4 != 0)
    while (i s<= 0)
        int64_t* rcx_2 = *(arg1 + 0xe8)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_e8
        (*(*rcx_2 + 0x38))(rcx_2, rsi, arg1 + 0x1d1, &var_c8, var_e8)
        bool cond:0_1
        
        if ((arg2[1][0] & 1) == 0)
            int16_t rax_6 = arg2[1][0].w
            int32_t r8_4
            
            if (rax_6 s< 0)
                r8_4 = *(arg2 + 0xc)
            else
                r8_4 = sx.d(rax_6) s>> 5
            
            int32_t rax_9
            int32_t var_bc
            
            if (var_c0 s< 0)
                rax_9 = var_bc
            else
                rax_9 = sx.d(var_c0) s>> 5
            
            if ((var_c0.b & 1) != 0 || r8_4 != rax_9)
                goto label_142b5386c
            
            cond:0_1 = sub_142a490e0(arg2, &var_c8, r8_4) != 0
            goto label_142b5386a
        
        cond:0_1 = (var_c0.b & 1) != 0
    label_142b5386a:
        
        if (not(cond:0_1))
        label_142b5386c:
            int64_t rdi_1 = 0
            
            for (int32_t j = 1; j != 0; j = (&var_48)[rdi_1])
                int64_t* rcx_4 = *(arg1 + 0xe8)
                (*(*rcx_4 + 0x40))(rcx_4, rsi, zx.q(j), &var_88, var_e8)
                
                if ((var_80 & 0xffe0) != 0)
                    var_e8 = &var_88
                    sub_142b52f30(arg1, arg2, rsi, j == 1, var_e8)
                
                rdi_1 += 1
        
        int64_t rax_13 = (*(*rax_3 + 0x30))(rax_3, &i)
        rsi = rax_13
        
        if (rax_13 == 0)
            break

(**rax_3)(rax_3, 1)
sub_142a47ff0(&var_88)
sub_142a47ff0(&var_c8)
__security_check_cookie(rax_1 ^ &var_108)
return &icu_64::UObject::`vftable'
