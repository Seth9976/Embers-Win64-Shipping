// 函数: sub_14248ba20
// 地址: 0x14248ba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_7c = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_7c, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_7c)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_80 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_80, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

bool cond:4 = *(arg2 + 0x20) == 0
int32_t var_84 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_84, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_84)

int64_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_70, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_78 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_78, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_20, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:5 = arg_20 != 0
int32_t var_88 = 0
int64_t r14
r14.b = cond:5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_88, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

bool cond:6 = var_88 != 0
char arg_10 = 0
int64_t rsi
rsi.b = cond:6
int64_t rdx_19
int64_t r8_19

if (*(arg2 + 0x20) == 0)
    int64_t* r8_20 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_20[4]
    rdx_19, r8_19 = sub_140d30490(arg2, &arg_10, r8_20)
else
    rdx_19, r8_19 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_11 = *(arg2 + 0x20)
int512_t zmm2
zmm2.o = var_80
int512_t zmm1
zmm1.o = var_7c
int64_t rdi
rdi.b = rax_11 != 0
int64_t var_48 = var_68
int32_t var_60
int32_t var_40 = var_60
int32_t var_50
int32_t var_30 = var_50
char rax_14 = arg_10
int64_t rax_15 = var_78
int64_t rax_16 = var_70
int64_t var_38 = var_58
int32_t var_c0 = var_84.d
*(arg2 + 0x20) = rdi + rax_11
return sub_141e97d90(arg1, rdx_19, r8_19, &var_38, &var_48, var_c0, rax_16, rax_15, r14.b, rsi.b, 
    rax_14)
