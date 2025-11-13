// 函数: sub_141027fa0
// 地址: 0x141027fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140fcc530(arg1, arg2)

if (*(arg2 + 0x114) != 0)
    result = sub_141036510(arg1[0x27] + 0x520, arg1, arg2[0x22].d)
    
    if (data_143e2c1b8 != 0)
        void* r8_2 = arg1[0x76e]
        
        if (r8_2 == 0)
            int64_t* rcx_2 = data_143f0f180
            void arg_20
            int64_t* rax_1 = (*(*rcx_2 + 0x320))(rcx_2, &arg_20, 1)
            
            if (&arg1[0x76e] != rax_1)
                int64_t* rbx_1 = arg1[0x76e]
                void* rbp_1 = nullptr
                arg1[0x76e] = *rax_1
                *rax_1 = 0
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        char rax_3
                        
                        if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                            rax_3 = sub_1405949a0()
                        
                        if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
                            (**rbx_1)(rbx_1, 1)
                        else
                            bool z_1
                            
                            if (0 == *(rbx_1 + 0xc))
                                *(rbx_1 + 0xc) = 1
                                z_1 = true
                            else
                                *(rbx_1 + 0xc)
                                z_1 = false
                            
                            if (z_1)
                                int32_t rax_5 = sub_140a20af0()
                                
                                if (rax_5 != 0)
                                    rbp_1 = *(&data_143cf0bf8 + (zx.q(rax_5) u>> 0xe << 3))
                                        + (zx.q(rax_5) & 0x3fff) * 0x18
                                
                                *(rbp_1 + 8) = rbx_1
                                sub_1405a42f0(&data_143f02390, rax_5)
            
            sub_14081c9d0(&arg_20)
            r8_2 = arg1[0x76e]
        
        if (r8_2 != 0 && data_1439c7a34 u> 1)
            while (*(r8_2 + 0x18) != arg1[0x27])
                r8_2 = *(r8_2 + 0x20)
                
                if (r8_2 == 0)
                    break
        
        result = sub_141014620(arg1[0x27] + 0x520, arg1, r8_2)
        arg1[0x76f].b = 1

return result
