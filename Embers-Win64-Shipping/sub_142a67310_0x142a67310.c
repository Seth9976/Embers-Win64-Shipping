// 函数: sub_142a67310
// 地址: 0x142a67310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = 0
int32_t result

if ((*(*arg1 + 0x20))().b != 0)
    result = result_1
    uint128_t zmm6 = zx.o(0)
    uint128_t zmm7
    
    if (result s> 0)
        zmm7 = zx.o(0)
    else if (arg1[1].b != 0)
        zmm7 = zx.o(arg1[0x1c])
    else
        (*(*arg1 + 0xd8))(arg1, &result_1)
        result = result_1
        
        if (result s> 0)
            zmm7 = zx.o(0)
        else
            if (arg1[0x1d].b != 0 || *(arg1 + 0xa) == 0)
                *(arg1 + 9) = 0
            
            arg1[1].b = 1
            *(arg1 + 0xb) = 0
            zmm7 = zx.o(arg1[0x1c])
    
    if (result s<= 0)
        if (arg2[1].b != 0)
            zmm6 = zx.o(arg2[0x1c])
        else
            (*(*arg2 + 0xd8))(arg2, &result_1)
            result = result_1
            
            if (result s<= 0)
                if (arg2[0x1d].b != 0 || *(arg2 + 0xa) == 0)
                    *(arg2 + 9) = 0
                
                arg2[1].b = 1
                *(arg2 + 0xb) = 0
                zmm6 = zx.o(arg2[0x1c])
    
    zmm7.q f- zmm6.q
    
    if (not(is_unordered.q(zmm7.q, zmm6.q)) && not(zmm7.q f!= zmm6.q) && result s<= 0)
        result.b = 1
        return result

result.b = 0
return result
