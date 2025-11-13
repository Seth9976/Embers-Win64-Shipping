// 函数: sub_1417df460
// 地址: 0x1417df460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* r9_1 = data_143ef8a50
int64_t* rbx_1 = data_143ef8a58

if (rbx_1 != 0)
    *(rbx_1 + 0xc) += 1

if (r9_1 == 0)
label_1417df53b:
    
    if (rbx_1 != 0)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))
else if (rbx_1 != 0)
    void* rdx_1 = nullptr
    int32_t rax = 0
    
    if (0 == rbx_1[1].d)
        rbx_1[1].d = 0
    else
        rax = rbx_1[1].d
    
    if (rax s> 0)
        rax = 0
        int64_t* rdi_1 = rbx_1
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            rax = rbx_1[1].d
            z_1 = false
        
        if (z_1)
        label_1417df4e7:
            rdi_1 = nullptr
        else
            while (true)
                bool z_2
                
                if (rax == rbx_1[1].d)
                    rbx_1[1].d = rax + 1
                    z_2 = true
                else
                    rbx_1[1].d
                    z_2 = false
                
                if (z_2)
                    rdx_1 = r9_1
                    break
                
                rax = 0
                bool z_3
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    rax = rbx_1[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_1417df4e7
        
        int64_t* rcx_1 = *(rdx_1 + 0x50)
        
        if (rcx_1 != 0)
            *(rdx_1 + 0x90) = arg1
            (*(*rcx_1 + 0x20))(rcx_1, arg1)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                rax = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    goto label_1417df53b
