// 函数: sub_1406638d0
// 地址: 0x1406638d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]
int32_t result

if (rbx != 0)
    result = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        result = rbx[1].d
        z_1 = false
    
    if (not(z_1))
        while (true)
            bool z_2
            
            if (result == rbx[1].d)
                rbx[1].d = result + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                break
            
            result = 0
            bool z_3
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                result = rbx[1].d
                z_3 = false
            
            if (z_3)
                result.b = 1
                return result
        
        int64_t* rcx_1 = *arg1
        
        if (rcx_1 != 0)
            char rax_2 = (*(*rcx_1 + 0x10))(rcx_1)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rdi_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rdi_1 == 1)
                    int64_t r8_1 = *rbx
                    (*(r8_1 + 8))(rbx, zx.q(rdi_1), r8_1)
            
            return zx.q(rax_2)
        
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rdi_2 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*rbx + 8))(rbx, zx.q(rdi_2))

result.b = 1
return result
