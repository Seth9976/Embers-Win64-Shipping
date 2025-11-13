// 函数: sub_14248f6b0
// 地址: 0x14248f6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_88 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_60, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

bool cond:2 = *(arg2 + 0x20) == 0
char var_97 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_97, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_97)

int32_t var_8c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_8c, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_8c)

int32_t var_90 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_90, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int64_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_70, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_80, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

char var_98 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_98, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

char arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &arg_20, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t var_94 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_94, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_94)

char arg_10 = 0
int64_t rdx_21

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    rdx_21 = sub_140d30490(arg2, &arg_10, r8_21)
else
    rdx_21 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_12 = *(arg2 + 0x20)
uint32_t r9 = zx.d(var_97)
int512_t zmm1
zmm1.o = var_88
int64_t rdi
rdi.b = rax_12 != 0
int64_t var_48 = var_80
int32_t var_78
int32_t var_40 = var_78
int32_t var_68
int32_t var_30 = var_68
int32_t var_58
int32_t var_20 = var_58
char var_a0 = arg_10
char rax_17 = var_94.b
char rax_18 = arg_20
char rax_19 = var_98
int32_t rax_20 = var_8c
int64_t var_38 = var_70
int64_t var_28 = var_60
int32_t var_d0 = var_90.d
*(arg2 + 0x20) = rdi + rax_12
char result
int64_t rdx_23
result, rdx_23 = sub_141eacc90(arg1, rdx_21, &var_28, r9, rax_20, var_d0, &var_38, &var_48, rax_19, 
    rax_18, rax_17)

if (result == 0)
    sub_140be4120(u"ServerMoveDualNoBase_Validate")
    return result

uint32_t r9_1 = zx.d(var_97)
zmm1.o = var_88
int32_t var_20_1 = var_78
int32_t var_30_1 = var_68
int32_t var_40_1 = var_58
char var_a0_1 = arg_10
char rax_25 = var_94.b
char rax_26 = arg_20
char rax_27 = var_98
var_28 = var_80
int32_t rax_28 = var_8c
var_38 = var_70
var_48 = var_60
return sub_141eacbb0(arg1, rdx_23, &var_48, r9_1, rax_28, var_90.d, &var_38, &var_28, rax_27, 
    rax_26, rax_25)
