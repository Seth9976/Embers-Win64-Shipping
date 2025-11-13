// 函数: sub_14189ae70
// 地址: 0x14189ae70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x120)
int64_t result = sx.q(*(arg1 + 0x128))

for (void* rbp = i + result * 0x28; i != rbp; i += 0x28)
    int64_t rdi_1 = *(i + 0x20)
    
    if (rdi_1 != 0)
        void* rax = *(arg2 + 0x10)
        void* rcx = arg2 + 0x20
        
        if (rax != 0)
            rcx = rax
        
        result = (*arg2)((*(*rcx + 8))(rcx), rdi_1)
        
        if (result.b != 0)
            int64_t* rcx_2 = *(i + 0x20)
            int64_t var_38
            int64_t* rax_4 = (*(*rcx_2 + 0x10))(rcx_2, &var_38)
            int16_t* const r8
            
            if (rax_4[1].d == 0)
                r8 = &data_142d40450
            else
                r8 = *rax_4
            
            int64_t* rcx_3 = *(arg1 + 0x38)
            int64_t* arg_20
            (*(*rcx_3 + 0x48))(rcx_3, &arg_20, r8, 0)
            int64_t rcx_4 = var_38
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t* rax_6 = arg_20
            char arg_8
            int64_t* rdi_2
            
            if (rax_6 == 0)
                void* rax_8 = *(i + 0x20)
                arg_8 = 0
                *(rax_8 + 0x29) |= 1
                rdi_2 = *(i + 0x20)
            else
                int64_t* rcx_5 = *(i + 0x20)
                arg_20 = nullptr
                rdi_2 = rcx_5
                
                if (rcx_5 != rax_6)
                    *(i + 0x20) = rax_6
                    rdi_2 = rax_6
                    
                    if (rcx_5 != 0)
                        (**rcx_5)(rcx_5, 1)
                        rdi_2 = *(i + 0x20)
                
                arg_8 = 1
            
            void* rax_9 = *(arg3 + 0x10)
            void* rcx_6 = arg3 + 0x20
            
            if (rax_9 != 0)
                rcx_6 = rax_9
            
            result = (*arg3)((*(*rcx_6 + 8))(rcx_6), rdi_2, &arg_8)
            int64_t* rcx_8 = arg_20
            
            if (rcx_8 != 0)
                result = (**rcx_8)(rcx_8, 1)

return result
