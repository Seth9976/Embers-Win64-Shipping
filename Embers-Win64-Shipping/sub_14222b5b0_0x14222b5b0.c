// 函数: sub_14222b5b0
// 地址: 0x14222b5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg1[5]
*arg1 = &data_143307160

if (rbx != 0)
    int32_t r8_1 = data_143a306e8
    int32_t rdi_1 = 0
    int32_t rbp_1 = 0
    
    if (r8_1 s> 0)
        int64_t r14_1 = 0
        
        do
            int64_t* rsi_2 = data_143a306e0 + r14_1
            
            if (rsi_2[1].d != 0)
                int64_t* rcx = *rsi_2
                
                if (rcx != 0)
                    void arg_8
                    
                    if (*(*(*rcx + 0x30))(rcx, &arg_8) == rbx)
                        if (rsi_2[1].d != 0)
                            int64_t* rcx_1 = *rsi_2
                            
                            if (rcx_1 != 0)
                                (*(*rcx_1 + 0x38))(rcx_1, 0)
                                int64_t rcx_2 = *rsi_2
                                
                                if (rcx_2 != 0)
                                    *rsi_2 = sub_140a84c80(rcx_2, 0, 0)
                                
                                rsi_2[1].d = 0
                        
                        if (data_143a306f4 s<= 0)
                            int32_t rdx_1 = data_143a306e8
                            int32_t rsi_3 = rdx_1
                            
                            if (rdx_1 s> 0)
                                int64_t* rbx_1 = nullptr
                                
                                do
                                    int64_t rax_5 = data_143a306e0
                                    
                                    if (*(rbx_1 + rax_5 + 8) == 0)
                                        sub_1405a4880(&data_143a306e0, rdi_1, 1, 1)
                                    else
                                        int64_t* rcx_3 = *(rbx_1 + rax_5)
                                        
                                        if (rcx_3 == 0)
                                            sub_1405a4880(&data_143a306e0, rdi_1, 1, 1)
                                        else if ((*(*rcx_3 + 0x20))(rcx_3) != 0)
                                            sub_1405a4880(&data_143a306e0, rdi_1, 1, 1)
                                        else
                                            rdi_1 += 1
                                            rbx_1 = &rbx_1[2]
                                    
                                    rdx_1 = data_143a306e8
                                while (rdi_1 s< rdx_1)
                            
                            int32_t rax_8 = rdx_1 * 2
                            
                            if (rax_8 s<= 2)
                                rax_8 = 2
                            
                            data_143a306f0 = rax_8
                            
                            if (rsi_3 s> rax_8 && data_143a306ec != rdx_1)
                                sub_1405a5410(&data_143a306e0, rdx_1)
                        
                        break
                    
                    r8_1 = data_143a306e8
            
            rbp_1 += 1
            r14_1 += 0x10
        while (rbp_1 s< r8_1)

sub_140596eb0(&arg1[1])
sub_1423bb350(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
