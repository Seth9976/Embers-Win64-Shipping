// 函数: sub_141b04880
// 地址: 0x141b04880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r15 = arg2 + 0x28
int128_t zmm7 = arg3
int128_t zmm6
int128_t var_38 = zmm6

for (int32_t i = 0; i s< 9; )
    int32_t rsi_1 = 1 << i.b
    
    if ((*(arg1 + 0x2c) & rsi_1) != 0)
        uint64_t rbp_1 = zx.q(i.b)
        zmm6 = *(arg1 + (rbp_1 << 2) + 8)
        
        if (arg4 == 1)
        label_141b0494a:
            zmm6.d = zmm6.d f* zmm7.d
            
            if ((*(arg2 + 0x24) & rsi_1) != 0)
                zmm6.d = zmm6.d f+ *(arg2 + (rbp_1 << 2))
            
            *(arg2 + (rbp_1 << 2)) = zmm6.d
            *(arg2 + 0x24) |= rsi_1
            *r15 = zmm7.d f+ *r15
        else
            if (arg4 == 4)
                if (*(arg2 + 0x9c) == 0)
                    *(arg2 + 0x98) = 0
                    *(arg2 + 0x9c) = 1
                    void var_78
                    result, zmm6, zmm7 = sub_141b295c0(sub_141b226f0(arg5, &var_78), arg2 + 0x74)
                
                zmm6.d = zmm6.d f+ *(arg2 + (rbp_1 << 2) + 0x74)
                goto label_141b0494a
            
            if (arg4 == 2)
                zmm6.d = zmm6.d f* zmm7.d
                
                if ((*(arg2 + 0x70) & rsi_1) != 0)
                    zmm6.d = zmm6.d f+ *(arg2 + (rbp_1 << 2) + 0x4c)
                
                *(arg2 + (rbp_1 << 2) + 0x4c) = zmm6.d
                *(arg2 + 0x70) |= rsi_1
    
    i += 1
    r15 += 4

return result
