// 函数: sub_142aad7b0
// 地址: 0x142aad7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_98
int64_t result = __security_cookie ^ &var_98
int64_t result_1 = result

if (*(arg1 + 0x10) == 0 || *(arg1 + 0x11) == 0)
    int64_t rbp
    rbp.b = 0
    
    do
        int64_t rbx_1 = 0
        char const (** rdi_1)[0xb] = &data_143ccaf30
        int64_t i_1 = 3
        int64_t i
        
        do
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_1 =
                sub_142a47e10(&var_68, *rdi_1, 0xffffffff)
            void* rcx_1 = *(arg1 + 8)
            void* rcx_2
            
            if (rbp.b == 0)
                rcx_2 = rcx_1 + 0xa38
            else
                rcx_2 = rcx_1 + 0x978
            
            sub_142a48100(rcx_2 + rbx_1, rax_1)
            result = sub_142a47ff0(&var_68)
            rbx_1 += 0x40
            rdi_1 = &rdi_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbp.b += 1
    while (rbp.b s<= 1)

__security_check_cookie(result_1 ^ &var_98)
return result
