// 函数: sub_141e916b0
// 地址: 0x141e916b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x21) != 0)
    if (arg3 == 0 || ((arg3[1].d u>> 0xa).b & 1) != 0)
        *(arg2 + 0x21) = 0
    else
        arg2[2] = arg3[3]
        arg2[3] = arg3[2]
        arg2[4].b = arg3[1].b
        int64_t rax_5 = sub_141ea1810(arg2)
        
        if (arg2[8].d != 0)
            arg2[8].d = 0
            
            if (*(arg2 + 0x44) != 0)
                sub_1405c5510(&arg2[7], 0)
        
        int64_t arg_10 = 0
        void** var_c8
        memset(&var_c8, 0, 0x90)
        sub_140b4c2a0(&var_c8)
        int64_t var_38_1 = 0
        var_c8 = &data_142d6ad48
        void* var_30_1 = &arg2[7]
        int64_t var_28_1 = 0
        sub_140b552b0(&var_c8, 1)
        var_c8[0x1b](&var_c8, 0)
        char var_9e
        char var_9e_1 = var_9e & 0xf7
        char var_9f
        char var_9f_1 = var_9f & 0xbf
        char var_9d
        char var_9d_1 = var_9d | 0x10
        var_c8 = &data_143254ef0
        int64_t var_60_1 = rax_5
        sub_140b55650(&var_c8, 1)
        int32_t var_98
        int32_t var_98_1 = var_98 | 0x1000
        (*(*arg3 + 0xa0))(arg3, &var_c8)
        sub_140b4cb40(&var_c8)

int64_t rcx_9 = *arg4

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)
