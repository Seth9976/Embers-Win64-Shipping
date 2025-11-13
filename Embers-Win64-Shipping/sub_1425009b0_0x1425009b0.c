// 函数: sub_1425009b0
// 地址: 0x1425009b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_38
int32_t arg_18 = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t arg_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t* rax_6 = *(arg2 + 0x38)
int64_t* rcx_4 = &arg_20
float zmm3[0x4] = arg_10
float zmm2[0x4] = arg_18
zmm3[0] = zmm3[0] * 0.0174532924f

if (rax_6 != 0)
    rcx_4 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
zmm2[0] = zmm2[0] * 0.0174532924f
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
uint64_t var_28
sub_1420cfeb0(&var_28, rsi, zmm2, zmm3, rcx_4)
*arg3 = var_28
int32_t result
arg3[1].d = result
return result
