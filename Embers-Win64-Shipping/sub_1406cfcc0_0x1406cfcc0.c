// 函数: sub_1406cfcc0
// 地址: 0x1406cfcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* var_a0 = arg1
int32_t var_b8 = 0
void var_98
sub_140b2edf0(&var_98)
sub_140b4aca0(&var_98, arg2, arg3)
char var_38[0x10]
sub_140b38ef0(&var_98, &var_38)
*arg1 = 0
arg1[1] = 0
int32_t rdi_1 = 1
int32_t var_b8_1 = 1

for (int64_t i = 0; i s< 0x10; i += 1)
    int64_t var_b0
    sub_140a2e390(&var_b0, u"%02x", zx.q(var_38[i]))
    rdi_1 |= 2
    int32_t var_b8_2 = rdi_1
    int32_t var_a8
    int32_t r8_3
    
    if (var_a8 == 0)
        r8_3 = 0
    else
        r8_3 = var_a8 - 1
    
    sub_140a20ba0(arg1, var_b0, r8_3)
    int64_t rcx_5 = var_b0
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

__security_check_cookie(rax_1 ^ &var_d8)
return arg1
