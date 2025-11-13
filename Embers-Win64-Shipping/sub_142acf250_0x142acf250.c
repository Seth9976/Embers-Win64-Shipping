// 函数: sub_142acf250
// 地址: 0x142acf250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_138 = -2
int128_t zmm6
int128_t var_38 = zmm6
int128_t zmm7
int128_t var_48 = zmm7
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t* result = nullptr
int32_t var_148 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_128 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_120 = 2
char** rax_2 = sub_142a64160(nullptr, "metaZones", &var_148)
sub_142a625a0(rax_2, "metazoneInfo", rax_2, &var_148)
void* rax_3 = sub_142acfa40(arg1, &var_148)

if (var_148 s> 0 || rax_3 == 0)
    sub_142a4ab40(&var_128)
else
    sub_142a4aa20(&var_128, 1, rax_3, 0xffffffff)

if (var_148 s<= 0)
    int32_t r8_4
    int32_t var_11c
    
    if (var_120 s< 0)
        r8_4 = var_11c
    else
        r8_4 = sx.d(var_120) s>> 5
    int32_t var_150_1 = 0
    char var_e8[0x70]
    int64_t rcx_5 = sx.q(sub_142a49990(&var_128, 0, r8_4, &var_e8, 0x81))
    
    if (rcx_5 u>= 0x81)
        __report_rangecheckfailure()
        noreturn
    
    var_e8[rcx_5] = 0
    char (* rax_6)[0x70] = &var_e8
    
    if (var_e8[0] != 0)
        do
            if (*rax_6 == 0x2f)
                *rax_6 = 0x3a
            
            rax_6 = &(*rax_6)[1]
        while (*rax_6 != 0)
    
    sub_142a625a0(rax_2, &var_e8, rax_2, &var_148)
    
    if (var_148 s<= 0)
        char** r15_1 = nullptr
        
        while (sub_142a63fa0(rax_2) != 0)
            char** rax_8 = sub_142a63800(rax_2, r15_1, &var_148)
            r15_1 = rax_8
            void* rax_9 = sub_142a63b20(rax_8, 0, nullptr, &var_148)
            wchar16 const* const rbx_1 = u"1970-01-01 00:00"
            void* r14_1 = u"9999-12-31 23:59"
            int32_t rax_10 = sub_142a63b10(r15_1)
            
            if (rax_10 == 3)
                rbx_1 = sub_142a63b20(r15_1, rax_10 - 2, nullptr, &var_148)
                r14_1 = sub_142a63b20(r15_1, 2, nullptr, &var_148)
            
            if (var_148 s<= 0)
                int128_t zmm0_1 = sub_142ad0be0(rbx_1, &var_148)
                int128_t zmm0_2 = sub_142ad0be0(r14_1, &var_148)
                
                if (var_148 s<= 0)
                    void** rax_13 = sub_142a7dd00(0x18)
                    
                    if (rax_13 == 0)
                        var_148 = 7
                        break
                    
                    *rax_13 = rax_9
                    rax_13[1] = zmm0_1.q
                    rax_13[2] = zmm0_2.q
                    
                    if (result == 0)
                        struct icu_64::UObject::icu_64::UVector::VTable** rax_14 =
                            j_sub_142a7dd00(zx.q((&result[5]).d))
                        struct icu_64::UObject::icu_64::UVector::VTable** var_140_1 = rax_14
                        
                        if (rax_14 == 0)
                            result = nullptr
                        else
                            result = sub_142ae6e40(rax_14, j_sub_142a7dcd0, 0, &var_148)
                        
                        if (var_148 s> 0)
                            if (result != 0)
                                (**result)(result, 1)
                            
                            result = nullptr
                            sub_142a7dcd0(rax_13)
                            break
                    
                    sub_142ae7110(result, rax_13, &var_148)
                    
                    if (var_148 s> 0)
                        break
                else
                    var_148 = 0
            else
                var_148 = 0
        
        sub_142a5f860(r15_1)
        
        if (var_148 s> 0 && result != 0)
            (**result)(result, 1)
            result = nullptr

sub_142a5f860(rax_2)
sub_142a47ff0(&var_128)
__security_check_cookie(rax_1 ^ &var_178)
return result
