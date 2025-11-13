// 函数: sub_1424bc0f0
// 地址: 0x1424bc0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_80, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* var_88 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_88, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_68, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_78, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_18, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_9 = *(arg2 + 0x20)
int64_t r9 = arg_20
int64_t* r8_16 = var_88
int64_t rdi
rdi.b = rax_9 != 0
int64_t rcx_8 = var_80
int32_t var_70
int32_t var_40 = var_70
int32_t var_60
int32_t var_30 = var_60
int64_t var_48 = var_78
int32_t var_50
int32_t var_20 = var_50
uint32_t rax_13 = zx.d(arg_10)
int64_t var_38 = var_68
int64_t var_28 = var_58
int32_t var_90 = arg_18.d
*(arg2 + 0x20) = rdi + rax_9
void* result = sub_14203dd00(rcx_8, &var_28, r8_16, r9, &var_38, &var_48, rax_13, var_90)
*arg3 = result
return result
