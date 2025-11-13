// 函数: sub_141881970
// 地址: 0x141881970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t r9 = 0

if (rbx != 0)
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax_1 = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_1418819a4:
        rbx = nullptr
    else
        while (true)
            bool z_2
            
            if (rax_1 == rbx[1].d)
                rbx[1].d = rax_1 + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                if (rbx != 0)
                    r9 = *(arg1 + 8)
                
                break
            
            rax_1 = 0
            bool z_3
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax_1 = rbx[1].d
                z_3 = false
            
            if (z_3)
                goto label_1418819a4

int32_t result = (*(arg1 + 0x18))(r9)

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        result = (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx + 8))(rbx, zx.q(rdi_1))

return result
