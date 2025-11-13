// 函数: sub_1409848f0
// 地址: 0x1409848f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_74 = 0x80
void** const var_e8 = &data_142e20cf8
void** const var_c0 = &data_142e20cf0
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x20)
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x12)
int32_t var_a4
__builtin_memset(&var_a4, 0, 0x30)
int32_t var_70 = 0xffffffff
int32_t var_6c = 0
int64_t var_60 = 0
int32_t var_58 = 0
int64_t var_50
__builtin_memset(&var_50, 0, 0x18)
int32_t var_38 = 0x270f
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_e8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

void*** rax_3 = *(arg2 + 0x38)
void** const* rcx_1 = &var_e8

if (rax_3 != 0)
    rcx_1 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_4 != 0
*(arg2 + 0x20) = rbx + rax_4
*arg3 = sub_140960cb0(rcx_1)
int64_t result = sub_14091b530(&var_e8)
__security_check_cookie(rax_1 ^ &var_108)
return result
