// 函数: sub_142572360
// 地址: 0x142572360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_54 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_54, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_54)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_58 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int128_t var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_50, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

bool cond:4 = arg_8 != 0
int32_t arg_10 = 0
int64_t rsi
rsi.b = cond:4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_7 = *(arg2 + 0x20)
int128_t zmm0 = var_50
int512_t zmm3
zmm3.o = arg_20
int512_t zmm2
zmm2.o = var_58
int64_t rdi
rdi.b = rax_7 != 0
bool cond:6 = arg_10 != 0
*(arg2 + 0x20) = rdi + rax_7
int64_t rdx_12 = *arg1
rax_7.b = cond:6
int128_t var_38 = zmm0
return (*(rdx_12 + 0x7b8))(arg1, rdx_12, zmm2, zmm3, &var_38, rsi.b, rax_7.b)
