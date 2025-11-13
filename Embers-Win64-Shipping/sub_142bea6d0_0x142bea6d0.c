// 函数: sub_142bea6d0
// 地址: 0x142bea6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg1[1]
uint64_t rbx = zx.q(arg4)

if (arg4 == 0 || arg3 + rbx.d u> arg1[5].d)
    return 6

int32_t result = sub_142b97060(r12, *(arg1 + 0x24) + arg3, arg5)

if (result == 0)
    char* arg_8
    result = sub_142b96670(r12, rbx.d, &arg_8)
    
    if (result == 0)
        uint64_t r8_1 = zx.q(arg2 - 1)
        char* rdi = arg_8
        void* r14 = &rdi[rbx]
        
        if (r8_1.d u> 0x11)
            goto label_142bea810
        
        int32_t rbx_1
        
        switch (r8_1)
            case 0, 1, 7, 0x10
                int16_t* rcx_4 = arg1[3]
                
                if (&rdi[5] u<= r14)
                    rbx_1 = 0
                    *rcx_4 = zx.w(*rdi)
                    rcx_4[1] = zx.w(rdi[1])
                    rcx_4[2] = sx.w(rdi[2])
                    rcx_4[3] = sx.w(rdi[3])
                    uint16_t rax_7 = zx.w(rdi[4])
                    rdi = &rdi[5]
                    rcx_4[4] = rax_7
                    *(rcx_4 + 0xa) = 0
                    rcx_4[7] = 0
                    arg1[4].b = 1
                    goto label_142bea812
                
                rbx_1 = 6
            case 2, 3, 4, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf
                goto label_142bea810
            case 5, 6, 8, 0x11
                uint16_t* rcx_5 = arg1[3]
                char* rdx_4 = &rdi[5]
                
                if (rdx_4 u> r14)
                    rbx_1 = 6
                else
                    *rcx_5 = zx.w(*rdi)
                    rcx_5[1] = zx.w(rdi[1])
                    rcx_5[2] = sx.w(rdi[2])
                    rcx_5[3] = sx.w(rdi[3])
                    uint16_t rax_12 = zx.w(rdi[4])
                    rdi = &rdx_4[3]
                    rcx_5[4] = rax_12
                    
                    if (rdi u> r14)
                        rbx_1 = 6
                    else
                        rcx_5[5] = sx.w(*rdx_4)
                        rcx_5[6] = sx.w(rdx_4[1])
                        rcx_5[7] = zx.w(rdx_4[2])
                        arg1[4].b = 1
                    label_142bea810:
                        rbx_1 = 0
                    label_142bea812:
                        uint64_t (* rsi_1)(int64_t* arg1, void* arg2, int64_t arg3, int32_t arg4, 
                            int32_t arg5)
                        
                        if (r8_1.d u> 0x12)
                            rbx_1 = 8
                        else
                            switch (r8_1)
                                case 0, 5
                                    rsi_1 = sub_142bea990
                                label_142bea88f:
                                    int32_t rax_19
                                    
                                    if (*(arg1 + 0x21) == 0)
                                        rax_19 = sub_142bea220(arg1, arg9)
                                        rbx_1 = rax_19
                                    
                                    if ((*(arg1 + 0x21) != 0 || rax_19 == 0) && arg9 == 0)
                                        rbx_1 = rsi_1(arg1, rdi, r14, zx.q(arg6), arg7, arg8)
                                case 1, 6
                                    int16_t* rax_16 = arg1[3]
                                    uint32_t rcx_8 = zx.d(rax_16[1])
                                    uint32_t rdx_5 = zx.d(*rax_16)
                                    int32_t r8_4 = ((rcx_8 + 7) u>> 3) * rdx_5
                                    
                                    if ((rdx_5 * rcx_8 + 7) u>> 3 u>= r8_4 || r8_4 != r14.d - rdi.d)
                                        goto label_142bea86a
                                    
                                    rsi_1 = sub_142bea990
                                    goto label_142bea88f
                                case 2, 3, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf
                                    rbx_1 = 8
                                case 4
                                label_142bea86a:
                                    rsi_1 = sub_142bea480
                                    goto label_142bea88f
                                case 7
                                    rdi = &rdi[1]
                                    
                                    if (rdi u<= r14)
                                        goto label_142bea87b
                                case 8
                                label_142bea87b:
                                    rsi_1 = sub_142beab70
                                    goto label_142bea88f
                                case 0x10, 0x11, 0x12
                                    rsi_1 = sub_142beb230
                                    goto label_142bea88f
        
        sub_142b97020(r12, &arg_8)
        return zx.q(rbx_1)

return result
