// 函数: sub_14126d030
// 地址: 0x14126d030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
uint32_t rdx_1 = (*arg1 u>> 4).d
int32_t r8_1 = (0x9e3779b9 - rdx_1) ^ rdx_1 << 8
int32_t rcx_2 = neg.d(r8_1 + rdx_1) ^ r8_1 u>> 0xd
int32_t rdx_4 = (rdx_1 - r8_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r8_4 = (r8_1 - rdx_4 - rcx_2) ^ rdx_4 << 0x10
int32_t rcx_5 = (rcx_2 - r8_4 - rdx_4) ^ r8_4 u>> 5
int32_t rdx_7 = (rdx_4 - r8_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r8_7 = (r8_4 - rdx_7 - rcx_5) ^ rdx_7 << 0xa
int32_t var_24 = arg1[6].d
int32_t var_20 = *(arg1 + 0x3c)
uint32_t rdx_9 = (arg1[0xa] u>> 4).d
int32_t r10_1 = (0x9e3779b9 - rdx_9) ^ rdx_9 << 8
int32_t var_28 = (rcx_5 - r8_7 - rdx_7) ^ r8_7 u>> 0xf
int32_t rcx_11 = neg.d(r10_1 + rdx_9) ^ r10_1 u>> 0xd
int32_t rdx_12 = (rdx_9 - r10_1 - rcx_11) ^ rcx_11 u>> 0xc
int32_t r10_4 = (r10_1 - rdx_12 - rcx_11) ^ rdx_12 << 0x10
int32_t rcx_14 = (rcx_11 - r10_4 - rdx_12) ^ r10_4 u>> 5
int32_t rdx_15 = (rdx_12 - r10_4 - rcx_14) ^ rcx_14 u>> 3
int32_t r10_7 = (r10_4 - rdx_15 - rcx_14) ^ rdx_15 << 0xa
int32_t var_1c = (rcx_14 - r10_7 - rdx_15) ^ r10_7 u>> 0xf
int64_t result = sub_140a6b260(&var_28, 0x10)
__security_check_cookie(rax_1 ^ &var_48)
return result
