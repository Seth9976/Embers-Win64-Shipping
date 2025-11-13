// 函数: sub_142b1af60
// 地址: 0x142b1af60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int16_t* rsi = arg3
int16_t* rdi = arg2

if (arg7[2] == arg7[4])
    goto label_142b1b0ba

int16_t* rax_4 = sub_142b1d5c0(arg1, arg2, arg3, arg5)

if (rdi == rax_4)
    goto label_142b1b0ba

void* rax_5 = sub_142b1d8f0(arg1, arg7[2], arg7[4], arg5)
int32_t rbx_3 = ((arg7[4] - rax_5) s>> 1).d
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
sub_142a47f60(&var_88, rax_5, rbx_3)
sub_142b1fb50(arg7, rbx_3)
sub_142a48100(arg6, &var_88)
sub_142a48d70(&var_88, rdi, 0, ((rax_4 - rdi) s>> 1).d)
int16_t var_80
int16_t* rdx_5

if ((var_80.b & 0x11) == 0)
    void var_7e
    rdx_5 = &var_7e
    int16_t* var_70
    
    if ((var_80.b & 2) == 0)
        rdx_5 = var_70
else
    rdx_5 = nullptr

int32_t rax_11
int32_t var_7c

if (var_80 s< 0)
    rax_11 = var_7c
else
    rax_11 = sx.d(var_80) s>> 5
sub_142b1a300(arg1, rdx_5, &rdx_5[sx.q(rax_11)], arg5, 1, arg7, arg8)
uint64_t result

if (*arg8 s<= 0)
    rdi = rax_4
    sub_142a47ff0(&var_88)
label_142b1b0ba:
    
    if (arg4 == 0)
        if (rsi == 0)
            rsi = sub_142a8c220(rdi, 0)
        
        result = sub_142b1a0e0(arg7, rdi, rsi, arg8)
    else
        result = sub_142b1a300(arg1, rdi, rsi, arg5, 1, arg7, arg8)
else
    result = sub_142a47ff0(&var_88)

__security_check_cookie(rax_1 ^ &var_e8)
return result
