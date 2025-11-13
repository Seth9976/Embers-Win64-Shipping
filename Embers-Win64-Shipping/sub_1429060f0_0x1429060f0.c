// 函数: sub_1429060f0
// 地址: 0x1429060f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x198)
void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t* r15 = arg5
int32_t rsi = 4
int64_t* rbp = arg2
int64_t* var_170 = r15
int32_t result_1 = 0
int32_t var_1a8 = 4
int32_t* r12 = nullptr
int32_t result

if (sub_142890210(arg3, 4) != 0)
    result = sub_142906680(arg1, rbp, arg3, arg4, r15, arg6)
else if (sub_142890210(rbp, 4) != 0)
    result = sub_142906680(arg1, rbp, arg3, arg4, r15, arg6)
else if (sub_142890210(arg4, 4) != 0)
    result = sub_142906680(arg1, rbp, arg3, arg4, r15, arg6)
else if (sub_142890290(arg4) != 0)
    int32_t rax_6 = sub_142890560(arg3)
    
    if (rax_6 != 0)
        sub_1428d8e50(r15)
        int64_t* rax_8 = sub_1428d8ba0(r15)
        int64_t* rax_9 = sub_1428d8ba0(r15)
        int64_t* rax_10 = sub_1428d8ba0(r15)
        int64_t var_158[0x20]
        var_158[0] = rax_10
        
        if (rax_10 == 0)
        label_142906622:
            
            if (arg6 == 0)
                sub_1428cc600(r12)
        else
            if (arg6 != 0)
                r12 = arg6
            label_14290627f:
                int32_t rax_14
                
                if (rbp[2].d == 0)
                    rax_14 = sub_1428909a0(rbp, arg4)
                
                if (rbp[2].d != 0 || rax_14 s>= 0)
                    if (sub_1429084c0(rax_10, rbp, arg4, r15) == 0)
                        goto label_142906622
                    
                    rbp = rax_10
                
                if (sub_1428cd160(rax_10, rbp, r12, r15) != 0)
                    if (rax_6 s<= 0x29f)
                        if (rax_6 s> 0xef)
                            rsi = 5
                            var_1a8 = 5
                            goto label_14290631f
                        
                        if (rax_6 s> 0x4f)
                            goto label_14290631f
                        
                        rsi = 1
                        
                        if (rax_6 s> 0x17)
                            rsi = 3
                        
                        var_1a8 = rsi
                        
                        if (rax_6 s<= 0x17)
                            goto label_142906387
                        
                        goto label_14290631f
                    
                    rsi = 6
                    var_1a8 = 6
                label_14290631f:
                    
                    if (sub_1428cd090(rax_8, rax_10, rax_10, r12, r15) != 0)
                        int64_t rax_19 = sx.q(1 << (rsi.b - 1))
                        
                        if (rax_19 s<= 1)
                        label_142906387:
                            int64_t rcx_19 = sx.q(arg4[1].d)
                            int32_t r13_2 = rax_6 - 1
                            int64_t var_1a0
                            var_1a0.d = 1
                            int64_t* var_198_1
                            var_198_1.d = rcx_19.d
                            int32_t rbx_4 = (rcx_19 - 1).d
                            
                            if (*((rcx_19 << 3) + -fffffffffffffff8 + *arg4) s>= 0)
                                if (sub_1428cd160(rax_9, &data_1434e8ea8, r12, r15) != 0)
                                label_1429064fd:
                                    int32_t result_2 = 0
                                    int32_t rdi_1 = 1
                                    
                                    while (true)
                                        if (sub_142890240(arg3, r13_2) != 0)
                                            int32_t rbx_8 = 1
                                            int32_t rdi_2 = 1
                                            int32_t rbp_1 = 0
                                            
                                            if (rsi u> 1)
                                                int32_t i = r13_2 - 1
                                                
                                                while (i s>= 0)
                                                    if (sub_142890240(arg3, i) != 0)
                                                        char rcx_31 = rdi_2.b - rbp_1.b
                                                        rbp_1 = rdi_2
                                                        rbx_8 = rbx_8 << rcx_31 | 1
                                                    
                                                    rdi_2 += 1
                                                    i -= 1
                                                    
                                                    if (rdi_2 s>= var_1a8)
                                                        break
                                                
                                                r15 = var_170
                                            
                                            if (var_1a0.d == 0)
                                                int32_t rdi_3 = 0
                                                
                                                if (rbp_1 + 1 s> 0)
                                                    while (sub_1428cd090(rax_9, rax_9, rax_9, r12, 
                                                            r15) != 0)
                                                        rdi_3 += 1
                                                        
                                                        if (rdi_3 s>= rbp_1 + 1)
                                                            goto label_1429065dc
                                                    
                                                    break
                                            
                                        label_1429065dc:
                                            
                                            if (sub_1428cd090(rax_9, rax_9, 
                                                    var_158[sx.q(rbx_8) s>> 1], r12, r15) == 0)
                                                break
                                            
                                            rsi = var_1a8
                                            int32_t r13_3 = r13_2 - rbp_1
                                            result_2 = 0
                                            r13_2 = r13_3 - 1
                                            var_1a0.d = 0
                                            rdi_1 = 0
                                            
                                            if (r13_3 s> 0)
                                                continue
                                        else
                                            if (rdi_1 == 0
                                                    && sub_1428cd090(rax_9, rax_9, rax_9, r12, r15)
                                                    == 0)
                                                break
                                            
                                            if (r13_2 != 0)
                                                r13_2 -= 1
                                                continue
                                        
                                        if (sub_1428ccac0(arg1, rax_9, r12, r15) != 0)
                                            result_2 = 1
                                        
                                        result_1 = result_2
                                        break
                            else if (sub_142890e60(rax_9, rcx_19.d) != 0)
                                int32_t i_3 = 1
                                int64_t r9_4 = sx.q(var_198_1.d)
                                **rax_9 = neg.q(**arg4)
                                
                                if (r9_4.d s> 1 && rbx_4 u>= 8)
                                    int64_t rdx_8 = *rax_9
                                    int128_t* rcx_23 = *arg4
                                    rsi = var_1a8
                                    void* r8_5 = (rcx_19 << 3) + -fffffffffffffff8 + rdx_8
                                    
                                    if ((rdx_8 + 8 u> (rcx_19 << 3) + -fffffffffffffff8 + rcx_23
                                            || r8_5 u< rcx_23 + 8) && (rdx_8 + 8 u> rax_9 || r8_5 u< rax_9)
                                            && (rdx_8 + 8 u> arg4 || r8_5 u< arg4))
                                        int32_t rbx_5 = rbx_4 & 0x80000007
                                        
                                        if (rbx_5 s< 0)
                                            rbx_5 = ((rbx_5 - 1) | 0xfffffff8) + 1
                                        
                                        int128_t zmm2_1 = data_142d3f800
                                        int64_t i_1 = 1
                                        int64_t rax_31 = 0x28
                                        
                                        do
                                            int128_t zmm0_1 = *(rcx_23 + rax_31 - 0x20)
                                            i_3 += 8
                                            i_1 += 8
                                            int128_t zmm1_1 = *(rcx_23 + rax_31)
                                            rax_31 += 0x40
                                            *(rdx_8 + rax_31 - 0x60) = zmm0_1 & not.o(zmm2_1)
                                            *(rdx_8 + rax_31 - 0x50) =
                                                *(rcx_23 + rax_31 - 0x50) & not.o(zmm2_1)
                                            zmm0_1 = *(rcx_23 + rax_31 - 0x30)
                                            *(rdx_8 + rax_31 - 0x40) = zmm1_1 & not.o(zmm2_1)
                                            *(rdx_8 + rax_31 - 0x30) = zmm0_1 & not.o(zmm2_1)
                                        while (i_1 s< sx.q(r9_4.d - rbx_5))
                                
                                for (int64_t i_2 = sx.q(i_3); i_2 s< r9_4; i_2 += 1)
                                    *(*rax_9 + (i_2 << 3)) = not.q(*(*arg4 + (i_2 << 3)))
                                
                                rax_9[1].d = r9_4.d
                                goto label_1429064fd
                        else
                            int64_t rbx_3 = 1
                            
                            while (true)
                                int64_t* rax_20 = sub_1428d8ba0(r15)
                                var_158[rbx_3] = rax_20
                                
                                if (rax_20 == 0)
                                    break
                                
                                void var_160
                                
                                if (sub_1428cd090(rax_20, *(&var_160 + (rbx_3 << 3)), rax_8, r12, 
                                        r15) == 0)
                                    break
                                
                                rbx_3 += 1
                                
                                if (rbx_3 s>= rax_19)
                                    goto label_142906387
                
                goto label_142906622
            
            int32_t* rax_12 = sub_1428cc660()
            r12 = rax_12
            
            if (rax_12 == 0)
                sub_1428cc600(r12)
            else
                if (sub_1428cc700(rax_12, arg4, r15) != 0)
                    goto label_14290627f
                
                sub_1428cc600(r12)
        
        sub_1428d8a60(r15)
        result = result_1
    else if (sub_14288fa30(arg4, 1) == 0)
        result = sub_142890900(arg1, 1)
    else
        sub_142890900(arg1, 0)
        result = 1
else
    sub_1428a5670(3, 0x6d, 0x66, "crypto\bn\bn_exp.c", 0x13e)
    result = 0

__security_check_cookie(rax_1 ^ &var_1d8)
return result
