// 函数: sub_141d37940
// 地址: 0x141d37940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x28)

if (rcx != 0)
    *(rcx + 0x44) = 0
    int64_t* rcx_1 = *(*(arg1 + 0x28) + 0x50)
    (*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0)
    int64_t* rbx_1 = *(arg1 + 0x20)
    *(arg1 + 0x28) = 0
    
    if (rbx_1[0x1d] != 0)
        int64_t* rcx_2 = rbx_1[0x1c]
        (*(*rcx_2 + 0x20))(rcx_2, 0xffffffff, 0)
        rbx_1[0x1d] = 0
        rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x10))(rbx_1, 1)
    
    int64_t rbx_2 = *(arg1 + 0x38)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x18) = 0
    
    if (rbx_2 != 0)
        int32_t rdx_2 = data_14399fcf0
        int32_t rsi_1 = 0
        
        if (rdx_2 s> 0)
            int64_t r14_1 = 0
            
            do
                int64_t* rdi_2 = data_14399fce8 + r14_1
                
                if (rdi_2[1].d != 0)
                    int64_t* rcx_4 = *rdi_2
                    
                    if (rcx_4 != 0)
                        void arg_8
                        
                        if (*(*(*rcx_4 + 0x30))(rcx_4, &arg_8) == rbx_2)
                            if (rdi_2[1].d != 0)
                                int64_t* rcx_5 = *rdi_2
                                
                                if (rcx_5 != 0)
                                    (*(*rcx_5 + 0x38))(rcx_5, 0)
                                    int64_t rcx_6 = *rdi_2
                                    
                                    if (rcx_6 != 0)
                                        *rdi_2 = sub_140a84c80(rcx_6, 0, 0)
                                    
                                    rdi_2[1].d = 0
                            
                            if (data_14399fcfc s<= 0)
                                int32_t rdx_4 = data_14399fcf0
                                int32_t rbx_3 = 0
                                int32_t rsi_2 = rdx_4
                                
                                if (rdx_4 s> 0)
                                    int64_t* rdi_3 = nullptr
                                    
                                    do
                                        int64_t rax_6 = data_14399fce8
                                        
                                        if (*(rdi_3 + rax_6 + 8) == 0)
                                            sub_1405a4880(&data_14399fce8, rbx_3, 1, 1)
                                        else
                                            int64_t* rcx_7 = *(rdi_3 + rax_6)
                                            
                                            if (rcx_7 == 0)
                                                sub_1405a4880(&data_14399fce8, rbx_3, 1, 1)
                                            else if ((*(*rcx_7 + 0x20))(rcx_7) != 0)
                                                sub_1405a4880(&data_14399fce8, rbx_3, 1, 1)
                                            else
                                                rbx_3 += 1
                                                rdi_3 = &rdi_3[2]
                                        
                                        rdx_4 = data_14399fcf0
                                    while (rbx_3 s< rdx_4)
                                
                                int64_t* rax = zx.q(rdx_4 * 2)
                                
                                if (rax.d s<= 2)
                                    rax = 2
                                
                                data_14399fcf8 = rax.d
                                
                                if (rsi_2 s> rax.d && data_14399fcf4 != rdx_4)
                                    sub_1405a5410(&data_14399fce8, rdx_4)
                            
                            break
                        
                        rdx_2 = data_14399fcf0
                
                rsi_1 += 1
                r14_1 += 0x10
            while (rsi_1 s< rdx_2)

int64_t* rcx_8 = *(arg1 + 0x30)

if (rcx_8 != 0)
    (**rcx_8)(rcx_8, 1)
    *(arg1 + 0x30) = 0
