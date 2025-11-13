// 函数: sub_140b76170
// 地址: 0x140b76170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8

if ((*(*arg1 + 0x50))(arg1, &arg_8) != 0)
    uint128_t zmm0 = zx.o(arg_8)
    
    if (not(zmm0.q f< 0.0) && not(zmm0.q f> -1.0 f+ 1.8446744073709552e+19))
        double zmm0_1 = sub_140adf880(zmm0)
        int64_t zmm1 = 0x43e0000000000000
        int64_t rcx = 0
        
        if (not(zmm0_1 f< zmm1))
            zmm0_1 = zmm0_1 f- zmm1
            
            if (not(zmm0_1 f>= zmm1))
                rcx = -0x8000000000000000
        
        *arg2 = int.q(zmm0_1) + rcx
        int64_t result
        result.b = 1
        return result

return 0
