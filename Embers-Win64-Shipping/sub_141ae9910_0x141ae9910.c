// 函数: sub_141ae9910
// 地址: 0x141ae9910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

int64_t* var_28 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t arg_18 = 0

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

int64_t arg_20 = 0
int64_t r8_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_10 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_10[4]
    r8_9 = sub_140d30490(arg2, &arg_20, r8_10)
else
    r8_9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_6 = *(arg2 + 0x20)
int512_t zmm3
zmm3.o = arg_10
int512_t zmm2
zmm2.o = arg_18
int64_t* rdx_10 = var_28
int64_t rdi
rdi.b = rax_6 != 0
void* rcx_5 = var_20
int64_t var_38 = arg_20
*(arg2 + 0x20) = rdi + rax_6
void* result = sub_141a999a0(rcx_5, rdx_10, r8_9)
*arg3 = result
return result
