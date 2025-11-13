// 函数: sub_1424f2da0
// 地址: 0x1424f2da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_40

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_40, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_40
int32_t arg_10 = 0

if (rax_2 != 0)
    rdi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t var_54 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_54, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_54)

int64_t rax_7 = *(arg2 + 0x20)
int32_t zmm1 = arg_20
int32_t var_50 = arg_10
int32_t zmm0 = var_58
int64_t rsi
rsi.b = rax_7 != 0
int32_t var_4c = zmm1
zmm1 = var_54
*(arg2 + 0x20) = rsi + rax_7
int32_t var_48 = zmm0
int32_t var_44 = zmm1
void var_30
int32_t* result = sub_140ad9100(&var_50, &var_30)
*rdi = *result
return result
