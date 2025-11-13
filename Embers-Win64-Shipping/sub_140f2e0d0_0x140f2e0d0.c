// 函数: sub_140f2e0d0
// 地址: 0x140f2e0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(*arg2, 0, sx.q(arg2[1].d) << 2)
memset(*arg3, 0, sx.q(arg3[1].d) << 2)
int32_t rbp = 0
int32_t result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)

if (result s> 0)
    void** rsi_1 = nullptr
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    
    do
        void* rdi_1 = *(rsi_1 + *(arg1 + 0x2b8))
        char* rbx_2 = *(rdi_1 + 0x10) + 0x1a8
        
        if (*(rbx_2 + 0x10) != 0)
            int64_t* rcx_3 = *(rbx_2 + 8)
            
            if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
                int64_t* rcx_4
                
                if (*(rbx_2 + 0x10) == 0)
                    rcx_4 = nullptr
                else
                    rcx_4 = *(rbx_2 + 8)
                
                char arg_8
                (*(*rcx_4 + 0x48))(rcx_4, &arg_8)
                *rbx_2 = arg_8
        
        if (*rbx_2 != data_1439ae51d)
            if (*(rdi_1 + 0x48) != 0)
                int64_t* rcx_5 = *(rdi_1 + 0x40)
                
                if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
                    int64_t* rcx_6
                    
                    if (*(rdi_1 + 0x48) == 0)
                        rcx_6 = nullptr
                    else
                        rcx_6 = *(rdi_1 + 0x40)
                    
                    int128_t var_88
                    (*(*rcx_6 + 0x48))(rcx_6, &var_88)
                    *(rdi_1 + 0x28) = var_88
            
            zmm8 = *(rdi_1 + 0x30)
            zmm6 = *(rdi_1 + 0x28)
            zmm7 = *(rdi_1 + 0x34)
            zmm9 = *(rdi_1 + 0x2c)
            void arg_10
            int32_t* rax_10 = sub_140e13cf0(*(rdi_1 + 0x10), &arg_10)
            int32_t rcx_8 = *(rdi_1 + 0x64)
            zmm8[0] = zmm8[0] f+ zmm6.d
            uint128_t zmm1 = zx.o(*(rdi_1 + 0x6c))
            zmm9[0] = zmm9[0] f+ zmm7.d
            int32_t r8_4 = *(rdi_1 + 0x60)
            zmm1 = _mm_cvtepi32_ps(zmm1)
            zmm8[0] = zmm8[0] f+ *rax_10
            zmm9[0] = zmm9[0] f+ rax_10[1]
            float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(rcx_8))
            zmm9[0] = zmm9[0] f/ zmm1.d
            zmm8[0] = zmm8[0] / temp0_2[0]
            sub_140f43be0(zmm8, arg2, r8_4, r8_4 + rcx_8)
            int32_t r8_5 = *(rdi_1 + 0x68)
            sub_140f43be0(zmm9, arg3, r8_5, *(rdi_1 + 0x6c) + r8_5)
        
        rbp += 1
        rsi_1 = &rsi_1[1]
        result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    while (rbp s< result)

return result
