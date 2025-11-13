// 函数: sub_1418ebe70
// 地址: 0x1418ebe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 - 0x30)
*(arg1 - 0x30) -= 1

if (rbx == 1)
    char rax_1
    
    if (*(arg1 - 0x28) == (rbx - 1).b && data_143f0f1d0 == (rbx - 1).b)
        rax_1 = sub_1405949a0()
    
    if (*(arg1 - 0x28) != (rbx - 1).b || (data_143f0f1d0 == (rbx - 1).b && rax_1 != 0))
        (**(arg1 - 0x38))(arg1 - 0x38, 1)
    else
        bool z_1
        
        if (0 == *(arg1 - 0x2c))
            *(arg1 - 0x2c) = 1
            z_1 = true
        else
            *(arg1 - 0x2c)
            z_1 = false
        
        if (z_1)
            int32_t rax_3 = sub_140a20af0()
            void* const rcx
            
            if (rax_3 != 0)
                rcx =
                    *(&data_143cf0bf8 + (zx.q(rax_3) u>> 0xe << 3)) + (zx.q(rax_3) & 0x3fff) * 0x18
            else
                rcx = nullptr
            
            *(rcx + 8) = arg1 - 0x38
            sub_1405a42f0(&data_143f02390, rax_3)

return zx.q(rbx - 1)
