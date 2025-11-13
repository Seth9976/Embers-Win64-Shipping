// 函数: sub_14249dc70
// 地址: 0x14249dc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_40, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int32_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_5 = *(arg2 + 0x38)
char* r14 = &arg_10
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    r14 = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_7 = *(arg2 + 0x38)
int32_t* rsi = &arg_20
int64_t var_30 = 0
int64_t var_28 = 0

if (rax_7 != 0)
    rsi = rax_7

int32_t zmm0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    zmm0 = sub_140d30490(arg2, &var_30, r8_11)
else
    zmm0 = sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int64_t rax_9 = *(arg2 + 0x20)
int128_t zmm2 = var_48
int64_t rdx_12 = var_40
int64_t rcx_6 = var_38
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
int64_t result = sub_141fb0d20(rcx_6, rdx_12, zmm2, r14, zmm0, rsi, &var_30)
int64_t rcx_7 = var_30

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
