// 函数: sub_142a657c0
// 地址: 0x142a657c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_230 = -2
void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t rdi = sx.q(arg3)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_228 = arg1
int32_t var_240 = 0
*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[1].w = 2
int32_t var_240_1 = 1
int32_t var_248 = 0
char* var_108
sub_142a5f830(&var_108)
char** rax_2 = sub_142a66480(arg2, &var_108, &var_248)
int32_t rbx_1 = -1

if (var_248 s<= 0)
    char* var_1d8
    sub_142a5f830(&var_1d8)
    sub_142a625a0(&var_108, "links", &var_1d8, &var_248)
    int32_t var_244
    void* rax_3 = sub_142a63700(&var_1d8, &var_244, &var_248)
    
    if (var_248 s<= 0 && rdi.d s>= 0 && rdi.d s< var_244)
        rbx_1 = *(rax_3 + (rdi << 2))
    
    sub_142a5f860(&var_1d8)
    
    if (rbx_1 s>= 0)
        char** rax_4 = sub_142a625a0(rax_2, "Names", nullptr, &var_248)
        
        if (var_248 s<= 0)
            var_244 = 0
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_218
            sub_142a49d00(arg1, 
                sub_142a47a60(&var_218, 1, sub_142a63b20(rax_4, rbx_1, &var_244, &var_248), 
                    var_244))
            sub_142a47ff0(&var_218)
        
        sub_142a5f860(rax_4)

sub_142a5f860(rax_2)
sub_142a5f860(&var_108)
__security_check_cookie(rax_1 ^ &var_268)
return arg1
