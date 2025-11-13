// 函数: sub_141c540e0
// 地址: 0x141c540e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[3]
uint64_t result = *arg1
void* rdx_1 = sx.q(arg1[1].d) * 0x3f0 + *(result + 0xc8)

if (rdi != 0)
    result = 0
    bool z_1
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
        z_1 = true
    else
        result = zx.q(rdi[1].d)
        z_1 = false
    
    if (not(z_1))
        while (true)
            bool z_2
            
            if (result.d == rdi[1].d)
                rdi[1].d = (result + 1).d
                z_2 = true
            else
                result = zx.q(rdi[1].d)
                z_2 = false
            
            if (z_2)
                break
            
            result = 0
            bool z_3
            
            if (0 == rdi[1].d)
                rdi[1].d = 0
                z_3 = true
            else
                result = zx.q(rdi[1].d)
                z_3 = false
            
            if (z_3)
                return result
        
        if (rdi != 0)
            void* r13_1 = arg1[2]
            
            if (r13_1 != 0)
                int64_t* rsi_1 = *(rdx_1 + 0xa8)
                uint64_t rbx_1 = sx.q(*(rdx_1 + 0xb0))
                void* r15_3 = &rsi_1[rbx_1 * 4]
                
                if (rsi_1 == r15_3)
                label_141c54221:
                    int32_t rax_8 = (rbx_1 + 1).d
                    *(rdx_1 + 0xb0) = rax_8
                    
                    if (rax_8 s> *(rdx_1 + 0xb4))
                        sub_1405c4e40(rdx_1 + 0xa8)
                    
                    int64_t* rcx_8 = (sx.q(rbx_1.d) << 5) + *(rdx_1 + 0xa8)
                    *rcx_8 = arg1[2]
                    void* rax_10 = arg1[3]
                    rcx_8[1] = rax_10
                    
                    if (rax_10 != 0)
                        *(rax_10 + 0xc) += 1
                    
                    rcx_8[2].d = arg1[4].d
                    *(rcx_8 + 0x14) = *(arg1 + 0x24)
                    rcx_8[3] = arg1[5]
                else
                    while (true)
                        int64_t* rbx_2 = rsi_1[1]
                        
                        if (rbx_2 != 0)
                            int32_t rax_1 = 0
                            bool z_4
                            
                            if (0 == rbx_2[1].d)
                                rbx_2[1].d = 0
                                z_4 = true
                            else
                                rax_1 = rbx_2[1].d
                                z_4 = false
                            
                            if (not(z_4))
                                while (true)
                                    bool z_5
                                    
                                    if (rax_1 == rbx_2[1].d)
                                        rbx_2[1].d = rax_1 + 1
                                        z_5 = true
                                    else
                                        rbx_2[1].d
                                        z_5 = false
                                    
                                    if (z_5)
                                        break
                                    
                                    rax_1 = 0
                                    bool z_6
                                    
                                    if (0 == rbx_2[1].d)
                                        rbx_2[1].d = 0
                                        z_6 = true
                                    else
                                        rax_1 = rbx_2[1].d
                                        z_6 = false
                                    
                                    if (z_6)
                                        goto label_141c5420f
                                
                                void* rcx_2 = *rsi_1
                                
                                if (rcx_2 != 0 && *(rcx_2 + 0x10) == *(r13_1 + 0x10))
                                    rsi_1[2].d = arg1[4].d
                                    rbx_2[1].d -= 1
                                    
                                    if (rbx_2[1].d == 1)
                                        (**rbx_2)(rbx_2)
                                        int32_t rax_21 = *(rbx_2 + 0xc)
                                        *(rbx_2 + 0xc) -= 1
                                        
                                        if (rax_21 == 1)
                                            (*(*rbx_2 + 8))(rbx_2, 1)
                                    
                                    break
                                
                                rbx_2[1].d -= 1
                                
                                if (rbx_2[1].d == 1)
                                    (**rbx_2)(rbx_2)
                                    int32_t rax_6 = *(rbx_2 + 0xc)
                                    *(rbx_2 + 0xc) -= 1
                                    
                                    if (rax_6 == 1)
                                        (*(*rbx_2 + 8))(rbx_2, 1)
                        
                    label_141c5420f:
                        rsi_1 = &rsi_1[4]
                        
                        if (rsi_1 == r15_3)
                            rbx_1 = zx.q(*(rdx_1 + 0xb0))
                            goto label_141c54221
                
                void* rax_14 = *arg1
                int64_t rdx_3 = sx.q(arg1[1].d)
                int32_t arg_8 = arg1[4].d
                int64_t arg_20 = *(*(rax_14 + 0x40) + (rdx_3 << 3))
                int64_t* var_58 = &arg_20
                int32_t* var_50_1 = &arg_8
                void arg_18
                sub_141c4cc90(r13_1 + 0x90, &arg_18, &var_58, nullptr)
            
            result = zx.q(rdi[1].d)
            rdi[1].d -= 1
            
            if (result.d == 1)
                result = (**rdi)(rdi)
                int32_t rbp_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (rbp_1 == 1)
                    return (*(*rdi + 8))(rdi, zx.q(rbp_1))

return result
