// 函数: sub_140a6c7c0
// 地址: 0x140a6c7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint32_t result = arg1[1].d
void* rsi = nullptr
int32_t rbp = result - 1

if (result == 0)
    rbp = 0

int16_t* const r14

if (result == 0)
    r14 = &data_142d40450
else
    r14 = *arg1

if (rbp != 0)
    int64_t rbx
    int64_t arg_10 = rbx
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t rax_2 = 2
    int16_t var_60_1 = 2
    
    if (rbp s> 0)
        void* rax_3 = sub_142a4a0b0(&var_68, rbp + 1)
        rbx = sx.q(rbp) * 2
        memcpy(rax_3, r14, rbx.d)
        *(rbx + rax_3) = 0
        sub_142a4a600(&var_68, rbp)
        rax_2 = var_60_1
    
    int32_t rdx_4
    int32_t var_5c
    
    if (rbp s<= 0 || rax_2 s>= 0)
        rdx_4 = sx.d(rax_2) s>> 5
    else
        rdx_4 = var_5c
    char rax_4 = var_60_1.b
    
    if ((rax_4 & 0x11) == 0)
        void var_5e
        rsi = &var_5e
        void* var_50
        
        if ((rax_4 & 2) == 0)
            rsi = var_50
    
    int32_t rax_5 = sub_142a829e0(rsi, rdx_4)
    
    if (rax_5 == 0)
        rbx.b = 0
    else if (rax_5 == 1)
        rbx.b = 1
    else if (rax_5 != 2)
        rbx.b = 0
    else
        rbx.b = 2
    
    sub_142a47ff0(&var_68)
    result = zx.d(rbx.b)
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_88)
return result
