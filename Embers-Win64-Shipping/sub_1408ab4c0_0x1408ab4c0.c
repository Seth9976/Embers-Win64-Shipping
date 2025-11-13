// 函数: sub_1408ab4c0
// 地址: 0x1408ab4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_8 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rcx_3
rcx_3.b = rax_4 != 0
*(arg2 + 0x20) = rcx_3 + rax_4

if (*(arg1 + 0x470) == 0)
    *arg3 = 0
    return rax_4

int64_t rax_5
int32_t zmm0
rax_5, zmm0 = sub_1408a2390(arg1 + 0x28, arg_18, arg_10, arg_8)
*arg3 = zmm0
return rax_5
