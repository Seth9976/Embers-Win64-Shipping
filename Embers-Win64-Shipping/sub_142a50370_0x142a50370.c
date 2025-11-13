// 函数: sub_142a50370
// 地址: 0x142a50370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
int32_t var_28 = 0
int32_t* rdi

if (arg5 == 0)
    rdi = arg9
    char** rax = sub_142a641c0(arg1, arg2, rdi)
    
    if (*rdi s<= 0)
        rsi = sub_142a63dd0(rax, arg3, &var_28, rdi)
    
    if (rax != 0)
        sub_142a5f860(rax)
    
    goto label_142a504dc

int32_t rax_2 = strncmp(arg3, "Languages", 9)
int32_t rax_3

if (rax_2 == 0)
    rax_3 = strtol(arg5, nullptr, rax_2 + 0xa)

int32_t rbp_1

if (rax_2 != 0 || rax_3 == 0)
    rdi = arg9
    rsi = sub_142a951b0(arg1, arg2, arg3, arg4, arg5, &var_28, rdi)
label_142a504dc:
    
    if (*rdi s> 0)
        goto label_142a5043b
    
    rbp_1 = arg8
    int32_t rax_8 = sub_142a92b70(var_28, rbp_1)
    
    if (rax_8 s> 0 && rsi != 0)
        sub_142a8bca0(arg7, rsi, rax_8)
else
    rdi = arg9
    *rdi = 2
label_142a5043b:
    int64_t rax_4 = -1
    
    do
        rax_4 += 1
    while (arg6[rax_4] != 0)
    
    rbp_1 = arg8
    var_28 = rax_4.d
    sub_142a8d750(arg6, arg7, sub_142a92b70(rax_4.d, rbp_1))
    *rdi = 0xffffff81

return sub_142a8c440(arg7, rbp_1, var_28, rdi)
