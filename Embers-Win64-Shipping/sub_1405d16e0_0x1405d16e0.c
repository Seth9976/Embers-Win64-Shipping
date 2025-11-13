// 函数: sub_1405d16e0
// 地址: 0x1405d16e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
*arg1 = arg2

if (arg2 != 0)
    *(arg2 + 8) += 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_2
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**rbx)(rbx, 1)
        else
            bool z_1
            
            if (0 == *(rbx + 0xc))
                *(rbx + 0xc) = 1
                z_1 = true
            else
                *(rbx + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_4 = sub_140a20af0()
                uint64_t rdx = zx.q(rax_4)
                void* const rax_5
                
                if (rax_4 != 0)
                    rax_5 = *(&data_143cf0bf8 + (rdx u>> 0xe << 3)) + (zx.q(rdx.d) & 0x3fff) * 0x18
                else
                    rax_5 = nullptr
                
                *(rax_5 + 8) = rbx
                sub_1405a42f0(&data_143f02390, rdx.d)

return arg1
