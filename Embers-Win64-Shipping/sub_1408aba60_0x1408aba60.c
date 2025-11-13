// 函数: sub_1408aba60
// 地址: 0x1408aba60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rcx_1 = *(arg2 + 0x20)
int64_t rax_2
rax_2.b = rcx_1 != 0
int64_t result = rax_2 + rcx_1
uint32_t rcx_2 = zx.d(arg_10)
*(arg2 + 0x20) = result

if (rcx_2 == 0)
    *(arg1 + 0x430) = 0
    return result

if (rcx_2 == 1)
    *(arg1 + 0x430) = 1
    return result

*(arg1 + 0x430) = 2
return result
