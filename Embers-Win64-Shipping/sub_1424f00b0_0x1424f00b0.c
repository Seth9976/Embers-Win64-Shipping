// 函数: sub_1424f00b0
// 地址: 0x1424f00b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:3 = *(arg2 + 0x20) == 0
int32_t var_38 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_38, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_5 = *(arg2 + 0x20)
int32_t zmm1 = arg_18
int32_t var_30 = arg_10
int32_t zmm0 = arg_20
int64_t rcx_4
rcx_4.b = rax_5 != 0
int32_t var_2c = zmm1
zmm1 = var_38
*(arg2 + 0x20) = rcx_4 + rax_5
int32_t var_28 = zmm0
int32_t var_24 = zmm1
int128_t var_20
int32_t* result = sub_140ad9100(&var_30, &var_20)
*arg3 = var_20
return result
