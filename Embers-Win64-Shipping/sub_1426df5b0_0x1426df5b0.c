// 函数: sub_1426df5b0
// 地址: 0x1426df5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x38)
int512_t result

if (rax == 2)
    result.o = 0x3f400000
    return result

if (rax != 1)
    result.o = 0x3f800000
    return result

result.o = 0x3f733333
return result
