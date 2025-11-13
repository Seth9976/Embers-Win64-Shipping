// 函数: sub_141b6d720
// 地址: 0x141b6d720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
uint64_t result = __security_cookie ^ &var_d8
uint64_t result_1 = result
void* r14 = arg1 + 0x20
int128_t zmm6
int128_t var_38 = zmm6

for (int32_t i = 0; i s< 7; )
    int32_t rdi_1 = 1 << i.b
    
    if ((*(arg2 + 0x1c) & rdi_1) != 0)
        uint64_t rsi_1 = zx.q(i.b)
        zmm6 = *(arg2 + (rsi_1 << 2))
        int128_t zmm0
        
        if (arg4 == 1)
        label_141b6d846:
            zmm6.d = zmm6.d f* arg3.d
            
            if ((*(arg1 + 0x1c) & rdi_1) != 0)
                zmm6.d = zmm6.d f+ *(arg1 + (rsi_1 << 2))
            
            *(arg1 + (rsi_1 << 2)) = zmm6.d
            *(arg1 + 0x1c) |= rdi_1
            zmm0.d = arg3.d f+ *r14
            *r14 = zmm0.d
        else
            if (arg4 == 4)
                if (*(arg1 + 0x7c) == 0)
                    *(arg1 + 0x78) = 0
                    *(arg1 + 0x7c) = 1
                    void var_b8
                    int128_t* rax_1 = sub_141bae030(arg5, &var_b8)
                    int32_t var_5c_1 = 0x7f
                    int128_t var_98_1 = *rax_1
                    result = zx.q((*(rax_1 + 0x18)).d)
                    int32_t var_60_1 = result.d
                    zmm0.q = (_mm_unpacklo_ps(rax_1[1].d, (*(rax_1 + 0x14)).q)).q
                    *(arg1 + 0x5c) = var_98_1
                    int128_t var_68 = zmm0
                    *(arg1 + 0x6c) = zmm0
                
                zmm6.d = zmm6.d f+ *(arg1 + (rsi_1 << 2) + 0x5c)
                goto label_141b6d846
            
            if (arg4 == 2)
                zmm6.d = zmm6.d f* arg3.d
                
                if ((*(arg1 + 0x58) & rdi_1) != 0)
                    zmm6.d = zmm6.d f+ *(arg1 + (rsi_1 << 2) + 0x3c)
                
                *(arg1 + (rsi_1 << 2) + 0x3c) = zmm6.d
                *(arg1 + 0x58) |= rdi_1
    
    i += 1
    r14 += 4

__security_check_cookie(result_1 ^ &var_d8)
return result
