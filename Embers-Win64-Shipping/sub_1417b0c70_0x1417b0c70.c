// 函数: sub_1417b0c70
// 地址: 0x1417b0c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = sub_1417b0b60(arg1 + 0x10)
int32_t rax_1 = sub_140b212b0(arg1 + 0x84, 0xc, 0)
int32_t r8_2 = (sub_140b212b0(arg1 + 0x78, 0xc, 0) - rax_1) ^ rax_1 u>> 0xd
int32_t rdx_2 = (0x9e3779b9 - r8_2 - rax_1) ^ r8_2 << 8
int32_t rdi_3 = (rax_1 - rdx_2 - r8_2) ^ rdx_2 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_2 - rdi_3) ^ rdi_3 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_5 - rdi_3) ^ r8_5 << 0x10
int32_t rdi_6 = (rdi_3 - rdx_5 - r8_5) ^ rdx_5 u>> 5
int32_t r8_8 = (r8_5 - rdx_5 - rdi_6) ^ rdi_6 u>> 3
int32_t rdx_8 = (rdx_5 - r8_8 - rdi_6) ^ r8_8 << 0xa
int32_t rdi_9 = (rdi_6 - rdx_8 - r8_8) ^ rdx_8 u>> 0xf
int32_t rcx_9 = (arg_8 - rdi_9) ^ rdi_9 u>> 0xd
int32_t r9_2 = (0x9e3779b9 - rcx_9 - rdi_9) ^ rcx_9 << 8
int32_t rdi_12 = (rdi_9 - r9_2 - rcx_9) ^ r9_2 u>> 0xd
int32_t rcx_12 = (rcx_9 - r9_2 - rdi_12) ^ rdi_12 u>> 0xc
int32_t r9_5 = (r9_2 - rcx_12 - rdi_12) ^ rcx_12 << 0x10
int32_t rdi_15 = (rdi_12 - r9_5 - rcx_12) ^ r9_5 u>> 5
int32_t rcx_15 = (rcx_12 - r9_5 - rdi_15) ^ rdi_15 u>> 3
int32_t r9_8 = (r9_5 - rcx_15 - rdi_15) ^ rcx_15 << 0xa
int32_t* arg_10 = &arg_8
int64_t* rcx_16 = &arg_10
bool cond:0 = *(arg1 + 0x70) == 0
arg_8 = (rdi_15 - r9_8 - rcx_15) ^ r9_8 u>> 0xf

if (cond:0)
    sub_141782f50(rcx_16, arg1 + 0x60)
    return zx.q(arg_8)

sub_1417877c0(rcx_16, arg1 + 0x50)
return zx.q(arg_8)
