// 函数: sub_1417df050
// 地址: 0x1417df050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143ef8a58
void* rdx = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

if (rdx == 0)
label_1417df1cd:
    
    if (rbx != 0)
    label_1417df1d7:
        int32_t rdi_4 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_4 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_4))
else if (rbx != 0)
    void* rdi_1 = nullptr
    int32_t rax = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax = rbx[1].d
    
    if (rax s<= 0)
        goto label_1417df1cd
    
    int32_t rax_1 = 0
    int64_t* r14_1 = rbx
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax_1 = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_1417df0d7:
        r14_1 = nullptr
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
                rdi_1 = rdx
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
                goto label_1417df0d7
    
    int64_t* rcx_1 = *(rdi_1 + 0x50)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x48))(rcx_1, arg1)
    
    *(rdi_1 + 0x60) = *arg1
    int64_t rbp
    rbp.b = 0
    *(rdi_1 + 0x70) = arg1[1]
    *(rdi_1 + 0x80) = arg1[2]
    *(rdi_1 + 0x4c) += 1
    int32_t rax_4 = *(rdi_1 + 0x40)
    int32_t rcx_2 = *(rdi_1 + 0x4c)
    int64_t rsi_1 = sx.q(rax_4 - 1)
    
    if (rax_4 - 1 s>= 0)
        int64_t rdi_3 = rsi_1 << 4
        int64_t temp2_1
        
        do
            int64_t rax_6 = *(rdi_1 + 0x38)
            
            if (*(rdi_3 + rax_6 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_3 = *(rdi_3 + rax_6)
                
                if (rcx_3 == 0)
                    rbp.b = 1
                else if ((*(*rcx_3 + 0x50))(rcx_3, arg1) == 0)
                    rbp.b = 1
            
            rdi_3 -= 0x10
            temp2_1 = rsi_1
            rsi_1 -= 1
        while (temp2_1 - 1 s>= 0)
        rcx_2 = *(rdi_1 + 0x4c)
    
    *(rdi_1 + 0x4c) = rcx_2 - 1
    
    if (rbp.b != 0)
        sub_140599630(rdi_1 + 0x38, 0)
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            rax = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (rax == 1)
                (*(*r14_1 + 8))(r14_1, 1)
    
    goto label_1417df1d7
