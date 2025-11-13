// 函数: sub_142a9c8c0
// 地址: 0x142a9c8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s<= 0)
    char** rax_2 = sub_142a625a0(arg1[0x3f], "collations", nullptr, arg2)
    arg1[0x40] = rax_2
    int32_t rcx_1 = *arg2
    
    if (rcx_1 == 2)
        *arg2 = 0xffffff81
        sub_142aa6d40(arg1[1])
        return sub_142a9d610(&arg1[2], arg1[1], arg2) __tailcall
    
    if (rcx_1 s<= 0)
        int64_t rdi = 0
        int32_t arg_10 = 0
        char** rax_4 = sub_142a62230(rax_2, "default", nullptr, &arg_10)
        int32_t arg_18
        void* rax_5 = sub_142a63f30(rax_4, &arg_18, &arg_10)
        int32_t r8_3
        
        if (arg_10 s<= 0)
            r8_3 = arg_18
        
        void* rsi
        
        if (arg_10 s> 0 || r8_3 - 1 u> 0xe)
            rsi = &arg1[0x3c]
            __builtin_strncpy(rsi, "standard", 9)
        else
            rsi = &arg1[0x3c]
            sub_142a8d6e0(rax_5, rsi, r8_3 + 1)
        
        if (rax_4 != 0)
            sub_142a5f860(rax_4)
        
        if (arg1[0x3a].b == 0)
            char* rcx_11 = &arg1[0x3a] - rsi
            char i
            
            do
                i = *rsi
                *(rcx_11 + rsi) = i
                rsi += 1
            while (i != 0)
            int32_t rdx_5 = arg1[0x3e].d | 2
            arg1[0x3e].d = rdx_5
            
            while (true)
                char rax_6 = *(&arg1[0x3a] + rdi)
                rdi += 1
                
                if (rax_6 != *(rdi + &icu_64::LocaleCacheKey<struct icu_64::CollationCacheEntry>::`vftable'{for `icu_64::CacheKey<struct icu_64::CollationCacheEntry>'}
                        .__offset(0x37)))
                    break
                
                if (rdi == 7)
                    arg1[0x3e].d = rdx_5 | 1
                    break
            
            if (strcmp(&arg1[0x3a], "standard") == 0)
                arg1[0x3e].d |= 4
            
            sub_142a46d60(&arg1[0x1e], "collation", &arg1[0x3a], arg2)
            return sub_142a9c6c0(arg1, arg2)
        
        void* rax_9 = &arg1[0x3a]
        uint32_t i_1
        uint32_t rdx_8
        
        do
            rdx_8 = zx.d(*rax_9)
            i_1 = zx.d(*(rax_9 + rsi - &arg1[0x3a]))
            
            if (rdx_8 != i_1)
                break
            
            rax_9 += 1
        while (i_1 != 0)
        
        if (rdx_8 - i_1 == 0)
            arg1[0x3e].d |= 2
        
        while (true)
            char rax_10 = *(&arg1[0x3a] + rdi)
            rdi += 1
            
            if (rax_10 != *(rdi + &icu_64::LocaleCacheKey<struct icu_64::CollationCacheEntry>::`vftable'{for `icu_64::CacheKey<struct icu_64::CollationCacheEntry>'}
                    .__offset(0x37)))
                break
            
            if (rdi == 7)
                arg1[0x3e].d |= 1
                break
        
        if (strcmp(&arg1[0x3a], "standard") == 0)
            arg1[0x3e].d |= 4
        
        return sub_142a9cb00(arg1, arg2)

return 0
