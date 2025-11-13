// 函数: sub_142a7e2c0
// 地址: 0x142a7e2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void var_148
sub_142a7ded0(&var_148, arg2, arg1, arg4, arg3, 0, arg10)
void* const result

while (true)
    int64_t rax_2 = sub_142a7ee10(&var_148, arg10)
    void var_180
    
    if (rax_2 != 0)
        if (sub_142a7de20(&var_180, rax_2, arg10) == 0)
            continue
        else
            void* var_178
            
            if (*arg10 s<= 0)
                if (*(var_178 + 2) != 0xda || *(var_178 + 3) != 0x27)
                    *arg9 = 3
                else if (arg7 == 0)
                label_142a7e3a4:
                    void* result_1 = sub_142a95dc0(arg10)
                    result = result_1
                    
                    if (*arg10 s<= 0)
                        *(result_1 + 8) = var_178
                        int64_t var_160
                        *(result + 0x20) = var_160
                        int64_t var_158
                        *(result + 0x28) = var_158
                        break
                else
                    if (arg7(arg8, arg5, arg6, var_178 + 4) != 0)
                        goto label_142a7e3a4
                    
                    *arg9 = 3
            sub_142a95ec0(&var_180)
            
            if (*arg10 s<= 0)
                *arg9 = 3
                continue
    result = nullptr
    break

char var_8c
int64_t var_98

if (var_8c != 0)
    sub_142a7dcd0(var_98)
char var_cc
int64_t var_d8

if (var_cc != 0)
    sub_142a7dcd0(var_d8)
char var_10c
int64_t var_118

if (var_10c != 0)
    sub_142a7dcd0(var_118)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
