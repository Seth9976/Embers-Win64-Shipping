// 函数: sub_140651c40
// 地址: 0x140651c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_18 = (zx.o(0)).d
int64_t rbp
rbp.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_5 = *(arg2 + 0x38)
void* rsi = &var_48
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    rsi = rax_5

void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_38, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* rcx_5 = &var_38
int128_t zmm2 = arg_18

if (rax_7 != 0)
    rcx_5 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
void* rcx_6 = arg_20
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
char result = sub_140635a60(rcx_6, rbp.b, zmm2, rsi, rcx_5)
*arg3 = result
return result
