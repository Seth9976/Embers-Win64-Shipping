// 函数: sub_1426e5b10
// 地址: 0x1426e5b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8_3 = *arg2
int64_t result = *(r8_3 + 0x110)
char* r8_1 = zx.q(*(arg1 + 0x52)) + *(zx.q(*(r8_3 + 0x260)) * 0x58 + result + 0x30)
*r8_1 &= 0xfe

if (*(arg1 + 0x75) == 0)
    return result

return sub_1426a9050(*arg2, *(arg1 + 0x68), *(arg1 + 0x70), *(arg1 + 0x74)) __tailcall
