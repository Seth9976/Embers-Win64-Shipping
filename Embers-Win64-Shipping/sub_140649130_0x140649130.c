// 函数: sub_140649130
// 地址: 0x140649130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_3 = *(arg2 + 0x38)
char* rsi = &arg_10
void* arg_18 = nullptr

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

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

int64_t rax_7 = *(arg2 + 0x20)
void* r8_10 = arg_18
int64_t* rcx_5 = arg_20
int64_t rdi
rdi.b = rax_7 != 0
int64_t var_48 = var_68
int64_t zmm0 = var_58
int32_t var_60
int32_t var_40 = var_60
int32_t var_50
int32_t var_30 = var_50
*(arg2 + 0x20) = rdi + rax_7
int64_t var_38 = zmm0
void* result = sub_140629e10(rcx_5, rsi, r8_10, &var_38, &var_48)
*arg3 = result
return result
