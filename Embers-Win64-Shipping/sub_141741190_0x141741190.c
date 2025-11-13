// 函数: sub_141741190
// 地址: 0x141741190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int32_t rax = sub_141741950(arg1 + 0x20)
int64_t rdx = *rbx
int32_t r8_2 = ((*(rdx + 0x98))(rbx, rdx) - rax) ^ rax u>> 0xd
int32_t rdx_3 = (0x9e3779b9 - r8_2 - rax) ^ r8_2 << 8
int32_t rdi_3 = (rax - rdx_3 - r8_2) ^ rdx_3 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_3 - rdi_3) ^ rdi_3 u>> 0xc
int32_t rdx_6 = (rdx_3 - r8_5 - rdi_3) ^ r8_5 << 0x10
int32_t rdi_6 = (rdi_3 - rdx_6 - r8_5) ^ rdx_6 u>> 5
int32_t r8_8 = (r8_5 - rdx_6 - rdi_6) ^ rdi_6 u>> 3
int32_t rdx_9 = (rdx_6 - r8_8 - rdi_6) ^ r8_8 << 0xa
return zx.q(rdi_6 - rdx_9 - r8_8) ^ zx.q(rdx_9 u>> 0xf)
