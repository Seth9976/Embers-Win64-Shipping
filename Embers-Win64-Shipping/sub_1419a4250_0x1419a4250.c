// 函数: sub_1419a4250
// 地址: 0x1419a4250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f0f180
int64_t arg_10
(*(*rcx + 0x558))(rcx, &arg_10, &data_143f02b98, arg1 + 0x18)

if (arg1 + 0x10 != &arg_10)
    int64_t* rbx_1 = *(arg1 + 0x10)
    void* rdi_1 = nullptr
    *(arg1 + 0x10) = arg_10
    arg_10 = 0
    
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
                        rdi_1 = *(&data_143cf0bf8 + (zx.q(rax_5) u>> 0xe << 3))
                            + (zx.q(rax_5) & 0x3fff) * 0x18
                    
                    *(rdi_1 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rax_5)

return sub_1405d1550(&arg_10)
