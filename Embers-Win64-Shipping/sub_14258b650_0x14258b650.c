// 函数: sub_14258b650
// 地址: 0x14258b650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_e8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

int64_t var_f8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_f8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_f8)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t r14
r14.b = arg_10 != 0
void var_b8
memset(&var_b8, 0, 0x88)
int32_t var_b0 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_b8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

void* rax_5 = *(arg2 + 0x38)
void* rsi = &var_b8
int32_t arg_20 = 0

if (rax_5 != 0)
    rsi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_7 = *(arg2 + 0x20)
int64_t var_d8 = var_f8
int64_t rdi
rdi.b = rax_7 != 0
int64_t var_c8 = var_e8
int32_t var_f0
int32_t var_d0 = var_f0
int32_t var_e0
int32_t var_c0 = var_e0
int32_t rax_9
rax_9.b = arg_20 != 0
*(arg2 + 0x20) = rdi + rax_7
return sub_141f41a50(arg1, &var_c8, &var_d8, r14.b, rsi, rax_9.b)
