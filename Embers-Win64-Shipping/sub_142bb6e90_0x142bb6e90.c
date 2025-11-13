// 函数: sub_142bb6e90
// 地址: 0x142bb6e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
*arg2 = 1
int64_t rax = sub_142b99bf0(*(arg2 + 0x90), "postscript-cmaps", 1)
void* rcx_1 = *(arg2 + 0x90)
*(arg2 + 0x298) = rax
int64_t* rax_1 = sub_142b92360(*(rcx_1 + 8), "psaux")
*(arg2 + 0x2a0) = rax_1
int32_t rdi

if (rax_1 != 0)
    *(arg2 + 0x300) = sub_142b92360(*(*(arg2 + 0x90) + 8), "pshinter")
    int32_t rax_3 = sub_142bba7d0(arg2, arg5)
    rdi = rax_3
    
    if (rax_3 == 0 && arg3 s>= 0)
        if (arg3.w == 0)
            int32_t rax_4 = arg2[0x90]
            arg2[2] |= 0xa11
            arg2[1] = 0
            arg2[4] = rax_4
            
            if (arg2[0x41].b != 0)
                arg2[2] |= 4
            
            if (*(arg2 + 0x2e0) != 0)
                arg2[2] |= 0x100
            
            char* rax_5 = *(arg2 + 0xf0)
            char const* const r9 = "Regular"
            *(arg2 + 0x18) = rax_5
            char* rcx_6 = rax_5
            *(arg2 + 0x20) = 0
            
            if (rax_5 == 0)
                char* rcx_7 = *(arg2 + 0x1d8)
                
                if (rcx_7 != 0)
                    rax_5 = rcx_7
                
                *(arg2 + 0x18) = rax_5
            else
                char* rax_6 = *(arg2 + 0xe8)
                
                if (rax_6 != 0)
                    char rdx = *rax_6
                    
                    if (rdx == 0)
                    label_142bb6fc8:
                        *(arg2 + 0x20) = "Regular"
                    else
                        while (true)
                            char r8 = *rcx_6
                            
                            if (rdx == r8)
                                rcx_6 = &rcx_6[1]
                                rax_6 = &rax_6[1]
                            else if (rdx == 0x20 || rdx == 0x2d)
                                rax_6 = &rax_6[1]
                            else
                                if (r8 != 0x20 && r8 != 0x2d)
                                    if (*rcx_6 == 0)
                                        *(arg2 + 0x20) = rax_6
                                    
                                    break
                                
                                rcx_6 = &rcx_6[1]
                            
                            rdx = *rax_6
                            
                            if (rdx == 0)
                                goto label_142bb6fc8
            
            if (*(arg2 + 0x20) == 0)
                char* rax_7 = *(arg2 + 0xf8)
                
                if (rax_7 != 0)
                    r9 = rax_7
                
                *(arg2 + 0x20) = r9
            
            arg2[3] = 0
            int32_t rax_8 = 0
            
            if (arg2[0x40] != 0)
                rax_8 = 1
            
            arg2[3] = rax_8
            char* rdx_1 = *(arg2 + 0xf8)
            
            if (rdx_1 != 0)
                for (int64_t i = 0; i != 5; )
                    char rax_9 = rdx_1[i]
                    i += 1
                    
                    if (rax_9 != data_143685240[7][i])
                        for (int64_t j = 0; j != 6; )
                            char rax_10 = rdx_1[j]
                            j += 1
                            
                            if (rax_10 != *(j + 0x14368524f))
                                goto label_142bb7097
                        
                        break
                
                arg2[3] |= 2
            
        label_142bb7097:
            arg2[0xa] = 0
            *(arg2 + 0x30) = 0
            arg2[0x16] = sx.d(*(arg2 + 0x27e))
            arg2[0x17] = sx.d(*(arg2 + 0x282))
            arg2[0x18] = (arg2[0xa1] + 0xffff) s>> 0x10
            arg2[0x19] = (arg2[0xa2] + 0xffff) s>> 0x10
            
            if (arg2[0x1a].w == 0)
                arg2[0x1a].w = 0x3e8
            
            uint64_t rax_19 = zx.q(arg2[0x1a].w)
            int32_t r8_1 = sx.d(arg2[0x19].w)
            int32_t r9_1 = sx.d(arg2[0x17].w)
            *(arg2 + 0x6a) = r8_1.w
            arg2[0x1b].w = r9_1.w
            int16_t rdx_4 = (((rax_19 * 3).d << 2) s/ 0xa).w
            *(arg2 + 0x6e) = rdx_4
            
            if (sx.d(rdx_4) s< r8_1 - r9_1)
                r8_1.w -= r9_1.w
                *(arg2 + 0x6e) = r8_1.w
            
            arg2[0x1c].w = arg2[0x18].w
            int32_t rax_24 = sub_142bb9f50(arg2, &arg_20)
            rdi = rax_24
            
            if (rax_24 != 0)
                rdi = 0
            else
                arg2[0x1c].w = (sub_142b96160(arg_20) s>> 0x10).w
            
            *(arg2 + 0x72) = *(arg2 + 0x6e)
            arg2[0x1d].w = *(arg2 + 0x106)
            *(arg2 + 0x76) = arg2[0x42].w
            
            if (rax != 0)
                int32_t** rsi_1 = rax_1[8]
                int32_t* var_38 = arg2
                int32_t var_2c_1 = 0x10003
                int32_t var_30
                __builtin_strncpy(&var_30, "cinu", 4)
                int32_t rax_30 = sub_142b91640(rsi_1[3], 0, &var_38, nullptr)
                rdi = rax_30
                uint32_t rax_31
                
                if (rax_30 != 0)
                    rax_31 = zx.d(rax_30.b)
                
                if (rax_30 == 0 || rax_31 == 0xa3 || rax_31 == 7)
                    int32_t rcx_15 = arg2[0x78]
                    var_2c_1.w = 7
                    rdi = 0
                    int32_t* rcx_19
                    
                    if (rcx_15 == 1)
                        int32_t var_30_4
                        __builtin_strncpy(&var_30_4, "CBDA", 4)
                        var_2c_1:2.w = 2
                        rcx_19 = rsi_1[2]
                    label_142bb7246:
                        
                        if (rcx_19 != 0)
                            rdi = sub_142b91640(rcx_19, 0, &var_38, nullptr)
                    else
                        if (rcx_15 == 2)
                            int32_t var_30_3
                            __builtin_strncpy(&var_30_3, "BODA", 4)
                            var_2c_1:2.w = 0
                            rcx_19 = *rsi_1
                            goto label_142bb7246
                        
                        if (rcx_15 == 3)
                            int32_t var_30_2
                            __builtin_strncpy(&var_30_2, "1tal", 4)
                            var_2c_1:2.w = 3
                            rcx_19 = rsi_1[3]
                            goto label_142bb7246
                        
                        if (rcx_15 == 4)
                            int32_t var_30_1
                            __builtin_strncpy(&var_30_1, "EBDA", 4)
                            var_2c_1:2.w = 1
                            rcx_19 = rsi_1[1]
                            goto label_142bb7246
        else
            rdi = rax_3 + 6
else
    rdi = (rax_1 + 0xb).d

return zx.q(rdi)
