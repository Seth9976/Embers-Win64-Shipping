// 函数: sub_1424bc750
// 地址: 0x1424bc750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_90 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_90, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

void* var_98 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void var_48
sub_141fd6b90(&var_48)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_4 = *(arg2 + 0x38)
void* rsi = &var_48

if (rax_4 != 0)
    rsi = rax_4

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_78, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_88, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t var_a8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_a8, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_20, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_18, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t var_a0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_a0, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &arg_10, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_12 = *(arg2 + 0x20)
bool cond:1 = arg_10 != 0
int512_t zmm1
zmm1.o = arg_20
void* rdx_20 = var_98
int64_t* rcx_12 = var_90
int64_t rdi
rdi.b = rax_12 != 0
int64_t var_68 = var_88
int32_t var_80
int32_t var_60 = var_80
int32_t var_70
int32_t var_50 = var_70
int64_t rax_15 = var_a0
int64_t var_58 = var_78
int32_t var_c0 = arg_18.d
int32_t var_d0 = var_a8.d
*(arg2 + 0x20) = rdi + rax_12
int64_t* result = sub_14203e250(rcx_12, rdx_20, rsi, &var_58, zmm1, &var_68, var_d0, zmm1.d, 
    var_c0, rax_15, cond:1)
*arg3 = result
int64_t var_40

if (var_40 == 0)
    return result

return sub_140a74f90(var_40)
