// 函数: sub_1417dca30
// 地址: 0x1417dca30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143ef8a58
void* r8 = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

int32_t rax_1
void* rdx_1

if (r8 != 0 && rbx != 0)
    rdx_1 = nullptr
    rax_1 = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax_1 = rbx[1].d

uint64_t rsi

if (r8 == 0 || rbx == 0 || rax_1 s<= 0)
    rsi.b = 0
else
    int32_t rax_2 = 0
    int64_t* rdi_1 = rbx
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax_2 = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_1417dcaa3:
        rdi_1 = nullptr
    else
        while (true)
            bool z_2
            
            if (rax_2 == rbx[1].d)
                rbx[1].d = rax_2 + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                rdx_1 = r8
                break
            
            rax_2 = 0
            bool z_3
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax_2 = rbx[1].d
                z_3 = false
            
            if (z_3)
                goto label_1417dcaa3
    
    int64_t* rcx_2 = *(rdx_1 + 0x50)
    
    if (rcx_2 == 0)
        rsi.b = 0
    else
        rsi = zx.q((*(*rcx_2 + 0x10))(rcx_2))
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_9 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx != 0)
    int32_t rbp_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rbp_1 == 1)
        int64_t r8_1 = *rbx
        (*(r8_1 + 8))(rbx, zx.q(rbp_1), r8_1)

return zx.q(rsi.b)
