// 函数: sub_141b041c0
// 地址: 0x141b041c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t result = __security_cookie ^ &var_98
int64_t result_1 = result
void* r14 = arg2 + 0xc
int128_t zmm6
int128_t var_38 = zmm6

for (int32_t i = 0; i s< 2; )
    int32_t rdi_1 = 1 << i.b
    
    if ((*(arg1 + 0x10) & rdi_1) != 0)
        uint64_t rsi_1 = zx.q(i.b)
        zmm6 = *(arg1 + (rsi_1 << 2) + 8)
        
        if (arg4 == 1)
        label_141b042c6:
            zmm6.d = zmm6.d f* arg3.d
            
            if ((*(arg2 + 8) & rdi_1) != 0)
                zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2))
            
            *(arg2 + (rsi_1 << 2)) = zmm6.d
            *(arg2 + 8) |= rdi_1
            int64_t zmm0
            zmm0.d = arg3.q.d f+ *r14
            *r14 = zmm0.d
        else
            if (arg4 == 4)
                if (*(arg2 + 0x2c) == 0)
                    *(arg2 + 0x28) = 0
                    *(arg2 + 0x2c) = 1
                    void var_70
                    int64_t* rax_1 = sub_141b22a70(arg5, &var_70)
                    int32_t var_74_1 = *(rax_1 + 4)
                    result = (*rax_1).d.q
                    *(arg2 + 0x20) = result
                    *(arg2 + 0x28) = 3
                
                zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2) + 0x20)
                goto label_141b042c6
            
            if (arg4 == 2)
                zmm6.d = zmm6.d f* arg3.d
                
                if ((*(arg2 + 0x1c) & rdi_1) != 0)
                    zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2) + 0x14)
                
                *(arg2 + (rsi_1 << 2) + 0x14) = zmm6.d
                *(arg2 + 0x1c) |= rdi_1
    
    i += 1
    r14 += 4

__security_check_cookie(result_1 ^ &var_98)
return result
