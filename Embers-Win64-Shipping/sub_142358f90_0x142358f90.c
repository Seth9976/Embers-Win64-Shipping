// 函数: sub_142358f90
// 地址: 0x142358f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
void** const var_28 = &data_142d42d18
int64_t (* var_48)(int64_t, void* arg2) = sub_14235b3c0
sub_14234e6b0(arg1, &var_48)
int32_t rax = *(arg1 + 0x34)
void* rdi = *(arg1 + 0x28)
int32_t i_2 = *(arg1 + 0x30)

if (rax s< 0)
    if (i_2 != 0)
        void* rdi_2 = rdi + 8
        int32_t i
        
        do
            int64_t* rcx_1 = *rdi_2
            
            if (rcx_1 != 0)
                int32_t rax_3 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (rax_3 == 1 && rcx_1 != 0)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rdi_2 += 0x10
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax = *(arg1 + 0x34)
    
    *(arg1 + 0x30) = 0
    
    if (rax != 0)
        sub_1405a5410(arg1 + 0x28, 0)
else
    if (i_2 != 0)
        int64_t* rdi_1 = rdi + 8
        int32_t i_1
        
        do
            int64_t* rcx = *rdi_1
            
            if (rcx != 0)
                int32_t rax_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (rax_1 == 1 && rcx != 0)
                    (*(*rcx + 8))(rcx, 1)
            
            rdi_1 = &rdi_1[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x30) = 0

return sub_140cd7d40(arg1) __tailcall
