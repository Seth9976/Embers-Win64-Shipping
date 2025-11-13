// 函数: sub_1426788a0
// 地址: 0x1426788a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 8)
int64_t* rbx = rdi[0x65]

if (rbx != 0)
    int32_t rax = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax = rbx[1].d
        z_1 = false
    
    if (not(z_1))
        bool z_3
        
        do
            bool z_2
            
            if (rax == rbx[1].d)
                rbx[1].d = rax + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                if (rbx != 0)
                    if (rdi[0x64] != 0)
                        if (rdi[0x2b].d != 0)
                            sub_142678200(rdi)
                        
                        sub_142683d40(rdi)
                        sub_142678a70(rdi)
                    
                    rbx[1].d -= 1
                    
                    if (rbx[1].d == 1)
                        (**rbx)(rbx)
                        int32_t rdi_1 = *(rbx + 0xc)
                        *(rbx + 0xc) -= 1
                        
                        if (rdi_1 == 1)
                            (*(*rbx + 8))(rbx, zx.q(rdi_1))
                
                break
            
            rax = 0
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax = rbx[1].d
                z_3 = false
        while (not(z_3))

*(arg1 + 0x18) -= 1
