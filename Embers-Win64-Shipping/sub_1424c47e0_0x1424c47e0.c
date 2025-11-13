// 函数: sub_1424c47e0
// 地址: 0x1424c47e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_30 = 0

if (cond:0)
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

int128_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_28, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

bool cond:5 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0
int64_t r8_11

if (cond:5)
    int64_t* r8_12 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_12[4]
    r8_11 = sub_140d30490(arg2, &arg_10, r8_12)
else
    r8_11 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_7 = *(arg2 + 0x20)
int128_t zmm3 = var_38
int64_t rcx_6
rcx_6.b = rax_7 != 0
int512_t zmm2
zmm2.o = var_34
int32_t var_48 = arg_10.d
int128_t zmm1 = var_30
int128_t var_18 = var_28
int128_t zmm0 = arg_20
*(arg2 + 0x20) = rcx_6 + rax_7
return sub_142086550(arg1, zmm1, r8_11, zmm3, zmm0.d, &var_18, var_48)
