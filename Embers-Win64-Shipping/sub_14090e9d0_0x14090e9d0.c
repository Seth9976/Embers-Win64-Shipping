// 函数: sub_14090e9d0
// 地址: 0x14090e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t* rdi = *(arg1 + 0x18)

if (rdi != 0)
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
        z_1 = true
    else
        rax_1 = rdi[1].d
        z_1 = false
    
    if (not(z_1))
        while (true)
            bool z_2
            
            if (rax_1 == rdi[1].d)
                rdi[1].d = rax_1 + 1
                z_2 = true
            else
                rdi[1].d
                z_2 = false
            
            if (z_2)
                break
            
            rax_1 = 0
            bool z_3
            
            if (0 == rdi[1].d)
                rdi[1].d = 0
                z_3 = true
            else
                rax_1 = rdi[1].d
                z_3 = false
            
            if (z_3)
                return arg2
        
        if (rdi != 0)
            int64_t r15_1 = *(arg1 + 0x10)
            
            if (r15_1 != 0)
                void arg_10
                int64_t rbx_1 = *sub_140b58170(&arg_10, "Messaging", 1)
                j_sub_140b3db50()
                int64_t* rax_5 = j_sub_140b407e0(&data_143de7d78, rbx_1)
                int64_t var_58 = *(arg1 + 0x28)
                int64_t* rcx_3 = *(arg1 + 0x30)
                
                if (rcx_3 != 0)
                    rcx_3[1].d += 1
                
                int64_t var_68 = r15_1
                rdi[1].d += 1
                void var_48
                int64_t* rax_7 = (*(*rax_5 + 0x50))(rax_5, &var_48, arg1, &var_68, &var_58)
                
                if (arg2 != rax_7)
                    *arg2 = *rax_7
                    *rax_7 = 0
                    sub_1405aeff0(&arg2[1], &rax_7[1])
                
                int64_t* var_40
                
                if (var_40 != 0)
                    var_40[1].d -= 1
                    
                    if (var_40[1].d == 1)
                        (**var_40)(var_40)
                        int32_t rax_10 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (rax_10 == 1)
                            (*(*var_40 + 8))(var_40, 1)
                
                if (rdi != 0)
                    rdi[1].d -= 1
                    
                    if (rdi[1].d == 1)
                        (**rdi)(rdi)
                        int32_t rax_14 = *(rdi + 0xc)
                        *(rdi + 0xc) -= 1
                        
                        if (rax_14 == 1)
                            (*(*rdi + 8))(rdi, 1)
                
                if (rcx_3 != 0)
                    rcx_3[1].d -= 1
                    
                    if (rcx_3[1].d == 1)
                        (**rcx_3)(rcx_3)
                        int32_t rax_18 = *(rcx_3 + 0xc)
                        *(rcx_3 + 0xc) -= 1
                        
                        if (rax_18 == 1)
                            (*(*rcx_3 + 8))(rcx_3, 1)
                
                int64_t* rcx_12 = *arg2
                
                if (rcx_12 != 0)
                    int64_t rax_20 = *rcx_12
                    
                    if (*(arg1 + 0x20) == 0)
                        (*(rax_20 + 8))(rcx_12)
                    else
                        (*rax_20)(rcx_12)
            
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t rsi_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (rsi_1 == 1)
                    (*(*rdi + 8))(rdi, zx.q(rsi_1))

return arg2
