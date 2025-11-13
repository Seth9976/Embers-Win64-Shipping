// 函数: sub_14236cb30
// 地址: 0x14236cb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x530)
int32_t rdx

if (rbx != 0)
    rdx = data_14399fca8
    int32_t rsi_1 = 0
    
    if (rdx s> 0)
        int64_t r14_1 = 0
        
        do
            int64_t* rdi_2 = data_14399fca0 + r14_1
            
            if (rdi_2[1].d != 0)
                int64_t* rcx = *rdi_2
                
                if (rcx != 0)
                    void arg_8
                    int64_t* rax_2
                    rax_2, rdx = (*(*rcx + 0x30))(rcx, &arg_8)
                    
                    if (*rax_2 == rbx)
                        if (rdi_2[1].d != 0)
                            int64_t* rcx_1 = *rdi_2
                            
                            if (rcx_1 != 0)
                                (*(*rcx_1 + 0x38))(rcx_1, 0)
                                int64_t rcx_2 = *rdi_2
                                
                                if (rcx_2 != 0)
                                    int64_t rax_4
                                    rax_4, rdx = sub_140a84c80(rcx_2, 0, 0)
                                    *rdi_2 = rax_4
                                
                                rdi_2[1].d = 0
                        
                        if (data_14399fcb4 s<= 0)
                            rdx = data_14399fca8
                            int32_t rbx_1 = 0
                            int32_t rsi_2 = rdx
                            
                            if (rdx s> 0)
                                int64_t* rdi_3 = nullptr
                                
                                do
                                    int64_t rax_5 = data_14399fca0
                                    
                                    if (*(rdi_3 + rax_5 + 8) == 0)
                                        sub_1405a4880(&data_14399fca0, rbx_1, 1, 1)
                                    else
                                        int64_t* rcx_3 = *(rdi_3 + rax_5)
                                        
                                        if (rcx_3 == 0)
                                            sub_1405a4880(&data_14399fca0, rbx_1, 1, 1)
                                        else if ((*(*rcx_3 + 0x20))(rcx_3) != 0)
                                            sub_1405a4880(&data_14399fca0, rbx_1, 1, 1)
                                        else
                                            rbx_1 += 1
                                            rdi_3 = &rdi_3[2]
                                    
                                    rdx = data_14399fca8
                                while (rbx_1 s< rdx)
                            
                            int32_t rax_8 = rdx * 2
                            
                            if (rax_8 s<= 2)
                                rax_8 = 2
                            
                            data_14399fcb0 = rax_8
                            
                            if (rsi_2 s> rax_8 && data_14399fcac != rdx)
                                sub_1405a5410(&data_14399fca0, rdx)
                        
                        break
                    
                    rdx = data_14399fca8
            
            rsi_1 += 1
            r14_1 += 0x10
        while (rsi_1 s< rdx)

rdx.b = 1
*(arg1 + 0x530) = 0
return sub_142360710(arg1, rdx.b) __tailcall
