// 函数: sub_1405d1600
// 地址: 0x1405d1600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rsi_1 = nullptr
    int64_t* rdi_1 = *arg1
    *arg1 = *arg2
    *arg2 = 0
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            char rax_3
            
            if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_3 = sub_1405949a0()
            
            if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
                (**rdi_1)(rdi_1, 1)
            else
                bool z_1
                
                if (0 == *(rdi_1 + 0xc))
                    *(rdi_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rdi_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_5 = sub_140a20af0()
                    
                    if (rax_5 != 0)
                        rsi_1 = *(&data_143cf0bf8 + (zx.q(rax_5) u>> 0xe << 3))
                            + (zx.q(rax_5) & 0x3fff) * 0x18
                    
                    *(rsi_1 + 8) = rdi_1
                    sub_1405a42f0(&data_143f02390, rax_5)

return arg1
