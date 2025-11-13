// 函数: sub_140b5ea20
// 地址: 0x140b5ea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t rax_2 = *arg1
uint64_t rbx_1 = zx.q(rax_2 u>> 0x10)
int32_t var_38 = rbx_1.d
uint32_t var_34 = zx.d(rax_2.w)
void* r8

if (data_143e05168 == 0)
    r8 = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    r8 = &data_143e05180

int32_t r8_1 = arg1[1]
uint32_t result_1 = zx.d(*(*(r8 + (rbx_1 << 3) + 0x10) + zx.q((var_38.q u>> 0x20).d * 2))) u>> 6
uint64_t result
wchar16 var_30[0x10]

if (r8_1 != 0)
    result = zx.q(sub_140b01a80(&var_30, u"_%d", zx.q(r8_1 - 1)) + result_1)
else
    result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_58)
return result
