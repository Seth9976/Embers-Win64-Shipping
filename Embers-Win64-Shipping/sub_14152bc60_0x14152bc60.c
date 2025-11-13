// 函数: sub_14152bc60
// 地址: 0x14152bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = zx.o(arg5)
uint128_t zmm7
zmm7.q = zmm6.q f* zmm6.q
char rax
uint128_t zmm6_1
double zmm7_1
rax, zmm6_1, zmm7_1 = sub_141527e80(arg2, arg3, arg4, zmm6, zmm7.q)

if (rax == 0)
    uint128_t zmm6_2
    double zmm7_2
    rax, zmm6_2, zmm7_2 = sub_141527e10(arg2, arg3, zx.o(arg7), zmm6_1, zmm7_1)
    
    if (rax == 0)
        uint128_t zmm6_3
        double zmm7_3
        rax, zmm6_3, zmm7_3 = sub_141527e10(arg2, zx.o(arg6), zx.o(arg7), zmm6_2, zmm7_2)
        
        if (rax == 0 && sub_141527e10(arg2, zx.o(arg6), arg4, zmm6_3, zmm7_3) == 0)
            return 1

return 0
