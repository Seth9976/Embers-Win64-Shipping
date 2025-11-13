// 函数: sub_142382db0
// 地址: 0x142382db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
void arg_18
int64_t* rax = sub_1420f74a0(&arg_18, arg1[1], arg1[2].d, arg1[3], 0, 0)
int64_t* rdx_1 = *arg1

if (rdx_1 != rax)
    int64_t* rbx_1 = *rdx_1
    *rdx_1 = *rax
    *rax = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_2
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_2 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
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
                    int32_t rax_4 = sub_140a20af0()
                    
                    if (rax_4 != 0)
                        rdi = *(&data_143cf0bf8 + (zx.q(rax_4) u>> 0xe << 3))
                            + (zx.q(rax_4) & 0x3fff) * 0x18
                    
                    *(rdi + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rax_4)

return sub_1405d1550(&arg_18)
