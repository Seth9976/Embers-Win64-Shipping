// 函数: sub_1423971e0
// 地址: 0x1423971e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x54) == 0)
    void* rbp_1 = *arg2
    
    if (rbp_1 != 0)
        int64_t* r12_1 = arg2[1]
        
        if (r12_1 != 0)
            int64_t* rcx = *(arg1 + 0x3c8)
            int32_t rax_1 = (*(*rcx + 0x20))(rcx)
            int64_t* rcx_1 = *(arg1 + 0x3c8)
            int64_t rdx = *rcx_1
            int64_t rax_2 = (*(rdx + 0x18))(rcx_1, rdx)
            void** const var_d8
            memset(&var_d8, 0, 0x90)
            sub_140b4c2a0(&var_d8)
            int64_t var_48_1 = 0
            var_d8 = &data_142ef5568
            int64_t var_40_1 = rax_2
            int64_t var_30_1 = 0x7fffffffffffffff
            int32_t var_38_1 = rax_1
            sub_140b55290(&var_d8, 1)
            var_d8[0x1b](&var_d8, 1)
            int64_t rbx_2 = sx.q(*(arg1 + 8))
            
            if (rbx_2.d s< *(arg1 + 0x100))
                int64_t r14_1 = rbx_2 << 3
                
                do
                    int64_t* rsi_1 = *(r14_1 + *r12_1)
                    char rax_5 = sub_142347d60()
                    char rax_6
                    int512_t zmm1_1
                    rax_6, zmm1_1 = sub_142347e40(rbp_1, rbx_2.d, rax_5)
                    char var_f8_1 = 0
                    sub_142346230(rsi_1, &var_d8, rbp_1, zx.q(rbx_2.d), zmm1_1, rax_6, rax_5)
                    rbx_2 = zx.q(rbx_2.d + 1)
                    r14_1 += 8
                while (rbx_2.d s< *(arg1 + 0x100))
            
            sub_140a74f90(rax_2)
            return sub_140b4cb40(&var_d8)

return &__return_addr
