// 函数: sub_140daab20
// 地址: 0x140daab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg1
int32_t rax = sub_140b5ead0(rbx.d)
uint32_t r9 = zx.d(arg1[1].b)
int32_t r10 = (rbx u>> 0x20).d + rax
int32_t r8_2 = r10 u>> 0xd ^ neg.d(r10)
int32_t rcx_3 = (0x9e3779b9 - r8_2 - r10) ^ r8_2 << 8
int32_t r10_3 = (r10 - rcx_3 - r8_2) ^ rcx_3 u>> 0xd
int32_t r8_5 = (r8_2 - rcx_3 - r10_3) ^ r10_3 u>> 0xc
int32_t rcx_6 = (rcx_3 - r8_5 - r10_3) ^ r8_5 << 0x10
int32_t r10_6 = (r10_3 - rcx_6 - r8_5) ^ rcx_6 u>> 5
int32_t r8_8 = (r8_5 - rcx_6 - r10_6) ^ r10_6 u>> 3
int32_t rcx_9 = (rcx_6 - r8_8 - r10_6) ^ r8_8 << 0xa
int32_t r10_9 = (r10_6 - rcx_9 - r8_8) ^ rcx_9 u>> 0xf
int32_t rdx_3 = r10_9 - r9
int32_t r8_13 = (0 - r10_9 - 0x61c88647) ^ rdx_3 << 8
int32_t r9_3 = (r9 - r8_13 - rdx_3) ^ r8_13 u>> 0xd
int32_t rdx_6 = (rdx_3 - r8_13 - r9_3) ^ r9_3 u>> 0xc
int32_t r8_16 = (r8_13 - rdx_6 - r9_3) ^ rdx_6 << 0x10
int32_t r9_6 = (r9_3 - r8_16 - rdx_6) ^ r8_16 u>> 5
int32_t rdx_9 = (rdx_6 - r8_16 - r9_6) ^ r9_6 u>> 3
int32_t r8_19 = (r8_16 - rdx_9 - r9_6) ^ rdx_9 << 0xa
return zx.q(r9_6 - r8_19 - rdx_9) ^ zx.q(r8_19 u>> 0xf)
