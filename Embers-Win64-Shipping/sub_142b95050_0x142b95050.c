// 函数: sub_142b95050
// 地址: 0x142b95050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x21).d)

if (arg2 != 0)
    if (arg3 == 0)
        return zx.q((arg3 + 6).d)
    
    int32_t var_18
    sub_142b94c20(arg2, &var_18)
    int32_t var_14
    int32_t var_10
    int32_t var_c
    
    if (var_18 s>= 0xff000000 && var_14 s>= 0xff000000 && var_10 s<= 0x1000000
            && var_c s<= 0x1000000)
        void* const i = *(arg1 + 0x128)
        int32_t rdx_1 = 0x13
        void* const j_1 = *(arg1 + 0x118)
        *(arg3 + 8) = arg2
        
        while (i != 0)
            int32_t rax_3 = (*(i + 0x68))(*(i + 0x60), arg3)
            rdx_1 = rax_3
            
            if (rax_3 == 0)
                break
            
            if (rax_3.b != 0x13)
                break
            
            void* j = *(arg1 + 0x118)
            i = nullptr
            
            if (j_1 != 0)
                j = *(j_1 + 8)
            
            j_1 = nullptr
            
            for (; j != 0; j = *(j + 8))
                void* i_1 = *(j + 0x10)
                
                if (*(i_1 + 0x20) == 0x6f75746c)
                    j_1 = j
                    i = i_1
                    break
        
        return zx.q(rdx_1)

return 0x14
