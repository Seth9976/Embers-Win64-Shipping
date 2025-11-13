// 函数: sub_1417f1300
// 地址: 0x1417f1300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 4)
int32_t r8 = (rbx u>> 0x20).d + sub_140b5ead0(rbx.d)
int32_t rdx_2 = (*arg1 - r8) ^ r8 u>> 0xd
int32_t rcx_5 = (0x9e3779b9 - rdx_2 - r8) ^ rdx_2 << 8
int32_t r8_3 = (r8 - rcx_5 - rdx_2) ^ rcx_5 u>> 0xd
int32_t rdx_5 = (rdx_2 - rcx_5 - r8_3) ^ r8_3 u>> 0xc
int32_t rcx_8 = (rcx_5 - rdx_5 - r8_3) ^ rdx_5 << 0x10
int32_t r8_6 = (r8_3 - rcx_8 - rdx_5) ^ rcx_8 u>> 5
int32_t rdx_8 = (rdx_5 - rcx_8 - r8_6) ^ r8_6 u>> 3
int32_t rcx_11 = (rcx_8 - rdx_8 - r8_6) ^ rdx_8 << 0xa
return zx.q(r8_6 - rcx_11 - rdx_8) ^ zx.q(rcx_11 u>> 0xf)
