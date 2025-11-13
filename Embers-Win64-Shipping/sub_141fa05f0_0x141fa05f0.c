// 函数: sub_141fa05f0
// 地址: 0x141fa05f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int512_t zmm1
int128_t zmm6_1
result, zmm1, zmm6_1 = sub_141f9d2e0(arg1, arg2)

if (*(arg1 + 0x24) == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x20) s> 0)
        do
            if (i s> 0)
                result, zmm1, zmm6_1 = sub_1419a21e0(0)
            
            int32_t j = 0
            
            if (*(arg1 + 0x18) s> 0)
                int64_t* rsi_1 = nullptr
                
                do
                    zmm1.o = zmm6_1
                    int64_t* rcx = *(rsi_1 + *(arg1 + 0x10))
                    result = (*(*rcx + 0x10))(rcx, zmm1, zx.q(arg3))
                    j += 1
                    rsi_1 = &rsi_1[1]
                while (j s< *(arg1 + 0x18))
            
            i += 1
        while (i s< *(arg1 + 0x20))
    
    *(arg1 + 0x20) = 1

return result
