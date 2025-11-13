// 函数: sub_14287e510
// 地址: 0x14287e510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x200)

if (arg1 != 0)
    void* rdi_1 = *(arg1 + 0x128)
    
    if (rdi_1 != 0 || arg1[0x4c] != rdi_1.d)
        int64_t var_1e8_1 = 0
        int64_t var_1d0_1 = 0
        void var_1a4
        memset(&var_1a4, 0, 0x64)
        int32_t var_1f4_1 = *arg1
        int32_t var_1f8 = 1
        int32_t rcx_1
        
        if (rdi_1 != 0)
            rcx_1 = *(rdi_1 + 0x18)
        else
            rcx_1 = arg1[0x4c]
        
        char arg_19 = rcx_1.b
        char arg_18 = (rcx_1 s>> 8).b
        char* var_130_1 = &arg_18
        int32_t var_138
        int32_t* var_1f0_1 = &var_138
        int32_t rax_3 = arg1[0x48]
        var_138 = 2
        int32_t var_128_1 = 0
        
        if (rax_3 != 0)
            char arg_8 = rax_3.b
            char* var_118_1 = &arg_8
            int32_t var_120
            int32_t* var_1e8_2 = &var_120
            var_120 = 1
            int32_t var_110_1 = 0
        
        char* rdx = *(arg1 + 0x158)
        void* var_100_1 = &arg1[0x14]
        int32_t var_108 = arg1[2]
        int32_t* var_1e0_1 = &var_108
        void* var_e8_1 = &arg1[0x26]
        int32_t var_f0 = arg1[0x24]
        int32_t* var_1d8_1 = &var_f0
        void* var_d0_1 = &arg1[0x30]
        int32_t var_d8 = arg1[0x2e]
        int32_t* var_1b0_1 = &var_d8
        int64_t var_1c8_1 = sx.q(arg1[0x47])
        int64_t var_1c0_1 = sx.q(arg1[0x46])
        int32_t var_1a8_1 = arg1[0x44]
        int64_t var_1b8_1 = *(arg1 + 0xf8)
        int32_t var_f8_1 = 0
        int32_t var_e0_1 = 0
        int32_t var_c8_1 = 0
        
        if (rdx == 0)
            int64_t var_1a0_2 = 0
        else
            int32_t i = 0
            char* rcx_2 = rdx
            
            if (*rdx != 0)
                while (i u< 0x80000000)
                    rcx_2 = &rcx_2[1]
                    i += 1
                    
                    if (*rcx_2 == 0)
                        break
            
            char* var_b8_1 = rdx
            int32_t var_c0 = i & 0x7fffffff
            int32_t* var_1a0_1 = &var_c0
            int32_t var_b0_1 = 0
        
        int64_t rax_15 = *(arg1 + 0x180)
        
        if (rax_15 != 0)
            int64_t var_a0_1 = rax_15
            int32_t var_a8 = arg1[0x62]
            int32_t* var_188_1 = &var_a8
            int32_t var_98_1 = 0
        
        uint64_t rax_17 = zx.q(arg1[0x64])
        
        if (rax_17.d != 0)
            uint64_t var_198_1 = rax_17
        
        char* rdx_1 = *(arg1 + 0xe0)
        int32_t var_190_1 = arg1[0x65]
        
        if (rdx_1 == 0)
            int64_t var_180_2 = 0
        else
            int32_t i_1 = 0
            char* rcx_3 = rdx_1
            
            if (*rdx_1 != 0)
                while (i_1 u< 0x80000000)
                    rcx_3 = &rcx_3[1]
                    i_1 += 1
                    
                    if (*rcx_3 == 0)
                        break
            
            char* var_88_1 = rdx_1
            int32_t var_90 = i_1 & 0x7fffffff
            int32_t* var_180_1 = &var_90
            int32_t var_80_1 = 0
        
        char* rdx_2 = *(arg1 + 0xe8)
        
        if (rdx_2 == 0)
            int64_t var_178_2 = 0
        else
            int32_t i_2 = 0
            char* rcx_4 = rdx_2
            
            if (*rdx_2 != 0)
                while (i_2 u< 0x80000000)
                    rcx_4 = &rcx_4[1]
                    i_2 += 1
                    
                    if (*rcx_4 == 0)
                        break
            
            char* var_70_1 = rdx_2
            int32_t var_78 = i_2 & 0x7fffffff
            int32_t* var_178_1 = &var_78
            int32_t var_68_1 = 0
        
        char* rdx_3 = *(arg1 + 0x1b8)
        
        if (rdx_3 == 0)
            int64_t var_170_2 = 0
        else
            int32_t i_3 = 0
            char* rcx_5 = rdx_3
            
            if (*rdx_3 != 0)
                while (i_3 u< 0x80000000)
                    rcx_5 = &rcx_5[1]
                    i_3 += 1
                    
                    if (*rcx_5 == 0)
                        break
            
            char* var_58_1 = rdx_3
            int32_t var_60 = i_3 & 0x7fffffff
            int32_t* var_170_1 = &var_60
            int32_t var_50_1 = 0
        
        uint64_t var_168_1 = zx.q(arg1[0x74])
        int32_t var_160_1 = arg1[0x67]
        int64_t rax_24 = *(arg1 + 0x1a0)
        
        if (rax_24 != 0)
            int64_t var_40_1 = rax_24
            int32_t var_48 = arg1[0x6a]
            int32_t* var_158_2 = &var_48
            int32_t var_38_1 = 0
        else
            int64_t var_158_1 = 0
        
        uint32_t var_150_1 = zx.d(arg1[0x6c].b)
        int64_t rax_27 = *(arg1 + 0x1c0)
        
        if (rax_27 != 0)
            int64_t var_28_1 = rax_27
            int32_t var_30 = arg1[0x72]
            int32_t* var_148_2 = &var_30
            int32_t var_20_1 = 0
        else
            int64_t var_148_1 = 0
        
        return sub_1428c65a0(&var_1f8, arg2, &data_1434e7b20)

return 0
