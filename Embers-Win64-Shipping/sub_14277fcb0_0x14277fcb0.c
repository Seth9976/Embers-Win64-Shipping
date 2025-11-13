// 函数: sub_14277fcb0
// 地址: 0x14277fcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_60 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_64 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_64, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_64)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_68 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_68, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

bool cond:3 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:4 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_18, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_48, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_58, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

bool cond:7 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:7)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_10, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_9 = *(arg2 + 0x20)
int32_t zmm1 = arg_20
int32_t zmm3 = var_68
int64_t rcx_8
rcx_8.b = rax_9 != 0
int32_t zmm2 = var_64
int32_t var_50
int32_t var_30 = var_50
int32_t var_40
int32_t var_20 = var_40
char rax_12 = arg_10
int64_t var_38 = var_58
int64_t var_28 = var_48
int32_t var_90 = arg_18.d
int32_t var_98 = zmm1
zmm1 = var_60
*(arg2 + 0x20) = rcx_8 + rax_9
void* result = sub_14277b770(arg1, zmm1, zmm2, zmm3, var_98, var_90, &var_28, &var_38, rax_12)
*arg3 = result
return result
