// 函数: sub_14100dda0
// 地址: 0x14100dda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_1
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_1 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_1 != 0))
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
                        int32_t rax_2 = sub_140a20af0()
                        uint64_t rdx_1 = zx.q(rax_2)
                        void* const rax_3
                        
                        if (rax_2 != 0)
                            rax_3 = *(&data_143cf0bf8 + (rdx_1 u>> 0xe << 3))
                                + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                        else
                            rax_3 = nullptr
                        
                        *(rax_3 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rdx_1.d)
        
        rdi = &rdi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = *arg1

if (rdi == 0)
    return 

return sub_140a74f90(rdi) __tailcall
