// 函数: sub_1424ea960
// 地址: 0x1424ea960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_14 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_14, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_14)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_18 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

bool cond:2 = *(arg2 + 0x20) == 0
float arg_20 = 0f

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:3 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:4 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
int32_t zmm3 = arg_18
float zmm2 = arg_20
int64_t rcx_5
rcx_5.b = result != 0
int32_t zmm1 = var_18
uint32_t var_28 = arg_10[0]
uint32_t zmm0[0x4] = var_14
*(arg2 + 0x20) = rcx_5 + result
*arg3 = j_sub_1420bbc00(zmm0, zmm1, zmm2, zmm3, var_28)
return result
