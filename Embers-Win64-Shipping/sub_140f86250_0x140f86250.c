// 函数: sub_140f86250
// 地址: 0x140f86250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3c8) != 0)
    int64_t* rcx = *(arg1 + 0x3c0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        void arg_8
        int16_t r14_1 = *sub_140e679c0(data_143e29f28, &arg_8) & 3
        
        if (*(arg1 + 0x3b8) != 0)
            int64_t* rcx_2 = *(arg1 + 0x3b0)
            
            if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
                int64_t* rcx_3
                
                if (*(arg1 + 0x3b8) == 0)
                    rcx_3 = nullptr
                else
                    rcx_3 = *(arg1 + 0x3b0)
                
                *(arg1 + 0x3a8) = (*(*rcx_3 + 0x48))(rcx_3)
        
        int32_t rsi_1 = *(arg1 + 0x3a8)
        
        if (*(arg1 + 0x3a0) != 0)
            int64_t* rcx_4 = *(arg1 + 0x398)
            
            if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
                int64_t* rcx_5
                
                if (*(arg1 + 0x3a0) == 0)
                    rcx_5 = nullptr
                else
                    rcx_5 = *(arg1 + 0x398)
                
                *(arg1 + 0x390) = (*(*rcx_5 + 0x48))(rcx_5)
        
        int32_t rax_12 = *(arg1 + 0x390)
        int32_t rbp_1
        
        if (rax_12 != 0)
            if (r14_1 == 0 && rsi_1 == 1)
                rsi_1 = 0
            
            int32_t rbp_2
            rbp_2.b = rax_12 != 2
            rbp_1 = rbp_2 + 1
        else
            rbp_1 = rax_12 + 1
            
            if (r14_1 == 0 || *(arg1 + 0x3b8) == 0)
                rsi_1 = 0
            else
                int64_t* rcx_6 = *(arg1 + 0x3b0)
                
                if (rcx_6 == 0)
                    rsi_1 = 0
                else if ((*(*rcx_6 + 0x28))(rcx_6) == 0)
                    rsi_1 = 0
                else
                    rsi_1 = rbp_1
        
        int64_t* rcx_7
        
        if (*(arg1 + 0x3c8) == 0)
            rcx_7 = nullptr
        else
            rcx_7 = *(arg1 + 0x3c0)
        
        (*(*rcx_7 + 0x48))(rcx_7, zx.q(rsi_1), arg1 + 0x408, zx.q(rbp_1))

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
