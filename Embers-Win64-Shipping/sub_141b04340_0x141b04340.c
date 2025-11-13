// 函数: sub_141b04340
// 地址: 0x141b04340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
uint64_t result = __security_cookie ^ &var_a8
uint64_t result_1 = result
void* r14 = arg2 + 0x10
int128_t zmm6
int128_t var_38 = zmm6

for (int32_t i = 0; i s< 3; )
    int32_t rdi_1 = 1 << i.b
    
    if ((*(arg1 + 0x14) & rdi_1) != 0)
        uint64_t rsi_1 = zx.q(i.b)
        zmm6 = *(arg1 + (rsi_1 << 2) + 8)
        
        if (arg4 == 1)
        label_141b04441:
            zmm6.d = zmm6.d f* arg3.d
            
            if ((*(arg2 + 0xc) & rdi_1) != 0)
                zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2))
            
            *(arg2 + (rsi_1 << 2)) = zmm6.d
            *(arg2 + 0xc) |= rdi_1
            uint128_t zmm0
            zmm0.d = arg3.d f+ *r14
            *r14 = zmm0.d
        else
            if (arg4 == 4)
                if (*(arg2 + 0x3c) == 0)
                    *(arg2 + 0x38) = 0
                    *(arg2 + 0x3c) = 1
                    void var_88
                    int64_t* rax_1 = sub_141b22c80(arg5, &var_88)
                    int32_t var_6c_1 = 7
                    result = *rax_1
                    int32_t var_70_1 = rax_1[1].d
                    *(arg2 + 0x2c) = result.o
                
                zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2) + 0x2c)
                goto label_141b04441
            
            if (arg4 == 2)
                zmm6.d = zmm6.d f* arg3.d
                
                if ((*(arg2 + 0x28) & rdi_1) != 0)
                    zmm6.d = zmm6.d f+ *(arg2 + (rsi_1 << 2) + 0x1c)
                
                *(arg2 + (rsi_1 << 2) + 0x1c) = zmm6.d
                *(arg2 + 0x28) |= rdi_1
    
    i += 1
    r14 += 4

__security_check_cookie(result_1 ^ &var_a8)
return result
