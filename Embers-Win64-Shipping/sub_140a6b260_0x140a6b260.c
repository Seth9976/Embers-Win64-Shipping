// 函数: sub_140a6b260
// 地址: 0x140a6b260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r11 = zx.q(arg2)
int64_t arg_20

if (arg2 u<= 0x20)
    if (r11.d u> 0x10)
        arg_20 = arg1[1]
        int64_t rdx_3 = *arg1 * -0x4b6d499041670d8d
        int64_t rcx_2 = *(r11 + arg1 - 8) * (zx.q((r11 * 2).d) + -0x651e95c4d06fbfb1)
        int64_t r8_4 = ror.q(arg_20 + -0x651e95c4d06fbfb1, 0x12) + rcx_2 + rdx_3
        int64_t rdx_9 = ((rol.q(rdx_3 + arg_20, 0x15) + ror.q(rcx_2, 0x1e)
            - *(r11 + arg1 - 0x10) * 0x651e95c4d06fbfb1) ^ r8_4)
            * (zx.q((r11 * 2).d) + -0x651e95c4d06fbfb1)
        int64_t rcx_8 = (rdx_9 u>> 0x2f ^ rdx_9 ^ r8_4) * (zx.q((r11 * 2).d) + -0x651e95c4d06fbfb1)
        return (rcx_8 u>> 0x2f ^ rcx_8) * (zx.q((r11 * 2).d) + -0x651e95c4d06fbfb1)
    
    return sub_140a7db30(arg1, r11.d) __tailcall

if (r11.d u<= 0x40)
    return sub_140a7dc70(arg1, r11.d) __tailcall

void* r10_1 = r11 + arg1
int64_t var_48 = *(r11 + arg1 - 0x28)
int64_t zmm1 = *(r10_1 - 0x30)
int64_t r12_1 = *(r10_1 - 0x38) + *(r10_1 - 0x10)
arg_20 = *(r10_1 - 0x18)
int64_t rcx_13 = ((zmm1 + r11) ^ arg_20) * -0x622015f714c7d297
int64_t rbx_1 = *(r10_1 - 0x40) + r11
int64_t rdx_16 = (rcx_13 u>> 0x2f ^ rcx_13 ^ arg_20) * -0x622015f714c7d297
int64_t rdx_17 = *(r10_1 - 0x28)
int64_t rcx_17 = (rdx_16 u>> 0x2f ^ rdx_16) * -0x622015f714c7d297
arg_20 = *(r10_1 - 8)
int64_t rbx_2 = rbx_1 + zmm1 + *(r10_1 - 0x38)
int64_t r14 = rdx_17 + rbx_2
int64_t rbx_4 = rol.q(rbx_2, 0x14) + rbx_1 + ror.q(rdx_17 + rbx_1 + rcx_17, 0x15)
int64_t rsi_2 = *(r10_1 - 0x20) - 0x4b6d499041670d8d + r12_1
int64_t rsi_3 = rsi_2 + *(r10_1 - 0x10) + *(r10_1 - 0x18)
int64_t rsi_5 = rol.q(rsi_3, 0x14) + rsi_2 + ror.q(arg_20 + rsi_2 + var_48, 0x15)
int64_t r9_10 = rcx_17
int64_t r13_2 = *arg1 - var_48 * 0x4b6d499041670d8d
int32_t i_1 = (r11.d - 1) & 0xffffffc0
void* rdi_1 = &arg1[6]
int64_t r11_5 = arg_20 + rsi_3
int32_t i

do
    int64_t zmm0 = *(rdi_1 - 0x28)
    zmm1 = *rdi_1
    rdi_1 += 0x40
    int64_t r8_7 = *(rdi_1 - 0x58)
    arg_20 = *(rdi_1 - 0x38)
    int64_t r10_6 = rol.q(zmm0 + r14 + r12_1 + r13_2, 0x1b)
    r12_1 = *(rdi_1 - 0x48) - rol.q(r12_1 + zmm1 + rbx_4, 0x16) * 0x4b6d499041670d8d + r14
    int64_t rbx_6 = *(rdi_1 - 0x70) - rbx_4 * 0x4b6d499041670d8d
    int64_t rbx_7 = rbx_6 + *(rdi_1 - 0x60) + *(rdi_1 - 0x68)
    r13_2 = rol.q(r11_5 + r9_10, 0x1f) * -0x4b6d499041670d8d
    int64_t r10_8 = (r10_6 * -0x4b6d499041670d8d) ^ rsi_5
    r14 = r8_7 + rbx_7
    int64_t rsi_7 = rsi_5 + *(rdi_1 - 0x50) + r13_2
    rbx_4 = rol.q(rbx_7, 0x14) + rbx_6 + ror.q(r8_7 + rbx_6 + r11_5 + r10_8, 0x15)
    int64_t rsi_8 = rsi_7 + *(rdi_1 - 0x40) + *(rdi_1 - 0x48)
    r11_5 = arg_20 + rsi_8
    r9_10 = r10_8
    rsi_5 = rol.q(rsi_8, 0x14) + rsi_7 + ror.q(arg_20 + rsi_7 + *(rdi_1 - 0x60) + r12_1, 0x15)
    i = i_1
    i_1 -= 0x40
while (i != 0x40)
int64_t rbx_10 = (rbx_4 ^ rsi_5) * -0x622015f714c7d297
int64_t rdx_23 = (rbx_10 u>> 0x2f ^ rbx_10 ^ rsi_5) * -0x622015f714c7d297
int64_t r14_2 = (r14 ^ r11_5) * -0x622015f714c7d297
int64_t rcx_32 = (r14_2 u>> 0x2f ^ r14_2 ^ r11_5) * -0x622015f714c7d297
int64_t r8_13 = r13_2 - (rdx_23 u>> 0x2f ^ rdx_23) * 0x622015f714c7d297
int64_t rdx_30 = ((r9_10 - (r12_1 u>> 0x2f ^ r12_1) * 0x4b6d499041670d8d
    - (rcx_32 u>> 0x2f ^ rcx_32) * 0x622015f714c7d297) ^ r8_13) * -0x622015f714c7d297
int64_t rcx_37 = (rdx_30 u>> 0x2f ^ rdx_30 ^ r8_13) * -0x622015f714c7d297
return (rcx_37 u>> 0x2f ^ rcx_37) * -0x622015f714c7d297
