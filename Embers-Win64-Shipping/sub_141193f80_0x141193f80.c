// 函数: sub_141193f80
// 地址: 0x141193f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
uint64_t result = __security_cookie ^ &var_318
uint64_t result_1 = result
int64_t* rbx = arg4
int64_t* var_2e0 = rbx
void* var_2e8 = arg2
int64_t var_2d8 = arg1

if (data_1439b5f88 s> 0)
    result = zx.q(*(arg2 + 8))
    
    if (result.d != 0 && *arg4 != 0 && arg3 != 0)
        int32_t i = 0
        
        if (result.d != 0)
            do
                result = sx.q(i)
                void* rdi_2 = result * 0xe8 + *arg3
                
                if (*(rdi_2 + 0xa0) != 0 && *(rdi_2 + 0xb0) != 0 && i u<= *(arg3 + 0x18))
                    void* r15_2 = result * 0x5240 + *arg2
                    void* r12_2 = *(arg3 + 0x10) + result * 0x130
                    void var_2d0
                    sub_1419928d0(&var_2d0, arg1)
                    void*** r14_1
                    
                    if (*rbx == 0)
                        r14_1 = nullptr
                    else
                        r14_1 = sub_1410fccd0(&var_2d0, rbx, u"AOTexture", 0)
                    
                    int32_t** rax_2 = *(arg3 + 0x10)
                    int32_t* j = rax_2[result * 0x26]
                    
                    for (void* rbp_3 = sx.q(rax_2[result * 0x26 + 1].d) * 0xe0 + j; j != rbp_3; 
                            j = &j[0x38])
                        void*** var_2f0_1 = r14_1
                        sub_141182e90(&var_2d0, r15_2, rdi_2, r12_2, j)
                    
                    sub_14199ef00(&var_2d0)
                    result = sub_1410eb9e0(&var_2d0)
                    arg2 = var_2e8
                    arg1 = var_2d8
                    rbx = var_2e0
                
                i += 1
            while (i u< *(arg2 + 8))

__security_check_cookie(result_1 ^ &var_318)
return result
