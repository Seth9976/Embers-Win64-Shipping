// 函数: sub_141f7a100
// 地址: 0x141f7a100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
EnterCriticalSection(&data_143f3c8d0)
uint32_t r8_1 = (*arg1 u>> 4).d
int32_t r9_1 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
int32_t rdx_2 = neg.d(r9_1 + r8_1) ^ r9_1 u>> 0xd
int32_t r8_4 = (r8_1 - r9_1 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r9_4 = (r9_1 - r8_4 - rdx_2) ^ r8_4 << 0x10
int32_t rdx_5 = (rdx_2 - r9_4 - r8_4) ^ r9_4 u>> 5
int32_t r8_7 = (r8_4 - r9_4 - rdx_5) ^ rdx_5 u>> 3
int32_t r9_7 = (r9_4 - r8_7 - rdx_5) ^ r8_7 << 0xa
void* rax_14 = sub_141f789a0(&data_143a2db70, (rdx_5 - r9_7 - r8_7) ^ r9_7 u>> 0xf, arg1)
*rax_14 += 1
LeaveCriticalSection(&data_143f3c8d0)
return arg1
