// 函数: sub_142500b50
// 地址: 0x142500b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
uint128_t zmm3 = arg_10
uint128_t zmm2 = arg_18
int64_t rcx_3
rcx_3.b = rax_4 != 0
int64_t var_28 = var_38
*(arg2 + 0x20) = rcx_3 + rax_4
int32_t var_30
int32_t var_20 = var_30
uint64_t var_18[0x2]
uint64_t* rax_6 = sub_1420cfe90(&var_18, &var_28, zmm2, zmm3)
*arg3 = *rax_6
int32_t result = rax_6[1].d
arg3[1].d = result
return result
