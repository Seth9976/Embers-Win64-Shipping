// 函数: sub_14087c0f0
// 地址: 0x14087c0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x110))()
int64_t rbx = *arg2
int32_t rax_1 = sub_140b5ead0(rbx.d)
int16_t r8 = arg2[2].w
int32_t rsi = (rbx u>> 0x20).d + rax_1
int64_t rdx

if (r8 != 3)
    rdx = 0
else
    rdx = arg2[1]

uint32_t rdx_1 = (rdx u>> 4).d
int32_t rcx_2 = (0x9e3779b9 - rdx_1) ^ rdx_1 << 8
int32_t rbx_4 = neg.d(rcx_2 + rdx_1) ^ rcx_2 u>> 0xd
int32_t rdx_4 = (rdx_1 - rcx_2 - rbx_4) ^ rbx_4 u>> 0xc
int32_t rcx_5 = (rcx_2 - rdx_4 - rbx_4) ^ rdx_4 << 0x10
int32_t rbx_7 = (rbx_4 - rcx_5 - rdx_4) ^ rcx_5 u>> 5
int32_t rdx_7 = (rdx_4 - rcx_5 - rbx_7) ^ rbx_7 u>> 3
int32_t rcx_8 = (rcx_5 - rdx_7 - rbx_7) ^ rdx_7 << 0xa
int32_t rbx_10 = (rbx_7 - rcx_8 - rdx_7) ^ rcx_8 u>> 0xf
void* const rdi_1

if (r8 != 3)
    rdi_1 = arg2[1]
    void* rax_16
    int64_t rax_17
    void* rdx_8
    
    if (rdi_1 != 0)
        rax_16 = sub_140be01c0()
        rdx_8 = *(rdi_1 + 0x10)
        rax_17 = sx.q(*(rax_16 + 0x38))
    
    if (rdi_1 == 0 || rax_17.d s> *(rdx_8 + 0x38)
            || *(*(rdx_8 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
        rdi_1 = nullptr
else
    rdi_1 = data_143ce3880

uint32_t rdi_2 = (rdi_1 u>> 4).d
int32_t rcx_12 = (0x9e3779b9 - rdi_2) ^ rdi_2 << 8
int32_t rdx_11 = neg.d(rcx_12 + rdi_2) ^ rcx_12 u>> 0xd
int32_t rdi_5 = (rdi_2 - rcx_12 - rdx_11) ^ rdx_11 u>> 0xc
int32_t rcx_15 = (rcx_12 - rdi_5 - rdx_11) ^ rdi_5 << 0x10
int32_t rdx_14 = (rdx_11 - rcx_15 - rdi_5) ^ rcx_15 u>> 5
int32_t rdi_8 = (rdi_5 - rcx_15 - rdx_14) ^ rdx_14 u>> 3
int32_t rcx_18 = (rcx_15 - rdi_8 - rdx_14) ^ rdi_8 << 0xa
int32_t rdx_19 = (((rdx_14 - rcx_18 - rdi_8) ^ rcx_18 u>> 0xf) - rbx_10) ^ rbx_10 u>> 0xd
int32_t rcx_22 = (0x9e3779b9 - rbx_10 - rdx_19) ^ rdx_19 << 8
int32_t rbx_13 = (rbx_10 - rcx_22 - rdx_19) ^ rcx_22 u>> 0xd
int32_t rdx_22 = (rdx_19 - rcx_22 - rbx_13) ^ rbx_13 u>> 0xc
int32_t rcx_25 = (rcx_22 - rdx_22 - rbx_13) ^ rdx_22 << 0x10
int32_t rbx_16 = (rbx_13 - rcx_25 - rdx_22) ^ rcx_25 u>> 5
int32_t rdx_25 = (rdx_22 - rcx_25 - rbx_16) ^ rbx_16 u>> 3
int32_t rcx_28 = (rcx_25 - rdx_25 - rbx_16) ^ rdx_25 << 0xa
int32_t rbx_21 = (((rbx_16 - rcx_28 - rdx_25) ^ rcx_28 u>> 0xf) - rsi) ^ rsi u>> 0xd
int32_t rbp_2 = (0x9e3779b9 - rbx_21 - rsi) ^ rbx_21 << 8
int32_t rsi_3 = (rsi - rbp_2 - rbx_21) ^ rbp_2 u>> 0xd
int32_t rbx_24 = (rbx_21 - rbp_2 - rsi_3) ^ rsi_3 u>> 0xc
int32_t rbp_5 = (rbp_2 - rbx_24 - rsi_3) ^ rbx_24 << 0x10
int32_t rsi_6 = (rsi_3 - rbp_5 - rbx_24) ^ rbp_5 u>> 5
int32_t rbx_27 = (rbx_24 - rbp_5 - rsi_6) ^ rsi_6 u>> 3
int32_t rbp_8 = (rbp_5 - rbx_27 - rsi_6) ^ rbx_27 << 0xa
return zx.q(rsi_6 - rbp_8 - rbx_27) ^ zx.q(rbp_8 u>> 0xf)
