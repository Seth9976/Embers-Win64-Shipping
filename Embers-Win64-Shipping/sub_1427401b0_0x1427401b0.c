// 函数: sub_1427401b0
// 地址: 0x1427401b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_40 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_40, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

*(arg2 + 0x38) = 0
void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_38
int32_t var_44 = 0

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_44, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_44)

int32_t var_48 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_18, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0
int32_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    r9 = sub_140d30490(arg2, &arg_10, r8_13)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_9 = *(arg2 + 0x20)
char zmm0 = arg_18.b
int512_t zmm3
zmm3.o = var_48
int128_t zmm2 = var_44
bool var_58 = arg_10 != 0
int64_t rdi
rdi.b = rax_9 != 0
int64_t* rcx_8 = var_40
int32_t rax_10 = arg_20
*(arg2 + 0x20) = rdi + rax_9
int32_t result = sub_1426f5830(rcx_8, rsi, zmm2, r9, rax_10, zmm0)
*arg3 = result
return result
