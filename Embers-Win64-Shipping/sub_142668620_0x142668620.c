// 函数: sub_142668620
// 地址: 0x142668620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3e110(arg1 + 0x9c)

if (result.b != 0)
    int64_t r14
    r14.b = sub_140d3e110(arg1 + 0x40) == 0
    sub_140d3a3a0(arg1 + 0x40, arg2)
    int64_t rbp_1 = 0
    void* rax_2
    
    if (arg2 == 0)
        rax_2 = nullptr
    else
        rax_2 = sub_140d21950(arg2, sub_142548ca0())
    
    *(arg1 + 0x98) |= 0x400
    int128_t zmm6
    zmm6.d = arg3.d f* arg3.d
    *(arg1 + 0x48) = rax_2
    *(arg1 + 0xec) = zmm6.d
    result = sub_14266cb10(arg1)
    
    if (r14.b != 0)
        int64_t* rbx_1 = *(arg1 + 0x10)
        
        if (rbx_1 != 0)
            int32_t rax_3 = 0
            bool z_1
            
            if (0 == rbx_1[1].d)
                rbx_1[1].d = 0
                z_1 = true
            else
                rax_3 = rbx_1[1].d
                z_1 = false
            
            if (z_1)
            label_1426686e3:
                rbx_1 = nullptr
            else
                while (true)
                    bool z_2
                    
                    if (rax_3 == rbx_1[1].d)
                        rbx_1[1].d = rax_3 + 1
                        z_2 = true
                    else
                        rbx_1[1].d
                        z_2 = false
                    
                    if (z_2)
                        if (rbx_1 != 0)
                            rbp_1 = *(arg1 + 8)
                            rbx_1[1].d += 1
                        
                        break
                    
                    rax_3 = 0
                    bool z_3
                    
                    if (0 == rbx_1[1].d)
                        rbx_1[1].d = 0
                        z_3 = true
                    else
                        rax_3 = rbx_1[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_1426686e3
        
        void* rax_5 = sub_140d3c6e0(arg1 + 0x9c)
        
        if (*(rax_5 + 0x318) == 0)
            *(rax_5 + 0x330) = *(rax_5 + 0x2b0)
        
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
        
        int64_t r14_1 = sx.q(*(rax_5 + 0x318))
        int32_t rax_6 = (r14_1 + 1).d
        *(rax_5 + 0x318) = rax_6
        
        if (rax_6 s> *(rax_5 + 0x31c))
            sub_1405a4f90(rax_5 + 0x310)
        
        result = (r14_1 << 4) + *(rax_5 + 0x310)
        *result = rbp_1
        *(result + 8) = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_11 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
            
            result = zx.q(rbx_1[1].d)
            rbx_1[1].d -= 1
            
            if (result.d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t rdi_2 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_2))

return result
