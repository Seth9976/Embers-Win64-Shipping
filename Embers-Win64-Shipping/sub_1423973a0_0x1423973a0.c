// 函数: sub_1423973a0
// 地址: 0x1423973a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x54) == 0)
    void* rbp_1 = *arg2
    
    if (rbp_1 != 0)
        int64_t* r14_1 = arg2[1]
        
        if (r14_1 != 0)
            int64_t* rcx = *(arg1 + 0x388)
            int32_t rax_1 = (*(*rcx + 0x20))(rcx)
            int64_t* rcx_1 = *(arg1 + 0x388)
            int64_t rdx = *rcx_1
            int64_t rax_2 = (*(rdx + 0x18))(rcx_1, rdx)
            void** const var_c8
            memset(&var_c8, 0, 0x90)
            sub_140b4c2a0(&var_c8)
            int64_t var_30_1 = rax_2
            var_c8 = &data_142ef5568
            int32_t var_28_1 = rax_1
            int64_t var_20_1 = 0x7fffffffffffffff
            int64_t var_38_1 = 0
            sub_140b55290(&var_c8, 1)
            var_c8[0x1b](&var_c8, 1)
            int64_t rbx_2 = sx.q(*(arg1 + 8))
            
            if (rbx_2.d s< *(arg1 + 0x100))
                int64_t rdi_1 = rbx_2 << 3
                
                do
                    void* rcx_6 = *(rdi_1 + *r14_1)
                    int64_t var_d8 = 0
                    int32_t var_d0_1 = 0
                    arg3 = sub_1423762a0(rcx_6, &var_c8, rbp_1, 0, arg3, &var_d8)
                    rbx_2 = zx.q(rbx_2.d + 1)
                    rdi_1 += 8
                while (rbx_2.d s< *(arg1 + 0x100))
            
            sub_140a74f90(rax_2)
            return sub_140b4cb40(&var_c8)

return &__return_addr
