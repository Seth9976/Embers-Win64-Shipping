// 函数: sub_1426b04d0
// 地址: 0x1426b04d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t result = (*(*arg1 + 0x150))()

if (result != 0)
    int64_t* rbx_1 = *(result + 0x120)
    
    if (rbx_1 != 0)
        void* rax_3 = sub_14269bba0()
        void* rcx = rbx_1[2]
        result = sx.q(*(rax_3 + 0x38))
        
        if (result.d s<= *(rcx + 0x38))
            int64_t result_2 = result
            result = *(rcx + 0x30)
            
            if (*(result + (result_2 << 3)) == rax_3 + 0x30)
                int64_t result_1
                void var_d0
                result = sub_142652c30(rbx_1, &result_1, sub_142642440(&var_d0, arg3), 0)
                int32_t var_d8
                int64_t* rbx_2
                int64_t* var_e0
                
                if (var_d8 != 3)
                    rbx_2 = var_e0
                else
                    result = result_1
                    
                    if (result == 0)
                        rbx_2 = var_e0
                    else
                        if (((arg2[4].d u>> 1).b & 1) != 0)
                            sub_142668620(result, *arg2, 0x42c80000)
                            result = result_1
                        
                        *(result + 0x98) |= 0x10
                        rbx_2 = var_e0
                        int64_t* rcx_6 = rbx_2
                        int64_t result_3 = result_1
                        int64_t* var_f0_1 = rbx_2
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d += 1
                            rbx_2 = var_e0
                            rcx_6 = var_f0_1
                        
                        result = &result_3
                        
                        if (&result_3 != arg4)
                            int128_t zmm1_1 = result_3.o
                            int128_t var_48_1 = zmm1_1
                            result_3.o = *arg4
                            rcx_6 = var_f0_1
                            *arg4 = zmm1_1
                        
                        if (rcx_6 != 0)
                            result = zx.q(rcx_6[1].d)
                            rcx_6[1].d -= 1
                            
                            if (result.d == 1)
                                (**var_f0_1)(var_f0_1)
                                result = zx.q(*(var_f0_1 + 0xc))
                                *(var_f0_1 + 0xc) -= 1
                                
                                if (result.d == 1)
                                    result = (*(*var_f0_1 + 8))(var_f0_1, 1)
                            
                            rbx_2 = var_e0
                
                if (rbx_2 != 0)
                    result = zx.q(rbx_2[1].d)
                    rbx_2[1].d -= 1
                    
                    if (result.d == 1)
                        result = (**rbx_2)(rbx_2)
                        int32_t rdi_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rdi_1 == 1)
                            result = (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_118)
return result
