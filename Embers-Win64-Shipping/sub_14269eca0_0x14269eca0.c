// 函数: sub_14269eca0
// 地址: 0x14269eca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_48 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

*(arg2 + 0x38) = 0
void var_40

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_40, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_40
int32_t arg_10 = (zx.o(0)).d

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t arg_18 = 0
void* r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    r9 = sub_140d30490(arg2, &arg_18, r8_9)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_7 = *(arg2 + 0x20)
int512_t zmm3
zmm3.o = arg_10
int64_t* rdx_10 = var_48
int64_t rdi
rdi.b = rax_7 != 0
int64_t var_50 = arg_18
int64_t* rax_9 = arg_20
*(arg2 + 0x20) = rdi + rax_7
void var_30
int64_t* rax_10 = sub_14265b3a0(&var_30, rdx_10, rsi, r9, rax_9)
*arg3 = *rax_10
int32_t result = rax_10[1].d
arg3[1].d = result
return result
