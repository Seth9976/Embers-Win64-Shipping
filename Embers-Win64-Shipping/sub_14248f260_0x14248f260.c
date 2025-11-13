// 函数: sub_14248f260
// 地址: 0x14248f260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_98 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_60, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

bool cond:2 = *(arg2 + 0x20) == 0
char var_a7 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_a7, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a7)

int32_t var_9c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_9c, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_9c)

int32_t var_a0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_a0, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

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

char var_a8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_a8, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

char arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &arg_20, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t var_a4 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_a4, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a4)

int64_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    sub_140d30490(arg2, &var_88, r8_21)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t var_90 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_23 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_23[4]
    sub_140d30490(arg2, &var_90, r8_23)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

char arg_10 = 0
int64_t rdx_25

if (*(arg2 + 0x20) == 0)
    int64_t* r8_25 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_25[4]
    rdx_25 = sub_140d30490(arg2, &arg_10, r8_25)
else
    rdx_25 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_14 = *(arg2 + 0x20)
uint32_t r9 = zx.d(var_a7)
int512_t zmm1
zmm1.o = var_98
int64_t rdi
rdi.b = rax_14 != 0
int64_t var_48 = var_80
int32_t var_78
int32_t var_40 = var_78
int32_t var_68
int32_t var_30 = var_68
int32_t var_58
int32_t var_20 = var_58
char var_b0 = arg_10
char rax_19 = var_90.b
int64_t rax_20 = var_88
int32_t rax_21 = var_a4
char rax_22 = arg_20
char rax_23 = var_a8
int32_t rax_24 = var_9c
int64_t var_38 = var_70
int64_t var_28 = var_60
int32_t var_f0 = var_a0.d
*(arg2 + 0x20) = rdi + rax_14
char result
int64_t rdx_27
result, rdx_27 = sub_141eacad0(arg1, rdx_25, &var_28, r9, rax_24, var_f0, &var_38, &var_48, rax_23, 
    rax_22, rax_21, rax_20, rax_19)

if (result == 0)
    sub_140be4120(u"ServerMoveDualHybridRootMotion_Validate")
    return result

uint32_t r9_1 = zx.d(var_a7)
zmm1.o = var_98
int32_t var_20_1 = var_78
int32_t var_30_1 = var_68
int32_t var_40_1 = var_58
char var_b0_1 = arg_10
char rax_29 = var_90.b
int64_t rax_30 = var_88
int32_t rax_31 = var_a4
char rax_32 = arg_20
char rax_33 = var_a8
var_28 = var_80
int32_t rax_34 = var_9c
var_38 = var_70
var_48 = var_60
return sub_141eac9f0(arg1, rdx_27, &var_48, r9_1, rax_34, var_a0.d, &var_38, &var_28, rax_33, 
    rax_32, rax_31, rax_30, rax_29)
