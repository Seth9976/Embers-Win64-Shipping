// 函数: sub_142ac6ae0
// 地址: 0x142ac6ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_140 = -2
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
struct icu_64::Format::icu_64::TimeZoneFormat::VTable** result = arg1
struct icu_64::UObject::icu_64::Format::VTable** var_138 = arg1
sub_142aa8270(arg1)
*result = &icu_64::TimeZoneFormat::`vftable'{for `icu_64::Format'}
sub_142a456d0(&result[0x29], arg2)
int32_t rsi = 0
result[0x46] = 0
result[0x47] = 0
result[0x48] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x49].w = 2
int64_t (* var_168)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) =
    sub_142a47ff0
`eh vector constructor iterator'(&result[0x50], 0x40, 6)
result[0x85] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x86].w = 2
result[0x8d].d = 0
result[0x8e] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x8f].w = 2
result[0x96] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x97].w = 2
result[0xa5] = 0
__builtin_memset(&result[0x9e], 0, 0x30)
void* rcx_2 = result + 0x162
int64_t rax_2 = -1

do
    rax_2 += 1
while (*(rcx_2 + rax_2) != 0)

if (rax_2.d != 0)
    if (rax_2.d s>= 4)
        result[0x45].b = 0
    else
        void* rdx_4 = result - rcx_2
        char i
        
        do
            i = *rcx_2
            *(rcx_2 + rdx_4 + 0x228) = i
            rcx_2 += 1
        while (i != 0)
    
    goto label_142ac6c96

void var_e8
sub_142a4fc30(result[0x2e], &var_e8, 0x9d, arg3)
int32_t rax_3 = sub_142a4cc70(&var_e8, &result[0x45], 4, arg3)

if (*arg3 s<= 0)
    *(sx.q(rax_3) + result + 0x228) = 0
label_142ac6c96:
    result[0x46] = sub_142ac6460(arg2, arg3)
    
    if (*arg3 s<= 0)
        void* rbx_1 = nullptr
        char** rax_6 = sub_142a641c0("icudt64l-zone", *(arg2 + 0x28), arg3)
        char** rax_7 = sub_142a62230(rax_6, "zoneStrings", nullptr, arg3)
        int32_t var_158[0x4]
        void* r15_1
        
        if (*arg3 s<= 0)
            void* rax_8 = sub_142a63c50(rax_7, "gmtFormat", &var_158, arg3)
            r15_1 = nullptr
            
            if (var_158[0] s> 0)
                r15_1 = rax_8
            
            void* rax_9 = sub_142a63c50(rax_7, "gmtZeroFormat", &var_158, arg3)
            int32_t r9_6 = var_158[0]
            
            if (r9_6 s> 0)
                sub_142a4aa20(&result[0x85], 1, rax_9, r9_6)
            
            void* rax_10 = sub_142a63c50(rax_7, "hourFormat", &var_158, arg3)
            
            if (var_158[0] s> 0)
                rbx_1 = rax_10
            
            sub_142a5f860(rax_7)
            sub_142a5f860(rax_6)
        
        if (*arg3 s> 0 || r15_1 == 0)
            r15_1 = u"GMT{0}"
        
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_128
        sub_142ac9180(result, sub_142a47a60(&var_128, 1, r15_1, 0xffffffff), arg3)
        sub_142a47ff0(&var_128)
        void* r12_2
        
        if (rbx_1 == 0)
            r12_2 = &result[0x50]
        label_142ac6e71:
            sub_142a4aa20(&result[0x70], 1, &data_1436560d4, 0xffffffff)
            sub_142a4aa20(r12_2, 1, u"+H:mm", 0xffffffff)
            sub_142a4aa20(&result[0x58], 1, u"+H:mm:ss", 0xffffffff)
            sub_142a4aa20(&result[0x78], 1, &data_1436560dc, 0xffffffff)
            sub_142a4aa20(&result[0x60], 1, u"-H:mm", 0xffffffff)
            sub_142a4aa20(&result[0x68], 1, u"-H:mm:ss", 0xffffffff)
        else
            int16_t* rax_12 = sub_142a8c220(rbx_1, 0x3b)
            r12_2 = &result[0x50]
            
            if (rax_12 == 0)
                goto label_142ac6e71
            
            var_158[0] = 0
            sub_142a4aa20(r12_2, 0, rbx_1, ((rax_12 - rbx_1) s>> 1).d)
            sub_142a4aa20(&result[0x60], 1, &rax_12[1], 0xffffffff)
            sub_142ac7ca0(r12_2, &result[0x58], &var_158)
            sub_142ac7ca0(&result[0x60], &result[0x68], &var_158)
            sub_142acc1b0(r12_2, &result[0x70], &var_158)
            sub_142acc1b0(&result[0x60], &result[0x78], &var_158)
            
            if (var_158[0] s> 0)
                goto label_142ac6e71
        sub_142ac90d0(result, arg3)
        struct icu_64::UObject::icu_64::NumberingSystem::VTable** rax_13 = sub_142aab3f0(arg2, arg3)
        
        if (rax_13 == 0)
            __builtin_memcpy(&result[0x80], U"01234567", 0x20)
            result[0x84] = 0x3900000038
        else if (sub_142aabab0(rax_13) != 0)
            __builtin_memcpy(&result[0x80], U"01234567", 0x20)
            result[0x84] = 0x3900000038
        else
            struct icu_64::UObject::icu_64::NumberingSystem::VTable* r8_13 = *rax_13
            r8_13->vFunc_2(rax_13, &var_128, r8_13)
            
            if (sub_142a48c90(&var_128, 0, 0x7fffffff) == 0xa)
                rbx_1 = &result[0x80]
                int64_t i_2 = 0xa
                int64_t i_1
                
                do
                    *rbx_1 = sub_142a486d0(&var_128, rsi)
                    rsi = sub_142a4a4f0(&var_128, rsi, 1)
                    rbx_1 += 4
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                rbx_1.b = 1
            else
                rbx_1.b = 0
            
            sub_142a47ff0(&var_128)
            rbx_1.b ^= 1
            
            if (rbx_1.b != 0)
                __builtin_memcpy(&result[0x80], U"01234567", 0x20)
                result[0x84] = 0x3900000038
        
        if (rax_13 != 0)
            (*rax_13)->__offset(0x0).q(rax_13, 1)

__security_check_cookie(rax_1 ^ &var_188)
return result
