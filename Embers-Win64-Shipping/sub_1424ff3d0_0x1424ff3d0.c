// 函数: sub_1424ff3d0
// 地址: 0x1424ff3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_18 = (zx.o(0)).d

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:3 = arg_10 != 0
int64_t rax_5 = *(arg2 + 0x20)
int128_t zmm3 = arg_18
int64_t var_38 = var_58
int64_t zmm0_1 = var_48
int64_t rdi
rdi.b = rax_5 != 0
int32_t var_50
int32_t var_30 = var_50
int32_t var_40
int32_t var_20 = var_40
*(arg2 + 0x20) = rdi + rax_5
int64_t var_28 = zmm0_1
float var_18[0x4]
int32_t* rax_8 = sub_1420cf250(&var_18, &var_28, &var_38, zmm3, cond:3)
*arg3 = *rax_8
int32_t result = rax_8[2]
arg3[1].d = result
return result
