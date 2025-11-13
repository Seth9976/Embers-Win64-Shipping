// 函数: sub_141e062d0
// 地址: 0x141e062d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int128_t zmm6
int128_t var_28 = zmm6
void* result

if (*(arg1 + 0x80) s<= 0)
label_141e06367:
    result.b = 0
else
    int64_t* r14_1 = nullptr
    
    while (true)
        int64_t* rdx = *(r14_1 + *(arg1 + 0x78))
        
        if (rdx != 0)
            void* rbp_1 = *rdx
            
            if (rbp_1 != 0 && not(0f f== rdx[0x2a].d) && rdx[5].b != 0
                    && *(rbp_1 + 0x20) == sub_140cde0b0())
                result = sub_141e21f60(rbp_1, arg3)
                
                if (result != 0 && *(result + 8) == 1)
                    result.b = **result == arg2
                    break
        
        rsi += 1
        r14_1 = &r14_1[1]
        
        if (rsi s>= *(arg1 + 0x80))
            goto label_141e06367

return result
