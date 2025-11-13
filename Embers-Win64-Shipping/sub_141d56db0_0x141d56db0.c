// 函数: sub_141d56db0
// 地址: 0x141d56db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x2b0))() == 0)
    (*(*arg1 + 0x340))(arg1, 0)
    EnterCriticalSection(&arg1[0xe1])
    int64_t* var_20 = nullptr
    int64_t var_28
    
    if (&arg1[0xeb] != &var_28)
        arg1[0xeb] = 0
        var_28 = 0
        sub_1405aeff0(&arg1[0xec], &var_20)
        int64_t* rcx_4 = var_20
        
        if (rcx_4 != 0)
            rcx_4[1].d -= 1
            
            if (rcx_4[1].d == 1)
                int64_t* rdi_1 = var_20
                (**rdi_1)(rdi_1)
                int32_t rax_5 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_5 == 1)
                    int64_t* rcx_6 = var_20
                    (*(*rcx_6 + 8))(rcx_6, 1)
    
    if (arg1 != -0x708)
        LeaveCriticalSection(&arg1[0xe1])
    
    void var_18
    
    if (&arg1[0xe7] != &var_18)
        arg1[0xe7] = 0
        int64_t* rcx_8 = arg1[0xe8]
        arg1[0xe8] = 0
        
        if (rcx_8 != 0)
            int32_t rbp_1 = *(rcx_8 + 0xc)
            *(rcx_8 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*rcx_8 + 8))(rcx_8, zx.q(rbp_1))

return sub_141c5a740(arg1) __tailcall
