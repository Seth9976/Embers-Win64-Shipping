// 函数: sub_1417ddee0
// 地址: 0x1417ddee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t* rbx = data_143ef8a58
void* r10 = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

if (r10 != 0 && rbx != 0)
    int32_t rax_1 = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax_1 = rbx[1].d
    
    if (rax_1 s> 0)
        void* r8 = nullptr
        int64_t* rdi_1 = rbx
        int32_t rax_4 = 0
        bool z_1
        
        if (0 == rbx[1].d)
            rbx[1].d = 0
            z_1 = true
        else
            rax_4 = rbx[1].d
            z_1 = false
        
        if (z_1)
        label_1417ddf96:
            rdi_1 = nullptr
        else
            while (true)
                bool z_2
                
                if (rax_4 == rbx[1].d)
                    rbx[1].d = rax_4 + 1
                    z_2 = true
                else
                    rbx[1].d
                    z_2 = false
                
                if (z_2)
                    r8 = r10
                    break
                
                rax_4 = 0
                bool z_3
                
                if (0 == rbx[1].d)
                    rbx[1].d = 0
                    z_3 = true
                else
                    rax_4 = rbx[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_1417ddf96
        
        int64_t* rcx_1 = *(r8 + 0x50)
        int64_t var_28
        
        if (rcx_1 == 0)
            var_28 = 0
            int64_t var_20_1 = 0
        else
            int32_t var_40_1 = arg3[1].d
            int32_t var_30_1 = arg2[1].d
            int64_t rax_8 = *rcx_1
            int64_t var_48 = *arg3
            int64_t zmm0 = *arg2
            int64_t var_38 = zmm0
            (*(rax_8 + 0x50))(zmm0, &var_28, &var_38, &var_48, 
                (arg5 * 2) | arg6 << 2 | arg7 << 3 | arg4)
        
        sub_1417d6ca0(arg1, &var_28)
        sub_1417d6b00(&var_28)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax_11 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx != 0)
    int32_t rbp_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rbp_1 == 1)
        (*(*rbx + 8))(rbx, zx.q(rbp_1))

return arg1
