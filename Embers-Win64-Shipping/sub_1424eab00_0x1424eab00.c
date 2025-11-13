// 函数: sub_1424eab00
// 地址: 0x1424eab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_20 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_24 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_24, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_24)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_28 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_28, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

bool cond:3 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:4 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_18 = 0
int64_t rcx_6
int64_t rdx_11

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    rcx_6, rdx_11 = sub_140d30490(arg2, &arg_18, r8_11)
else
    rcx_6, rdx_11 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_7 = *(arg2 + 0x20)
int32_t zmm0 = arg_20
char r9 = arg_10
float zmm2[0x4] = var_28
int64_t rdi
rdi.b = rax_7 != 0
int512_t zmm1
zmm1.o = var_24
int32_t rax_8 = arg_18
*(arg2 + 0x20) = rdi + rax_7
float result = sub_1420bbf10(rcx_6, rdx_11, zmm2, r9, zmm0, rax_8)
*arg3 = result
return result
