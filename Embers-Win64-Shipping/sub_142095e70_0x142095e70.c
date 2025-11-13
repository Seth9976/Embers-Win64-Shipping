// 函数: sub_142095e70
// 地址: 0x142095e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = sx.q(*(arg1 + 0x78))
int512_t result

if (rax_1.d == 0)
    result.o = zx.o(0)
    return result

result.o = *(rax_1 * 0x2c + *(arg1 + 0x70) - 0x2c)
return result
