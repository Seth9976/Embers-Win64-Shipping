// 函数: sub_14210ff80
// 地址: 0x14210ff80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)

if (rbx != 0)
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax_1 = rbx[1].d
        z_1 = false
    
    if (not(z_1))
        bool z_3
        
        do
            bool z_2
            
            if (rax_1 == rbx[1].d)
                rbx[1].d = rax_1 + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                if (rbx == 0)
                    break
                
                int64_t result = *(arg1 + 8)
                rbx[1].d -= 1
                
                if (rbx[1].d == 1)
                    int64_t rdx_1 = *rbx
                    (*rdx_1)(rbx, rdx_1)
                    int32_t rdi_1 = *(rbx + 0xc)
                    *(rbx + 0xc) -= 1
                    
                    if (rdi_1 == 1)
                        int64_t r8_1 = *rbx
                        (*(r8_1 + 8))(rbx, zx.q(rdi_1), r8_1)
                
                return result
            
            rax_1 = 0
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax_1 = rbx[1].d
                z_3 = false
        while (not(z_3))

return 0
