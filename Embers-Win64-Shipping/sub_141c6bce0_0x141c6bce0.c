// 函数: sub_141c6bce0
// 地址: 0x141c6bce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

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
                    void* rax_1 = *arg2
                    
                    if (rax_1 != 0)
                        int32_t var_50_1 = *(rax_1 + 0x10)
                        void** const var_28_1 = &data_142d42ed8
                        int64_t var_38_1 = 0
                        int64_t (* var_48)(int64_t* arg1) = sub_141c56c00
                        int128_t var_20_1 = arg1.o
                        sub_141c720f0(arg1, &var_48, arg3)
                    
                    rbx[1].d -= 1
                    
                    if (rbx[1].d == 1)
                        (**rbx)(rbx)
                        rax = *(rbx + 0xc)
                        *(rbx + 0xc) -= 1
                        
                        if (rax == 1)
                            (*(*rbx + 8))(rbx, 1)
                
                break
            
            rax = 0
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax = rbx[1].d
                z_3 = false
        while (not(z_3))

int64_t* rcx_4 = arg2[1]

if (rcx_4 == 0)
    return 

int32_t rdi_1 = *(rcx_4 + 0xc)
*(rcx_4 + 0xc) -= 1

if (rdi_1 == 1 && rcx_4 != 0)
    (*(*rcx_4 + 8))(rcx_4, zx.q(rdi_1))
