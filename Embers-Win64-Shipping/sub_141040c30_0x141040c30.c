// 函数: sub_141040c30
// 地址: 0x141040c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x210)
void*** rsi = nullptr
void*** result = result_1
int32_t rbp = 1

if (result_1 == 0)
    result = nullptr
else
    int128_t var_54_1 = zx.o(0)
    int32_t rdi_1 = *arg1[4]
    char* rax_1 = arg1[3]
    int32_t temp0_1 = _mm_bsrli_si128(zx.o(0), 0xc)
    uint32_t rdx = zx.d(*rax_1)
    int32_t rcx = *arg1[2]
    int32_t r9_1 = *arg1[1]
    int32_t r8_1 = **arg1
    *result = &data_142d3ff08
    result[1].d = 0
    *(result + 0xc) = 0
    result[2].w = 0x100
    result[3] = 0
    *(result + 0x34) = rcx
    *(result + 0x20) = 1.o
    *(result + 0x3c) = rdx
    result[9] = &result[0xa]
    result[6].d = temp0_1
    result[7].d = 1
    result[8].d = rdi_1
    result[0xa] = -0x3810000020000000
    result[0xb] = 0
    *result = &data_142ef29a0
    result[0xc].d = r8_1
    *(result + 0x64) = r9_1
    sub_14103fda0(&result[0xd], arg2)
    *(result + 0x204) &= 0xfffffffe
    *result = &data_142f00b08
    result[0xd] = &data_142f00b60
    result[0x40].d = rdi_1
    result[0x41].b = 0

sub_14105a560(arg2, *arg1[5], arg1[6], nullptr, &result[0x16], *arg1[3], *arg1[4], *arg1[7], 0)
int64_t var_38 = 0x1688
int64_t var_24 = 0
int32_t var_1c = 0
int32_t rbx = *arg1[8]
int32_t* rax_11 = arg1[2]
int32_t var_40 = rbx
int32_t var_3c = 4
int32_t var_30 = 0
int32_t var_2c = *rax_11
int32_t rax_13 = sub_141021240(*arg1[9])

if (rax_13 == 0x13)
    if (rbx == 0x15 || rbx != 0x16)
        rbp = 0
else if (rax_13 != 0x2c || rbx == 0x2e || rbx != 0x2f)
    rbp = 0

int32_t var_28 = rbp
void*** rax_14 = j_sub_140a82f30(0xa8)

if (rax_14 != 0)
    rsi = sub_14103fc50(rax_14, arg2, &var_40, &result[0x16], 0xffffffff, 0)

sub_1405d16e0(&result[0x2b], rsi)
return result
