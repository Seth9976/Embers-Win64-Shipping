// 函数: sub_141962b90
// 地址: 0x141962b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rsi_1 = nullptr
    int64_t* rdi_1 = *arg1
    *arg1 = *arg2
    *arg2 = 0
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            if (rdi_1[2].b != 0)
                (**rdi_1)(rdi_1, 1)
                return arg1
            
            bool z_1
            
            if (0 == *(rdi_1 + 0xc))
                *(rdi_1 + 0xc) = 1
                z_1 = true
            else
                *(rdi_1 + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_6 = sub_140a20af0()
                
                if (rax_6 != 0)
                    rsi_1 = *(&data_143cf0bf8 + (zx.q(rax_6) u>> 0xe << 3))
                        + (zx.q(rax_6) & 0x3fff) * 0x18
                
                *(rsi_1 + 8) = rdi_1
                sub_1405a42f0(&data_143f02390, rax_6)

return arg1
