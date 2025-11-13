// 函数: sub_1419d6050
// 地址: 0x1419d6050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0

if (arg2[1].d != 0)
    int64_t* r8_1 = *arg2
    
    if (r8_1 != 0)
        int64_t* rcx = nullptr
        int64_t* var_28 = nullptr
        int32_t var_20_1 = 0
        
        if (arg2 != &var_28)
            (*(*r8_1 + 0x40))(r8_1, &var_28)
            rcx = var_28
        
        int32_t rdi_1 = data_1439c95c8
        
        if (data_1439c95d4 s<= 0)
            int32_t rax_3 = data_1439c95d0 - 1
            data_1439c95d0 = rax_3
            
            if (rax_3 s<= rdi_1)
                int32_t rbp_1 = rdi_1
                int32_t rbx_1 = 0
                
                if (rdi_1 s> 0)
                    int64_t* rsi_1 = nullptr
                    
                    do
                        int64_t rax_4 = data_1439c95c0
                        
                        if (*(rsi_1 + rax_4 + 8) == 0)
                            sub_1405a4880(&data_1439c95c0, rbx_1, 1, 1)
                        else
                            int64_t* rcx_2 = *(rsi_1 + rax_4)
                            
                            if (rcx_2 == 0)
                                sub_1405a4880(&data_1439c95c0, rbx_1, 1, 1)
                            else if ((*(*rcx_2 + 0x20))(rcx_2) != 0)
                                sub_1405a4880(&data_1439c95c0, rbx_1, 1, 1)
                            else
                                rbx_1 += 1
                                rsi_1 = &rsi_1[2]
                        
                        rdi_1 = data_1439c95c8
                    while (rbx_1 s< rdi_1)
                    
                    rcx = var_28
                
                int32_t rax_7 = rdi_1 * 2
                
                if (rax_7 s<= 2)
                    rax_7 = 2
                
                data_1439c95d0 = rax_7
                
                if (rbp_1 s> rax_7 && data_1439c95cc != rdi_1)
                    sub_1405a5410(&data_1439c95c0, rdi_1)
                    rcx = var_28
                    rdi_1 = data_1439c95c8
        
        int64_t rbx_2 = 0
        
        if (var_20_1 != 0 && rcx != 0)
            void arg_8
            int64_t* rax_9 = (*(*rcx + 0x30))(rcx, &arg_8)
            rdi_1 = data_1439c95c8
            rbx_2 = *rax_9
        
        bool cond:1_1 = rdi_1 + 1 s<= data_1439c95cc
        data_1439c95c8 = rdi_1 + 1
        
        if (not(cond:1_1))
            sub_1405a4f90(&data_1439c95c0)
        
        int64_t** rcx_5 = (sx.q(rdi_1) << 4) + data_1439c95c0
        *arg1 = rbx_2
        *rcx_5 = nullptr
        *rcx_5 = var_28
        var_28 = nullptr
        rcx_5[1].d = var_20_1
        int64_t* rcx_6 = var_28
        int32_t var_20_2 = 0
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)

return arg1
