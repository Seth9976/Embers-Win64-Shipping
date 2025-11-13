// 函数: sub_1417ded60
// 地址: 0x1417ded60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143ef8a58
void* r8 = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

if (r8 == 0)
label_1417dee2d:
    
    if (rbx != 0)
    label_1417dee37:
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))
else if (rbx != 0)
    void* rdx_1 = nullptr
    int32_t rax = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax = rbx[1].d
    
    if (rax s<= 0)
        goto label_1417dee2d
    
    rax = 0
    int64_t* rsi_1 = rbx
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_1417dedd3:
        rsi_1 = nullptr
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
                rdx_1 = r8
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
                goto label_1417dedd3
    
    int64_t* rcx_1 = *(rdx_1 + 0x50)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x88))(rcx_1, arg1)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            rax = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    goto label_1417dee37
