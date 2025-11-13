// 函数: sub_141023fa0
// 地址: 0x141023fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)
uint32_t r9_1 = (arg2 u>> 4).d
void* arg_8 = arg2
int32_t r8_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
int32_t rdx_2 = neg.d(r8_1 + r9_1) ^ r8_1 u>> 0xd
int32_t r9_4 = (r9_1 - r8_1 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r8_4 = (r8_1 - r9_4 - rdx_2) ^ r9_4 << 0x10
int32_t rdx_5 = (rdx_2 - r8_4 - r9_4) ^ r8_4 u>> 5
int32_t r9_7 = (r9_4 - r8_4 - rdx_5) ^ rdx_5 u>> 3
int32_t r8_7 = (r8_4 - r9_7 - rdx_5) ^ r9_7 << 0xa
void* result = sub_141001720(rcx + 0xc8, (rdx_5 - r8_7 - r9_7) ^ r8_7 u>> 0xf, &arg_8)
void* rdi = arg_8

if (sub_14105eaa0(result) == 0)
    sub_141064100(result, zx.d(*(rdi + 0xc2)))

return result
