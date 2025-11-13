// 函数: sub_14250af30
// 地址: 0x14250af30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rsi = &arg_10
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rsi = rax_4

void var_30

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_30, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

void* rax_6 = *(arg2 + 0x38)
void* rbp = &var_30
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rbp = rax_6

int128_t var_28 = zx.o(0)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_28, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int128_t* rax_8 = *(arg2 + 0x38)
int128_t* rcx_5 = &var_28
void* rdx_10 = arg_20

if (rax_8 != 0)
    rcx_5 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
int64_t* rcx_6 = var_38
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
return sub_1420b2220(rcx_6, rdx_10, rsi, rbp, rcx_5)
