// 函数: sub_1424fa5d0
// 地址: 0x1424fa5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t result = *(arg2 + 0x20)
uint32_t zmm1[0x4] = arg_10
zmm1[0] = zmm1[0] f- arg_18
int32_t zmm0 = arg_20
int64_t rcx_3
rcx_3.b = result != 0
*(arg2 + 0x20) = rcx_3 + result
result.b = zmm0 f>= __andps_xmmxud_memxud(zmm1, data_142d3f770)[0]
*arg3 = result.b
return result
