// 函数: sub_1424b4170
// 地址: 0x1424b4170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_88 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

*(arg2 + 0x38) = 0
void var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_60, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_60

if (rax_3 != 0)
    rsi = rax_3

int64_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_70, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_80, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int32_t var_90 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_90, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int32_t var_94 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_94, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_94)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t var_98 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_98, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &arg_18, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:1 = arg_18 != 0
int32_t arg_20 = 0
int64_t r14
r14.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &arg_20, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = arg_20 != 0
int64_t rax_12 = *(arg2 + 0x20)
int32_t zmm1 = var_94
int64_t* rcx_11 = var_88
int64_t rdi
rdi.b = rax_12 != 0
int64_t var_48 = var_80
int32_t var_78
int32_t var_40 = var_78
int64_t var_38 = var_70
int32_t var_b0 = var_98.d
int32_t var_68
int32_t var_30 = var_68
uint32_t rax_15 = zx.d(arg_10)
int32_t var_c8 = var_90.d
*(arg2 + 0x20) = rdi + rax_12
char result =
    sub_14201eb60(rcx_11, rsi, &var_38, &var_48, var_c8, zmm1, rax_15, var_b0, r14.b, cond:2)
*arg3 = result
return result
