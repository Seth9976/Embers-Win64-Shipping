// 函数: sub_141b90d90
// 地址: 0x141b90d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int128_t* result = __security_cookie ^ &var_88
int128_t* result_1 = result
void* r14 = arg2 + 0x14
int128_t zmm6
int128_t var_38 = zmm6

for (int32_t i = 0; i s< 4; )
    int32_t rdi_1 = 1 << i.b
    
    if ((*(arg1 + 0x18) & rdi_1) != 0)
        uint64_t rsi_1 = zx.q(i.b)
        zmm6 = *(arg1 + (rsi_1 << 2) + 8)
        
        if (arg4 == 1)
        label_141b90e6f:
            zmm6.d = zmm6.d f* arg3.d
            
            if ((*(arg2 + 0x10) & rdi_1) != 0)
                zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2))
            
            *(arg2 + (rsi_1 << 2)) = zmm6.d
            *(arg2 + 0x10) |= rdi_1
            int128_t zmm0
            zmm0.d = arg3.d f+ *r14
            *r14 = zmm0.d
        else
            if (arg4 == 4)
                if (*(arg2 + 0x4c) == 0)
                    *(arg2 + 0x48) = 0
                    *(arg2 + 0x4c) = 1
                    void var_68
                    result = sub_141b22820(arg5, &var_68)
                    *(arg2 + 0x38) = *result
                    *(arg2 + 0x48) = 0xf
                
                zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2) + 0x38)
                goto label_141b90e6f
            
            if (arg4 == 2)
                zmm6.d = zmm6.d f* arg3.d
                
                if ((*(arg2 + 0x34) & rdi_1) != 0)
                    zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2) + 0x24)
                
                *(arg2 + (rsi_1 << 2) + 0x24) = zmm6.d
                *(arg2 + 0x34) |= rdi_1
    
    i += 1
    r14 += 4

__security_check_cookie(result_1 ^ &var_88)
return result
