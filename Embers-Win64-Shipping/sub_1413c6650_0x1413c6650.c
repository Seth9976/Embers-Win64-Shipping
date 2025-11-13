// 函数: sub_1413c6650
// 地址: 0x1413c6650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t* rbx_1 = *arg1
    void* rbp_1 = nullptr
    *arg1 = *arg2
    *arg2 = 0
    
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

arg1[1] = arg2[1]
return arg1
