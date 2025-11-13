// 函数: sub_142029890
// 地址: 0x142029890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t* var_18
    sub_1424373a0(arg2, &var_18)
    int32_t i_2
    int32_t i = i_2
    
    while (i s>= 0)
        int64_t* rdx_1 = var_18
        
        if (i s>= rdx_1[1].d)
            break
        
        int64_t* rax_5 = sub_140d3c6e0(*rdx_1 + (sx.q(i) << 3))
        
        if (rax_5 != 0)
            int64_t rdx_2 = *rax_5
            
            if ((*(rdx_2 + 0x6a8))(rax_5, rdx_2) != 0)
                return rax_5
        
        i = i_2 + 1
        i_2 = i
else
    for (int64_t* i_1 = *(arg1 + 0x38); i_1 != &i_1[sx.q(*(arg1 + 0x40))]; i_1 = &i_1[1])
        void* rax_2 = *i_1
        
        if (rax_2 != 0)
            int64_t rax_3 = *(rax_2 + 0x30)
            
            if (rax_3 != 0)
                return rax_3

return 0
