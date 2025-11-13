// 函数: sub_142aa8560
// 地址: 0x142aa8560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *arg1 == 0)
    if (*arg2 s<= 0)
        *arg2 = 1
    
    return &data_1436515a0

char** rax = sub_142a64160("icudt64l-curr", "supplementalData", arg2)
char** rax_1 = sub_142a625a0(rax, "CurrencyMeta", rax, arg2)

if (*arg2 s> 0)
    sub_142a5f860(rax_1)
    return &data_1436515a0

int32_t arg_18 = 0
char arg_8
sub_142a8d6e0(arg1, &arg_8, 3)
char arg_b = 0
char** rax_3 = sub_142a625a0(rax_1, &arg_8, nullptr, &arg_18)
char** rsi_1 = rax_3

if (arg_18 s> 0)
    sub_142a5f860(rax_3)
    rsi_1 = sub_142a625a0(rax_1, "DEFAULT", nullptr, arg2)
    
    if (*arg2 s> 0)
        sub_142a5f860(rax_1)
        sub_142a5f860(rsi_1)
        return &data_1436515a0

int32_t arg_20
void* result = sub_142a63700(rsi_1, &arg_20, arg2)

if (*arg2 s<= 0)
    if (arg_20 == 4)
        sub_142a5f860(rax_1)
        sub_142a5f860(rsi_1)
        return result
    
    *arg2 = 3

sub_142a5f860(rax_1)
sub_142a5f860(rsi_1)
return &data_1436515a0
