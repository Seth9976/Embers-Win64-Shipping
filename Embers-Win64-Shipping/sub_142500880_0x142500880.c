// 函数: sub_142500880
// 地址: 0x142500880
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
int64_t zmm0 = var_38
uint128_t zmm3
zmm3.d = arg_10.d f* 0.0174532924f
int64_t rcx_3
rcx_3.b = rax_4 != 0
uint128_t zmm2
zmm2.d = arg_18.d f* 0.0174532924f
*(arg2 + 0x20) = rcx_3 + rax_4
int64_t var_28 = zmm0
int32_t var_30
int32_t var_20 = var_30
uint64_t var_18
sub_1420cfe90(&var_18, &var_28, zmm2, zmm3)
*arg3 = var_18
int32_t result
arg3[1].d = result
return result
