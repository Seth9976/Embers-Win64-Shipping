// 函数: sub_142a25250
// 地址: 0x142a25250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t arg_20 = arg4
uint32_t arg_18 = arg3
uint32_t r14 = arg6
uint64_t rdi = zx.q(arg2)
uint32_t rdx = arg4
int128_t* rsi = arg1
uint32_t rcx = arg5
uint32_t r13 = arg3
uint32_t i = arg3 | rdx | rcx | r14
arg6 = i

if (i != 0)
    int64_t r9 = arg7
    char* r8 = arg8
    
    do
        int64_t rbp_1 = 1
        
        if ((1 & i.b) != 0)
            int64_t* rbx_3 = zx.q(*r8) * 0x30 + r9
            int32_t (* var_50)[0x4]
            int32_t (* var_48)[0x4]
            int64_t* var_40
            
            if ((1 & r13.b) != 0)
                uint64_t rdx_1 = zx.q(rdi.d)
                
                if ((r13.b & 3) != 3)
                    data_144020df8(rsi, rdx_1, rbx_3, &rbx_3[2], &rbx_3[4], var_50, var_48, var_40)
                else
                    data_144020de0(rsi, rdx_1, rbx_3, &rbx_3[2], &rbx_3[4], var_50, var_48, var_40)
                    rbp_1 = 2
            else
                int64_t* rbp_4
                int64_t* r13_1
                int32_t (* r15_1)[0x4]
                
                if ((1 & rdx.b) == 0)
                    if ((1 & rcx.b) != 0)
                        r15_1 = &rbx_3[4]
                        uint64_t rdx_5 = zx.q(rdi.d)
                        
                        if ((rcx.b & 3) != 3)
                            sub_142a16440(rsi, rdx_5, rbx_3, &rbx_3[2], r15_1)
                            goto label_142a2542d
                        
                        rbp_4 = zx.q(r8[1]) * 0x30 + r9
                        r13_1 = &rbp_4[4]
                        var_40 = r13_1
                        var_48 = &rbp_4[2]
                        var_50 = rbp_4
                        sub_142a160f0(rsi, rdx_5, rbx_3, &rbx_3[2], r15_1, var_50, var_48, var_40)
                        goto label_142a25379
                    
                    sub_142a16440(sx.q((rdi << 2).d) + rsi, zx.q(rdi.d), rbx_3, &rbx_3[2], 
                        &rbx_3[4])
                else
                    r15_1 = &rbx_3[4]
                    uint64_t rdx_2 = zx.q(rdi.d)
                    
                    if ((rdx.b & 3) != 3)
                        sub_142a16d80(rsi, rdx_2.d, rbx_3, &rbx_3[2], r15_1)
                    label_142a2542d:
                        
                        if ((1 & r14.b) != 0)
                            sub_142a16440(sx.q((rdi << 2).d) + rsi, zx.q(rdi.d), rbx_3, &rbx_3[2], 
                                r15_1)
                    else
                        rbp_4 = zx.q(r8[1]) * 0x30 + r9
                        r13_1 = &rbp_4[4]
                        var_40 = r13_1
                        var_48 = &rbp_4[2]
                        var_50 = rbp_4
                        sub_142a166d0(rsi, rdx_2, rbx_3, &rbx_3[2], r15_1, var_50, var_48, var_40)
                    label_142a25379:
                        
                        if ((r14.b & 3) != 3)
                            if ((r14.b & 1) != 0)
                                sub_142a16440(sx.q((rdi << 2).d) + rsi, zx.q(rdi.d), rbx_3, 
                                    &rbx_3[2], r15_1)
                            else if ((r14.b & 2) != 0)
                                sub_142a16440(sx.q((rdi << 2).d) + 8 + rsi, zx.q(rdi.d), rbp_4, 
                                    &rbp_4[2], r13_1)
                            
                            r13 = arg_18
                            rbp_1 = 2
                        else
                            var_40 = r13_1
                            var_48 = &rbp_4[2]
                            var_50 = rbp_4
                            sub_142a160f0(sx.q((rdi << 2).d) + rsi, zx.q(rdi.d), rbx_3, &rbx_3[2], 
                                r15_1, var_50, var_48, var_40)
                            r13 = arg_18
                            rbp_1 = 2
            r8 = arg8
            r9 = arg7
        
        char rcx_11 = rbp_1.b
        arg5 u>>= rcx_11
        r8 = &r8[zx.q(rbp_1.d)]
        r13 u>>= rcx_11
        rsi += zx.q((rbp_1 << 3).d)
        rdx = arg_20 u>> rcx_11
        i = arg6 u>> rcx_11
        r14 u>>= rcx_11
        rcx = arg5
        arg8 = r8
        arg_18 = r13
        arg_20 = rdx
        arg6 = i
    while (i != 0)

return i
