// 函数: sub_1424bd5d0
// 地址: 0x1424bd5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_70, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t* var_78 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_88, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_68, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_18, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:0 = arg_18 != 0
int32_t arg_20 = 0
int64_t r14
r14.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_20, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = arg_20 != 0
int32_t var_90 = 0
int64_t rsi
rsi.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_90, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int32_t var_94 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_94, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_94)

int64_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    sub_140d30490(arg2, &var_80, r8_21)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int32_t var_98 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_23 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_23[4]
    sub_140d30490(arg2, &var_98, r8_23)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t rax_13 = *(arg2 + 0x20)
bool cond:2 = var_98 != 0
uint32_t rcx_12 = zx.d(arg_10)
int32_t zmm1 = var_90
int64_t r8_24 = var_88
int64_t rdi
rdi.b = rax_13 != 0
int64_t* rdx_25 = var_78
int32_t var_60
int32_t var_40 = var_60
int64_t var_48 = var_68
int32_t var_50
int32_t var_30 = var_50
char rax_16 = var_80.b
int64_t var_38 = var_58
int32_t var_b0 = var_94.d
int64_t rcx_13 = var_70
*(arg2 + 0x20) = rdi + rax_13
void* result = sub_14203edf0(rcx_13, rdx_25, r8_24, &var_38, &var_48, rcx_12, r14.b, rsi.b, zmm1, 
    var_b0, rax_16, cond:2)
*arg3 = result
return result
