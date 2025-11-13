// 函数: sub_142741b50
// 地址: 0x142741b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f74100

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t rbx_1 = *(arg1 + 8)

if (rbx_1 != 0)
    int32_t rdx_1 = data_143a2f348
    int32_t rdi_1 = 0
    int32_t rbp_1 = 0
    
    if (rdx_1 s> 0)
        int64_t r14_1 = 0
        
        do
            int64_t* rsi_2 = data_143a2f340 + r14_1
            
            if (rsi_2[1].d != 0)
                int64_t* rcx_1 = *rsi_2
                
                if (rcx_1 != 0)
                    void arg_8
                    
                    if (*(*(*rcx_1 + 0x30))(rcx_1, &arg_8) == rbx_1)
                        if (rsi_2[1].d != 0)
                            int64_t* rcx_2 = *rsi_2
                            
                            if (rcx_2 != 0)
                                (*(*rcx_2 + 0x38))(rcx_2, 0)
                                int64_t rcx_3 = *rsi_2
                                
                                if (rcx_3 != 0)
                                    *rsi_2 = sub_140a84c80(rcx_3, 0, 0)
                                
                                rsi_2[1].d = 0
                        
                        if (data_143a2f354 s<= 0)
                            int32_t rdx_3 = data_143a2f348
                            int32_t rsi_3 = rdx_3
                            
                            if (rdx_3 s> 0)
                                int64_t* rbx_2 = nullptr
                                
                                do
                                    int64_t rax_4 = data_143a2f340
                                    
                                    if (*(rbx_2 + rax_4 + 8) == 0)
                                        sub_1405a4880(&data_143a2f340, rdi_1, 1, 1)
                                    else
                                        int64_t* rcx_4 = *(rbx_2 + rax_4)
                                        
                                        if (rcx_4 == 0)
                                            sub_1405a4880(&data_143a2f340, rdi_1, 1, 1)
                                        else if ((*(*rcx_4 + 0x20))(rcx_4) != 0)
                                            sub_1405a4880(&data_143a2f340, rdi_1, 1, 1)
                                        else
                                            rdi_1 += 1
                                            rbx_2 = &rbx_2[2]
                                    
                                    rdx_3 = data_143a2f348
                                while (rdi_1 s< rdx_3)
                            
                            int64_t* rax = zx.q(rdx_3 * 2)
                            
                            if (rax.d s<= 2)
                                rax = 2
                            
                            data_143a2f350 = rax.d
                            
                            if (rsi_3 s> rax.d && data_143a2f34c != rdx_3)
                                sub_1405a5410(&data_143a2f340, rdx_3)
                        
                        break
                    
                    rdx_1 = data_143a2f348
            
            rbp_1 += 1
            r14_1 += 0x10
        while (rbp_1 s< rdx_1)

HMODULE rcx_5 = data_143f74118

if (rcx_5 == 0)
    return 

return sub_1417cc620(rcx_5) __tailcall
