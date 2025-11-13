// 函数: sub_142456600
// 地址: 0x142456600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_d8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rbp
rbp.b = arg_10 != 0
void var_b8
memset(&var_b8, 0, 0x88)
int32_t var_b0 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_b8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

void* rax_4 = *(arg2 + 0x38)
void* rsi = &var_b8
int32_t arg_18 = 0

if (rax_4 != 0)
    rsi = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:3 = arg_18 != 0
int64_t rax_6 = *(arg2 + 0x20)
int64_t var_c8 = var_d8
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
int32_t var_d0
int32_t var_c0 = var_d0
char result = sub_141dcef50(arg1, &var_c8, rbp.b, rsi, cond:3)
*arg3 = result
return result
