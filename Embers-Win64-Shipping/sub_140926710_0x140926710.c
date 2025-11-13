// 函数: sub_140926710
// 地址: 0x140926710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x50)
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
        
        if (rbx != 0)
            void* rcx_1 = *(arg1 + 0x48)
            
            if (rcx_1 != 0)
                int64_t var_18 = *(arg1 + 0x38)
                void* rax_1 = *(arg1 + 0x40)
                void* var_10_1 = rax_1
                
                if (rax_1 != 0)
                    *(rax_1 + 8) += 1
                
                sub_1409216c0(rcx_1, arg1 + 8, &var_18)
            
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rdi_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*rbx + 8))(rbx, zx.q(rdi_1))

result.b = 1
return result
