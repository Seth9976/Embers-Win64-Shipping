// 函数: sub_14294ae80
// 地址: 0x14294ae80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd0)
int64_t arg_30
int64_t r10 = arg_30

if (r10 u<= 0x40000000 && arg4 u<= 0x40000000)
    int64_t var_28 = arg3
    void* var_60_1 = &data_143b86878
    int32_t* r8 = nullptr
    int32_t var_38
    int32_t* var_20_1 = &var_38
    int32_t var_68 = 4
    int32_t var_58_1 = 0
    int32_t var_64_1 = 4
    var_38 = 4
    int32_t* var_30_1 = &var_68
    
    if (arg5 != 0)
        int32_t var_40_1 = 0
        int32_t var_50
        r8 = &var_50
        int32_t var_4c_1 = 4
        int64_t var_48_1 = arg5
        var_50 = r10.d
    
    int32_t rax_2 = sub_14293ded0(arg1, &var_28, r8, arg4.d)
    
    if (rax_2 s> 0)
        char* rbx_1 = *arg1
        char* var_90 = rbx_1
        int32_t var_b8
        void var_78
        
        if (sub_1428f2ef0(&var_90, &var_78, &arg_30, &var_b8, rax_2) s>= 0 && arg_30.d == 0x10
                && var_b8 == 0)
            char* r14_1 = var_90
            char* var_88 = r14_1
            int32_t rbx_3 = rbx_1.d - r14_1.d + rax_2
            int32_t var_b4
            int32_t var_b0
            void var_74
            
            if (sub_1428f2ef0(&var_88, &var_74, &var_b4, &var_b0, rbx_3) s>= 0 && var_b4 == 0x10
                    && var_b0 == 0)
                char* rsi_1 = var_88
                char* var_98 = rsi_1
                int32_t rbx_4 = rbx_3 + r14_1.d - rsi_1.d
                int32_t var_ac
                int32_t var_a8
                int32_t var_a4
                
                if (sub_1428f2ef0(&var_98, &var_a4, &var_ac, &var_a8, rbx_4) s>= 0 && var_ac == 6
                        && var_a8 == 0)
                    char* rcx_5 = &var_98[sx.q(var_a4)]
                    var_98 = rcx_5
                    char* var_80 = rcx_5
                    int32_t var_a0
                    int32_t var_9c
                    void var_70
                    
                    if (sub_1428f2ef0(&var_80, &var_70, &var_a0, &var_9c, rbx_4 + rsi_1.d - rcx_5.d)
                            s>= 0 && var_a0 == 4 && var_9c == 0)
                        char* rbx_6 = var_80
                        
                        if (sub_1428bc500(rbx_6, &data_143b86878, 4) == 0)
                            *arg2 = rbx_6
                            return zx.q(rax_2)

return 0
