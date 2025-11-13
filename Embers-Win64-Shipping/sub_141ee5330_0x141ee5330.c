// 函数: sub_141ee5330
// 地址: 0x141ee5330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = zx.d(arg1[0x2d].b) - 1
int512_t result

if (rax_1 u> 5)
    result.o = zx.o(0)
    return result

switch (rax_1)
    case 0, 1
        if ((*(*arg1 + 0x540))(arg1) != 0)
            result.o = arg1[0x32].d
            return result
        
        result.o = *(arg1 + 0x18c)
        return result
    case 2
        result.o = *(arg1 + 0x18c)
        return result
    case 3
        result.o = *(arg1 + 0x194)
        return result
    case 4
        result.o = arg1[0x33].d
        return result
    case 5
        result.o = *(arg1 + 0x19c)
        return result
