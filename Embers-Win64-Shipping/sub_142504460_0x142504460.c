// 函数: sub_142504460
// 地址: 0x142504460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_70, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_78 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

bool cond:3 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:4 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:4)
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

int64_t rax_7 = *(arg2 + 0x20)
float zmm3[0x4] = var_78
int64_t var_48 = var_70
int64_t rdi
rdi.b = rax_7 != 0
int64_t var_38 = var_60
int32_t var_68
int32_t var_40 = var_68
int32_t var_58
int32_t var_30 = var_58
int32_t rax_10 = arg_18
char rax_11 = arg_10
int32_t var_90 = arg_20.d
*(arg2 + 0x20) = rdi + rax_7
float var_28[0x4]
float* rax_12 = sub_1420d6da0(&var_28, &var_38, &var_48, zmm3, rax_11, var_90, rax_10)
*arg3 = *rax_12
int32_t result = rax_12[2]
arg3[1].d = result
return result
