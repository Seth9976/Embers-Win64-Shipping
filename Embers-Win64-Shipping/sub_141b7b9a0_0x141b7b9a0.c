// 函数: sub_141b7b9a0
// 地址: 0x141b7b9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14306ec58
void* i = &arg1[4]
__builtin_memset(&arg1[2], 0, 0x1c)
__builtin_memset(&arg1[7], 0, 0x1c)
__builtin_memset(&arg1[0xc], 0, 0x1c)
__builtin_memset(&arg1[0x11], 0, 0x1c)
__builtin_memset(&arg1[0x16], 0, 0x1c)
__builtin_memset(&arg1[0x1b], 0, 0x1c)

if (arg1 != &arg1[0x1e])
    do
        *(i - 0x18) = 0
        void var_18
        
        if (&var_18 != i && *(i + 8) != 0)
            int64_t* rcx = *i
            
            if (rcx != 0)
                (*(*rcx + 0x38))(rcx, 0)
                int64_t rcx_1 = *i
                
                if (rcx_1 != 0)
                    *i = sub_140a84c80(rcx_1, 0, 0)
                
                *(i + 8) = 0
        
        if (i - 0x10 != &var_18)
            *(i - 0x10) = 0
            int64_t* rcx_2 = *(i - 8)
            *(i - 8) = 0
            
            if (rcx_2 != 0)
                int32_t temp0_1 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (temp0_1 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
        
        i += 0x28
    while (i != &arg1[0x22])

return arg1
