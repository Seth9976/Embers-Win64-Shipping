// 函数: sub_142579820
// 地址: 0x142579820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_40, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_48 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:3 = *(arg2 + 0x20) == 0
char arg_8 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
uint32_t rcx_5 = zx.d(arg_8)
int64_t zmm0 = var_40
int512_t zmm3
zmm3.o = arg_20
int64_t rdi
rdi.b = rax_6 != 0
int32_t var_38
int32_t var_20 = var_38
int32_t rax_7
rax_7.b = arg_10 != 0
*(arg2 + 0x20) = rdi + rax_6
int64_t r8_10 = *arg1
int64_t var_28 = zmm0
return (*(r8_10 + 0x5e0))(arg1, &var_28, r8_10, zmm3, rcx_5, rax_7.b)
