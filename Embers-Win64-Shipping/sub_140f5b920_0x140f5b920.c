// 函数: sub_140f5b920
// 地址: 0x140f5b920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if ((*arg1[0x58])(&arg1[0x58]) s> 0)
    int64_t* rdi_1 = nullptr
    int32_t rax_5
    
    do
        if (*(*(rdi_1 + arg1[0x5a]) + 0x10) == *arg2)
            if (arg1[0x57].d == 0)
            label_140f5ba36:
                int32_t rdi_2 = arg1[0x55].d
                
                if (rbx == rdi_2)
                    sub_140e19ef0(arg1, 8)
                
                if (rdi_2 s> 0 && rdi_2 s>= rbx)
                    char var_34_1 = 1
                    int32_t var_38_1 = rdi_2 - 1
                    arg1[0x55].d = rdi_2 - 1
                    int64_t var_30 = 0
                    int32_t var_28_1 = 0
                    *(arg1 + 0x2ac) = 1
                    sub_1407473e0(&arg1[0x56], &var_30)
                    sub_140745b20(&var_30)
            else
                int64_t* rcx_5 = arg1[0x56]
                char rax_10
                
                if (rcx_5 != 0)
                    rax_10 = (*(*rcx_5 + 0x28))(rcx_5)
                
                if (rcx_5 == 0 || rax_10 == 0)
                    if (arg1[0x57].d == 0)
                        goto label_140f5ba36
                    
                    int64_t* rcx_6 = arg1[0x56]
                    
                    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
                        int64_t* rcx_7
                        
                        if (arg1[0x57].d == 0)
                            rcx_7 = nullptr
                        else
                            rcx_7 = arg1[0x56]
                        
                        arg1[0x55].d = (*(*rcx_7 + 0x48))(rcx_7)
                    
                    goto label_140f5ba36
            
            if (arg1[0x5c].b == 0)
                int64_t rdi_3 = sx.q(rbx) << 3
                int64_t* rcx_11 = *(rdi_3 + arg1[0x5a])
                
                if (rcx_11 != 0)
                    (**rcx_11)(rcx_11, 1)
                
                int32_t rcx_13 = arg1[0x5b].d
                int32_t rax_20 = rcx_13 - rbx
                
                if (rax_20 != 1)
                    int64_t r9_1 = arg1[0x5a]
                    memmove(r9_1 + rdi_3, r9_1 + (sx.q(rbx + 1) << 3), (rax_20 - 1) << 3)
                    rcx_13 = arg1[0x5b].d
                
                arg1[0x5b].d = rcx_13 - 1
                sub_1405c53d0(&arg1[0x5a])
            
            int64_t* rdi_4 = arg2[1]
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t temp4_1 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        int64_t r8_4 = *rdi_4
                        (*(r8_4 + 8))(rdi_4, 1, r8_4)
            
            return zx.q(rbx)
        
        rbx += 1
        rdi_1 = &rdi_1[1]
        rax_5 = (*arg1[0x58])(&arg1[0x58])
    while (rbx s< rax_5)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return 0xffffffff
