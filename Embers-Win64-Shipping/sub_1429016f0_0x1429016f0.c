// 函数: sub_1429016f0
// 地址: 0x1429016f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t result = sub_142901a10(arg1, arg2, arg3)

if (result != 0)
    return result

int32_t rcx = *arg3
int32_t rdx = arg3[1]
int32_t r8 = arg3[2]
int32_t r9_1 = arg3[3]
int32_t* rax_2 = &arg3[zx.q(arg3[0x44]) * 4]
void* r15_1 = &arg3[4]
*arg3 = *rax_2
*rax_2 = rcx
rax_2[1] = rdx
rax_2[2] = r8
rax_2[3] = r9_1
void* i

for (i = rax_2 - 0x10; r15_1 u< i; i -= 0x10)
    int32_t rdx_2 = ror.d(*r15_1, 8)
    int32_t rdx_4 = ror.d(*(r15_1 + 4), 8)
    int32_t rdx_6 = ror.d(*(r15_1 + 8), 8)
    int32_t r9_5 = rol.d(rdx_6 ^ *(r15_1 + 8), 0x10) ^ rdx_6
    int32_t rdx_8 = ror.d(*(r15_1 + 0xc), 8)
    int32_t r10_5 = rol.d(rdx_4 ^ *(r15_1 + 4), 0x10) ^ rdx_4 ^ r9_5
    int32_t r14_5 = rol.d(rdx_2 ^ *r15_1, 0x10) ^ rdx_2 ^ r10_5
    int32_t r8_4 = rol.d(rdx_8 ^ *(r15_1 + 0xc), 0x10) ^ rdx_8
    int32_t r8_5 = r8_4 ^ r10_5
    int32_t r9_7 = r9_5 ^ r8_4 ^ r14_5
    int32_t r10_6 = r10_5 ^ r9_7
    int32_t r9_8 = rol.d(r9_7, 0x10)
    int32_t rbp_5 =
        ((r8_5 & 0xff0000) ^ r8_5 u>> 0x10) u>> 8 ^ ((r8_5 & 0xff00) ^ r8_5 << 0x10) << 8
    int32_t rdx_14 = ((r10_6 u>> 8 ^ r10_6 << 8) & 0xff00ff) ^ r10_6 << 8 ^ r9_8
    int32_t r14_6 = r14_5 ^ rdx_14
    int32_t rsi_3 = rbp_5 ^ r9_8 ^ r14_6
    int32_t rdx_16 = ror.d(*i, 8)
    int32_t rdx_18 = ror.d(*(i + 4), 8)
    int32_t rdx_20 = ror.d(*(i + 8), 8)
    int32_t r10_11 = rol.d(rdx_20 ^ *(i + 8), 0x10) ^ rdx_20
    int32_t rdx_22 = ror.d(*(i + 0xc), 8)
    int32_t r11_5 = rol.d(rdx_18 ^ *(i + 4), 0x10) ^ rdx_18 ^ r10_11
    int32_t r8_10 = rol.d(rdx_22 ^ *(i + 0xc), 0x10) ^ rdx_22
    int32_t rbx_5 = rol.d(rdx_16 ^ *i, 0x10) ^ rdx_16 ^ r11_5
    int32_t r8_11 = r8_10 ^ r11_5
    int32_t r10_13 = r10_11 ^ r8_10 ^ rbx_5
    int32_t r11_6 = r11_5 ^ r10_13
    int32_t r9_13 =
        ((r8_11 & 0xff0000) ^ r8_11 u>> 0x10) u>> 8 ^ ((r8_11 & 0xff00) ^ r8_11 << 0x10) << 8
    int32_t r10_14 = rol.d(r10_13, 0x10)
    int32_t r8_18 = ((r11_6 u>> 8 ^ r11_6 << 8) & 0xff00ff) ^ r11_6 << 8 ^ r10_14
    int32_t rbx_6 = rbx_5 ^ r8_18
    *r15_1 = rbx_6
    int32_t rdx_25 = r9_13 ^ r10_14 ^ rbx_6
    *(r15_1 + 8) = rdx_25
    *(r15_1 + 0xc) = r9_13 ^ r8_18
    *(r15_1 + 4) = rdx_25 ^ r8_18
    r15_1 += 0x10
    *i = r14_6
    *(i + 4) = rsi_3 ^ rdx_14
    *(i + 8) = rsi_3
    *(i + 0xc) = rbp_5 ^ rdx_14

int32_t rdx_27 = ror.d(*r15_1, 8)
int32_t rdx_29 = ror.d(*(r15_1 + 4), 8)
int32_t rdx_31 = ror.d(*(r15_1 + 8), 8)
int32_t r10_18 = rol.d(rdx_31 ^ *(r15_1 + 8), 0x10) ^ rdx_31
int32_t r11_12 = rol.d(rdx_29 ^ *(r15_1 + 4), 0x10) ^ rdx_29 ^ r10_18
int32_t rdx_33 = ror.d(*(r15_1 + 0xc), 8)
int32_t rbx_11 = rol.d(rdx_27 ^ *r15_1, 0x10) ^ rdx_27 ^ r11_12
int32_t r8_22 = rol.d(rdx_33 ^ *(r15_1 + 0xc), 0x10) ^ rdx_33
int32_t r8_23 = r8_22 ^ r11_12
int32_t r10_20 = r10_18 ^ r8_22 ^ rbx_11
int32_t r11_13 = r11_12 ^ r10_20
int32_t r9_19 =
    ((r8_23 & 0xff0000) ^ r8_23 u>> 0x10) u>> 8 ^ ((r8_23 & 0xff00) ^ r8_23 << 0x10) << 8
int32_t r10_21 = rol.d(r10_20, 0x10)
int32_t r8_30 = ((r11_13 u>> 8 ^ r11_13 << 8) & 0xff00ff) ^ r11_13 << 8 ^ r10_21
int32_t rbx_12 = rbx_11 ^ r8_30
int32_t rdx_36 = r9_19 ^ r10_21 ^ rbx_12
*i = rbx_12
*(i + 8) = rdx_36
*(i + 0xc) = r9_19 ^ r8_30
*(i + 4) = rdx_36 ^ r8_30
return 0
