// 函数: sub_14259a060
// 地址: 0x14259a060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

*(arg2 + 0x38) = 0
void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_5 = *(arg2 + 0x38)
void* rsi = &var_58
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    rsi = rax_5

void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_48, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* rcx_5 = &var_48
int64_t rdx_10 = arg_10
int64_t var_38 = var_78

if (rax_7 != 0)
    rcx_5 = rax_7

int64_t var_28 = var_68
int64_t rax_8 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_8 != 0
int32_t var_70
int32_t var_30 = var_70
int32_t var_60
int32_t var_20 = var_60
*(arg2 + 0x20) = rdi + rax_8
return sub_141f75030(arg1, rdx_10, &var_28, &var_38, rsi, rcx_5)
