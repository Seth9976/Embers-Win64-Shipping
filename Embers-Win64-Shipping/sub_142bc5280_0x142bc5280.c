// 函数: sub_142bc5280
// 地址: 0x142bc5280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t rax = sub_142b97060(arg1, 0, arg5)
int32_t rdx = rax

if (rax == 0)
    int32_t rax_1 = sub_142b96aa0(arg1, &data_143687450, &arg2[0x36])
    rdx = rax_1
    
    if (rax_1 == 0)
        arg2[0x3f] += arg2[0x48] << 0x10

arg_20 = rdx

if (rdx == 0)
    if (arg2[0x36] != 0x50465230 || arg2[0x37] u> 4 || arg2[0x39] u< 0x3a || arg2[0x38] != 0xd0a)
        rdx = 2
    else
        int32_t r14_1 = arg2[0x3b]
        int32_t rdi_1 = 0
        int32_t rsi_1 = 0
        int32_t rax_4 = sub_142b97060(arg1, r14_1, arg5)
        int32_t arg_10 = rax_4
        rdx = rax_4
        
        if (rax_4 == 0)
            rax_4 = sub_142b96f00(arg1, &arg_10)
            rdx = arg_10
            uint64_t r8_1 = zx.q(rax_4.w)
            
            if (rdx == 0)
                int32_t r9
                
                if (r8_1.d u<= 0x3332)
                    r9 = arg1[1].d
                
                if (r8_1.d u> 0x3332 || ((r8_1 << 2) + 2).d + r8_1.d u>= r9 - r14_1
                        || r8_1.d * 0x17 + 0x5f u>= r9)
                    rdx = 8
                else
                    rsi_1 = r8_1.d
        
        arg_20 = rdx
        
        if (rdx == 0)
            *arg2 = rsi_1
            
            if (arg3 s>= 0)
                uint32_t r14_2 = zx.d(arg3.w)
                
                if (r14_2 u< rsi_1)
                    rax_4.b = arg2[0x48] != 0
                    int32_t rax_7 =
                        sub_142bc7120(&arg2[0x51], arg1, r14_2, arg2[0x3b], arg5, rax_4.b)
                    arg_20 = rax_7
                    rdx = rax_7
                    
                    if (rax_7 == 0)
                        int32_t rax_8 =
                            sub_142bc7690(&arg2[0x5e], arg1, arg2[0x5c], arg2[0x5b], arg5)
                        arg_20 = rax_8
                        rdx = rax_8
                        
                        if (rax_8 == 0)
                            arg2[1] = r14_2
                            int32_t rcx_7 = 0
                            int32_t rax_9 = arg2[0x86]
                            arg2[2] |= 1
                            arg2[4] = rax_9 + 1
                            int32_t rdx_5 = arg2[0x86]
                            
                            if (rdx_5 != 0)
                                do
                                    if (*(*(arg2 + 0x228) + zx.q(rcx_7) * 0x10 + 0xc) != 0)
                                        break
                                    
                                    rcx_7 += 1
                                while (rcx_7 u< rdx_5)
                            
                            if (rcx_7 != rdx_5)
                                goto label_142bc5462
                            
                            if (arg2[0x7c] u<= 0)
                                rdx = 3
                            else
                                arg2[2] = 0
                            label_142bc5462:
                                
                                if ((arg2[0x68].b & 4) == 0)
                                    arg2[2] |= 4
                                
                                if ((arg2[0x68].b & 1) == 0)
                                    arg2[2] |= 0x10
                                else
                                    arg2[2] |= 0x20
                                
                                if (arg2[0x7c] u> 0)
                                    arg2[2] |= 2
                                
                                if (arg2[0x8c] u> 0)
                                    arg2[2] |= 0x40
                                
                                int64_t rax_13 = *(arg2 + 0x1e0)
                                *(arg2 + 0x18) = rax_13
                                
                                if (rax_13 == 0)
                                    *(arg2 + 0x18) = *(arg2 + 0x1d8)
                                
                                *(arg2 + 0x20) = *(arg2 + 0x1e8)
                                arg2[0xa] = 0
                                *(arg2 + 0x30) = 0
                                *(arg2 + 0x58) = *(arg2 + 0x190)
                                uint64_t rax_16 = zx.q(arg2[0x62].w)
                                arg2[0x1a].w = rax_16.w
                                int32_t r8_5 = sx.d(arg2[0x67].w)
                                *(arg2 + 0x6a) = r8_5.w
                                int32_t r9_3 = sx.d(arg2[0x65].w)
                                arg2[0x1b].w = r9_3.w
                                int16_t rdx_8 = (((rax_16 * 3).d << 2) s/ 0xa).w
                                *(arg2 + 0x6e) = rdx_8
                                
                                if (sx.d(rdx_8) s< r8_5 - r9_3)
                                    r8_5.w -= r9_3.w
                                    *(arg2 + 0x6e) = r8_5.w
                                
                                int32_t i_4 = arg2[0x7c]
                                
                                if (i_4 == 0)
                                label_142bc55af:
                                    
                                    if ((arg2[0x68].b & 4) != 0)
                                        int32_t i_2 = arg2[0x86]
                                        
                                        if (i_2 != 0)
                                            int32_t* rdx_11 = *(arg2 + 0x228) + 4
                                            int32_t i
                                            
                                            do
                                                if (rdi_1 s< *rdx_11)
                                                    rdi_1 = *rdx_11
                                                
                                                rdx_11 = &rdx_11[4]
                                                i = i_2
                                                i_2 -= 1
                                            while (i != 1)
                                        
                                        arg2[0x1c].w = rdi_1.w
                                    else
                                        arg2[0x1c].w = arg2[0x69].w
                                    
                                    uint32_t rcx_14 = zx.d(arg2[0x1a].w)
                                    *(arg2 + 0x72) = *(arg2 + 0x6e)
                                    int32_t temp2_1
                                    int32_t temp3_1
                                    temp2_1:temp3_1 = muls.dp.d(0x99999999, rcx_14)
                                    int32_t* var_38 = arg2
                                    int32_t rdx_13 = temp2_1 s>> 2
                                    int32_t var_2c_1 = 0x10003
                                    int32_t var_30
                                    __builtin_strncpy(&var_30, "cinu", 4)
                                    arg2[0x1d].w = rdx_13.w + (rdx_13 u>> 0x1f).w
                                    *(arg2 + 0x76) = (rcx_14 u/ 0x1e).w
                                    rdx = sub_142b91640(&data_143687610, 0, &var_38, nullptr)
                                    
                                    if (arg2[0x8c] != 0)
                                        arg2[2] |= 0x40
                                else
                                    int16_t* rax_21 = sub_142b99a90(*(*(arg2 + 0xa0) + 0x30), 0x10, 
                                        0, i_4, 0, &arg_20)
                                    rdx = arg_20
                                    int16_t* rcx_13 = rax_21
                                    *(arg2 + 0x30) = rax_21
                                    
                                    if (rdx == 0)
                                        void* rdx_9 = *(arg2 + 0x1f8)
                                        
                                        if (i_4 != 0)
                                            uint64_t i_3 = zx.q(i_4)
                                            uint64_t i_1
                                            
                                            do
                                                int16_t rax_22 = *(rdx_9 + 4)
                                                rdx_9 += 0x28
                                                *rcx_13 = rax_22
                                                rcx_13 = &rcx_13[8]
                                                rcx_13[-7] = *(rdx_9 - 0x28)
                                                *(rcx_13 - 0xc) = *(rdx_9 - 0x24) << 6
                                                *(rcx_13 - 8) = *(rdx_9 - 0x28) << 6
                                                *(rcx_13 - 4) = *(rdx_9 - 0x24) << 6
                                                i_1 = i_3
                                                i_3 -= 1
                                            while (i_1 != 1)
                                        
                                        arg2[0xa] = i_4
                                        goto label_142bc55af
                else
                    rdx = 6

return zx.q(rdx)
