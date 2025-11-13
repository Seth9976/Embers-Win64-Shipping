// 函数: sub_1424b3200
// 地址: 0x1424b3200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_d0 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_d0, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d0)

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

*(arg2 + 0x38) = 0
void var_c8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_c8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

void* rax_4 = *(arg2 + 0x38)
void* r14 = &var_c8

if (rax_4 != 0)
    r14 = rax_4

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

void* rax_6 = *(arg2 + 0x38)
void* rsi = &var_b8
int64_t var_d8 = 0

if (rax_6 != 0)
    rsi = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_d8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void* const arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_18, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_10 = *(arg2 + 0x20)
int128_t zmm1 = arg_10
int64_t* rcx_8 = var_d0
int64_t rdi
rdi.b = rax_10 != 0
void* const rax_11 = arg_18
int64_t rax_12 = arg_20
int64_t rax_13 = var_d8
*(arg2 + 0x20) = rdi + rax_10
void** result
int32_t zmm0_1
result, zmm0_1 = sub_14201d610(rcx_8, zmm1, r14, rsi, rax_13, rax_12, rax_11)
*arg3 = zmm0_1
return result
