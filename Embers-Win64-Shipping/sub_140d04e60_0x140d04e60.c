// 函数: sub_140d04e60
// 地址: 0x140d04e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 0x10)
int32_t rdi = (rbx u>> 0x20).d + sub_140b5ead0(rbx.d)
int32_t r8_2 = rdi u>> 0xd ^ neg.d(rdi)
int32_t rcx_3 = (0x9e3779b9 - r8_2 - rdi) ^ r8_2 << 8
int32_t rdi_3 = (rdi - rcx_3 - r8_2) ^ rcx_3 u>> 0xd
int32_t r8_5 = (r8_2 - rcx_3 - rdi_3) ^ rdi_3 u>> 0xc
int32_t rcx_6 = (rcx_3 - r8_5 - rdi_3) ^ r8_5 << 0x10
int32_t rdi_6 = (rdi_3 - rcx_6 - r8_5) ^ rcx_6 u>> 5
int32_t r8_8 = (r8_5 - rcx_6 - rdi_6) ^ rdi_6 u>> 3
int32_t rcx_9 = (rcx_6 - r8_8 - rdi_6) ^ r8_8 << 0xa
int32_t rax_17 = *(arg2 + 0x20)
int16_t* rdx

if (rax_17 == 0)
    rdx = &data_142d40450
else
    rdx = *(arg2 + 0x18)

int32_t rcx_11 = rax_17 - 1

if (rax_17 == 0)
    rcx_11 = 0

int32_t rax_18 = sub_1405969c0(rcx_11, rdx)
int32_t rdi_11 = (((rdi_6 - rcx_9 - r8_8) ^ rcx_9 u>> 0xf) - rax_18) ^ rax_18 u>> 0xd
int32_t rbx_4 = (0x9e3779b9 - rdi_11 - rax_18) ^ rdi_11 << 8
int32_t rdx_4 = (rax_18 - rbx_4 - rdi_11) ^ rbx_4 u>> 0xd
int32_t rdi_14 = (rdi_11 - rbx_4 - rdx_4) ^ rdx_4 u>> 0xc
int32_t rbx_7 = (rbx_4 - rdi_14 - rdx_4) ^ rdi_14 << 0x10
int32_t rdx_7 = (rdx_4 - rbx_7 - rdi_14) ^ rbx_7 u>> 5
int32_t rdi_17 = (rdi_14 - rbx_7 - rdx_7) ^ rdx_7 u>> 3
int32_t rbx_10 = (rbx_7 - rdi_17 - rdx_7) ^ rdi_17 << 0xa
return zx.q(rdx_7 - rbx_10 - rdi_17) ^ zx.q(rbx_10 u>> 0xf)
