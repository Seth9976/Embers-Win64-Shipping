// 函数: sub_1426108d0
// 地址: 0x1426108d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *arg3
int32_t i = i_1

if (i_1 != 0xffffffff)
    int32_t rbx_1 = *(*(arg4 + 8) + 0x20)
    
    do
        int64_t* r9_2
        
        if (i u>= rbx_1)
            r9_2 = (sx.q(i - rbx_1) << 4) + *(arg4 + 0x80)
        else
            r9_2 = (zx.q(i) << 4) + *(arg4 + 0x20)
        
        i = r9_2[1].d
        
        if (*r9_2 == arg5)
            uint8_t rax_3 = *(arg3 + 0x1f) u>> 6
            uint64_t rax_13
            int64_t r9_5
            
            if (rax_3 != 1)
                uint64_t rdx_2
                
                if (rax_3 != 2)
                    uint8_t rax_26 = *(arg6 + 0x1f) u>> 6
                    
                    if (rax_26 != 1)
                        if (rax_26 != 2)
                            uint64_t r8_4 = zx.q(*(r9_2 + 0xc))
                            int64_t rdx_9 = *(arg4 + 0x18)
                            uint64_t rcx_15 = zx.q(*(arg3
                                + (sx.q(modu.dp.d(0:((r8_4 + 1).d), zx.d(*(arg3 + 0x1e)))) << 1)
                                + 4)) * 3
                            uint64_t r8_5 = zx.q(*(arg3 + (r8_4 << 1) + 4)) * 3
                            *arg8 = *(rdx_9 + (r8_5 << 2))
                            arg8[1] = *(rdx_9 + (r8_5 << 2) + 4)
                            arg8[2] = *(rdx_9 + (r8_5 << 2) + 8)
                            *arg9 = *(rdx_9 + (rcx_15 << 2))
                            arg9[1] = *(rdx_9 + (rcx_15 << 2) + 4)
                            arg9[2] = *(rdx_9 + (rcx_15 << 2) + 8)
                            
                            if (*(r9_2 + 0xd) s>= 0)
                                char rax_56 = *(r9_2 + 0xe)
                                
                                if (rax_56 != 0 || *(r9_2 + 0xf) != 0xff)
                                    float zmm3 = float.s(zx.d(rax_56)) * 0.00392156886f
                                    float zmm4 = float.s(zx.d(*(r9_2 + 0xf))) * 0.00392156886f
                                    *arg8 = (*(rdx_9 + (rcx_15 << 2)) f- *(rdx_9 + (r8_5 << 2)))
                                        * zmm3 f+ *(rdx_9 + (r8_5 << 2))
                                    arg8[1] = (*(rdx_9 + (rcx_15 << 2) + 4) f-
                                        *(rdx_9 + (r8_5 << 2) + 4)) * zmm3 f+ *(rdx_9 + (r8_5 << 2) + 4)
                                    arg8[2] = (*(rdx_9 + (rcx_15 << 2) + 8) f-
                                        *(rdx_9 + (r8_5 << 2) + 8)) * zmm3 f+ *(rdx_9 + (r8_5 << 2) + 8)
                                    *arg9 = (*(rdx_9 + (rcx_15 << 2)) f- *(rdx_9 + (r8_5 << 2)))
                                        * zmm4 f+ *(rdx_9 + (r8_5 << 2))
                                    arg9[1] = (*(rdx_9 + (rcx_15 << 2) + 4) f-
                                        *(rdx_9 + (r8_5 << 2) + 4)) * zmm4 f+ *(rdx_9 + (r8_5 << 2) + 4)
                                    arg9[2] = (*(rdx_9 + (rcx_15 << 2) + 8) f-
                                        *(rdx_9 + (r8_5 << 2) + 8)) * zmm4 f+ *(rdx_9 + (r8_5 << 2) + 8)
                            
                            return 0x40000000
                        
                        int32_t rcx_9 = *arg6
                        
                        if (rcx_9 != 0xffffffff)
                            int32_t rdx_6 = *(*(arg7 + 8) + 0x20)
                            int64_t* rax_40
                            
                            while (true)
                                if (rcx_9 u>= rdx_6)
                                    rax_40 = (sx.q(rcx_9 - rdx_6) << 4) + *(arg7 + 0x80)
                                else
                                    rax_40 = (zx.q(rcx_9) << 4) + *(arg7 + 0x20)
                                
                                rcx_9 = rax_40[1].d
                                
                                if (*rax_40 == arg2)
                                    break
                                
                                if (rcx_9 == 0xffffffff)
                                    return 0x80000008
                            
                            uint64_t r8_3 = zx.q(*(rax_40 + 0xc))
                            r9_5 = *(arg7 + 0x18)
                            uint64_t rdx_7 = zx.q(arg6[r8_3 + 1].w) * 3
                            *arg8 = *(r9_5 + (rdx_7 << 2))
                            arg8[1] = *(r9_5 + (rdx_7 << 2) + 4)
                            arg8[2] = *(r9_5 + (rdx_7 << 2) + 8)
                            rdx_2 = zx.q(*(&arg6[r8_3] + 6)) * 3
                            goto label_1426109e1
                    else
                        int32_t rcx_6 = *arg6
                        
                        if (rcx_6 != 0xffffffff)
                            int32_t rdx_4 = *(*(arg7 + 8) + 0x20)
                            int64_t* rax_30
                            
                            while (true)
                                if (rcx_6 u>= rdx_4)
                                    rax_30 = (sx.q(rcx_6 - rdx_4) << 4) + *(arg7 + 0x80)
                                else
                                    rax_30 = (zx.q(rcx_6) << 4) + *(arg7 + 0x20)
                                
                                rcx_6 = rax_30[1].d
                                
                                if (*rax_30 == arg2)
                                    break
                                
                                if (rcx_6 == 0xffffffff)
                                    return 0x80000008
                            
                            uint64_t r8_2 = zx.q(*(rax_30 + 0xc))
                            r9_5 = *(arg7 + 0x18)
                            uint64_t rdx_5 = zx.q(*(arg6 + (r8_2 << 1) + 4)) * 3
                            *arg8 = *(r9_5 + (rdx_5 << 2))
                            arg8[1] = *(r9_5 + (rdx_5 << 2) + 4)
                            arg8[2] = *(r9_5 + (rdx_5 << 2) + 8)
                            rax_13 = zx.q(*(arg6 + (r8_2 << 1) + 4))
                        label_1426109d4:
                            rdx_2 = rax_13 * 3
                        label_1426109e1:
                            *arg9 = *(r9_5 + (rdx_2 << 2))
                            arg9[1] = *(r9_5 + (rdx_2 << 2) + 4)
                            arg9[2] = *(r9_5 + (rdx_2 << 2) + 8)
                            return 0x40000000
                else if (i_1 != 0xffffffff)
                    int64_t* rax_19
                    
                    while (true)
                        if (i_1 u>= rbx_1)
                            rax_19 = (sx.q(i_1 - rbx_1) << 4) + *(arg4 + 0x80)
                        else
                            rax_19 = (zx.q(i_1) << 4) + *(arg4 + 0x20)
                        
                        i_1 = rax_19[1].d
                        
                        if (*rax_19 == arg5)
                            break
                        
                        if (i_1 == 0xffffffff)
                            return 0x80000008
                    
                    uint64_t r8_1 = zx.q(*(rax_19 + 0xc))
                    r9_5 = *(arg4 + 0x18)
                    uint64_t rdx_3 = zx.q(arg3[r8_1 + 1].w) * 3
                    *arg8 = *(r9_5 + (rdx_3 << 2))
                    arg8[1] = *(r9_5 + (rdx_3 << 2) + 4)
                    arg8[2] = *(r9_5 + (rdx_3 << 2) + 8)
                    rdx_2 = zx.q(*(&arg3[r8_1] + 6)) * 3
                    goto label_1426109e1
            else if (i_1 != 0xffffffff)
                int64_t* rax_6
                
                while (true)
                    if (i_1 u>= rbx_1)
                        rax_6 = (sx.q(i_1 - rbx_1) << 4) + *(arg4 + 0x80)
                    else
                        rax_6 = (zx.q(i_1) << 4) + *(arg4 + 0x20)
                    
                    i_1 = rax_6[1].d
                    
                    if (*rax_6 == arg5)
                        break
                    
                    if (i_1 == 0xffffffff)
                        return 0x80000008
                
                uint64_t r8 = zx.q(*(rax_6 + 0xc))
                r9_5 = *(arg4 + 0x18)
                uint64_t rdx_1 = zx.q(*(arg3 + (r8 << 1) + 4)) * 3
                *arg8 = *(r9_5 + (rdx_1 << 2))
                arg8[1] = *(r9_5 + (rdx_1 << 2) + 4)
                arg8[2] = *(r9_5 + (rdx_1 << 2) + 8)
                rax_13 = zx.q(*(arg3 + (r8 << 1) + 4))
                goto label_1426109d4
            break
    while (i != 0xffffffff)

return 0x80000008
