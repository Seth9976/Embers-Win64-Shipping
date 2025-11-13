// 函数: sub_14248fa70
// 地址: 0x14248fa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_60 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

bool cond:3 = *(arg2 + 0x20) == 0
char var_68 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

bool cond:4 = *(arg2 + 0x20) == 0
char arg_20 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t var_64 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_64, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_64)

char arg_10 = 0
int64_t rdx_13

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    rdx_13 = sub_140d30490(arg2, &arg_10, r8_13)
else
    rdx_13 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_8 = *(arg2 + 0x20)
int512_t zmm1
zmm1.o = var_60
int64_t var_38 = var_58
int64_t rdi
rdi.b = rax_8 != 0
int64_t var_28 = var_48
int32_t var_50
int32_t var_30 = var_50
int32_t var_40
int32_t var_20 = var_40
char rax_11 = arg_10
int32_t rax_12 = var_64
char rax_13 = arg_20
char rax_14 = var_68
*(arg2 + 0x20) = rdi + rax_8
char result
int64_t rdx_15
result, rdx_15 = sub_141eacfc0(arg1, rdx_13, &var_28, &var_38, rax_14, rax_13, rax_12, rax_11)

if (result == 0)
    sub_140be4120(u"ServerMoveNoBase_Validate")
    return result

zmm1.o = var_60
int32_t var_20_1 = var_50
int32_t var_30_1 = var_40
char rax_17 = arg_10
int32_t rax_18 = var_64
char rax_19 = arg_20
char rax_20 = var_68
var_28 = var_58
var_38 = var_48
return sub_141eacf30(arg1, rdx_15, &var_38, &var_28, rax_20, rax_19, rax_18, rax_17)
