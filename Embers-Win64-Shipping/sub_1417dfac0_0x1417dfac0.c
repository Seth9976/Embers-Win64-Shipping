// 函数: sub_1417dfac0
// 地址: 0x1417dfac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143ef8a58
void* rdx = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

if (rdx == 0)
label_1417dfc09:
    
    if (rbx != 0)
        int32_t rbp_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rbp_1))
else if (rbx != 0)
    int32_t rsi_1 = 0
    uint64_t rax = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax = zx.q(rbx[1].d)
    
    if (rax.d s> 0)
        int32_t rax_1 = 0
        int64_t* rdi_1 = rbx
        void* r15_1 = nullptr
        bool z_1
        
        if (0 == rbx[1].d)
            rbx[1].d = 0
            z_1 = true
        else
            rax_1 = rbx[1].d
            z_1 = false
        
        if (z_1)
        label_1417dfb43:
            rdi_1 = nullptr
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
                    r15_1 = rdx
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
                    goto label_1417dfb43
        
        int64_t* rcx_1 = *(r15_1 + 0x50)
        int64_t var_28
        int64_t r8_1
        
        if (rcx_1 == 0)
            rax = 0
            var_28 = 0
            int32_t var_20_1 = 0
            r8_1 = 0
            int32_t var_1c_1 = 0
        else
            (*(*rcx_1 + 0x68))(rcx_1, &var_28)
            int32_t var_20
            rax = zx.q(var_20)
            r8_1 = var_28
        
        if (rax.d s> 0)
            int64_t i = 0
            
            do
                if (*(*(r8_1 + (i << 3)) + 0x30) == arg1)
                    int64_t* rcx_2 = *(r15_1 + 0x50)
                    
                    if (rcx_2 != 0)
                        (*(*rcx_2 + 0x88))(rcx_2, *(r8_1 + (sx.q(rsi_1) << 3)))
                        r8_1 = var_28
                    
                    break
                
                rsi_1 += 1
                i += 1
            while (i s< sx.q(rax.d))
        
        if (r8_1 != 0)
            sub_140a74f90(r8_1)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                rax = zx.q(*(rdi_1 + 0xc))
                *(rdi_1 + 0xc) -= 1
                
                if (rax.d == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    goto label_1417dfc09
