// 函数: sub_1424b7060
// 地址: 0x1424b7060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_48
int32_t arg_18 = (zx.o(0)).d

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = arg_10 != 0
*(arg2 + 0x38) = 0
int64_t rbp
rbp.b = cond:1
void var_38
int64_t r8_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_10 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_10[4]
    r8_9 = sub_140d30490(arg2, &var_38, r8_10)
else
    r8_9 = sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

uint64_t* rax_7 = *(arg2 + 0x38)
uint64_t* rcx_5 = &var_38
int512_t zmm2
zmm2.o = arg_18

if (rax_7 != 0)
    rcx_5 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t* rcx_6 = arg_20
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
char result = sub_1420291f0(rcx_6, rsi, r8_9, rbp.b, rcx_5)
*arg3 = result
return result
