// 函数: sub_1406f42a0
// 地址: 0x1406f42a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
sub_140749f10(arg1, &var_38)
int64_t* rbx = arg3[1]
int64_t* var_30
sub_140745220(var_30, *arg3)
sub_140745220(&var_30[5], rbx)
var_30[0xa].d = 0xffffffff
int64_t rbx_1 = *var_30
int32_t rax = sub_140b5ead0(rbx_1.d)
int16_t r8 = var_30[2].w
int32_t rbp = (rbx_1 u>> 0x20).d + rax
int64_t rdx_3

if (r8 != 3)
    rdx_3 = 0
else
    rdx_3 = var_30[1]

uint32_t rdx_4 = (rdx_3 u>> 4).d
int32_t rcx_4 = (0x9e3779b9 - rdx_4) ^ rdx_4 << 8
int32_t rbx_5 = neg.d(rcx_4 + rdx_4) ^ rcx_4 u>> 0xd
int32_t rdx_7 = (rdx_4 - rcx_4 - rbx_5) ^ rbx_5 u>> 0xc
int32_t rcx_7 = (rcx_4 - rdx_7 - rbx_5) ^ rdx_7 << 0x10
int32_t rbx_8 = (rbx_5 - rcx_7 - rdx_7) ^ rcx_7 u>> 5
int32_t rdx_10 = (rdx_7 - rcx_7 - rbx_8) ^ rbx_8 u>> 3
int32_t rcx_10 = (rcx_7 - rdx_10 - rbx_8) ^ rdx_10 << 0xa
int32_t rbx_11 = (rbx_8 - rcx_10 - rdx_10) ^ rcx_10 u>> 0xf
void* const rsi

if (r8 != 3)
    rsi = var_30[1]
    void* rax_15
    int64_t rax_16
    void* rdx_11
    
    if (rsi != 0)
        rax_15 = sub_140be01c0()
        rdx_11 = *(rsi + 0x10)
        rax_16 = sx.q(*(rax_15 + 0x38))
    
    if (rsi == 0 || rax_16.d s> *(rdx_11 + 0x38)
            || *(*(rdx_11 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
        rsi = nullptr
else
    rsi = data_143ce3880

uint32_t rsi_1 = (rsi u>> 4).d
int32_t rcx_14 = (0x9e3779b9 - rsi_1) ^ rsi_1 << 8
int32_t rdx_14 = neg.d(rcx_14 + rsi_1) ^ rcx_14 u>> 0xd
int32_t rsi_4 = (rsi_1 - rcx_14 - rdx_14) ^ rdx_14 u>> 0xc
int32_t rcx_17 = (rcx_14 - rsi_4 - rdx_14) ^ rsi_4 << 0x10
int32_t rdx_17 = (rdx_14 - rcx_17 - rsi_4) ^ rcx_17 u>> 5
int32_t rsi_7 = (rsi_4 - rcx_17 - rdx_17) ^ rdx_17 u>> 3
int32_t rcx_20 = (rcx_17 - rsi_7 - rdx_17) ^ rsi_7 << 0xa
int32_t rdx_22 = (((rdx_17 - rcx_20 - rsi_7) ^ rcx_20 u>> 0xf) - rbx_11) ^ rbx_11 u>> 0xd
int32_t rcx_24 = (0x9e3779b9 - rbx_11 - rdx_22) ^ rdx_22 << 8
int32_t rbx_14 = (rbx_11 - rcx_24 - rdx_22) ^ rcx_24 u>> 0xd
int32_t rdx_25 = (rdx_22 - rcx_24 - rbx_14) ^ rbx_14 u>> 0xc
int32_t rcx_27 = (rcx_24 - rdx_25 - rbx_14) ^ rdx_25 << 0x10
int32_t rbx_17 = (rbx_14 - rcx_27 - rdx_25) ^ rcx_27 u>> 5
int32_t rdx_28 = (rdx_25 - rcx_27 - rbx_17) ^ rbx_17 u>> 3
int32_t rcx_30 = (rcx_27 - rdx_28 - rbx_17) ^ rdx_28 << 0xa
int32_t rbx_22 = (((rbx_17 - rcx_30 - rdx_28) ^ rcx_30 u>> 0xf) - rbp) ^ rbp u>> 0xd
int32_t r14_2 = (0x9e3779b9 - rbx_22 - rbp) ^ rbx_22 << 8
int32_t rbp_3 = (rbp - r14_2 - rbx_22) ^ r14_2 u>> 0xd
int32_t rbx_25 = (rbx_22 - r14_2 - rbp_3) ^ rbp_3 u>> 0xc
int32_t r14_5 = (r14_2 - rbx_25 - rbp_3) ^ rbx_25 << 0x10
int32_t rbp_6 = (rbp_3 - r14_5 - rbx_25) ^ r14_5 u>> 5
int32_t rbx_28 = (rbx_25 - r14_5 - rbp_6) ^ rbp_6 u>> 3
int32_t r14_8 = (r14_5 - rbx_28 - rbp_6) ^ rbx_28 << 0xa
sub_140753750(arg1, arg2, (rbp_6 - r14_8 - rbx_28) ^ r14_8 u>> 0xf, var_30, var_38, arg4)
return arg2
