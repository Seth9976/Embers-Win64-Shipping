// 函数: sub_140b63d10
// 地址: 0x140b63d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t rax_2 = *arg1
uint64_t rbx_1 = zx.q(rax_2 u>> 0x10)
int32_t var_38 = rbx_1.d
uint32_t var_34 = zx.d(rax_2.w)
void* r8_1

if (data_143e05168 == 0)
    r8_1 = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    r8_1 = &data_143e05180

int16_t* rcx_1 = zx.q((var_38.q u>> 0x20).d * 2) + *(r8_1 + (rbx_1 << 3) + 0x10)
uint64_t rbx_3 = zx.q(zx.d(*rcx_1) u>> 6)
sub_140b5d780(rcx_1, arg2)
int32_t r8_2 = arg1[1]
int16_t* rdi_1 = arg2 + (rbx_3 << 1)

if (r8_2 != 0)
    wchar16 var_30[0x10]
    int32_t rax_6 = sub_140b01a80(&var_30, u"_%d", zx.q(r8_2 - 1))
    rbx_3 = zx.q(rbx_3.d + rax_6)
    memcpy(rdi_1, &var_30, rax_6 * 2)
    *(arg2 + (rbx_3 << 1)) = 0
else
    *rdi_1 = 0

__security_check_cookie(rax_1 ^ &var_58)
return zx.q(rbx_3.d)
