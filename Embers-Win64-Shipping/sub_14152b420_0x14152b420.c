// 函数: sub_14152b420
// 地址: 0x14152b420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = zx.o(arg5)
uint128_t zmm10
uint128_t var_58 = zmm10
double zmm0 = arg4.q f* arg4.q
uint128_t zmm13
uint128_t var_88 = zmm13
uint128_t zmm15 = zx.o(arg6)
uint128_t zmm7
zmm7.q = arg3.q f* zmm15.q
uint128_t zmm14
zmm14.q = zmm6.q f* zmm6.q
uint128_t zmm9
zmm9.q = zmm7.q f+ zmm0
char rax
uint128_t zmm6_1
double zmm7_1
rax, zmm6_1, zmm7_1 = sub_141527e80(arg2, zmm15, arg4, zmm6, zmm9.q f+ zmm14.q)

if (rax == 0)
    zmm13 = zx.o(arg7)
    zmm10.q = arg4.q f* zmm13.q
    uint128_t zmm6_2
    rax, zmm6_2 = sub_141527e10(arg2, zmm15, zmm13, zmm6_1, zmm10.q + zmm7_1 f+ zmm14.q)
    
    if (rax == 0)
        double zmm8_1 = arg3.q f* arg3.q f+ zmm10.q
        double zmm6_3
        rax, zmm6_3 = sub_141527e10(arg2, arg3, zmm13, zmm6_2, zmm8_1 f+ zmm14.q)
        
        if (rax == 0)
            zmm10 = zx.o(arg8)
            double zmm6_4
            double zmm7_3
            rax, zmm6_4, zmm7_3 =
                sub_141527e10(arg2, arg3, zmm13, zmm10, zmm8_1 + zmm6_3 f* zmm10.q)
            
            if (rax == 0)
                int64_t zmm6_5
                rax, zmm6_5 = sub_141527e10(arg2, arg3, arg4, zmm10, zmm7_3 + zmm0 + zmm6_4)
                
                if (rax == 0)
                    zmm9.q = zmm9.q f+ zmm6_5
                    
                    if (sub_141527e10(arg2, zmm15, arg4, zmm10, zmm9.q) == 0)
                        return 1

return 0
