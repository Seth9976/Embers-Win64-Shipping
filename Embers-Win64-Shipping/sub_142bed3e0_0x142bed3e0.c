// 函数: sub_142bed3e0
// 地址: 0x142bed3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t r12 = arg2[0x13]
int32_t result_4 = 0
int64_t* var_60 = nullptr
int32_t result_1 = sub_142b97060(arg1, 0, arg4)
result_4 = result_1
uint64_t result

if (result_1 != 0)
    result = zx.q(result_1)
else
    int128_t var_50 = data_143699c80
    int32_t result_2 = sub_142bf0ab0(arg1, r12, &var_50, &var_60)
    result_4 = result_2
    
    if (result_2.b == 0xb0)
        sub_142bed310(arg2)
        result = 2
    else if (result_2 != 0)
        result = zx.q(result_2)
    else
        int64_t* rdi_1 = var_60
        arg2[0x1d] = rdi_1
        
        if (arg3 s<= 0 || arg3.w == 0)
            arg2[1].d |= 0x12
            *arg2 = 1
            int32_t result_3
            
            if (rdi_1 == 0 || rdi_1[0xb].d == 0)
            label_142bed56f:
                arg2[3] = 0
            label_142bed576:
                int32_t result_5 = sub_142bf0790(arg2)
                result_4 = result_5
                result_3 = result_5
                
                if (result_5 == 0)
                    arg2[5].d = 1
                    arg2[2].d = *(rdi_1 + 0x34) + 1
                    int64_t* rax_13 = sub_142b99a90(r12, 0x10, 0, 1, 0, &result_4)
                    result_3 = result_4
                    arg2[6] = rax_13
                    
                    if (result_3 == 0)
                        *rax_13 = 0
                        int16_t r14_1 = 0
                        rax_13[1] = 0
                        int32_t rcx_8 = *(rdi_1 + 0x2c)
                        int16_t r15_1 = 0
                        
                        if (rcx_8 + 0x7fff u> 0xfffe)
                            *(rdi_1 + 0x2c) = (rcx_8 s>> 0x1f & 0xffff0002) + 0x7fff
                        
                        int32_t rcx_12 = rdi_1[6].d
                        
                        if (rcx_12 + 0x7fff u> 0xfffe)
                            rdi_1[6].d = (rcx_12 s>> 0x1f & 0xffff0002) + 0x7fff
                        
                        *rax_13 = *(rdi_1 + 0x2c) + rdi_1[6].w
                        void* rax_17 = sub_142bf0740(rdi_1, "AVERAGE_WIDTH")
                        int32_t rax_21
                        
                        if (rax_17 == 0)
                            rax_21 = sub_142b93dd0(sx.d(*rax_13), 2, 3)
                        else
                            int32_t rcx_17 = *(rax_17 + 0x10)
                            
                            if (rcx_17 + 0x4fff1 u> 0x9ffe2)
                                rax_21 = 0x7fff
                            else
                                int16_t rdx_8 = ((rcx_17 + 5) s/ 0xa).w
                                rax_21 = sx.d(rdx_8)
                                
                                if (rdx_8 s< 0)
                                    rax_21 = neg.d(rax_21)
                        
                        *(rax_13 + 2) = rax_21.w
                        void* rax_22 = sub_142bf0740(rdi_1, "POINT_SIZE")
                        
                        if (rax_22 == 0)
                            int32_t rax_25 = *(rdi_1 + 0x14)
                            
                            if (rax_25 == 0)
                                *(rax_13 + 4) = sx.d(*(rax_13 + 2)) << 6
                            else if (rax_25 u<= 0x7fff)
                                *(rax_13 + 4) = rax_25 << 6
                            else
                                *(rax_13 + 4) = 0x7fff
                        else
                            int32_t rcx_21 = *(rax_22 + 0x10)
                            int32_t rax_24
                            
                            if (rcx_21 + 0x504c2 u> 0xa0984)
                                rax_24 = 0x7fff
                            else
                                if (rcx_21 s< 0)
                                    rcx_21 = neg.d(rcx_21)
                                
                                rax_24 = sub_142b93dd0(rcx_21, 0x70800, 0x11a4e)
                            
                            *(rax_13 + 4) = rax_24
                        
                        void* rax_26 = sub_142bf0740(rdi_1, "PIXEL_SIZE")
                        
                        if (rax_26 != 0)
                            if (*(rax_26 + 0x10) + 0x7fff u> 0xfffe)
                                *(rax_13 + 0xc) = 0x1fffc0
                            else
                                int16_t rax_27 = *(rax_26 + 0x10)
                                int32_t rax_28 = sx.d(rax_27)
                                
                                if (rax_27 s< 0)
                                    rax_28 = neg.d(rax_28)
                                
                                *(rax_13 + 0xc) = rax_28 << 6
                        
                        void* rax_30 = sub_142bf0740(rdi_1, "RESOLUTION_X")
                        int32_t rcx_26
                        
                        if (rax_30 == 0)
                            rcx_26 = rdi_1[3].d
                        else
                            rcx_26 = *(rax_30 + 0x10)
                        
                        if (rcx_26 != 0)
                            if (rcx_26 + 0x7fff u> 0xfffe)
                                r15_1 = 0x7fff
                            else
                                int16_t temp2_1
                                int16_t temp3_1
                                temp2_1:temp3_1 = sx.q(rcx_26.w)
                                r15_1 = (temp3_1 ^ temp2_1) - temp2_1
                        
                        void* rax_34 = sub_142bf0740(rdi_1, "RESOLUTION_Y")
                        int32_t rcx_28
                        
                        if (rax_34 == 0)
                            rcx_28 = *(rdi_1 + 0x1c)
                        else
                            rcx_28 = *(rax_34 + 0x10)
                        
                        if (rcx_28 != 0)
                            if (rcx_28 + 0x7fff u> 0xfffe)
                                r14_1 = 0x7fff
                            else
                                int16_t temp4_1
                                int16_t temp5_1
                                temp4_1:temp5_1 = sx.q(rcx_28.w)
                                r14_1 = (temp5_1 ^ temp4_1) - temp4_1
                        
                        if (*(rax_13 + 0xc) == 0)
                            int32_t rcx_29 = *(rax_13 + 4)
                            *(rax_13 + 0xc) = rcx_29
                            
                            if (r14_1 != 0)
                                *(rax_13 + 0xc) = sub_142b93dd0(rcx_29, sx.d(r14_1), 0x48)
                        
                        uint32_t rax_39
                        
                        if (r15_1 == 0 || r14_1 == 0)
                            rax_39 = *(rax_13 + 0xc)
                        else
                            rax_39 = sub_142b93dd0(*(rax_13 + 0xc), sx.d(r15_1), sx.d(r14_1))
                        
                        rax_13[1].d = rax_39
                        int64_t rsi_2 = rdi_1[8]
                        int64_t rax_40 = sub_142b99a90(r12, 8, 0, *(rdi_1 + 0x34), 0, &result_4)
                        result_3 = result_4
                        arg2[0x1e] = rax_40
                        
                        if (result_3 == 0)
                            arg2[0x1f].d = 0
                            int32_t i = 0
                            
                            if (*(rdi_1 + 0x34) u> 0)
                                do
                                    uint64_t i_4 = zx.q(i)
                                    uint64_t rdx_13 = i_4 << 3
                                    uint64_t r8_4 = i_4 * 6
                                    *(rdx_13 + arg2[0x1e]) = *(rsi_2 + (r8_4 << 3) + 8)
                                    *(rdx_13 + arg2[0x1e] + 4) = i.w
                                    
                                    if (*(rsi_2 + (r8_4 << 3) + 8) == rdi_1[5].d)
                                        int32_t i_3 = arg2[0x1f].d
                                        
                                        if (i u< 0xffffffff)
                                            i_3 = i
                                        
                                        arg2[0x1f].d = i_3
                                    
                                    i += 1
                                while (i u< *(rdi_1 + 0x34))
                            
                            r14_1.b = 0
                            void* rax_44 = sub_142bf0740(rdi_1, "CHARSET_REGISTRY")
                            void* rax_45 = sub_142bf0740(rdi_1, "CHARSET_ENCODING")
                            char* rdx_14
                            
                            if (rax_44 != 0 && rax_45 != 0 && *(rax_44 + 8) == 1
                                    && *(rax_45 + 8) == 1 && *(rax_44 + 0x10) != 0)
                                rdx_14 = *(rax_45 + 0x10)
                            
                            if (rax_44 == 0 || rax_45 == 0 || *(rax_44 + 8) != 1
                                    || *(rax_45 + 8) != 1 || *(rax_44 + 0x10) == 0 || rdx_14 == 0)
                                var_60 = arg2
                                int32_t var_58_2
                                __builtin_strncpy(&var_58_2, "BODA", 4)
                                int32_t var_54_2 = 7
                                int32_t result_6 =
                                    sub_142b91640(&data_143699560, 0, &var_60, nullptr)
                                result_3 = result_6
                                result_4 = result_6
                                
                                if (arg2[7].d != 0)
                                    arg2[0x11] = *arg2[8]
                            else
                                int64_t rax_46 = sub_142b99bb0(r12, rdx_14, &result_4)
                                result_3 = result_4
                                arg2[0x1b] = rax_46
                                
                                if (result_3 == 0)
                                    char* rax_47 = sub_142b99bb0(r12, *(rax_44 + 0x10), &result_4)
                                    result_3 = result_4
                                    arg2[0x1c] = rax_47
                                    
                                    if (result_3 == 0)
                                        if (((*rax_47 - 0x49) & 0xdf) == 0
                                                && ((rax_47[1] - 0x53) & 0xdf) == 0
                                                && ((rax_47[2] - 0x4f) & 0xdf) == 0)
                                            int64_t rcx_37 = 0
                                            
                                            while (true)
                                                char rax_51 = rax_47[rcx_37 + 3]
                                                rcx_37 += 1
                                                
                                                if (rax_51 != *(rcx_37 + &data_143688150:7))
                                                    for (int64_t i_1 = 0; i_1 != 5; )
                                                        char rax_52 = rax_47[i_1 + 3]
                                                        i_1 += 1
                                                        
                                                        if (rax_52 != *(i_1 + 0x14368815f))
                                                            goto label_142bed9df
                                                    
                                                    char* rcx_38 = arg2[0x1b]
                                                    
                                                    if (*rcx_38 != 0x31 || rcx_38[1] != 0)
                                                    label_142bed9df:
                                                        
                                                        if (strcmp(&rax_47[3], "646.1991") != 0)
                                                            break
                                                        
                                                        for (int64_t i_2 = 0; i_2 != 4; )
                                                            char rax_56 = arg2[0x1b][i_2]
                                                            i_2 += 1
                                                            
                                                            if (rax_56 != *(i_2 + 0x14368817b))
                                                                goto label_142beda17
                                                else if (rcx_37 != 6)
                                                    continue
                                                
                                                r14_1.b = 1
                                                break
                                        
                                    label_142beda17:
                                        var_60 = arg2
                                        int32_t var_58
                                        var_58.q = 0
                                        
                                        if (r14_1.b != 0)
                                            int32_t var_58_1
                                            __builtin_strncpy(&var_58_1, "cinu", 4)
                                            int32_t var_54_1 = 0x10003
                                        
                                        result_3 =
                                            sub_142b91640(&data_143699560, 0, &var_60, nullptr)
            else
                int64_t* rax_2 = sub_142b993e0("SPACING", rdi_1[0xf])
                
                if (rax_2 != 0)
                    void* rdx_2 = rdi_1[0xc] + *rax_2 * 0x18
                    
                    if (rdx_2 != 0 && *(rdx_2 + 8) == 1)
                        char* rax_5 = *(rdx_2 + 0x10)
                        
                        if (rax_5 != 0)
                            uint64_t rax_6
                            rax_6.b = *rax_5 - 0x43
                            
                            if (rax_6.b u<= 0x2a && test_bit(0x40100000401, rax_6))
                                arg2[1].d |= 4
                
                if (rdi_1[0xb].d == 0)
                    goto label_142bed56f
                
                int64_t* rax_7 = sub_142b993e0("FAMILY_NAME", rdi_1[0xf])
                
                if (rax_7 == 0)
                    goto label_142bed56f
                
                void* rdx_4 = rdi_1[0xc] + *rax_7 * 0x18
                
                if (rdx_4 == 0)
                    goto label_142bed56f
                
                char* rdx_5 = *(rdx_4 + 0x10)
                
                if (rdx_5 == 0)
                    goto label_142bed56f
                
                int64_t rax_10 = sub_142b99bb0(r12, rdx_5, &result_4)
                result_3 = result_4
                arg2[3] = rax_10
                
                if (result_3 == 0)
                    goto label_142bed576
            
            result = zx.q(result_3)
        else
            sub_142bed310(arg2)
            result = 6

__security_check_cookie(rax_1 ^ &var_98)
return result
