// 函数: sub_142956950
// 地址: 0x142956950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2a8)
void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int64_t* r14 = arg4
int64_t* rsi = arg2
int64_t* r15 = arg7
int64_t rax_3 = *arg6
int64_t* var_260 = arg5
int64_t* var_2a8 = r15
int32_t* var_298 = nullptr
int64_t* result

if ((*rax_3 & 1) != 0)
    int32_t rax_4 = sub_142890560(arg3)
    int32_t rax_5 = sub_142890560(arg5)
    int32_t rdi_1 = rax_5
    
    if (rax_4 != 0 || rax_5 != 0)
        if (rax_4 s> rdi_1)
            rax_5 = rax_4
        
        sub_1428d8e50(r15)
        int64_t* rax_6 = sub_1428d8ba0(r15)
        int64_t* rax_7 = sub_1428d8ba0(r15)
        int64_t* rax_8 = sub_1428d8ba0(r15)
        int64_t var_258[0x1f]
        var_258[0] = rax_8
        int64_t* rax_9 = sub_1428d8ba0(r15)
        int64_t var_158[0x20]
        var_158[0] = rax_9
        
        if (rax_9 == 0)
            goto label_142956fad
        
        int64_t* rbx_3
        
        if (arg8 == 0)
            int32_t* rax_11 = sub_1428cc660()
            var_298 = rax_11
            
            if (rax_11 == 0)
                rbx_3 = nullptr
                sub_1428cc600(rax_11)
            else
                if (sub_1428cc700(rax_11, arg6, r15) != 0)
                    goto label_142956ac9
                
                rbx_3 = nullptr
                sub_1428cc600(var_298)
        else
            var_298 = arg8
        label_142956ac9:
            int32_t rcx_9 = 1
            int32_t r15_1 = 6
            int32_t var_2a0_1
            int32_t rbx_2
            
            if (rax_4 s> 0x29f)
                rbx_2 = 6
                var_2a0_1 = 6
            else if (rax_4 s> 0xef)
                rbx_2 = 5
                var_2a0_1 = 5
            else if (rax_4 s<= 0x4f)
                if (rax_4 s> 0x17)
                    rcx_9 = 3
                
                var_2a0_1 = rcx_9
                rbx_2 = rcx_9
            else
                rbx_2 = 4
                var_2a0_1 = 4
            
            if (rdi_1 s<= 0x29f)
                if (rdi_1 s> 0xef)
                    r15_1 = 5
                else if (rdi_1 s<= 0x4f)
                    r15_1 = 1
                    
                    if (rdi_1 s> 0x17)
                        r15_1 = 3
                else
                    r15_1 = 4
            
            int32_t rax_13
            
            if (rsi[2].d == 0)
                rax_13 = sub_1428909a0(rsi, arg6)
            
            int32_t var_2b8
            int64_t* rdi_2
            
            if (rsi[2].d != 0 || rax_13 s>= 0)
                rdi_2 = var_2a8
                var_2b8.q = rdi_2
                
                if (sub_14291a950(nullptr, rax_8, rsi, arg6, var_2b8) != 0)
                    rsi = rax_8
                    goto label_142956b88
                
                r15 = rdi_2
            label_142956fad:
                rbx_3 = nullptr
            else
                rdi_2 = var_2a8
            label_142956b88:
                
                if (sub_142890300(rsi) == 0)
                    if (sub_142890970(rax_8, rsi, var_298, rdi_2) == 0)
                    label_142956f9e:
                        r15 = var_2a8
                        goto label_142956fad
                    
                    int64_t* rbp_2
                    
                    if (rbx_2 u> 1)
                        var_2b8.q = rdi_2
                        
                        if (sub_1428ccb60(rax_6, rax_8, rax_8, var_298, var_2b8) == 0)
                            goto label_142956f9e
                        
                        rbp_2 = var_2a8
                        rbx_3 = 1
                        int64_t rdi_3 = sx.q(1 << (rbx_2.b - 1))
                        
                        if (rdi_3 s<= 1)
                            goto label_142956c66
                        
                        while (true)
                            int64_t* rax_19 = sub_1428d8ba0(rbp_2)
                            var_258[rbx_3] = rax_19
                            
                            if (rax_19 != 0)
                                var_2b8.q = rbp_2
                                
                                if (sub_1428ccb60(rax_19, (&var_260)[rbx_3], rax_6, var_298, 
                                        var_2b8) != 0)
                                    rbx_3 += 1
                                    
                                    if (rbx_3 s>= rdi_3)
                                        goto label_142956c5c
                                    
                                    continue
                            
                            r15 = rbp_2
                            break
                        
                        goto label_142956fad
                    
                    rbp_2 = var_2a8
                label_142956c5c:
                    rbx_3 = 1
                label_142956c66:
                    int32_t rax_21
                    
                    if (r14[2].d == 0)
                        rax_21 = sub_1428909a0(r14, arg6)
                    
                    if (r14[2].d == 0 && rax_21 s< 0)
                        goto label_142956c9a
                    
                    var_2b8.q = rbp_2
                    
                    if (sub_14291a950(nullptr, rax_9, r14, arg6, var_2b8) == 0)
                        goto label_142956f9e
                    
                    r14 = rax_9
                label_142956c9a:
                    
                    if (sub_142890300(r14) == 0)
                        int32_t* r12_1 = var_298
                        
                        if (sub_142890970(rax_9, r14, r12_1, rbp_2) == 0)
                            goto label_142956f9e
                        
                        if (r15_1 u> 1)
                            var_2b8.q = rbp_2
                            
                            if (sub_1428ccb60(rax_6, rax_9, rax_9, r12_1, var_2b8) == 0)
                                goto label_142956f9e
                            
                            int64_t rdi_4 = sx.q(1 << (r15_1.b - 1))
                            
                            if (rdi_4 s> 1)
                                do
                                    int64_t* rax_27 = sub_1428d8ba0(rbp_2)
                                    var_158[rbx_3] = rax_27
                                    
                                    if (rax_27 == 0)
                                        goto label_142956f9e
                                    
                                    var_2b8.q = rbp_2
                                    void var_160
                                    
                                    if (sub_1428ccb60(rax_27, *(&var_160 + (rbx_3 << 3)), rax_6, 
                                            r12_1, var_2b8) == 0)
                                        goto label_142956f9e
                                    
                                    rbx_3 += 1
                                while (rbx_3 s< rdi_4)
                            
                            goto label_142956d54
                        
                    label_142956d54:
                        rbx_3 = nullptr
                        int64_t* var_290_1
                        var_290_1.d = 1
                        int32_t rdi_5 = 0
                        int32_t rsi_2 = 0
                        int32_t r14_1 = 0
                        int32_t rbp_3 = 0
                        
                        if (sub_142890970(rax_7, &data_1434e8ea8, r12_1, var_2a8) == 0)
                            r15 = var_2a8
                        else
                            int32_t r13_3 = rax_5 - 1
                            
                            if (rax_5 - 1 s< 0)
                                r15 = var_2a8
                            label_142956f86:
                                
                                if (sub_1428ccac0(arg1, rax_7, r12_1, r15) != 0)
                                    rbx_3 = 1
                                
                                int64_t* var_280_1 = rbx_3
                            else
                                int32_t r12_2 = r13_3 - 1
                                int32_t rbx_4 = 2 - r15_1
                                int32_t rax_32 = var_290_1.d
                                int32_t var_2a0_2 = rbx_4
                                
                                while (true)
                                    if (rax_32 == 0)
                                        r15 = var_2a8
                                        var_2b8.q = r15
                                        
                                        if (sub_1428ccb60(rax_7, rax_7, rax_7, var_298, var_2b8)
                                                == 0)
                                            goto label_142956fad
                                    
                                    if (rdi_5 == 0 && sub_142890240(arg3, r13_3) != 0)
                                        r14_1 = r15_1 - var_2a0_1 + rbx_4 + r12_2
                                        
                                        if (sub_142890240(arg3, r14_1) == 0)
                                            int32_t i
                                            
                                            do
                                                r14_1 += 1
                                                i = sub_142890240(arg3, r14_1)
                                            while (i == 0)
                                        
                                        rdi_5 = 1
                                        int32_t rbx_5 = r12_2
                                        
                                        if (r12_2 s>= r14_1)
                                            do
                                                rdi_5 *= 2
                                                
                                                if (sub_142890240(arg3, rbx_5) != 0)
                                                    rdi_5 += 1
                                                
                                                rbx_5 -= 1
                                            while (rbx_5 s>= r14_1)
                                    
                                    if (rsi_2 == 0)
                                        int64_t* r15_3 = var_260
                                        
                                        if (sub_142890240(r15_3, r13_3) != 0)
                                            rbp_3 = var_2a0_2 + r12_2
                                            
                                            if (sub_142890240(r15_3, rbp_3) == 0)
                                                int32_t i_1
                                                
                                                do
                                                    rbp_3 += 1
                                                    i_1 = sub_142890240(r15_3, rbp_3)
                                                while (i_1 == 0)
                                            
                                            rsi_2 = 1
                                            int32_t rbx_6 = r12_2
                                            
                                            if (r12_2 s>= rbp_3)
                                                do
                                                    rsi_2 *= 2
                                                    
                                                    if (sub_142890240(r15_3, rbx_6) != 0)
                                                        rsi_2 += 1
                                                    
                                                    rbx_6 -= 1
                                                while (rbx_6 s>= rbp_3)
                                    
                                    r15 = var_2a8
                                    
                                    if (rdi_5 == 0 || r13_3 != r14_1)
                                        rax_32 = var_290_1.d
                                        rbx_3 = nullptr
                                    else
                                        var_2b8.q = r15
                                        rbx_3 = nullptr
                                        
                                        if (sub_1428ccb60(rax_7, rax_7, var_258[sx.q(rdi_5) s>> 1], 
                                                var_298, var_2b8) == 0)
                                            break
                                        
                                        rdi_5 = 0
                                        var_290_1.d = 0
                                        rax_32 = 0
                                    
                                    if (rsi_2 != 0 && r13_3 == rbp_3)
                                        var_2b8.q = r15
                                        
                                        if (sub_1428ccb60(rax_7, rax_7, var_158[sx.q(rsi_2) s>> 1], 
                                                var_298, var_2b8) == 0)
                                            goto label_142956fad
                                        
                                        rsi_2 = 0
                                        var_290_1.d = 0
                                        rax_32 = 0
                                    
                                    r12_2 -= 1
                                    int32_t temp1_1 = r13_3
                                    r13_3 -= 1
                                    
                                    if (temp1_1 - 1 s< 0)
                                        r12_1 = var_298
                                        goto label_142956f86
                                    
                                    rbx_4 = var_2a0_2
                    else
                        sub_142890900(arg1, 0)
                        r15 = var_2a8
                else
                    sub_142890900(arg1, 0)
                    r15 = var_2a8
                    int64_t* var_280
                    var_280.d = 1
                    rbx_3 = var_280
            
            if (arg8 == 0)
                sub_1428cc600(var_298)
        
        sub_1428d8a60(r15)
        result = zx.q(rbx_3.d)
    else
        result = sub_142890900(arg1, zx.q(rax_5 + 1))
else
    sub_1428a5670(3, 0x76, 0x66, "crypto\bn\bn_exp2.c", 0x24)
    result = nullptr

__security_check_cookie(rax_1 ^ &var_2d8)
return result
