// 函数: sub_140f041e0
// 地址: 0x140f041e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int32_t arg_10
(*(*rcx + 0x38))(rcx, &arg_10)
int64_t* rcx_1 = *arg2
int32_t arg_18
(*(*rcx_1 + 0x18))(rcx_1, &arg_18)
int128_t zmm1 = *arg3
int32_t zmm2 = arg_10

if (not(zmm1.d f< zmm2))
    int128_t zmm0
    zmm0.d = arg_18.d f+ zmm2
    
    if (not(zmm1.d f>= zmm0.d))
        zmm1 = *(arg3 + 4)
        
        if (not(zmm1.d f< arg5))
            zmm0.d = arg6.d f+ arg5
            
            if (not(zmm1.d f>= zmm0.d))
                int64_t* rcx_2 = *arg2
                void var_b0
                (*(*rcx_2 + 0x10))(rcx_2, &var_b0, arg5)
                int64_t* rcx_3 = *arg2
                int16_t var_48
                (*(*rcx_3 + 0x20))(rcx_3, &var_48)
                int64_t* r9_1 = *(arg1 + 0x78)
                int32_t rcx_4 = r9_1[1].d
                int16_t* r9_2
                
                if (rcx_4 == 0)
                    r9_2 = &data_142d40450
                else
                    r9_2 = *r9_1
                
                zmm0 = *(arg1 + 0xa0)
                char rdi_1 = 0
                int32_t rax_4 = rcx_4 - 1
                zmm1 = *(arg1 + 0xb0)
                int32_t var_a0_1 = arg4.d
                
                if (rcx_4 == 0)
                    rax_4 = 0
                
                int32_t var_b4_1 = rax_4
                int64_t var_a8 = 0.q
                int16_t var_9c_1 = var_48
                int64_t var_98_1 = *(arg1 + 0x90)
                int64_t var_90_1 = *(arg1 + 0x98)
                int64_t var_68_1 = *(arg1 + 0xc0)
                int64_t* rax_10 = *(arg1 + 0xc8)
                int128_t var_88_1 = zmm0
                int128_t var_78_1 = zmm1
                
                if (rax_10 != 0)
                    rax_10[1].d += 1
                
                zmm0.d = (*arg3).d f- arg_10
                int64_t var_58_1 = *(arg1 + 0xd0)
                int32_t var_50_1 = *(arg1 + 0xd8)
                char var_4c_1 = *(arg1 + 0xdc)
                void var_40
                int32_t rax_15 = sub_140efca70(&var_40, &var_a8, &var_b0, r9_2, int.d(zmm0.d))
                
                if (rax_10 != 0)
                    rax_10[1].d -= 1
                    
                    if (rax_10[1].d == 1)
                        int64_t rdx_5 = *rax_10
                        (*rdx_5)(rax_10, rdx_5)
                        int32_t temp1_1 = *(rax_10 + 0xc)
                        *(rax_10 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rax_10 + 8))(rax_10, 1)
                
                if (arg7 != 0)
                    int32_t var_ac
                    
                    if (rax_15 == var_ac)
                        rdi_1 = 2
                    
                    *arg7 = rdi_1
                
                int64_t* var_38
                
                if (var_38 != 0)
                    var_38[1].d -= 1
                    
                    if (var_38[1].d == 1)
                        (**var_38)(var_38)
                        int32_t temp3_1 = *(var_38 + 0xc)
                        *(var_38 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*var_38 + 8))(var_38, 1)
                
                return zx.q(rax_15)

return 0xffffffff
