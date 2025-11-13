// 函数: sub_1424c4670
// 地址: 0x1424c4670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

*(arg2 + 0x38) = 0
void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_4 = *(arg2 + 0x38)
void* rsi = &var_38
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rsi = rax_4

void var_28
int64_t rdx_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    rdx_7 = sub_140d30490(arg2, &var_28, r8_7)
else
    rdx_7 = sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

uint64_t* rax_6 = *(arg2 + 0x38)
uint64_t* rcx_4 = &var_28
int128_t zmm2 = arg_10
int512_t zmm1
zmm1.o = arg_20

if (rax_6 != 0)
    rcx_4 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
return sub_142085970(arg1, rdx_7, zmm2, rsi, rcx_4)
