// 函数: sub_142667300
// 地址: 0x142667300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[0xa]

if (rbx != 0)
    sub_1426454b0(rbx + 0x10, arg2)
    *(rbx + 0x390) = 0
    int32_t rax_2 = arg3 & 0xfffffff0
    *(rbx + 0x398) = 0
    *(rbx + 0x39c) = 0x10
    *(rbx + 0x3a0) = 0
    *(rbx + 0x3e8) = 0x80000000
    
    do
        *(rbx + ((zx.q(rax_2) & 7) << 3) + 0x3a8) = 0
        
        if ((rax_2.b & 7) u>= 7)
            rax_2 |= 8
        else
            rax_2 ^= ((rax_2 + 1) ^ rax_2) & 7
    while (((rax_2 u>> 3).b & 1) == 0)
    
    *(rbx + 0x428) = 0
    int64_t* var_10 = nullptr
    int64_t var_18
    
    if (&arg1[0xa] != &var_18)
        arg1[0xa] = 0
        var_18 = 0
        sub_1405aeff0(&arg1[0xb], &var_10)
        int64_t* rcx_11 = var_10
        
        if (rcx_11 != 0)
            rcx_11[1].d -= 1
            
            if (rcx_11[1].d == 1)
                int64_t* rbx_1 = var_10
                (**rbx_1)(rbx_1)
                int32_t rdi_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    int64_t* rcx_13 = var_10
                    (*(*rcx_13 + 8))(rcx_13, zx.q(rdi_1))

return sub_142651a40(arg1, 0x20) __tailcall
