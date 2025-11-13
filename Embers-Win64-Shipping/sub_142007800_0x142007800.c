// 函数: sub_142007800
// 地址: 0x142007800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
int32_t i = 0
uint128_t zmm8 = arg2

if (*(arg1 + 0x30) s> 0)
    void* rdi_1 = nullptr
    
    do
        void* rsi_1 = *(arg1 + 0x28)
        uint128_t zmm0_1
        int32_t zmm6_1
        int32_t zmm7_1
        zmm0_1, zmm6_1, zmm7_1, zmm8 =
            sub_141f86ef0(sub_141f8b8d0(rsi_1 + 8 + rdi_1), zmm8, zx.o(0))
        result = (*(rdi_1 + rsi_1)).b
        arg2.d = zmm0_1.d f* zmm7_1
        
        if ((result & 1) != 0)
            zmm0_1 = *arg3
            
            if (not(arg2.d f< zmm0_1.d))
                zmm0_1 = _mm_min_ss(arg2.d, zmm6_1)
            
            *arg3 = zmm0_1.d
            result = (*(rdi_1 + rsi_1)).b
        
        if ((result & 2) != 0)
            zmm0_1 = *(arg3 + 4)
            
            if (not(arg2.d f< zmm0_1.d))
                zmm0_1 = _mm_min_ss(arg2.d, zmm6_1)
            
            *(arg3 + 4) = zmm0_1.d
            result = (*(rdi_1 + rsi_1)).b
        
        if ((result & 4) != 0)
            zmm0_1 = *(arg3 + 8)
            
            if (not(arg2.d f< zmm0_1.d))
                zmm0_1 = _mm_min_ss(arg2.d, zmm6_1)
            
            *(arg3 + 8) = zmm0_1.d
            result = (*(rdi_1 + rsi_1)).b
        
        if ((result & 8) != 0)
            zmm0_1 = *(arg3 + 0xc)
            
            if (not(arg2.d f< zmm0_1.d))
                zmm0_1 = _mm_min_ss(arg2.d, zmm6_1)
            
            *(arg3 + 0xc) = zmm0_1.d
        
        i += 1
        rdi_1 += 0x90
    while (i s< *(arg1 + 0x30))

return result
