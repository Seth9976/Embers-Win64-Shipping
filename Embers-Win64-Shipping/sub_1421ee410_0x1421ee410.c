// 函数: sub_1421ee410
// 地址: 0x1421ee410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x108)
void var_18
sub_142076cb0(&var_18, (*(*rcx + 0x240))(rcx), 0, 1, *(arg1 + 0x168) u>> 1 & 1)
void* rax_2 = *(arg1 + 0x178)

if (rax_2 != 0)
    int32_t i = 0
    
    if (*(rax_2 + 0x70) s> 0)
        int64_t rdi_1 = 0
        
        do
            void* rcx_2 = *(rax_2 + 0x68)
            void* rdx_1 = rax_2 + 8
            
            if (rcx_2 != 0)
                rdx_1 = rcx_2
            
            int64_t* rcx_3 = *(rdx_1 + rdi_1)
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 0x30))(rcx_3, arg1, arg2, arg3)
                rax_2 = *(arg1 + 0x178)
            
            i += 1
            rdi_1 += 8
        while (i s< *(rax_2 + 0x70))

return sub_142079870(&var_18)
