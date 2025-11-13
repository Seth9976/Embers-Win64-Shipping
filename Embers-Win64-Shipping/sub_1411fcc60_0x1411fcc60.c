// 函数: sub_1411fcc60
// 地址: 0x1411fcc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_418
int64_t result = __security_cookie ^ &var_418
int64_t result_1 = result
uint64_t rbx = arg1
int64_t* var_3d8 = arg4
void* var_3e0 = arg3

if (data_1439b6114 s> 0)
    int32_t i = 0
    int64_t var_3b0 = 0
    int64_t var_3a8_1 = 0
    
    if (*(arg3 + 8) s> 0)
        int64_t r13_1 = 0
        
        do
            if (i s< arg4[1].d)
                int64_t* r12_2 = *arg4 + r13_1
                void* rdi_2 = sx.q(i) * 0x5240 + *arg3
                
                if (r12_2[1].d s> 0)
                    int64_t* var_3e8 = nullptr
                    void* r14_1 = &r12_2[8]
                    void var_398
                    sub_1411c92d0(r14_1, sub_1411d8ec0(&var_398, rbx, rdi_2, r12_2, &var_3e8))
                    sub_1410ebc60(&var_398)
                    void var_2b8
                    sub_1419928d0(&var_2b8, rbx)
                    void*** rax_4 = sub_1411e59d0(&var_2b8, rdi_2, r14_1)
                    void*** j = *r12_2
                    
                    for (void* rsi_2 = sx.q(r12_2[1].d) * 0xe0 + j; j != rsi_2; j = &j[0x1c])
                        sub_1411d7a20(&var_2b8, arg2, rdi_2, r14_1, j)
                    
                    if (data_1439b612c s> 0)
                        void* j_1 = *r12_2
                        
                        for (void* rsi_4 = sx.q(r12_2[1].d) * 0xe0 + j_1; j_1 != rsi_4; j_1 += 0xe0)
                            sub_1411d70d0(&var_2b8, rdi_2, r14_1, j_1)
                    
                    sub_1411d6880(&var_2b8, rdi_2, r12_2, rax_4, &var_3e8)
                    sub_14199ef00(&var_2b8)
                    int32_t var_90_1 = 0
                    int32_t var_8c
                    void var_98
                    
                    if (var_8c != 0)
                        sub_1410b3aa0(&var_98, 0)
                    int32_t var_108_1 = 0
                    int32_t var_104
                    void var_110
                    
                    if (var_104 != 0)
                        sub_1410b3aa0(&var_110, 0)
                    int32_t var_160_1 = 0
                    int32_t var_1a0_1 = 0
                    int32_t var_19c
                    void var_1a8
                    
                    if (var_19c != 0)
                        sub_1410b3bb0(&var_1a8, 0)
                    int32_t var_178_1 = 0xffffffff
                    int32_t var_174_1 = 0
                    void var_198
                    sub_141095ed0(&var_198, 0)
                    int32_t var_1b0_1 = 0
                    int32_t var_1f0_1 = 0
                    int32_t var_1ec
                    void var_1f8
                    
                    if (var_1ec != 0)
                        sub_1410b3bb0(&var_1f8, 0)
                    int32_t var_1c8_1 = 0xffffffff
                    int32_t var_1c4_1 = 0
                    void var_1e8
                    sub_141095ed0(&var_1e8, 0)
                    int32_t var_200_1 = 0
                    void var_248
                    sub_1411c8df0(&var_248)
                    int32_t var_250_1 = 0
                    void var_298
                    sub_14108c840(&var_298)
                    int64_t* rcx_18 = var_3e8
                    
                    if (rcx_18 != 0)
                        sub_1411e8d60(rcx_18)
                    
                    rbx = arg1
                    arg4 = var_3d8
                    arg3 = var_3e0
            
            i += 1
            r13_1 += 0x130
        while (i s< *(arg3 + 8))
    
    result = sub_1410eb260(&var_3b0)

__security_check_cookie(result_1 ^ &var_418)
return result
