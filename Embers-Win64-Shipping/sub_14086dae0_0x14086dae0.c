// 函数: sub_14086dae0
// 地址: 0x14086dae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x110))()
int64_t rbx = *arg2
int32_t rax_1 = sub_140b5ead0(rbx.d)
uint32_t r9 = zx.d(arg2[1].b)
int32_t rcx_1 = rax_1 + (rbx u>> 0x20).d
int32_t rdx_1 = rcx_1 - r9
int32_t r8_4 = (0 - rcx_1 - 0x61c88647) ^ rdx_1 << 8
int32_t r9_3 = (r9 - r8_4 - rdx_1) ^ r8_4 u>> 0xd
int32_t rdx_4 = (rdx_1 - r8_4 - r9_3) ^ r9_3 u>> 0xc
int32_t r8_7 = (r8_4 - rdx_4 - r9_3) ^ rdx_4 << 0x10
int32_t r9_6 = (r9_3 - r8_7 - rdx_4) ^ r8_7 u>> 5
int32_t rdx_7 = (rdx_4 - r8_7 - r9_6) ^ r9_6 u>> 3
int32_t r8_10 = (r8_7 - rdx_7 - r9_6) ^ rdx_7 << 0xa
return zx.q(r9_6 - r8_10 - rdx_7) ^ zx.q(r8_10 u>> 0xf)
