// 函数: sub_14150acc0
// 地址: 0x14150acc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(*(arg1 + 0x1a)) + 3
int32_t rdi = 0

if ((result & 0xfffffffc) u> 0)
    do
        int64_t* rcx = data_143f0f180
        int64_t* arg_10
        (*(*rcx + 0x558))(rcx, &arg_10, &data_143f02b98, 0)
        void* rcx_4 = ((zx.q(rdi) + 0x5e) << 4) + arg1
        
        if (rcx_4 == &arg_10)
        label_14150adce:
            int64_t* rbx_2 = arg_10
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    char rax_13
                    
                    if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                        rax_13 = sub_1405949a0()
                    
                    if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_13 != 0))
                        (**rbx_2)(rbx_2, 1)
                    else
                        bool z_2
                        
                        if (0 == *(rbx_2 + 0xc))
                            *(rbx_2 + 0xc) = 1
                            z_2 = true
                        else
                            *(rbx_2 + 0xc)
                            z_2 = false
                        
                        if (z_2)
                            int32_t rax_15 = sub_140a20af0()
                            uint64_t rdx_3 = zx.q(rax_15)
                            void* const rax_16
                            
                            if (rax_15 != 0)
                                rax_16 = *((rdx_3 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                            else
                                rax_16 = nullptr
                            
                            *(rax_16 + 8) = rbx_2
                            sub_1405a42f0(&data_143f02390, rdx_3.d)
        else
            int64_t* rbx_1 = *rcx_4
            *rcx_4 = arg_10
            arg_10 = nullptr
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    char rax_4
                    
                    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_4 = sub_1405949a0()
                    
                    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_4 != 0))
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
                            int32_t rax_6 = sub_140a20af0()
                            uint64_t rdx_2 = zx.q(rax_6)
                            void* const rax_7
                            
                            if (rax_6 != 0)
                                rax_7 = *((rdx_2 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                            else
                                rax_7 = nullptr
                            
                            *(rax_7 + 8) = rbx_1
                            sub_1405a42f0(&data_143f02390, rdx_2.d)
                
                goto label_14150adce
        
        rdi += 1
        result = (zx.d(*(arg1 + 0x1a)) + 3) u>> 2
    while (rdi u< result)

return result
