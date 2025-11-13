// 函数: sub_1408f2830
// 地址: 0x1408f2830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
int32_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_58 = 0
int32_t var_50 = 0
int64_t rdx_7
int64_t r8_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_8 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_8[4]
    rdx_7, r8_7 = sub_140d30490(arg2, &var_58, r8_8)
else
    rdx_7, r8_7 = sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi = var_58
int64_t var_38 = 0
int64_t rcx_4
rcx_4.b = rax_5 != 0
*(arg2 + 0x20) = rcx_4 + rax_5
int32_t var_30 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_38, var_50, 0)
    rdx_7, r8_7 = memcpy(var_38, rdi, var_50 * 2)
else
    int32_t var_2c_1 = 0

int64_t rdi_1 = var_48
int64_t var_28 = 0
int32_t var_20 = var_40

if (var_40 != 0)
    sub_1405a4c70(&var_28, var_40, 0)
    rdx_7, r8_7 = memcpy(var_28, rdi_1, var_40 * 2)
else
    int32_t var_1c_1 = 0

int512_t zmm2
zmm2.o = arg_10
int512_t zmm1
zmm1.o = arg_20
int64_t result = sub_1408f2500(&var_28, rdx_7, r8_7, &var_38)
int64_t rcx_11 = var_58

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_48

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
