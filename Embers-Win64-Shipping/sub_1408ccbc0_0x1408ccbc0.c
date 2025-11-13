// 函数: sub_1408ccbc0
// 地址: 0x1408ccbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void**** result = sub_140a84c80(0, 0x20, 0)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142ddc6a8
    result_1[1] = sub_1408cee30
    result_1[3] = sub_140a387b0()
    result = &data_142ddc700
    *result_1 = &data_142ddc700

if (result_1 != 0)
    if (data_143a306f4 s<= 0)
        int32_t rdx_1 = data_143a306e8
        int32_t rax_2 = data_143a306f0 - 1
        data_143a306f0 = rax_2
        
        if (rax_2 s<= rdx_1)
            int32_t rbx_1 = 0
            int32_t rbp_1 = rdx_1
            
            if (rdx_1 s> 0)
                int64_t* rdi_1 = nullptr
                
                do
                    int64_t rax_3 = data_143a306e0
                    
                    if (*(rdi_1 + rax_3 + 8) == 0)
                        sub_1405a4880(&data_143a306e0, rbx_1, 1, 1)
                    else
                        int64_t* rcx_1 = *(rdi_1 + rax_3)
                        
                        if (rcx_1 == 0)
                            sub_1405a4880(&data_143a306e0, rbx_1, 1, 1)
                        else if ((*(*rcx_1 + 0x20))(rcx_1) != 0)
                            sub_1405a4880(&data_143a306e0, rbx_1, 1, 1)
                        else
                            rbx_1 += 1
                            rdi_1 = &rdi_1[2]
                    
                    rdx_1 = data_143a306e8
                while (rbx_1 s< rdx_1)
            
            int32_t rax_6 = rdx_1 * 2
            
            if (rax_6 s<= 2)
                rax_6 = 2
            
            data_143a306f0 = rax_6
            
            if (rbp_1 s> rax_6 && data_143a306ec != rdx_1)
                sub_1405a5410(&data_143a306e0, rdx_1)
    
    void arg_10
    (*result_1)[6](result_1, &arg_10)
    int64_t rbx_2 = sx.q(data_143a306e8)
    int32_t rax_8 = (rbx_2 + 1).d
    bool cond:1_1 = rax_8 s<= data_143a306ec
    data_143a306e8 = rax_8
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_143a306e0)
    
    result = (rbx_2 << 4) + data_143a306e0
    *result = result_1
    result[1].d = 2

return result
