// 函数: sub_141c6d7b0
// 地址: 0x141c6d7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint64_t result = *(arg1 + 8)
void* rdx = *(result + 0x7e0)
int64_t* rdi = *(rdx + 0x28)
void* r8 = *(rdx + 0x20)

if (rdi != 0)
    *(rdi + 0xc) += 1
    
    if (rdi != 0)
        result = nullptr
        bool z_1
        
        if (0 == rdi[1].d)
            rdi[1].d = 0
            z_1 = true
        else
            result = zx.q(rdi[1].d)
            z_1 = false
        
        if (not(z_1))
            bool z_3
            
            do
                bool z_2
                
                if (result.d == rdi[1].d)
                    rdi[1].d = (result + 1).d
                    z_2 = true
                else
                    rdi[1].d
                    z_2 = false
                
                if (z_2)
                    if (r8 != 0)
                        int64_t* rsi_1
                        int64_t* rbx_1
                        
                        if (*(r8 + 0x80) s<= 0)
                            rbx_1 = nullptr
                            rsi_1 = nullptr
                        label_141c6d926:
                            
                            if (*(arg1 + 0x2c8) != rbx_1)
                                int64_t* var_68 = rbx_1
                                int64_t* rcx_9 = rsi_1
                                int64_t* var_60_1 = rcx_9
                                
                                if (rsi_1 != 0)
                                    rsi_1[1].d += 1
                                    rcx_9 = var_60_1
                                
                                if (&var_68 != arg1 + 0x2c8)
                                    arg3 = var_68.o
                                    int128_t var_40_1 = arg3
                                    var_68.o = *(arg1 + 0x2c8)
                                    rcx_9 = var_60_1
                                    *(arg1 + 0x2c8) = arg3
                                
                                if (rcx_9 != 0)
                                    rcx_9[1].d -= 1
                                    
                                    if (rcx_9[1].d == 1)
                                        (**var_60_1)(var_60_1)
                                        int32_t rax_15 = *(var_60_1 + 0xc)
                                        *(var_60_1 + 0xc) -= 1
                                        
                                        if (rax_15 == 1)
                                            (*(*var_60_1 + 8))(var_60_1, 1)
                        else
                            void* rax_3 = *(r8 + 0x78)
                            rsi_1 = *(rax_3 + 0x10)
                            rbx_1 = *(rax_3 + 8)
                            
                            if (rsi_1 != 0)
                                rsi_1[1].d += 1
                            
                            if (rbx_1 == 0)
                                goto label_141c6d926
                            
                            (*(*arg2 + 0x10))(arg2)
                            
                            if ((*(*rbx_1 + 0x20))(rbx_1) == 0)
                                goto label_141c6d926
                            
                            if ((*(*rbx_1 + 0x10))(rbx_1, arg2) == 0)
                                goto label_141c6d926
                            
                            int64_t* var_50 = nullptr
                            int64_t var_58
                            
                            if (arg1 + 0x2c8 != &var_58)
                                *(arg1 + 0x2c8) = 0
                                var_58 = 0
                                sub_1405aeff0(arg1 + 0x2d0, &var_50)
                                int64_t* rcx_6 = var_50
                                
                                if (rcx_6 != 0)
                                    rcx_6[1].d -= 1
                                    
                                    if (rcx_6[1].d == 1)
                                        int64_t* rbx_2 = var_50
                                        (**rbx_2)(rbx_2)
                                        int32_t rax_11 = *(rbx_2 + 0xc)
                                        *(rbx_2 + 0xc) -= 1
                                        
                                        if (rax_11 == 1)
                                            int64_t* rcx_8 = var_50
                                            (*(*rcx_8 + 8))(rcx_8, 1)
                        
                        if (rsi_1 != 0)
                            rsi_1[1].d -= 1
                            
                            if (rsi_1[1].d == 1)
                                (**rsi_1)(rsi_1)
                                int32_t rax_19 = *(rsi_1 + 0xc)
                                *(rsi_1 + 0xc) -= 1
                                
                                if (rax_19 == 1)
                                    (*(*rsi_1 + 8))(rsi_1, 1)
                    
                    result = zx.q(rdi[1].d)
                    rdi[1].d -= 1
                    
                    if (result.d == 1)
                        (**rdi)(rdi, arg3)
                        result = zx.q(*(rdi + 0xc))
                        *(rdi + 0xc) -= 1
                        
                        if (result.d == 1)
                            result = (*(*rdi + 8))(rdi, 1)
                    
                    break
                
                result = 0
                
                if (0 == rdi[1].d)
                    rdi[1].d = 0
                    z_3 = true
                else
                    result = zx.q(rdi[1].d)
                    z_3 = false
            while (not(z_3))
        
        int32_t rbp_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rbp_1 == 1)
            result = (*(*rdi + 8))(rdi, 1)

__security_check_cookie(rax_1 ^ &var_88)
return result
