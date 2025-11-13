// 函数: sub_14248eb00
// 地址: 0x14248eb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_70 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_70, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

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
char var_78 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_78, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

bool cond:4 = *(arg2 + 0x20) == 0
char arg_20 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t var_74 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_74, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

int64_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_60, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_68, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

char arg_10 = 0
int64_t rdx_17

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    rdx_17 = sub_140d30490(arg2, &arg_10, r8_17)
else
    rdx_17 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_10 = *(arg2 + 0x20)
int512_t zmm1
zmm1.o = var_70
int64_t var_38 = var_58
int64_t rdi
rdi.b = rax_10 != 0
int64_t var_28 = var_48
int32_t var_50
int32_t var_30 = var_50
int32_t var_40
int32_t var_20 = var_40
char rax_13 = arg_10
int64_t rax_14 = var_68
int64_t rax_15 = var_60
int32_t rax_16 = var_74
char rax_17 = arg_20
char rax_18 = var_78
*(arg2 + 0x20) = rdi + rax_10
char result
int64_t rdx_19
result, rdx_19 =
    sub_141ead160(arg1, rdx_17, &var_28, &var_38, rax_18, rax_17, rax_16, rax_15, rax_14, rax_13)

if (result == 0)
    sub_140be4120(u"ServerMove_Validate")
    return result

zmm1.o = var_70
int32_t var_20_1 = var_50
int32_t var_30_1 = var_40
char rax_21 = arg_10
int64_t rax_22 = var_68
int64_t rax_23 = var_60
int32_t rax_24 = var_74
char rax_25 = arg_20
char rax_26 = var_78
var_28 = var_58
var_38 = var_48
return sub_141ead0d0(arg1, rdx_19, &var_38, &var_28, rax_26, rax_25, rax_24, rax_23, rax_22, rax_21)
