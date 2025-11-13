// 函数: sub_141d51770
// 地址: 0x141d51770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (not(0f f== *(arg1 + 0x100)))
    result = EnterCriticalSection(arg1 + 0xc8)
    int64_t* rcx_1 = *(arg1 + 0x128)
    
    if (rcx_1 != 0)
        int64_t rdi_1 = 0
        int64_t rax = 0
        
        if (0 == *(arg1 + 0x158))
            *(arg1 + 0x158) = 0
        else
            rax = *(arg1 + 0x158)
        
        int64_t r8_1 = *rcx_1
        (*(r8_1 + 0x80))(rcx_1, rax, r8_1)
        int64_t* rcx_2 = *(arg1 + 0x128)
        (*(*rcx_2 + 0x88))(rcx_2)
        int64_t* rdx_2 = *(arg1 + 0x128)
        
        if (rdx_2 != 0)
            int64_t* rax_3 = (*(*rdx_2 + 0x10))(rdx_2)
            int64_t r8_2 = *rax_3
            void arg_8
            int64_t* rax_4 = (*(r8_2 + 0x30))(rax_3, &arg_8, r8_2)
            rdx_2 = *(arg1 + 0x128)
            int64_t rcx_5 = *rax_4
            
            if (rcx_5 - *(arg1 + 0x28) s>= 0)
                rdi_1 = rcx_5 - *(arg1 + 0x28)
        
        int128_t zmm6
        int128_t zmm7
        int128_t zmm8
        int128_t zmm9
        
        if (0f f>= *(arg1 + 0x100))
            int64_t var_b0_1 = rdi_1 - data_143f37930
            int64_t var_c0_1 = 0x7fffffffffffffff
            zmm7 = 1.o
            int64_t var_d0_1 = rdi_1 - data_143f37928
            zmm6 = 1.o
            int64_t var_a0_1 = 0x7fffffffffffffff
            zmm9 = 1.o
            zmm8 = 1.o
        else
            int64_t var_100_1 = data_143f37928 + rdi_1
            zmm7 = 1.o
            int64_t var_e0_1 = data_143f37930 + rdi_1
            int64_t var_110_1 = -0x8000000000000000
            zmm6 = 1.o
            zmm9 = 1.o
            int64_t var_f0_1 = -0x8000000000000000
            zmm8 = 1.o
        
        int64_t* rax_8 = (*(*rdx_2 + 0x28))(rdx_2)
        int128_t var_98 = zmm6
        int128_t var_88_1 = zmm7
        sub_141d4f470(arg1 - 8, rax_8, &var_98)
        int128_t var_78 = zmm8
        int128_t var_68_1 = zmm9
        result = sub_141d4fdd0(arg1 - 8, rax_8, &var_78)
    
    if (arg1 != -0xc8)
        return LeaveCriticalSection(arg1 + 0xc8)

return result
