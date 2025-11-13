// 函数: sub_14293f6b0
// 地址: 0x14293f6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t var_58
sub_14296dba0(&var_58, &data_14353de50, arg1)
int32_t r9_1 = not.d(arg2)
int32_t rcx_2 = r9_1 & arg1[1]
*arg1 = (r9_1 & *arg1) | (var_58 & arg2)
int32_t var_54
arg1[1] = rcx_2 | (var_54 & arg2)
int32_t var_50
arg1[2] = (r9_1 & arg1[2]) | (var_50 & arg2)
int32_t var_4c
arg1[3] = (r9_1 & arg1[3]) | (var_4c & arg2)
int32_t var_48
arg1[4] = (r9_1 & arg1[4]) | (var_48 & arg2)
int32_t var_44
arg1[5] = (r9_1 & arg1[5]) | (var_44 & arg2)
int32_t var_40
arg1[6] = (r9_1 & arg1[6]) | (var_40 & arg2)
int32_t var_3c
arg1[7] = (r9_1 & arg1[7]) | (var_3c & arg2)
int32_t var_38
arg1[8] = (r9_1 & arg1[8]) | (var_38 & arg2)
int32_t rax_23 = r9_1 & arg1[0xa]
int32_t var_34
arg1[9] = (r9_1 & arg1[9]) | (var_34 & arg2)
int32_t rax_25 = r9_1 & arg1[0xb]
int32_t var_30
arg1[0xa] = (var_30 & arg2) | rax_23
int32_t var_2c
arg1[0xb] = (var_2c & arg2) | rax_25
int32_t rax_29 = r9_1 & arg1[0xd]
int32_t var_28
arg1[0xc] = (var_28 & arg2) | (r9_1 & arg1[0xc])
int32_t rax_31 = r9_1 & arg1[0xe]
int32_t r9_2 = r9_1 & arg1[0xf]
int32_t var_24
arg1[0xd] = (var_24 & arg2) | rax_29
int32_t var_20
arg1[0xe] = (var_20 & arg2) | rax_31
int32_t var_1c
int32_t result = (var_1c & arg2) | r9_2
arg1[0xf] = result
__security_check_cookie(rax_1 ^ &var_78)
return result
