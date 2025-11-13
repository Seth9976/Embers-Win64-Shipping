// 函数: sub_14067a390
// 地址: 0x14067a390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r15 = arg1

if (arg2[1].d s> 1)
    char* rdi_1 = *arg3
    void* rbp_2 = &rdi_1[sx.q(arg3[1].d)]
    void* var_48 = nullptr
    int64_t var_40_1 = 0
    
    if (rdi_1 != rbp_2)
        do
            char rsi_1 = *rdi_1
            void*** rax = j_sub_140a82f30(0x18)
            void*** rbx_1 = rax
            
            if (rax == 0)
                rbx_1 = nullptr
            else
                *rax = &data_142d84c78
                rax[2].b = rsi_1
                rax[1].d = 4
            
            void*** rax_1 = j_sub_140a82f30(0x18)
            
            if (rax_1 == 0)
                rax_1 = nullptr
            else
                rax_1[1].d = 1
                *(rax_1 + 0xc) = 1
                *rax_1 = &data_142d86170
                rax_1[2] = rbx_1
            
            int64_t rbx_2 = sx.q(var_40_1.d)
            int32_t rax_2 = (rbx_2 + 1).d
            var_40_1.d = rax_2
            
            if (rax_2 s> var_40_1:4.d)
                sub_140610660(&var_48)
            
            rdi_1 = &rdi_1[1]
            int64_t* rcx_3 = (rbx_2 << 4) + var_48
            *rcx_3 = rbx_1
            rcx_3[1] = rax_1
            int64_t var_30_2 = 0
            int64_t var_38_2 = 0
        while (rdi_1 != rbp_2)
        
        r15 = arg1
    
    result = sub_140b75640(*(r15 + 0x28), arg2, &var_48)
    int32_t i_1 = var_40_1.d
    
    if (i_1 != 0)
        int64_t* rdi_3 = var_48 + 8
        int32_t i
        
        do
            int64_t* rbx_3 = *rdi_3
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    result = (**rbx_3)(rbx_3)
                    int32_t temp2_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        result = (*(*rbx_3 + 8))(rbx_3, 1)
            
            rdi_3 = &rdi_3[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* rcx_7 = var_48
    
    if (rcx_7 != 0)
        return sub_140a74f90(rcx_7)

return result
