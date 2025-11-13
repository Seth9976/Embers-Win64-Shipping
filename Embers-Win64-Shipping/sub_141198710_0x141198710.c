// 函数: sub_141198710
// 地址: 0x141198710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
uint64_t result = zx.q(*(arg2 + 8))
void* rbx = arg3
void* var_2d8 = rbx
void* r9 = arg2
int64_t r13 = arg1

if (result.d != 0 && rbx != 0 && data_1439b5f80 s> 0)
    int32_t i = 0
    
    if (result.d != 0)
        do
            result = sx.q(i)
            void* rdi_2 = result * 0xe8 + *rbx
            
            if (*(rdi_2 + 0xa0) != 0 && *(rdi_2 + 0xb0) != 0 && i u<= *(rbx + 0x18))
                arg3.b = 0
                int64_t* rsi_1 = result * 0x130
                int64_t r15_1 = result * 0x5240
                void* r12_2 = *(rbx + 0x10) + rsi_1
                void* j = *r12_2
                result = sx.q(*(r12_2 + 8))
                int64_t* r15_2 = r15_1 + *r9
                
                for (void* rdx_1 = result * 0xe0 + j; j != rdx_1; j += 0xe0)
                    if (*(j + 0xd0) != 0)
                        arg3.b = 1
                        break
                
                if (arg3.b != 0)
                    void var_2c0
                    sub_1419928d0(&var_2c0, r13)
                    void*** rax_3 =
                        sub_1410fccd0(&var_2c0, sub_14139d440(&data_143ec4c60), External", 0)
                    int64_t rcx_3 = *(rbx + 0x10)
                    void* j_1 = *(rsi_1 + rcx_3)
                    
                    for (void* rsi_3 = sx.q(*(rsi_1 + rcx_3 + 8)) * 0xe0 + j_1; j_1 != rsi_3; 
                            j_1 += 0xe0)
                        if (*(j_1 + 0xd0) != 0)
                            sub_1411831a0(&var_2c0, r15_2, rdi_2, r12_2, j_1, rax_3, nullptr)
                    
                    sub_14199ef00(&var_2c0)
                    int32_t var_98_1 = 0
                    int32_t var_94
                    void var_a0
                    
                    if (var_94 != 0)
                        sub_1410b3aa0(&var_a0, 0)
                    int32_t var_110_1 = 0
                    int32_t var_10c
                    void var_118
                    
                    if (var_10c != 0)
                        sub_1410b3aa0(&var_118, 0)
                    int32_t var_168_1 = 0
                    int32_t var_1a8_1 = 0
                    int32_t var_1a4
                    void var_1b0
                    
                    if (var_1a4 != 0)
                        sub_1410b3bb0(&var_1b0, 0)
                    int32_t var_180_1 = 0xffffffff
                    int32_t var_17c_1 = 0
                    void var_1a0
                    sub_141095ed0(&var_1a0, 0)
                    int32_t var_1b8_1 = 0
                    int32_t var_1f8_1 = 0
                    int32_t var_1f4
                    void var_200
                    
                    if (var_1f4 != 0)
                        sub_1410b3bb0(&var_200, 0)
                    int32_t var_1d0_1 = 0xffffffff
                    int32_t var_1cc_1 = 0
                    void var_1f0
                    sub_141095ed0(&var_1f0, 0)
                    int32_t var_208_1 = 0
                    void var_250
                    sub_141096480(&var_250, 0)
                    int32_t var_258_1 = 0
                    void var_2a0
                    result, arg3 = sub_14108c840(&var_2a0)
                    r9 = arg2
                    rbx = var_2d8
                    r13 = arg1
            
            i += 1
        while (i u< *(r9 + 8))

__security_check_cookie(rax_1 ^ &var_318)
return result
