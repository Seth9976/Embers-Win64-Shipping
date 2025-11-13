// 函数: sub_141f75590
// 地址: 0x141f75590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t rbx_2 = (sx.q(*(arg1 + 0x490)) + 0x58) * 2
char result = sub_140d3e110(arg1 + 0x438)

if (result != 0 || rdi.d s>= *(arg1 + (rbx_2 << 3) + 8))
    return result

*(rdi + *(arg1 + (rbx_2 << 3))) = 1
return sub_141f6d570(arg1)
