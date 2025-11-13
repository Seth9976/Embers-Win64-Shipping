// 函数: sub_141ff6440
// 地址: 0x141ff6440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14329ad70
arg1[1] = &data_14329ada0
arg1[2] = &data_14329adb8
int64_t* rbx = arg1[8]

if (rbx != 0)
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax_1 = rbx[1].d
        z_1 = false
    
    if (not(z_1))
        bool z_3
        
        do
            bool z_2
            
            if (rax_1 == rbx[1].d)
                rbx[1].d = rax_1 + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                if (rbx != 0)
                    int64_t* rcx_1 = arg1[7]
                    
                    if (rcx_1 != 0)
                        (*(*rcx_1 + 0x48))(rcx_1, &arg1[5])
                    
                    rbx[1].d -= 1
                    
                    if (rbx[1].d == 1)
                        (**rbx)(rbx)
                        int32_t rax_6 = *(rbx + 0xc)
                        *(rbx + 0xc) -= 1
                        
                        if (rax_6 == 1)
                            (*(*rbx + 8))(rbx, 1)
                
                break
            
            rax_1 = 0
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax_1 = rbx[1].d
                z_3 = false
        while (not(z_3))

DeleteCriticalSection(&arg1[0x16])
sub_140745b20(&arg1[0x14])
sub_14090dae0(&arg1[0x10])
sub_140745b20(&arg1[0xc])
sub_140596e10(&arg1[0xa])
int64_t* rcx_9 = arg1[8]

if (rcx_9 != 0)
    int32_t rax_8 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (rax_8 == 1 && rcx_9 != 0)
        (*(*rcx_9 + 8))(rcx_9, 1)

arg1[2] = &data_142d56fa0
arg1[1] = &data_142d5c278
*arg1 = &data_142e61488
int64_t* rcx_10 = arg1[4]

if (rcx_10 != 0)
    int32_t rsi_1 = *(rcx_10 + 0xc)
    *(rcx_10 + 0xc) -= 1
    
    if (rsi_1 == 1 && rcx_10 != 0)
        return (*(*rcx_10 + 8))(rcx_10, zx.q(rsi_1))

return &data_142e61488
