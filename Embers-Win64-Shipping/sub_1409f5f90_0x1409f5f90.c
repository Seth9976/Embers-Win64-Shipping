// 函数: sub_1409f5f90
// 地址: 0x1409f5f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2].b != 0)
    int32_t rcx = **arg1
    
    if (rcx != 0)
        int64_t* rax_1 = sub_1409f73a0(rcx)
        int64_t* rbx_1 = rax_1[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int32_t rcx_1 = rax_1[2].d
        int64_t var_28 = *rax_1
        int64_t* var_20_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int32_t var_18_1 = rcx_1
        **arg1
        sub_1409f6790(arg1[1], &var_28)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rbp_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rbp_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, zx.q(rbp_1))

if (arg1[2].b != 0)
    arg1[2].b = 0
