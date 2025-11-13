// 函数: sub_142b43ec0
// 地址: 0x142b43ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
int64_t var_28 = r12
int64_t r14
int64_t var_38 = r14
int64_t var_260 = -2
void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int32_t rdi = 0
int32_t var_270 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_258
sub_142a479b0(&var_258, arg2)
int16_t var_2b8 = 0x20
sub_142a48d70(&var_258, &var_2b8, 0, 1)
int64_t var_2c8 = 0
int32_t var_2c0 = 0
char var_2bc = 0
void var_218
sub_142a5b060(&var_218)
void var_2a8
sub_142b464c0(&var_2a8, &var_258, 0)
int64_t rax_2 = data_144016b68
int64_t var_290 = 0
int64_t var_280 = rax_2
int32_t var_278 = 0xffffffff
int32_t rbx = 0

if (sub_142b467c0(&var_2a8) s> 0)
    int32_t rax_9
    
    do
        int32_t rax_4 = sub_142b46580(&var_2a8, rdi)
        r12.b = sub_142b13730(rax_4) != 0
        r14.b = rax_4 == 0x2f
        
        if (r12.b != 0 || r14.b != 0)
            void* rcx_14
            
            if (rdi != 0)
                sub_142b467f0(&var_2a8, rdi)
                
                if (rbx != 0)
                    rbx = sub_142b43b00(rbx, &var_2a8, &var_218, arg4)
                else
                    rbx = sub_142b44140(&var_2a8, &var_290, &var_2c8, &var_218, arg4)
                    int64_t var_280_1 = rax_2
                    int32_t var_278_1 = 0xffffffff
                
                sub_142b467d0(&var_2a8)
                rcx_14 = &var_2a8
                
                if (*arg4 s> 0)
                    goto label_142b440bf
                
                sub_142b464f0(rcx_14, rdi)
                rdi = 0
                
                if (r14.b != 0 && rbx == 0)
                    goto label_142b440a9
            else if (rbx != 0 || (r14.b != 0 && rbx == 0))
            label_142b440a9:
                rcx_14 = &var_2a8
                *arg4 = 0x10113
            label_142b440bf:
                *arg3 = sub_1408e52c0(rcx_14)
                break
                break
                break
            int32_t rdx_8
            
            if (r12.b == 0 || rbx == 0)
                rdx_8.b = rax_4 u> 0xffff
                sub_142b464f0(&var_2a8, rdx_8 + 1)
            else
                if (rbx - 3 u<= 6)
                    goto label_142b440a9
                
                rbx = 0
                rdx_8.b = rax_4 u> 0xffff
                sub_142b464f0(&var_2a8, rdx_8 + 1)
        else
            int32_t rcx_7
            rcx_7.b = rax_4 u> 0xffff
            rdi += rcx_7 + 1
            
            if (rbx == 0)
                sub_142b107e0(&var_290, rax_4)
        
        rax_9 = sub_142b467c0(&var_2a8)
    while (rdi s< rax_9)

sub_142ab6fb0(arg1, &var_218)
sub_142a97dd0(&var_290)
struct icu_64::UObject::icu_64::Locale::VTable* var_138
sub_142a45a20(&var_138)
void var_170
sub_142ab6b80(&var_170)
void var_190
sub_142ab74c0(&var_190)
struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_1f0
sub_142ab6080(&var_1f0)
struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_208
sub_142ab6080(&var_208)
sub_142a47ff0(&var_258)
__security_check_cookie(rax_1 ^ &var_2f8)
return arg1
