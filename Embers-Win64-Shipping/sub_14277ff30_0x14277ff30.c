// 函数: sub_14277ff30
// 地址: 0x14277ff30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_40 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_40, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_44 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_44, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_44)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_48 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

bool cond:3 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:4 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_18, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_38, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

bool cond:6 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:6)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_8 = *(arg2 + 0x20)
int32_t zmm1 = arg_20
int32_t zmm3 = var_48
int64_t rcx_7
rcx_7.b = rax_8 != 0
int32_t zmm2 = var_44
int32_t var_30
int32_t var_20 = var_30
char rax_10 = arg_10
int64_t var_28 = var_38
int32_t var_60 = arg_18.d
int32_t var_68 = zmm1
zmm1 = var_40
*(arg2 + 0x20) = rcx_7 + rax_8
void* result = sub_14277b7f0(arg1, zmm1, zmm2, zmm3, var_68, var_60, &var_28, rax_10)
*arg3 = result
return result
