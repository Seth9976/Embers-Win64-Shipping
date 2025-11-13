// 函数: sub_14152b620
// 地址: 0x14152b620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm9 = zx.o(arg8)
uint128_t zmm8
zmm8.q = arg5 f* zmm9.q
uint128_t zmm12
zmm12.q = arg4.q f* arg4.q
zmm8.q = zmm8.q f+ zmm12.q
char rax
uint128_t zmm6_1
uint128_t zmm8_1
rax, zmm6_1, zmm8_1 = sub_141527e80(arg2, arg3, arg4, zmm9, zmm8.q)

if (rax == 0)
    uint128_t zmm6_2
    uint128_t zmm7_1
    rax, zmm6_2, zmm7_1 = sub_141527e10(arg2, zx.o(arg6), zmm6_1, zmm9, zmm8_1.q)
    
    if (rax == 0)
        zmm9.q = zmm7_1.q f* zmm7_1.q
        zmm8_1.q = zmm9.q f+ zmm12.q
        uint128_t zmm6_3
        uint128_t zmm7_2
        rax, zmm6_3, zmm7_2 = sub_141527e10(arg2, zx.o(arg6), zmm6_2, zmm7_1, zmm8_1.q)
        
        if (rax == 0)
            double zmm6_4
            uint128_t zmm7_3
            rax, zmm6_4, zmm7_3 = sub_141527e10(arg2, arg3, zmm6_3, zmm7_2, zmm8_1.q)
            
            if (rax == 0)
                zmm8_1 = zx.o(arg7)
                double zmm6_5
                uint128_t zmm7_4
                rax, zmm6_5, zmm7_4 =
                    sub_141527e10(arg2, arg3, zmm8_1, zmm7_3, zmm6_4 f* zmm8_1.q f+ zmm9.q)
                
                if (rax == 0 && sub_141527e10(arg2, zx.o(arg6), zmm8_1, zmm7_4, zmm6_5) == 0)
                    return 1

return 0
