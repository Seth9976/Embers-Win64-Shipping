// 函数: sub_1425066b0
// 地址: 0x1425066b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_90, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int64_t var_a0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a0, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

int64_t zmm0 = data_143dbb1f8.q
int32_t rax_3 = data_143dbb200
int64_t var_48 = zmm0
int32_t var_40 = rax_3
int64_t var_3c = zmm0
int32_t var_34 = rax_3
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* rdi = &var_48
int32_t var_a8 = 0

if (rax_5 != 0)
    rdi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_a8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_18, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_10 = *(arg2 + 0x20)
int32_t zmm1 = arg_18
int64_t var_78 = var_a0
int64_t var_68 = var_90
int64_t rsi
rsi.b = rax_10 != 0
int32_t var_b0 = arg_10.d
int32_t var_b8 = zmm1
zmm1 = var_a8
int32_t var_98
int32_t var_70 = var_98
int32_t var_c0 = arg_20.d
*(arg2 + 0x20) = rsi + rax_10
int32_t var_88
int32_t var_60 = var_88
uint64_t var_58[0x2]
uint64_t* rax_13 = sub_1420d6e70(&var_58, &var_68, &var_78, rdi, zmm1, var_c0, var_b8, var_b0)
*arg3 = *rax_13
int32_t result = rax_13[1].d
arg3[1].d = result
return result
