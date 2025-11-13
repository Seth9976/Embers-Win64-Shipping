// 函数: sub_140dc0c10
// 地址: 0x140dc0c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* rax_3 = sub_142bf6cf0(sub_1405948b0(arg1))
int32_t rax_5 = sub_142bf6d10(sub_1405948b0(arg1))
int32_t* rax_6 = sub_142bf4a70(arg1, &data_143e20d00)
int32_t rbp = 0
int64_t var_58 = 0
int64_t var_50 = 0
void var_98

if (sub_140da1470(*(rax_6 + 8), rax_3, arg3, rax_5, *rax_6, rax_6[1], &var_98) != 0)
    int32_t var_8c
    int32_t var_80
    *arg4 = var_8c - var_80
    int32_t var_88
    int32_t var_7c
    *arg5 = var_88 + var_7c
    int32_t var_a8 = 0
    int32_t var_a4 = 0
    sub_142bf4a50(arg1, &var_a8, &var_a4)
    
    if (var_a8 s< 0)
        *arg4 = neg.d(*arg4)
    
    if (var_a4 s< 0)
        *arg5 = neg.d(*arg5)
    
    rbp = 1

if (var_58 != 0)
    sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rbp)
