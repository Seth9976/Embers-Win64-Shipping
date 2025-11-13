// 函数: sub_1424f92a0
// 地址: 0x1424f92a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
float _X_1 = 0f

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &_X_1, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &_X_1)

bool cond:1 = *(arg2 + 0x20) == 0
float _Y_1 = 0f

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &_Y_1, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &_Y_1)

int64_t rax_3 = *(arg2 + 0x20)
float _Y = _Y_1
float _X = _X_1
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
float result = powf(_X, _Y)
*arg3 = result
return result
