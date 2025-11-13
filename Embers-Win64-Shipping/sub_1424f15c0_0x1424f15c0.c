// 函数: sub_1424f15c0
// 地址: 0x1424f15c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &arg_10
int32_t zmm0 = (zx.o(0)).d

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t result = *(arg2 + 0x20)
int64_t rsi
rsi.b = result != 0
*(arg2 + 0x20) = rsi + result

if (not(zmm0 f!= *rcx_1) && not(zmm0 f!= *(rcx_1 + 4)))
    *arg3 = 1
    return result

*arg3 = 0
return result
