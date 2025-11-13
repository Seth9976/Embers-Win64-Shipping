// 函数: sub_1424c5210
// 地址: 0x1424c5210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_30

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_30, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_34 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_34, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_34)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_38 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

bool cond:3 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:4 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0
int32_t r9

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    r9 = sub_140d30490(arg2, &arg_10, r8_9)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
int32_t zmm1 = arg_10
int512_t zmm3
zmm3.o = var_38
int128_t zmm2 = var_34
int64_t rcx_5
rcx_5.b = rax_6 != 0
uint128_t var_18 = var_30
uint128_t zmm0 = arg_20
*(arg2 + 0x20) = rcx_5 + rax_6
int32_t var_40 = zmm1
return sub_142086a70(arg1, &var_18, zmm2, r9, zmm0.d)
