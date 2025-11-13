// 函数: sub_142875450
// 地址: 0x142875450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
int64_t i_1 = 0
int64_t* r15_1 = *(arg1 + 0x488) + 0x1e8
*arg4 = 0
int128_t var_58 = *arg2
int32_t r12_1 = arg3 & 0x80

if (r12_1 != 0)
    sub_142855fc0(*(arg1 + 0x488) + 0x1e8)

int64_t rax

if (r15_1 == 0)
    rax = 0
else
    rax = r15_1[1]

int64_t rax_2 = sub_1428a6a70((rax + 0x1a) * 0x28)

if (rax_2 == 0)
    sub_142856580(arg1, (rax_2 + 0x50).d, 0x1b3, (rax_2 + 0x41).d, "ssl\statem\extensions.c", 0x23e)
    return 0

int64_t rdx_2 = var_58:8.q
int64_t r13 = 0

if (rdx_2 != 0)
    while (true)
        if (rdx_2 u< 2)
            sub_142856580(arg1, 0x32, 0x1b3, 0x6e, "ssl\statem\extensions.c", 0x24b)
        else
            char* rcx_5 = var_58.q
            var_58:8.q = rdx_2 - 2
            var_58.q = &rcx_5[2]
            uint32_t rbx_2 = zx.d(rcx_5[1]) | zx.d(*rcx_5) << 8
            
            if (rdx_2 - 2 u< 2)
                sub_142856580(arg1, 0x32, 0x1b3, 0x6e, "ssl\statem\extensions.c", 0x24b)
            else
                uint64_t rcx_7 = zx.q(rcx_5[3]) | zx.q(rcx_5[2]) << 8
                int128_t var_58_1
                var_58_1.q = &rcx_5[4]
                var_58_1:8.q = var_58:8.q - 2
                
                if (var_58:8.q - 2 u< rcx_7)
                    sub_142856580(arg1, 0x32, 0x1b3, 0x6e, "ssl\statem\extensions.c", 0x24b)
                else
                    var_58_1.q = &rcx_5[4 + rcx_7]
                    int64_t rdi_3 = var_58:8.q - 2 - rcx_7
                    var_58_1:8.q = rdi_3
                    void* const rax_9 = &data_1434e71e0
                    int64_t i = 0
                    var_58 = var_58_1
                    uint64_t var_40_1 = rcx_7
                    
                    do
                        if (rbx_2 == *rax_9)
                            int32_t r8_3 = *(rax_9 + 4)
                            
                            if ((arg3 & r8_3) == 0)
                                goto label_142875814_2
                            
                            bool cond:0_1
                            
                            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
                                cond:0_1 = (r8_3.b & 2) != 0
                            else
                                cond:0_1 = (r8_3.b & 1) != 0
                            
                            if (cond:0_1)
                                goto label_142875814_2
                            
                            goto label_1428756d1
                        
                        i += 1
                        rax_9 += 0x38
                    while (i u< 0x1a)
                    
                    int64_t arg_10
                    int16_t* rax_10
                    
                    if (r15_1 != 0)
                        arg_10 = 0
                        int32_t rdx_5
                        
                        if (r12_1 == 0)
                            rdx_5 = 2
                            
                            if (test_bit(arg3, 8))
                                rdx_5 = 0
                        else
                            rdx_5 = 1
                        
                        rax_10 = sub_142855f40(r15_1, rdx_5, rbx_2, &arg_10)
                    
                    int64_t r8_4
                    int64_t* r9_2
                    
                    if (r15_1 == 0 || rax_10 == 0)
                        r8_4 = rax_2
                        r9_2 = nullptr
                        
                        if (rbx_2 != 0x29 || r12_1 == 0 || rdi_3 == 0)
                        label_14287570f:
                            int32_t rdx_10 = ((r9_2 - r8_4) s/ 0x28).d
                            
                            if (rdx_10 u>= 0x1a || (arg3 & 0x6080) != 0 || rbx_2 == 0x2c
                                    || rbx_2 == 0xff01 || rbx_2 == 0x12
                                    || (*(zx.q(rdx_10) + arg1 + 0x600) & 2) != 0)
                                if (r9_2 != 0)
                                    r9_2[4] = r13
                                    r13 += 1
                                    r9_2[2].d = 1
                                    *r9_2 = (&rcx_5[4]).o
                                    r9_2[3].d = rbx_2
                                    int64_t r10_1 = *(arg1 + 0x620)
                                    
                                    if (r10_1 != 0)
                                        int32_t var_70
                                        var_70.q = *(arg1 + 0x628)
                                        int64_t rdx_11
                                        rdx_11.b = arg1[0xe] == 0
                                        int64_t var_78
                                        var_78.d = r9_2[1].d
                                        r10_1(arg1, rdx_11, zx.q(rbx_2), *r9_2, var_78, var_70, 
                                            rax + 0x1a)
                                
                                if (rdi_3 == 0)
                                    break
                                
                                rdx_2 = var_58:8.q
                                continue
                            else
                                sub_142856580(arg1, 0x6e, 0x1b3, 0xd9, "ssl\statem\extensions.c", 
                                    0x274)
                        else
                        labelid_2d:
                            sub_142856580(arg1, 0x2f, 0x1b3, 0x6e, "ssl\statem\extensions.c", 0x259)
                    else
                        int32_t rdx_6 = *(rax_10 + 8)
                        
                        if ((arg3 & rdx_6) == 0)
                        label_142875814:
                            sub_142856580(arg1, 0x2f, 0x1b3, 0x6e, "ssl\statem\extensions.c", 0x259)
                        else
                            bool cond:2_1
                            
                            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
                                cond:2_1 = (rdx_6.b & 2) != 0
                            else
                                cond:2_1 = (rdx_6.b & 1) != 0
                            
                            if (cond:2_1)
                            label_142875814_1:
                                sub_142856580(arg1, 0x2f, 0x1b3, 0x6e, "ssl\statem\extensions.c", 
                                    0x259)
                            else
                                i = arg_10 + 0x1a
                            label_1428756d1:
                                r8_4 = rax_2
                                int64_t* rcx_11 = r8_4 + i * 0x28
                                r9_2 = rcx_11
                                
                                if ((rcx_11 == 0 || rcx_11[2].d != 1)
                                        && (rbx_2 != 0x29 || r12_1 == 0 || rdi_3 == 0))
                                    goto label_14287570f
                                
                            label_142875814_2:
                                sub_142856580(arg1, 0x2f, 0x1b3, 0x6e, "ssl\statem\extensions.c", 
                                    0x259)
        
    label_1428758f9:
        sub_1428a6780(rax_2)
        return 0

if (arg6 != 0)
    void* const rbx_3 = &data_1434e71e4
    
    do
        int64_t rdi_4 = *(rbx_3 + 4)
        
        if (rdi_4 != 0)
            int32_t rdx_12 = *rbx_3
            
            if ((arg3 & rdx_12) != 0 && sub_142875330(arg1, rdx_12, arg3) != 0
                    && rdi_4(arg1, zx.q(arg3)) == 0)
                goto label_1428758f9
        
        i_1 += 1
        rbx_3 += 0x38
    while (i_1 u< 0x1a)

*arg4 = rax_2

if (arg5 != 0)
    *arg5 = rax + 0x1a

return 1
