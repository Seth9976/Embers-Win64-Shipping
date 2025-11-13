// 函数: sub_14087fc00
// 地址: 0x14087fc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x110))()
int16_t rdx = arg2[1].w
int64_t r8

if (rdx != 3)
    r8 = 0
else
    r8 = *arg2

uint32_t r8_1 = (r8 u>> 4).d
int32_t rcx_1 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
int32_t rbx_2 = neg.d(rcx_1 + r8_1) ^ rcx_1 u>> 0xd
int32_t r8_4 = (r8_1 - rcx_1 - rbx_2) ^ rbx_2 u>> 0xc
int32_t rcx_4 = (rcx_1 - r8_4 - rbx_2) ^ r8_4 << 0x10
int32_t rbx_5 = (rbx_2 - rcx_4 - r8_4) ^ rcx_4 u>> 5
int32_t r8_7 = (r8_4 - rcx_4 - rbx_5) ^ rbx_5 u>> 3
int32_t rcx_7 = (rcx_4 - r8_7 - rbx_5) ^ r8_7 << 0xa
int32_t rbx_8 = (rbx_5 - rcx_7 - r8_7) ^ rcx_7 u>> 0xf
void* const rdi_1

if (rdx != 3)
    rdi_1 = *arg2
    void* rax_15
    int64_t rax_16
    void* rdx_1
    
    if (rdi_1 != 0)
        rax_15 = sub_140be01c0()
        rdx_1 = *(rdi_1 + 0x10)
        rax_16 = sx.q(*(rax_15 + 0x38))
    
    if (rdi_1 == 0 || rax_16.d s> *(rdx_1 + 0x38)
            || *(*(rdx_1 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
        rdi_1 = nullptr
else
    rdi_1 = data_143ce3880

uint32_t rdi_2 = (rdi_1 u>> 4).d
int32_t rcx_11 = (0x9e3779b9 - rdi_2) ^ rdi_2 << 8
int32_t rdx_4 = neg.d(rcx_11 + rdi_2) ^ rcx_11 u>> 0xd
int32_t rdi_5 = (rdi_2 - rcx_11 - rdx_4) ^ rdx_4 u>> 0xc
int32_t rcx_14 = (rcx_11 - rdi_5 - rdx_4) ^ rdi_5 << 0x10
int32_t rdx_7 = (rdx_4 - rcx_14 - rdi_5) ^ rcx_14 u>> 5
int32_t rdi_8 = (rdi_5 - rcx_14 - rdx_7) ^ rdx_7 u>> 3
int32_t rcx_17 = (rcx_14 - rdi_8 - rdx_7) ^ rdi_8 << 0xa
int32_t rdx_12 = (((rdx_7 - rcx_17 - rdi_8) ^ rcx_17 u>> 0xf) - rbx_8) ^ rbx_8 u>> 0xd
int32_t rsi_2 = (0x9e3779b9 - rbx_8 - rdx_12) ^ rdx_12 << 8
int32_t rbx_11 = (rbx_8 - rsi_2 - rdx_12) ^ rsi_2 u>> 0xd
int32_t rdx_15 = (rdx_12 - rsi_2 - rbx_11) ^ rbx_11 u>> 0xc
int32_t rsi_5 = (rsi_2 - rdx_15 - rbx_11) ^ rdx_15 << 0x10
int32_t rbx_14 = (rbx_11 - rsi_5 - rdx_15) ^ rsi_5 u>> 5
int32_t rdx_18 = (rdx_15 - rsi_5 - rbx_14) ^ rbx_14 u>> 3
int32_t rsi_8 = (rsi_5 - rdx_18 - rbx_14) ^ rdx_18 << 0xa
return zx.q(rbx_14 - rsi_8 - rdx_18) ^ zx.q(rsi_8 u>> 0xf)
