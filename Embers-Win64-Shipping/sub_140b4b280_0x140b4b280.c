// 函数: sub_140b4b280
// 地址: 0x140b4b280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void var_b8
sub_1408f2b40(&var_b8, rdx)
int64_t var_30
int32_t var_28
int64_t result = sub_140b45b50(arg1, var_30, zx.q(var_28))
int64_t var_38

if (var_38 != 0)
    result = sub_140a74f90(var_38)

__security_check_cookie(rax_1 ^ &var_d8)
return result
