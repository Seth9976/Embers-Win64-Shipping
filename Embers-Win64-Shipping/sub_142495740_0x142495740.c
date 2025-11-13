// 函数: sub_142495740
// 地址: 0x142495740
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
int32_t arg_20 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:4 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:5 = *(arg2 + 0x20) == 0
int32_t arg_8 = 0

if (cond:5)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_8, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_7 = *(arg2 + 0x20)
int32_t zmm1 = arg_10
int512_t zmm3
zmm3.o = var_28
int64_t rcx_6
rcx_6.b = rax_7 != 0
int512_t zmm2
zmm2.o = var_24
int32_t var_38 = arg_8
int32_t zmm0 = arg_20
*(arg2 + 0x20) = rcx_6 + rax_7
return (*(*arg1 + 0x398))(arg1, var_20, zmm2, zmm3, zmm0, zmm1, var_38)
