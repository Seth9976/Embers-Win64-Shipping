// 函数: sub_142c0c860
// 地址: 0x142c0c860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm2 = arg1[2]
uint128_t zmm1 = zx.o(*arg1)
int64_t zmm3
int64_t zmm4

if (not(zmm2 f<= zmm1.q))
    zmm3 = arg1[3]
    zmm4 = arg1[1]

uint128_t result

if (zmm2 f<= zmm1.q || zmm3 f<= zmm4)
    result = *arg2
    *arg1 = result
    *(arg1 + 0x10) = *(arg2 + 0x10)
else
    int64_t zmm5 = *arg2
    result = zx.o(arg2[2])
    
    if (not(result.q f<= zmm5))
        result = zx.o(arg2[3])
        
        if (not(result.q f<= arg2[1]))
            if (not(zmm1.q f<= zmm5))
                *arg1 = *arg2
            
            if (not(arg2[2] f<= zmm2))
                arg1[2] = arg2[2]
            
            if (not(zmm4 f<= arg2[1]))
                arg1[1] = arg2[1]
            
            result = zx.o(arg2[3])
            
            if (not(result.q f<= zmm3))
                result = zx.o(arg2[3])
                arg1[3] = result.q

return result
