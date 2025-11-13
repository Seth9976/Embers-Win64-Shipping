// 函数: sub_1408b7be0
// 地址: 0x1408b7be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_50 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_50, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_54 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_54, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_54)

bool cond:2 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

bool cond:4 = *(arg2 + 0x20) == 0
int32_t var_58 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_58, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

bool cond:5 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:5)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_18, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

*(arg2 + 0x38) = 0
void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_38, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_9 = *(arg2 + 0x38)
void* rcx_8 = &var_38
float zmm1[0x4] = var_58
char r8_16 = arg_10

if (rax_9 != 0)
    rcx_8 = rax_9

uint64_t var_28 = var_48
int64_t rax_10 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_10 != 0
int32_t var_40
int32_t var_20 = var_40
int32_t rax_12 = arg_18
int32_t var_70 = arg_20.d
uint128_t zmm0 = var_50
float var_78 = zmm1[0]
zmm1 = var_54
*(arg2 + 0x20) = rdi + rax_10
int64_t result
int32_t zmm0_1
zmm0_1, result = sub_1408ae970(zmm0, zmm1, r8_16, &var_28, var_78, var_70, rax_12, rcx_8)
*arg3 = zmm0_1
return result
