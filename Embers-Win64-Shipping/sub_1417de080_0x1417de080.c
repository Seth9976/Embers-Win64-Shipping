// 函数: sub_1417de080
// 地址: 0x1417de080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t* rbx = data_143ef8a58
void* rdx = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

if (rdx == 0)
label_1417de1a0:
    
    if (rbx != 0)
        int32_t rbp_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rbp_1))
else if (rbx != 0)
    int32_t rax_1 = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax_1 = rbx[1].d
    
    if (rax_1 s> 0)
        int64_t* rdi_1 = rbx
        void* r8_1 = nullptr
        int32_t rax_2 = 0
        bool z_1
        
        if (0 == rbx[1].d)
            rbx[1].d = 0
            z_1 = true
        else
            rax_2 = rbx[1].d
            z_1 = false
        
        if (z_1)
        label_1417de124:
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
                    goto label_1417de124
        
        int64_t* rcx_1 = *(r8_1 + 0x50)
        int64_t var_18
        
        if (rcx_1 == 0)
            var_18 = 0
            int64_t var_10_1 = 0
        else
            (*(*rcx_1 + 0x58))(rcx_1, &var_18, arg2)
        
        sub_1417d6ca0(arg1, &var_18)
        sub_1417d6b00(&var_18)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax_7 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    goto label_1417de1a0

return arg1
