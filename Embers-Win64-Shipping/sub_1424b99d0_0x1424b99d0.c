// 函数: sub_1424b99d0
// 地址: 0x1424b99d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* var_40 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_40, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

void var_30
sub_141fd6b90(&var_30)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_30, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

void* rax_4 = *(arg2 + 0x38)
void* rsi = &var_30
int32_t var_48 = 0

if (rax_4 != 0)
    rsi = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0
int32_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    r9 = sub_140d30490(arg2, &arg_10, r8_11)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_8 = *(arg2 + 0x20)
int512_t zmm1
zmm1.o = arg_20
int512_t zmm3
zmm3.o = var_48
int64_t rdi
rdi.b = rax_8 != 0
void* rdx_12 = var_40
int64_t* rcx_7 = var_38
int32_t var_50 = arg_10
*(arg2 + 0x20) = rdi + rax_8
int64_t result = sub_1420356b0(rcx_7, rdx_12, rsi, zmm1, r9, zmm1.d)
int64_t var_28

if (var_28 == 0)
    return result

return sub_140a74f90(var_28)
