// 函数: sub_14094bc60
// 地址: 0x14094bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg1[0xe]
*arg1 = &data_142e2f548

if (rbx != 0)
    int32_t rdx_1 = data_143989398
    int32_t rdi_1 = 0
    int32_t rbp_1 = 0
    
    if (rdx_1 s> 0)
        int64_t r14_1 = 0
        
        do
            int64_t* rsi_2 = data_143989390 + r14_1
            
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
                        
                        if (data_1439893a4 s<= 0)
                            int32_t rdx_3 = data_143989398
                            int32_t rsi_3 = rdx_3
                            
                            if (rdx_3 s> 0)
                                int64_t* rbx_1 = nullptr
                                
                                do
                                    int64_t rax_5 = data_143989390
                                    
                                    if (*(rbx_1 + rax_5 + 8) == 0)
                                        sub_1405a4880(&data_143989390, rdi_1, 1, 1)
                                    else
                                        int64_t* rcx_3 = *(rbx_1 + rax_5)
                                        
                                        if (rcx_3 == 0)
                                            sub_1405a4880(&data_143989390, rdi_1, 1, 1)
                                        else if ((*(*rcx_3 + 0x20))(rcx_3) != 0)
                                            sub_1405a4880(&data_143989390, rdi_1, 1, 1)
                                        else
                                            rdi_1 += 1
                                            rbx_1 = &rbx_1[2]
                                    
                                    rdx_3 = data_143989398
                                while (rdi_1 s< rdx_3)
                            
                            int32_t rax_8 = rdx_3 * 2
                            
                            if (rax_8 s<= 2)
                                rax_8 = 2
                            
                            data_1439893a0 = rax_8
                            
                            if (rsi_3 s> rax_8 && data_14398939c != rdx_3)
                                sub_1405a5410(&data_143989390, rdx_3)
                        
                        break
                    
                    rdx_1 = data_143989398
            
            rbp_1 += 1
            r14_1 += 0x10
        while (rbp_1 s< rdx_1)

sub_1405ae200(&arg1[0x19])
sub_1405ae200(&arg1[0xf])
sub_1405ae080(&arg1[4])
sub_140745b20(&arg1[2])
*arg1 = &data_142e2dc48
return &data_142e2dc48
