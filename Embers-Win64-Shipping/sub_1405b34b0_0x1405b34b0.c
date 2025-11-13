// 函数: sub_1405b34b0
// 地址: 0x1405b34b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int128_t* result = __security_cookie ^ &var_a8
int128_t* result_1 = result
void* r14 = arg2 + 0x1c
int128_t zmm6
int128_t var_38 = zmm6
float zmm7[0x4] = arg3

for (int32_t i = 0; i s< 6; )
    int32_t rdi_1 = 1 << i.b
    
    if ((*(arg1 + 0x20) & rdi_1) != 0)
        uint64_t rsi_1 = zx.q(i.b)
        zmm6 = *(arg1 + (rsi_1 << 2) + 8)
        
        if (arg4 == 1)
        label_1405b35ad:
            zmm6.d = zmm6.d f* zmm7[0]
            
            if ((*(arg2 + 0x18) & rdi_1) != 0)
                zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2))
            
            *(arg2 + (rsi_1 << 2)) = zmm6.d
            *(arg2 + 0x18) |= rdi_1
            zmm7[0] = zmm7[0] f+ *r14
            *r14 = zmm7[0]
        else
            if (arg4 == 4)
                if (*(arg2 + 0x6c) == 0)
                    *(arg2 + 0x68) = 0
                    *(arg2 + 0x6c) = 1
                    void var_88
                    result = sub_1405bd220(arg5, &var_88)
                    float zmm0[0x4] = *result
                    arg3 = *(result + 0x14)
                    float zmm3[0x4] = zmm0
                    float var_70_1[0x4] = zmm0
                    zmm0 = result[1].d
                    *(arg2 + 0x50) = zmm3
                    *(arg2 + 0x60) = (_mm_unpacklo_ps(zmm0, arg3[0].q)).q
                    *(arg2 + 0x68) = 0x3f
                
                zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2) + 0x50)
                goto label_1405b35ad
            
            if (arg4 == 2)
                zmm6.d = zmm6.d f* zmm7[0]
                
                if ((*(arg2 + 0x4c) & rdi_1) != 0)
                    zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2) + 0x34)
                
                *(arg2 + (rsi_1 << 2) + 0x34) = zmm6.d
                *(arg2 + 0x4c) |= rdi_1
    
    i += 1
    r14 += 4

__security_check_cookie(result_1 ^ &var_a8)
return result
