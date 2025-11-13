// 函数: sub_14269f000
// 地址: 0x14269f000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_58 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

*(arg2 + 0x38) = 0
void var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_50, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_50
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rsi = rax_3

void var_40

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_40, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

void* rax_5 = *(arg2 + 0x38)
void* rbp = &var_40
int32_t arg_10 = (zx.o(0)).d

if (rax_5 != 0)
    rbp = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t arg_18 = 0
uint64_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    r9 = sub_140d30490(arg2, &arg_18, r8_11)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_9 = *(arg2 + 0x20)
int512_t zmm3
zmm3.o = arg_10
int64_t* rcx_6 = var_58
int64_t rdi
rdi.b = rax_9 != 0
int64_t var_60 = arg_18
int64_t* rax_11 = arg_20
*(arg2 + 0x20) = rdi + rax_9
char result = sub_14265dc20(rcx_6, rsi, rbp, r9, rax_11)
*arg3 = result
return result
