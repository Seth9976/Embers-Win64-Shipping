// 函数: sub_141739ef0
// 地址: 0x141739ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7

for (; arg2 != 0; arg2 = *(arg2 + 0x30))
    int32_t* j = *(arg2 + 8)
    int32_t* result = nullptr
    float zmm3 = -3.40282347e+38f
    
    if (j != 0)
        int64_t r10_1 = *(arg1 + 0x28)
        float zmm4 = *(arg2 + 0x20)
        float zmm5 = *(arg2 + 0x1c)
        zmm6 = *(arg2 + 0x24)
        int32_t* rax_2
        
        do
            int64_t rcx = sx.q(*j) * 3
            rax_2 = j
            j = *(j + 0x10)
            float zmm2 = zmm4 f* *(r10_1 + (rcx << 2) + 4) + zmm5 f* *(r10_1 + (rcx << 2))
                + zmm6.d f* *(r10_1 + (rcx << 2) + 8)
            float temp0_1 = _mm_max_ss(zmm2, zmm3)
            
            if (zmm2 <= zmm3)
                rax_2 = result
            
            result = rax_2
            zmm3 = temp0_1
        while (j != 0)
        
        if (rax_2 != 0)
            void* rcx_1 = *(rax_2 + 8)
            
            if (rcx_1 != 0)
                *(rcx_1 + 0x10) = *(rax_2 + 0x10)
            
            void* rax_5 = *(result + 0x10)
            
            if (rax_5 != 0)
                *(rax_5 + 8) = *(result + 8)
            
            if (result == *(arg2 + 8))
                *(arg2 + 8) = *(result + 0x10)
            
            *(result + 0x20) = arg2
            return result

return 0
