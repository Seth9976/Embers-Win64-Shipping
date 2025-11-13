// 函数: sub_142152790
// 地址: 0x142152790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140d3c6e0(arg1 + 0x48)

if (result != 0)
    *(arg1 + 0x48) = 0xffffffff
    *(arg1 + 0x4c) = 0
    int64_t rbx_1 = *(arg1 + 0x50)
    
    if (rbx_1 != 0)
        int32_t rdx_1 = data_143a2dc58
        int32_t rsi_1 = 0
        
        if (rdx_1 s> 0)
            int64_t r14_1 = 0
            
            do
                int64_t* rdi_2 = data_143a2dc50 + r14_1
                
                if (rdi_2[1].d != 0)
                    int64_t* rcx_1 = *rdi_2
                    
                    if (rcx_1 != 0)
                        void arg_8
                        
                        if (*(*(*rcx_1 + 0x30))(rcx_1, &arg_8) == rbx_1)
                            if (rdi_2[1].d != 0)
                                int64_t* rcx_2 = *rdi_2
                                
                                if (rcx_2 != 0)
                                    (*(*rcx_2 + 0x38))(rcx_2, 0)
                                    int64_t rcx_3 = *rdi_2
                                    
                                    if (rcx_3 != 0)
                                        *rdi_2 = sub_140a84c80(rcx_3, 0, 0)
                                    
                                    rdi_2[1].d = 0
                            
                            if (data_143a2dc64 s<= 0)
                                int32_t rdx_3 = data_143a2dc58
                                int32_t rbx_2 = 0
                                int32_t rsi_2 = rdx_3
                                
                                if (rdx_3 s> 0)
                                    int64_t* rdi_3 = nullptr
                                    
                                    do
                                        int64_t rax_4 = data_143a2dc50
                                        
                                        if (*(rdi_3 + rax_4 + 8) == 0)
                                            sub_1405a4880(&data_143a2dc50, rbx_2, 1, 1)
                                        else
                                            int64_t* rcx_4 = *(rdi_3 + rax_4)
                                            
                                            if (rcx_4 == 0)
                                                sub_1405a4880(&data_143a2dc50, rbx_2, 1, 1)
                                            else if ((*(*rcx_4 + 0x20))(rcx_4) != 0)
                                                sub_1405a4880(&data_143a2dc50, rbx_2, 1, 1)
                                            else
                                                rbx_2 += 1
                                                rdi_3 = &rdi_3[2]
                                        
                                        rdx_3 = data_143a2dc58
                                    while (rbx_2 s< rdx_3)
                                
                                int32_t rax_7 = rdx_3 * 2
                                
                                if (rax_7 s<= 2)
                                    rax_7 = 2
                                
                                data_143a2dc60 = rax_7
                                
                                if (rsi_2 s> rax_7 && data_143a2dc5c != rdx_3)
                                    sub_1405a5410(&data_143a2dc50, rdx_3)
                            
                            break
                        
                        rdx_1 = data_143a2dc58
                
                rsi_1 += 1
                r14_1 += 0x10
            while (rsi_1 s< rdx_1)
    
    sub_1405c2d80(&result[0x138], *(arg1 + 0x58))
    sub_1405c2d80(&result[0x13b], *(arg1 + 0x60))
    int128_t var_38 = zx.o(0)
    result = sub_1421558a0(result, &var_38)

__builtin_memset(arg1 + 0x50, 0, 0x18)

if (*(arg1 + 0x10) == 0)
    *(arg1 + 0x14) = 0

return result
