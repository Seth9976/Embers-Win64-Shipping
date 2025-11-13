// 函数: sub_142ab2560
// 地址: 0x142ab2560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = -2
sub_142ab2920()
sub_142a860a0(&data_144016090)
int32_t* rax = sub_142a86bf0(*(arg1 + 8), arg2)

if (rax == 0)
    int32_t arg_8 = 0
    int32_t rbp_1 = *arg4
    void* rdi_1 = *arg3
    void* rax_8 = (*(*arg2 + 0x18))(arg2)
    
    if (rax_8 != 0)
        *(rax_8 + 8) = rbp_1
        
        if (*(rdi_1 + 8) == 0)
            *(rax_8 + 0xc) = 1
            *(rdi_1 + 0x10) = arg1
            *(arg1 + 0x14) += 1
            *(arg1 + 0x18) += 1
        
        sub_142a86f50(*(arg1 + 8), rax_8, rdi_1, &arg_8)
        
        if (arg_8 s<= 0)
            *(rdi_1 + 8) += 1
    
    sub_142ab2760(arg1)
else
    int32_t rax_1 = *(*(rax + 0x10) + 8)
    void* rdx_1 = *(rax + 8)
    uint64_t rcx_1
    
    if (rdx_1 != 0)
        rcx_1 = zx.q(*(rdx_1 + 0xc))
        *(rdx_1 + 0xc) += 1
        
        if (rcx_1.d == 0)
            *(arg1 + 0x18) += 1
    
    if (rdx_1 != *(arg1 + 0x30) || rax_1 != 0)
        rcx_1.b = 0
    else
        rcx_1 = 1
    
    if (rdx_1 != 0)
        int32_t rax_2 = *(rdx_1 + 0xc)
        *(rdx_1 + 0xc) -= 1
        
        if (rax_2 == 1)
            *(arg1 + 0x18) -= 1
    
    if (rcx_1.b != 0)
        sub_142ab24e0(arg1, rax, *arg3, *arg4)
        sub_142ab2760(arg1)
    else
        *arg4 = *(*(rax + 0x10) + 8)
        void* rax_4 = *arg3
        
        if (rax_4 != 0)
            int32_t r9 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (r9 == 1)
                *(arg1 + 0x18) -= 1
        
        void* rax_6 = *(rax + 8)
        *arg3 = rax_6
        
        if (rax_6 != 0)
            int32_t r8 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) += 1
            
            if (r8 == 0)
                *(arg1 + 0x18) += 1

return sub_142a860d0(&data_144016090) __tailcall
