// 函数: sub_140dc06e0
// 地址: 0x140dc06e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rax_3 = sub_142bf6cf0(sub_1405948b0(arg1))
int32_t rax_5 = sub_142bf6d10(sub_1405948b0(arg1))
int32_t* rax_6 = sub_142bf4a70(arg1, &data_143e20d00)
int32_t rbp = 0
int64_t var_48 = 0
int64_t var_40 = 0
void var_88

if (sub_140da1470(*(rax_6 + 8), rax_3, arg3, rax_5, *rax_6, rax_6[1], &var_88) != 0)
    int32_t var_7c
    *arg4 = var_7c
    int32_t var_78
    arg4[1] = var_78
    int32_t var_84
    arg4[2] = var_84
    int32_t var_98 = 0
    int32_t var_80
    arg4[3] = neg.d(var_80)
    int32_t var_94 = 0
    sub_142bf4a50(arg1, &var_98, &var_94)
    
    if (var_98 s< 0)
        *arg4 = neg.d(*arg4)
        arg4[2] = neg.d(arg4[2])
    
    if (var_94 s< 0)
        arg4[1] = neg.d(arg4[1])
        arg4[3] = neg.d(arg4[3])
    
    rbp = 1

if (var_48 != 0)
    sub_140a74f90(var_48)

__security_check_cookie(rax_1 ^ &var_d8)
return zx.q(rbp)
