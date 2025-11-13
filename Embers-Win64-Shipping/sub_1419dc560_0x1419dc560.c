// 函数: sub_1419dc560
// 地址: 0x1419dc560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t rdx_1 = data_1439c95c8
int32_t rdi_1 = 0
int32_t rbp_1 = 0

if (rdx_1 s<= 0)
    return 

int64_t r14_1 = 0

do
    int64_t* rsi_2 = data_1439c95c0 + r14_1
    
    if (rsi_2[1].d != 0)
        int64_t* rcx = *rsi_2
        
        if (rcx != 0)
            void arg_8
            
            if (*(*(*rcx + 0x30))(rcx, &arg_8) == arg1)
                if (rsi_2[1].d != 0)
                    int64_t* rcx_1 = *rsi_2
                    
                    if (rcx_1 != 0)
                        (*(*rcx_1 + 0x38))(rcx_1, 0)
                        int64_t rcx_2 = *rsi_2
                        
                        if (rcx_2 != 0)
                            *rsi_2 = sub_140a84c80(rcx_2, 0, 0)
                        
                        rsi_2[1].d = 0
                
                if (data_1439c95d4 s<= 0)
                    int32_t rdx_3 = data_1439c95c8
                    int32_t rsi_3 = rdx_3
                    
                    if (rdx_3 s> 0)
                        int64_t* rbx_2 = nullptr
                        
                        do
                            int64_t rax_3 = data_1439c95c0
                            
                            if (*(rbx_2 + rax_3 + 8) == 0)
                                sub_1405a4880(&data_1439c95c0, rdi_1, 1, 1)
                            else
                                int64_t* rcx_3 = *(rbx_2 + rax_3)
                                
                                if (rcx_3 == 0)
                                    sub_1405a4880(&data_1439c95c0, rdi_1, 1, 1)
                                else if ((*(*rcx_3 + 0x20))(rcx_3) != 0)
                                    sub_1405a4880(&data_1439c95c0, rdi_1, 1, 1)
                                else
                                    rdi_1 += 1
                                    rbx_2 = &rbx_2[2]
                            
                            rdx_3 = data_1439c95c8
                        while (rdi_1 s< rdx_3)
                    
                    int64_t* rax = zx.q(rdx_3 * 2)
                    
                    if (rax.d s<= 2)
                        rax = 2
                    
                    data_1439c95d0 = rax.d
                    
                    if (rsi_3 s> rax.d && data_1439c95cc != rdx_3)
                        sub_1405a5410(&data_1439c95c0, rdx_3)
                
                break
            
            rdx_1 = data_1439c95c8
    
    rbp_1 += 1
    r14_1 += 0x10
while (rbp_1 s< rdx_1)
