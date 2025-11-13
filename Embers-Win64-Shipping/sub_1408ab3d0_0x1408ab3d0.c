// 函数: sub_1408ab3d0
// 地址: 0x1408ab3d0
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
int32_t arg_8 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t result = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = result != 0
*(arg2 + 0x20) = rcx_2 + result

if (*(arg1 + 0x470) == 0)
    *arg3 = 0
else
    int32_t zmm0_1
    result, zmm0_1 = sub_1408a21c0(arg1 + 0x28, arg_10, arg_8)
    *arg3 = zmm0_1

return result
