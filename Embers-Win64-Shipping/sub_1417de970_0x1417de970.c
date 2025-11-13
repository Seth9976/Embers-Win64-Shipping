// 函数: sub_1417de970
// 地址: 0x1417de970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143ef8a58
void* rdx = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

if (rdx == 0)
label_1417dea6a:
    
    if (rbx != 0)
        int32_t rbp_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rbp_1))
else if (rbx != 0)
    void* rsi_1 = nullptr
    int32_t rax = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax = rbx[1].d
    
    if (rax s> 0)
        rax = 0
        int64_t* rdi_1 = rbx
        bool z_1
        
        if (0 == rbx[1].d)
            rbx[1].d = 0
            z_1 = true
        else
            rax = rbx[1].d
            z_1 = false
        
        if (z_1)
        label_1417de9e7:
            rdi_1 = nullptr
        else
            while (true)
                bool z_2
                
                if (rax == rbx[1].d)
                    rbx[1].d = rax + 1
                    z_2 = true
                else
                    rbx[1].d
                    z_2 = false
                
                if (z_2)
                    rsi_1 = rdx
                    break
                
                rax = 0
                bool z_3
                
                if (0 == rbx[1].d)
                    rbx[1].d = 0
                    z_3 = true
                else
                    rax = rbx[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_1417de9e7
        
        int64_t* rcx_2 = *(rsi_1 + 0x50)
        
        if (rcx_2 != 0)
            int64_t var_38
            (*(*rcx_2 + 0x38))(rcx_2, &var_38)
            int64_t rcx_3 = var_38
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            char var_28
            
            if (var_28 == 1)
                int64_t* rcx_4 = *(rsi_1 + 0x50)
                (*(*rcx_4 + 0x28))(rcx_4)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                rax = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    goto label_1417dea6a
