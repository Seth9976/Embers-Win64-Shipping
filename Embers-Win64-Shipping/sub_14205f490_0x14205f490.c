// 函数: sub_14205f490
// 地址: 0x14205f490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_38 = 0
int32_t var_34 = 0x10
int64_t var_b8[0xb]
sub_14204cc10(arg1, arg1 + 0x2c0, &var_b8)

if (*(arg1 + 0x3f0) != 0)
    char var_c8[0x10]
    char* rax_2 = sub_1419c5110(arg1, &var_c8, arg1 + 0x3e0, 9)
    int64_t rsi_1 = sx.q(var_38)
    int32_t rcx_1 = (rsi_1 + 1).d
    
    if (rcx_1 s> var_34)
        sub_14088f7f0(&var_b8)
    
    var_b8[rsi_1] = *rax_2
    char* rax_4 = sub_1419c5110(arg1, &var_c8, arg1 + 0x3f0, 0xa)
    int64_t rsi_2 = sx.q(rcx_1)
    int32_t rcx_4 = (rsi_2 + 1).d
    
    if (rcx_4 s> var_34)
        sub_14088f7f0(&var_b8)
    
    var_b8[rsi_2] = *rax_4
    char* rax_6 = sub_1419c5110(arg1, &var_c8, arg1 + 0x400, 0xb)
    int64_t rsi_3 = sx.q(rcx_4)
    int32_t rcx_7 = (rsi_3 + 1).d
    
    if (rcx_7 s> var_34)
        sub_14088f7f0(&var_b8)
    
    var_b8[rsi_3] = *rax_6
    char* rax_8 = sub_1419c5110(arg1, &var_c8, arg1 + 0x410, 0xc)
    int64_t rdi_1 = sx.q(rcx_7)
    int32_t rcx_10 = (rdi_1 + 1).d
    int32_t var_38_4 = rcx_10
    
    if (rcx_10 s> var_34)
        sub_14088f7f0(&var_b8)
    
    var_b8[rdi_1] = *rax_8

int64_t result = sub_1419d0260(arg1, &var_b8, 0)
__security_check_cookie(rax_1 ^ &var_e8)
return result
