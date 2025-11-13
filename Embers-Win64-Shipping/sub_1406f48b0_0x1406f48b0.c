// 函数: sub_1406f48b0
// 地址: 0x1406f48b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
sub_140749df0(arg1, &var_38)
int64_t* var_30
int64_t* rdi = var_30
int64_t* rsi = arg3[1]
sub_140745220(rdi, *arg3)
int64_t* r8 = &rdi[5]
*r8 = *rsi
void* rax_1 = rsi[1]
r8[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1
    rdi = var_30

r8[2].d = rsi[2].d
rdi[8].d = 0xffffffff
int64_t rbx_1 = *rdi
int32_t rax_3 = sub_140b5ead0(rbx_1.d)
int16_t r8_1 = rdi[2].w
int32_t rbp = (rbx_1 u>> 0x20).d + rax_3
int64_t rdx_2

if (r8_1 != 3)
    rdx_2 = 0
else
    rdx_2 = rdi[1]

uint32_t rdx_3 = (rdx_2 u>> 4).d
int32_t rcx_3 = (0x9e3779b9 - rdx_3) ^ rdx_3 << 8
int32_t rbx_5 = neg.d(rcx_3 + rdx_3) ^ rcx_3 u>> 0xd
int32_t rdx_6 = (rdx_3 - rcx_3 - rbx_5) ^ rbx_5 u>> 0xc
int32_t rcx_6 = (rcx_3 - rdx_6 - rbx_5) ^ rdx_6 << 0x10
int32_t rbx_8 = (rbx_5 - rcx_6 - rdx_6) ^ rcx_6 u>> 5
int32_t rdx_9 = (rdx_6 - rcx_6 - rbx_8) ^ rbx_8 u>> 3
int32_t rcx_9 = (rcx_6 - rdx_9 - rbx_8) ^ rdx_9 << 0xa
int32_t rbx_11 = (rbx_8 - rcx_9 - rdx_9) ^ rcx_9 u>> 0xf
void* const rsi_1

if (r8_1 != 3)
    rsi_1 = rdi[1]
    void* rax_18
    int64_t rax_19
    void* rdx_10
    
    if (rsi_1 != 0)
        rax_18 = sub_140be01c0()
        rdx_10 = *(rsi_1 + 0x10)
        rax_19 = sx.q(*(rax_18 + 0x38))
    
    if (rsi_1 == 0 || rax_19.d s> *(rdx_10 + 0x38)
            || *(*(rdx_10 + 0x30) + (rax_19 << 3)) != rax_18 + 0x30)
        rsi_1 = nullptr
else
    rsi_1 = data_143ce3880

uint32_t rsi_2 = (rsi_1 u>> 4).d
int32_t rcx_13 = (0x9e3779b9 - rsi_2) ^ rsi_2 << 8
int32_t rdx_13 = neg.d(rcx_13 + rsi_2) ^ rcx_13 u>> 0xd
int32_t rsi_5 = (rsi_2 - rcx_13 - rdx_13) ^ rdx_13 u>> 0xc
int32_t rcx_16 = (rcx_13 - rsi_5 - rdx_13) ^ rsi_5 << 0x10
int32_t rdx_16 = (rdx_13 - rcx_16 - rsi_5) ^ rcx_16 u>> 5
int32_t rsi_8 = (rsi_5 - rcx_16 - rdx_16) ^ rdx_16 u>> 3
int32_t rcx_19 = (rcx_16 - rsi_8 - rdx_16) ^ rsi_8 << 0xa
int32_t rdx_21 = (((rdx_16 - rcx_19 - rsi_8) ^ rcx_19 u>> 0xf) - rbx_11) ^ rbx_11 u>> 0xd
int32_t rcx_23 = (0x9e3779b9 - rbx_11 - rdx_21) ^ rdx_21 << 8
int32_t rbx_14 = (rbx_11 - rcx_23 - rdx_21) ^ rcx_23 u>> 0xd
int32_t rdx_24 = (rdx_21 - rcx_23 - rbx_14) ^ rbx_14 u>> 0xc
int32_t rcx_26 = (rcx_23 - rdx_24 - rbx_14) ^ rdx_24 << 0x10
int32_t rbx_17 = (rbx_14 - rcx_26 - rdx_24) ^ rcx_26 u>> 5
int32_t rdx_27 = (rdx_24 - rcx_26 - rbx_17) ^ rbx_17 u>> 3
int32_t rcx_29 = (rcx_26 - rdx_27 - rbx_17) ^ rdx_27 << 0xa
int32_t rbx_22 = (((rbx_17 - rcx_29 - rdx_27) ^ rcx_29 u>> 0xf) - rbp) ^ rbp u>> 0xd
int32_t r14_2 = (0x9e3779b9 - rbx_22 - rbp) ^ rbx_22 << 8
int32_t rbp_3 = (rbp - r14_2 - rbx_22) ^ r14_2 u>> 0xd
int32_t rbx_25 = (rbx_22 - r14_2 - rbp_3) ^ rbp_3 u>> 0xc
int32_t r14_5 = (r14_2 - rbx_25 - rbp_3) ^ rbx_25 << 0x10
int32_t rbp_6 = (rbp_3 - r14_5 - rbx_25) ^ r14_5 u>> 5
int32_t rbx_28 = (rbx_25 - r14_5 - rbp_6) ^ rbp_6 u>> 3
int32_t r14_8 = (r14_5 - rbx_28 - rbp_6) ^ rbx_28 << 0xa
sub_140753e80(arg1, arg2, (rbp_6 - r14_8 - rbx_28) ^ r14_8 u>> 0xf, rdi, var_38, arg4)
return arg2
