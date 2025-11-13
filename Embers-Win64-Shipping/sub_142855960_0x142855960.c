// 函数: sub_142855960
// 地址: 0x142855960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rsi_1 = *(arg1 + 0x130) + 0x1e8
uint64_t rbx = zx.q(arg3)

if (arg5 != 0 || arg6 == 0)
    if (rbx.d != 0x12)
        if (rbx.d u<= 0x3374)
            if (rbx.d != 0x3374)
                if (rbx.d u> 0x33)
                    goto label_142855a1c
                
                goto label_142855a03
            
        label_142855a17:
            
            if (rbx.d == 0x12)
                goto label_142855a1c
        else if (rbx.d != 0xff01 || rbx.d == 0x12)
        label_142855a1c:
            
            if (rbx.d u<= 0xffff)
                int64_t r9 = rsi_1[1]
                int16_t* rcx_2 = *rsi_1
                int64_t r8 = 0
                int16_t* rdx = rcx_2
                
                if (r9 != 0)
                    do
                        if (rbx.d == zx.d(*rdx))
                            if (arg2 == 2)
                                return 0
                            
                            int32_t rax_5 = *(rdx + 4)
                            
                            if (arg2 == rax_5)
                                return 0
                            
                            if (rax_5 == 2)
                                return 0
                        
                        r8 += 1
                        rdx = &rdx[0x1c]
                    while (r8 u< r9)
                
                int64_t rax_7 =
                    sub_1428a67c0(rcx_2, (r9 + 1) * 0x38, "ssl\statem\extensions_cust.c", 0x184)
                
                if (rax_7 != 0)
                    int16_t* rcx_3 = rsi_1[1] * 0x38
                    *rsi_1 = rax_7
                    *(rcx_3 + rax_7 + 2) = 0
                    *(rcx_3 + rax_7 + 0xc) = 0
                    *(rcx_3 + rax_7 + 4) = arg2
                    *(rcx_3 + rax_7 + 8) = arg4
                    *(rcx_3 + rax_7 + 0x28) = arg8
                    *(rcx_3 + rax_7 + 0x20) = arg7
                    *(rcx_3 + rax_7 + 0x30) = arg9
                    *(rcx_3 + rax_7 + 0x10) = arg5
                    *(rcx_3 + rax_7 + 0x18) = arg6
                    *(rcx_3 + rax_7) = rbx.w
                    rsi_1[1] += 1
                    return 1
    else if (arg4.b s>= 0)
    label_142855a03:
        
        switch (jump_table_142855af0[zx.q(lookup_table_142855af8[rbx])])
            case 0x2855a17
                goto label_142855a17
            case 0x2855a1c
                goto label_142855a1c
    else if (sub_14284dc30(arg1) == 0)
        goto label_142855a03

return 0
