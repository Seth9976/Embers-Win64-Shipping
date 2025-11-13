// 函数: sub_1417dae20
// 地址: 0x1417dae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143ef8a58
void* rdx = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

int64_t result = 0

if (rdx == 0)
label_1417daee4:
    
    if (rbx != 0)
        int32_t rbp_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rbp_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, zx.q(rbp_1), r8_2)
else if (rbx != 0)
    int32_t rax_1 = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax_1 = rbx[1].d
    
    if (rax_1 s> 0)
        void* r8_1 = nullptr
        int64_t* rsi_1 = rbx
        int32_t rax_2 = 0
        bool z_1
        
        if (0 == rbx[1].d)
            rbx[1].d = 0
            z_1 = true
        else
            rax_2 = rbx[1].d
            z_1 = false
        
        if (z_1)
        label_1417dae97:
            rsi_1 = nullptr
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
                    r8_1 = rdx
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
                    goto label_1417dae97
        
        int64_t* rcx_2 = *(r8_1 + 0x50)
        
        if (rcx_2 != 0)
            result = (*(*rcx_2 + 0x78))(rcx_2)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t rax_8 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
    
    goto label_1417daee4

return result
