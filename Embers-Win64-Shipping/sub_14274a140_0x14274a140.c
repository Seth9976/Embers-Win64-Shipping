// 函数: sub_14274a140
// 地址: 0x14274a140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_38 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

*(arg2 + 0x38) = 0
void var_30

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_30, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_30
int32_t arg_20 = 0

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_7 = *(arg2 + 0x20)
int32_t zmm0 = arg_10
int512_t zmm3
zmm3.o = arg_20
int64_t rdi
rdi.b = rax_7 != 0
bool cond:3 = arg_8 != 0
*(arg2 + 0x20) = rdi + rax_7
int64_t rdx_10 = *(arg1 + 0x638)
rax_7.b = cond:3
return (*(rdx_10 + 0x18))(zmm0, rdx_10, rsi, zmm3, zmm0, rax_7.b)
