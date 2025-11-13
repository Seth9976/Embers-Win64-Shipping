// 函数: sub_1424bce00
// 地址: 0x1424bce00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_90 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_90, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

void* var_98 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_68, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_78, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_88, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_18, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:0 = arg_18 != 0
char arg_10 = 0
int64_t rsi
rsi.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_20, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_9 = *(arg2 + 0x20)
bool cond:1 = arg_20 != 0
void* rdx_16 = var_98
int64_t* rcx_9 = var_90
int64_t var_58 = var_88
int64_t rdi
rdi.b = rax_9 != 0
int32_t var_80
int32_t var_50 = var_80
int32_t var_70
int32_t var_40 = var_70
int32_t var_60
int32_t var_30 = var_60
char rax_13 = arg_10
int64_t var_48 = var_78
int64_t zmm0 = var_68
*(arg2 + 0x20) = rdi + rax_9
int64_t var_38 = zmm0
int64_t* result = sub_14203e750(rcx_9, rdx_16, &var_38, &var_48, &var_58, rsi.b, rax_13, cond:1)
*arg3 = result
return result
