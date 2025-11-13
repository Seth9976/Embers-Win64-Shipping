// 函数: sub_140f2b2b0
// 地址: 0x140f2b2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t* rcx_1 = *arg1 + 0x2c0
int32_t result = (**rcx_1)(rcx_1)

if (arg_10 s< result)
    int128_t zmm6
    int128_t var_28_1 = zmm6
    int128_t zmm7
    int128_t var_38_1 = zmm7
    int128_t zmm8
    int128_t var_48_1 = zmm8
    int128_t zmm9
    int128_t var_58_1 = zmm9
    
    do
        void* rsi_1 = *(*(*arg1 + 0x2d0) + (sx.q(arg_10) << 3))
        char* rdi_2 = *(rsi_1 + 0x10) + 0x1a8
        
        if (*(rdi_2 + 0x10) != 0)
            int64_t* rcx_3 = *(rdi_2 + 8)
            
            if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
                int64_t* rcx_4
                
                if (*(rdi_2 + 0x10) == 0)
                    rcx_4 = nullptr
                else
                    rcx_4 = *(rdi_2 + 8)
                
                char arg_8
                (*(*rcx_4 + 0x48))(rcx_4, &arg_8)
                *rdi_2 = arg_8
        
        if (*rdi_2 != data_1439ae51d)
            int64_t var_78 = 0
            int64_t var_70_1 = 0
            int32_t* rax_7 = sub_140f1bdc0(&arg1[4], &arg_10, &var_78)
            int32_t rcx_6 = arg_10
            int32_t rax_8 = *(arg1 + 0x1c)
            
            if (rax_8 == 0xffffffff)
                *(arg1 + 0x1c) = rcx_6
                rax_8 = rcx_6
            
            if (rcx_6 != rax_8)
                int128_t zmm0
                zmm0.d = (*(*arg1 + 0x2e8)).d f+ arg1[2].d
                arg1[2].d = zmm0.d
            
            void* rdi_3 = *(rsi_1 + 0x10)
            
            if (*(rsi_1 + 0x48) != 0)
                int64_t* rcx_7 = *(rsi_1 + 0x40)
                
                if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
                    int64_t* rcx_8
                    
                    if (*(rsi_1 + 0x48) == 0)
                        rcx_8 = nullptr
                    else
                        rcx_8 = *(rsi_1 + 0x40)
                    
                    int128_t var_68
                    (*(*rcx_8 + 0x48))(rcx_8, &var_68)
                    *(rsi_1 + 0x28) = var_68
            
            zmm6 = *(rsi_1 + 0x30)
            zmm9 = *(rsi_1 + 0x28)
            zmm7 = *(rsi_1 + 0x34)
            zmm8 = *(rsi_1 + 0x2c)
            void arg_18
            int64_t* rax_13
            rax_13, arg2 = sub_140e13cf0(rdi_3, &arg_18)
            zmm9.d = zmm9.d f+ zmm6.d
            zmm6 = arg1[2].d
            zmm8.d = zmm8.d f+ zmm7.d
            zmm9.d = zmm9.d f+ *rax_13
            zmm8.d = zmm8.d f+ *(rax_13 + 4)
            *rax_7 = zmm6.d
            rax_7[1] = *(arg1 + 0x14)
            rax_7[2] = zmm9.d
            zmm6.d = zmm6.d f+ zmm9.d
            rax_7[3] = zmm8.d
            float* rdi_5
            
            if (*(rsi_1 + 0x54) != 0)
                rdi_5 = *arg1 + 0x2a8
                
                if (rdi_5[4] != 0)
                    int64_t* rcx_10 = *(rdi_5 + 8)
                    
                    if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
                        int64_t* rcx_11
                        
                        if (rdi_5[4] == 0)
                            rcx_11 = nullptr
                        else
                            rcx_11 = *(rdi_5 + 8)
                        
                        (*(*rcx_11 + 0x48))(rcx_11)
                        *rdi_5 = arg2
                
                arg2 = *(rsi_1 + 0x50)
            
            if (*(rsi_1 + 0x54) == 0 || arg2 <= *rdi_5)
                float* rdi_9 = *arg1 + 0x2a8
                
                if (rdi_9[4] != 0)
                    int64_t* rcx_15 = *(rdi_9 + 8)
                    
                    if (rcx_15 != 0 && (*(*rcx_15 + 0x28))(rcx_15) != 0)
                        int64_t* rcx_16
                        
                        if (rdi_9[4] == 0)
                            rcx_16 = nullptr
                        else
                            rcx_16 = *(rdi_9 + 8)
                        
                        (*(*rcx_16 + 0x48))(rcx_16)
                        *rdi_9 = arg2
                
                if (not(zmm6.d f<= *rdi_9))
                    int32_t rdx_8 = arg_10
                    
                    if (rdx_8 != *(arg1 + 0x1c))
                        sub_140f45410(arg1, rdx_8 - 1, arg2)
                        *(arg1 + 0x1c) = arg_10
                        *rax_7 = arg1[2].d
                        rax_7[1] = *(arg1 + 0x14)
            else
                int32_t rdx_6 = arg_10
                
                if (rdx_6 != *(arg1 + 0x1c))
                    arg2 = sub_140f45410(arg1, rdx_6 - 1, arg2)
                    *(arg1 + 0x1c) = arg_10
                    *rax_7 = arg1[2].d
                    rax_7[1] = *(arg1 + 0x14)
                
                float* rdi_7 = *arg1 + 0x2a8
                
                if (rdi_7[4] != 0)
                    int64_t* rcx_13 = *(rdi_7 + 8)
                    
                    if (rcx_13 != 0 && (*(*rcx_13 + 0x28))(rcx_13) != 0)
                        int64_t* rcx_14
                        
                        if (rdi_7[4] == 0)
                            rcx_14 = nullptr
                        else
                            rcx_14 = *(rdi_7 + 8)
                        
                        (*(*rcx_14 + 0x48))(rcx_14)
                        *rdi_7 = arg2
                
                rax_7[2] = *rdi_7 f- arg1[2].d
            
            arg2 = __maxss_xmmss_memss(arg1[3].d, rax_7[3])
            arg1[3].d = arg2
            arg1[2].d = rax_7[2] f+ *rax_7
        
        void* rcx_18 = *arg1
        arg_10 += 1
        result = (**(rcx_18 + 0x2c0))(rcx_18 + 0x2c0)
    while (arg_10 s< result)

if (*(arg1 + 0x1c) == 0xffffffff)
    return result

return sub_140f45410(arg1, arg_10 - 1, arg2)
