// 函数: sub_140652110
// 地址: 0x140652110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* var_60 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_60, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int64_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_70, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_18, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:0 = arg_18 != 0
int32_t var_74 = 0
int64_t rsi
rsi.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_74, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

int32_t var_78 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_78, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &arg_20, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_68, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_11 = *(arg2 + 0x20)
uint32_t rcx_10 = zx.d(arg_10)
int32_t zmm1 = var_78
int64_t rdi
rdi.b = rax_11 != 0
int64_t r8_20 = var_70
int64_t* rdx_20 = var_60
int64_t var_48 = var_58
int32_t var_50
int32_t var_40 = var_50
int64_t rax_13 = var_68
int32_t var_88 = arg_20.d
int32_t var_98 = var_74.d
*(arg2 + 0x20) = rdi + rax_11
void* result =
    sub_140636020(&var_38, rdx_20, r8_20, &var_48, rcx_10, rsi.b, var_98, zmm1, var_88, rax_13)
int64_t rcx_12 = var_38
*arg3 = result

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
