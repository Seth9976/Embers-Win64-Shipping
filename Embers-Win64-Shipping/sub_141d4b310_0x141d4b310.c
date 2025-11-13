// 函数: sub_141d4b310
// 地址: 0x141d4b310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = 0x3ba3d70a

while (true)
    bool z_1
    
    if (0 == *(arg1 + 0x38))
        *(arg1 + 0x38) = 0
        z_1 = true
    else
        int64_t rax_1
        rax_1.b = *(arg1 + 0x38)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx = *(arg1 + 0x60)
    
    if ((*(*rcx + 0x20))(rcx, 0xffffffff, 0) != 0)
        bool z_2
        
        if (0 == *(arg1 + 0x38))
            *(arg1 + 0x38) = 0
            z_2 = true
        else
            int64_t rax_4
            rax_4.b = *(arg1 + 0x38)
            z_2 = false
        
        if (z_2)
            sub_141d4b3b0(arg1)
            bool z_3
            
            if (0 == *(arg1 + 0x38))
                *(arg1 + 0x38) = 0
                z_3 = true
            else
                int64_t rax_5
                rax_5.b = *(arg1 + 0x38)
                z_3 = false
            
            if (z_3)
                zmm6 = sub_140b73230(zmm6)

return 0
