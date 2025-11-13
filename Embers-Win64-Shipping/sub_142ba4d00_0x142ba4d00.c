// 函数: sub_142ba4d00
// 地址: 0x142ba4d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
void* r9 = arg1 + 0x246c
int64_t* r10 = arg1
int32_t rcx = arg1[7].d
int32_t r12 = 0
void* var_270 = r9
int32_t rdi = 1
void* rbx = &data_143683060 + (sx.q(*(*arg1 + 0xc)) << 3)
int32_t i = *rbx
void* var_280 = rbx
int128_t var_238

if (i != 0x1469)
    uint64_t rsi
    uint64_t arg_18 = rsi
    
    do
        int32_t r13_1 = 0
        void* rcx_6 = sx.q(i) + &data_1436816e0
        int32_t var_290_1 = 0
        int32_t var_298_1 = 0
        int32_t r14_1 = 0
        int32_t var_2b4_1 = 0
        int32_t r15_1 = 0
        int32_t var_2b0_1 = 0
        char j = *rcx_6
        
        if (j != 0)
            int32_t var_1e8[0x34]
            int32_t var_118[0x34]
            int32_t r11_5
            
            do
                rsi.b = 0
                char var_2c8_1 = 0
                
                if (j == 0x20)
                    do
                        rcx_6 += 1
                    while (*rcx_6 == 0x20)
                
                int32_t var_2bc
                int32_t var_278
                void* rax_3 = sub_142ba67f0(rcx_6, r10, &var_2bc, &var_278)
                rcx_6 = rax_3
                int32_t rax_4 = var_278
                
                if (rax_4 == 0)
                    r11_5 = var_298_1
                else
                    int32_t rdi_1 = -0x80000000
                    int32_t var_29c_1 = 0
                    
                    if ((*(rbx + 4) & 1) == 0)
                        rdi_1 = 0x7fffffff
                    
                    int32_t r13_2 = 0
                    
                    if (rax_4 != 0)
                        int32_t rax_5 = var_2bc
                        int32_t var_2a0_1 = rdi_1
                        
                        do
                            rsi.b = 0
                            char var_2c6_1 = 0
                            
                            if (rax_5 == 0)
                                rsi = zx.q(var_2c8_1)
                            else
                                int32_t rax_6
                                rax_6, arg3 = sub_142b92f00(arg2, rax_5, 1, arg3)
                                void* rcx_9 = *(arg2 + 0x78)
                                arg3.o = *(rcx_9 + 0x98)
                                int128_t zmm1_1 = *(rcx_9 + 0xa8)
                                var_238 = arg3.o
                                arg3.o = zx.o(*(rcx_9 + 0xb8))
                                int64_t var_218_1 = (arg3.o).q
                                
                                if (rax_6 != 0 || (var_238.q u>> 0x10).w s<= 2)
                                    rax_5 = var_2bc
                                    rsi = zx.q(var_2c8_1)
                                else
                                    int32_t rdx_3 = 0
                                    int32_t var_2ac_1 = 0
                                    int32_t r10_1 = 0
                                    int32_t var_2c4_1 = 0
                                    int32_t r9_2 = 0
                                    int64_t rbx_1 = 0
                                    int64_t r12_1 = sx.q(var_238.w)
                                    int32_t r11_1 = -1
                                    
                                    if (r12_1 s<= 0)
                                        goto label_142ba5412
                                    
                                    int64_t rsi_1 = var_238:8.q
                                    
                                    do
                                        int32_t r8_2 = sx.d(*(zmm1_1:8.q + (rbx_1 << 1)))
                                        int32_t rdi_2 = r11_1
                                        
                                        if (r8_2 s> r9_2)
                                            int32_t rdx_4 = r9_2
                                            
                                            if ((*(var_280 + 4) & 3) == 0)
                                                if (r9_2 s<= r8_2)
                                                    int32_t* rcx_11 = rsi_1 + 4 + (sx.q(r9_2) << 3)
                                                    
                                                    do
                                                        int32_t rax_11
                                                        
                                                        if (r11_1 s>= 0)
                                                            rax_11 = *rcx_11
                                                        
                                                        if (r11_1 s< 0 || rax_11 s< r10_1)
                                                            r10_1 = *rcx_11
                                                            r11_1 = rdx_4
                                                            
                                                            if (r15_1 s>= r10_1)
                                                                r15_1 = r10_1
                                                        else if (r14_1 s<= rax_11)
                                                            r14_1 = rax_11
                                                        
                                                        rdx_4 += 1
                                                        rcx_11 = &rcx_11[2]
                                                    while (rdx_4 s<= r8_2)
                                                    
                                                    goto label_142ba4f82
                                                
                                                rdx_3 = var_2c4_1
                                            else if (r9_2 s> r8_2)
                                                rdx_3 = var_2c4_1
                                            else
                                                int32_t* rcx_13 = rsi_1 + 4 + (sx.q(r9_2) << 3)
                                                
                                                do
                                                    int32_t rax_13
                                                    
                                                    if (r11_1 s>= 0)
                                                        rax_13 = *rcx_13
                                                    
                                                    if (r11_1 s< 0 || rax_13 s> r10_1)
                                                        r10_1 = *rcx_13
                                                        r11_1 = rdx_4
                                                        
                                                        if (r14_1 s<= r10_1)
                                                            r14_1 = r10_1
                                                    else if (r15_1 s>= rax_13)
                                                        r15_1 = rax_13
                                                    
                                                    rdx_4 += 1
                                                    rcx_13 = &rcx_13[2]
                                                while (rdx_4 s<= r8_2)
                                                
                                            label_142ba4f82:
                                                var_2b4_1 = r14_1
                                                var_2b0_1 = r15_1
                                                
                                                if (r11_1 == rdi_2)
                                                    rdx_3 = var_2c4_1
                                                else
                                                    rdx_3 = r9_2
                                                    var_2ac_1 = r8_2
                                                    var_2c4_1 = rdx_3
                                        
                                        rbx_1 += 1
                                        r9_2 = r8_2 + 1
                                    while (rbx_1 s< r12_1)
                                    
                                    rsi = zx.q(var_2c6_1)
                                    
                                    if (r11_1 s< 0)
                                        goto label_142ba5409
                                    
                                    int32_t r14_2 = -1
                                    int64_t r13_4 = zmm1_1.q
                                    int32_t rcx_14 = r11_1
                                    int64_t r12_2 = sx.q(var_2ac_1)
                                    int64_t rdi_3 = var_238:8.q
                                    int64_t rbx_2 = sx.q(r11_1)
                                    int64_t r9_3 = rbx_2
                                    int32_t var_2c0_1 = r11_1
                                    int32_t rsi_2 = *(var_238:8.q + (rbx_2 << 3))
                                    
                                    if ((*(rbx_2 + r13_4) & 3) == 1)
                                        r14_2 = r11_1
                                    
                                    int32_t r15_2 = r14_2
                                    
                                    do
                                        if (rcx_14 s<= rdx_3)
                                            rcx_14 = var_2ac_1
                                            r9_3 = r12_2
                                        else
                                            rcx_14 -= 1
                                            r9_3 -= 1
                                        
                                        int32_t rdx_5 = *(rdi_3 + (r9_3 << 3) + 4)
                                        uint64_t rax_17 = zx.q(rdx_5 - r10_1)
                                        
                                        if (rdx_5 - r10_1 s< 0)
                                            rax_17 = zx.q(r10_1 - rdx_5)
                                        
                                        if (rax_17.d s> 5)
                                            int32_t r8_3 = *(rdi_3 + (r9_3 << 3))
                                            int32_t rdx_7 = r8_3 - rsi_2
                                            
                                            if (r8_3 - rsi_2 s< 0)
                                                rdx_7 = rsi_2 - r8_3
                                            
                                            if (rdx_7 s<= (rax_17 * 5).d << 2)
                                                break
                                        
                                        var_2c0_1 = rcx_14
                                        
                                        if ((*(r9_3 + r13_4) & 3) == 1)
                                            r14_2 = rcx_14
                                            
                                            if (r15_2 s< 0)
                                                r15_2 = rcx_14
                                        
                                        rdx_3 = var_2c4_1
                                    while (rcx_14 != r11_1)
                                    
                                    int64_t rax_22 = sx.q(var_2c4_1)
                                    int32_t rdi_4 = r11_1
                                    int64_t rdx_9 = rbx_2
                                    int64_t r9_4 = rax_22
                                    int64_t rbx_4 = var_238:8.q
                                    int32_t r12_3 = r11_1
                                    int32_t var_2a4_1 = r15_2
                                    
                                    do
                                        if (rdx_9 s>= r12_2)
                                            rdi_4 = rax_22.d
                                            rdx_9 = r9_4
                                        else
                                            rdi_4 += 1
                                            rdx_9 += 1
                                        
                                        int32_t rcx_15 = *(rbx_4 + (rdx_9 << 3) + 4)
                                        uint64_t rax_24 = zx.q(rcx_15 - r10_1)
                                        
                                        if (rcx_15 - r10_1 s< 0)
                                            rax_24 = zx.q(r10_1 - rcx_15)
                                        
                                        if (rax_24.d s> 5)
                                            int32_t r8_4 = *(rbx_4 + (rdx_9 << 3))
                                            int32_t rcx_17 = r8_4 - rsi_2
                                            
                                            if (r8_4 - rsi_2 s< 0)
                                                rcx_17 = rsi_2 - r8_4
                                            
                                            if (rcx_17 s<= (rax_24 * 5).d << 2)
                                                break
                                        
                                        r12_3 = rdi_4
                                        
                                        if ((*(rdx_9 + r13_4) & 3) == 1)
                                            var_2a4_1 = rdi_4
                                            
                                            if (r14_2 s< 0)
                                                r14_2 = rdi_4
                                        
                                        rax_22 = zx.q(var_2c4_1)
                                    while (rdi_4 != r11_1)
                                    
                                    int64_t rbx_5 = rbx_2
                                    int32_t var_2a8_1 = r14_2
                                    int16_t r8_5 = *(var_280 + 4)
                                    var_2c6_1.w = r8_5
                                    int32_t r11_3
                                    
                                    if ((r8_5.b & 0x10) == 0)
                                        rsi = zx.q(var_2a4_1)
                                        r11_3 = var_2c0_1
                                    else
                                        int64_t rcx_19 = var_238:8.q
                                        int64_t rdi_5 = sx.q(r12_3)
                                        int32_t r13_5 = arg1[7].d
                                        int32_t r8_6 = *(rcx_19 + (rdi_5 << 3))
                                        int64_t rdx_11 = sx.q(var_2c0_1)
                                        uint32_t r12_5 = r13_5 u/ 0x19
                                        int64_t var_288_1
                                        var_288_1.d = r12_5
                                        int32_t rcx_20 = *(rcx_19 + (rdx_11 << 3))
                                        int32_t rcx_21
                                        
                                        if (r8_6 - rcx_20 s>= 0)
                                            rcx_21 = r8_6 - rcx_20
                                        else
                                            rcx_21 = rcx_20 - r8_6
                                        
                                        if (rcx_21 s>= r12_5
                                            || r12_3 - rdx_11.d + 2 s> var_2ac_1 - var_2c4_1)
                                        label_142ba538f:
                                            rsi = zx.q(var_2a4_1)
                                            r13_4 = zmm1_1.q
                                            r11_3 = var_2c0_1
                                        else
                                            int64_t rdx_12 = rbx_5
                                            r14_2 = 0
                                            int32_t var_28c_1 = 0
                                            int32_t rax_35 = r11_1
                                            int32_t rcx_25
                                            
                                            do
                                                if (rbx_5 s<= r9_4)
                                                    rax_35 = var_2ac_1
                                                    rbx_5 = r12_2
                                                else
                                                    rax_35 -= 1
                                                    rbx_5 -= 1
                                                
                                                rcx_25 = *(var_238:8.q + (rbx_5 << 3))
                                                
                                                if (rcx_25 != rsi_2)
                                                    break
                                            while (rbx_5 != rdx_12)
                                            
                                            int32_t r12_7 = var_288_1.d
                                            
                                            if (rax_35 == r11_1)
                                                goto label_142ba5456
                                            
                                            int32_t rdx_13 = var_2c0_1
                                            var_288_1.d = r12_3
                                            int32_t r9_5 = r12_3
                                            int64_t r15_3
                                            r15_3.b = rcx_25 s< rsi_2
                                            int64_t rsi_3 = rdi_5
                                            r11_1.b = 0
                                            
                                            while (true)
                                                int64_t r8_10 = zmm1_1.q
                                                
                                                if (r11_1.b == 0)
                                                    r14_2 = -1
                                                    var_288_1.d = r9_5
                                                    rsi_3 = rdi_5
                                                    r11_1.b = 1
                                                    
                                                    if ((*(rdi_5 + r8_10) & 3) == 1)
                                                        r14_2 = r9_5
                                                    
                                                    var_28c_1 = r14_2
                                                
                                                if (rdi_5 s>= r12_2)
                                                    int64_t rcx_26 = sx.q(var_2c4_1)
                                                    r9_5 = rcx_26.d
                                                    rdi_5 = rcx_26
                                                else
                                                    r9_5 += 1
                                                    rdi_5 += 1
                                                
                                                int32_t rbx_6 = *(var_238:8.q + (rsi_3 << 3) + 4)
                                                int32_t rax_39 = r10_1 - rbx_6
                                                
                                                if (r10_1 - rbx_6 s< 0)
                                                    rax_39 = rbx_6 - r10_1
                                                
                                                if (rax_39 s<= r13_5 u>> 2)
                                                    int64_t rdx_14 = var_238:8.q
                                                    int32_t rcx_27 = *(rdx_14 + (rdi_5 << 3) + 4)
                                                    uint64_t rbx_7
                                                    
                                                    if (rcx_27 - rbx_6 s>= 0)
                                                        rbx_7 = zx.q(rcx_27 - rbx_6)
                                                    else
                                                        rbx_7 = zx.q(rbx_6 - rcx_27)
                                                    
                                                    if (rbx_7.d s<= 5)
                                                        goto label_142ba528f
                                                    
                                                    int32_t rdx_15 = *(rdx_14 + (rdi_5 << 3))
                                                    int32_t rcx_28 = *(var_238:8.q + (rsi_3 << 3))
                                                    int32_t rcx_29
                                                    
                                                    if (rdx_15 - rcx_28 s>= 0)
                                                        rcx_29 = rdx_15 - rcx_28
                                                    else
                                                        rcx_29 = rcx_28 - rdx_15
                                                    
                                                    if (rcx_29 s> (rbx_7 * 5).d << 2)
                                                        rdx_14 = var_238:8.q
                                                    label_142ba528f:
                                                        
                                                        if ((*(rdi_5 + r8_10) & 3) == 1)
                                                            var_28c_1 = r9_5
                                                            
                                                            if (r14_2 s< 0)
                                                                r14_2 = r9_5
                                                        
                                                        int32_t rax_49 = *(rdx_14 + (rsi_3 << 3))
                                                        int32_t rdx_16 = *(rdx_14 + (rdi_5 << 3))
                                                        r8_10.b = rax_49 s< rdx_16
                                                        int32_t rax_50
                                                        
                                                        if (rdx_16 - rax_49 s>= 0)
                                                            rax_50 = rdx_16 - rax_49
                                                        else
                                                            rax_50 = rax_49 - rdx_16
                                                        
                                                        if (r8_10.b == r15_3.b && rax_50 s>= r12_7)
                                                            int64_t rcx_32 = var_238:8.q
                                                            int64_t r15_4 = sx.q(var_288_1.d)
                                                            int32_t* r8_11 = rcx_32 + (r15_4 << 3)
                                                            r10_1 = r8_11[1]
                                                            rsi = zx.q(var_28c_1)
                                                            r13_4 = zmm1_1.q
                                                            int32_t* r11_2 =
                                                                rcx_32 + (sx.q(rdi_4) << 3)
                                                            
                                                            while (true)
                                                                if (rdi_5 s>= r12_2)
                                                                    int64_t rdx_17 = sx.q(var_2c4_1)
                                                                    r9_5 = rdx_17.d
                                                                    rdi_5 = rdx_17
                                                                else
                                                                    r9_5 += 1
                                                                    rdi_5 += 1
                                                                
                                                                int32_t rcx_33 =
                                                                    *(rcx_32 + (rdi_5 << 3) + 4)
                                                                int32_t rax_53 = rcx_33 - r10_1
                                                                
                                                                if (rcx_33 - r10_1 s< 0)
                                                                    rax_53 = r10_1 - rcx_33
                                                                
                                                                if (rax_53 s> 5)
                                                                    int32_t rdx_18 = *r11_2
                                                                    int32_t rcx_34 = *r8_11
                                                                    int32_t rcx_35
                                                                    
                                                                    if (rdx_18 - rcx_34 s>= 0)
                                                                        rcx_35 = rdx_18 - rcx_34
                                                                    else
                                                                        rcx_35 = rcx_34 - rdx_18
                                                                    
                                                                    if (rcx_35 s<= (rbx_7 * 5).d << 2)
                                                                        bool cond:8_1 = r9_5 s> var_2c4_1
                                                                        int32_t rax_60 = r9_5 - 1
                                                                        r9_5 = var_2ac_1
                                                                        
                                                                        if (cond:8_1)
                                                                            r9_5 = rax_60
                                                                        
                                                                        break
                                                                
                                                                if ((*(rdi_5 + r13_4) & 3) == 1
                                                                        && r14_2 s< 0)
                                                                    r14_2 = r9_5
                                                                
                                                                rsi = zx.q(r9_5)
                                                                
                                                                if (r9_5 == var_2c0_1)
                                                                    break
                                                                
                                                                rcx_32 = var_238:8.q
                                                            
                                                            r11_3 = r15_4.d
                                                            r12_3 = r9_5
                                                            break
                                                    else
                                                        r11_1.b = 0
                                                    
                                                    rdx_13 = var_2c0_1
                                                else
                                                    r11_1.b = 0
                                                
                                                if (r9_5 == rdx_13)
                                                    r14_2 = var_2a8_1
                                                    goto label_142ba538f
                                        
                                        r8_5 = var_2c6_1.w
                                    
                                    int32_t rcx_38
                                    
                                    if (r14_2 s>= 0 && rsi.d s>= 0)
                                        int64_t rcx_36 = var_238:8.q
                                        int32_t rdx_19 = *(rcx_36 + (sx.q(rsi.d) << 3))
                                        int32_t rcx_37 = *(rcx_36 + (sx.q(r14_2) << 3))
                                        
                                        if (rdx_19 - rcx_37 s>= 0)
                                            rcx_38 = rdx_19 - rcx_37
                                        else
                                            rcx_38 = rcx_37 - rdx_19
                                    
                                    if (r14_2 s< 0 || rsi.d s< 0 || rcx_38 s<= rcx u/ 0xe)
                                        if ((*(sx.q(r11_3) + r13_4) & 3) != 1
                                                || (*(sx.q(r12_3) + r13_4) & 3) != 1)
                                            rsi.b = 1
                                        else
                                            rsi.b = 0
                                        
                                        if (rsi.b == 0 || (r8_5.b & 4) == 0)
                                            goto label_142ba5409
                                        
                                    label_142ba5456:
                                        r14_1 = var_2b4_1
                                        r12 = 0
                                        r15_1 = var_2b0_1
                                        rdi_1 = var_2a0_1
                                        rbx = var_280
                                        r13_2 = var_29c_1
                                        rax_5 = var_2bc
                                        rsi = zx.q(var_2c8_1)
                                    else
                                        rsi.b = 0
                                    label_142ba5409:
                                        r13_2 = var_29c_1
                                        rdi_1 = var_2a0_1
                                    label_142ba5412:
                                        rbx = var_280
                                        r12 = 0
                                        r14_1 = var_2b4_1
                                        r15_1 = var_2b0_1
                                        rax_5 = var_2bc
                                        
                                        if ((*(rbx + 4) & 1) == 0)
                                            if (r10_1 s>= rdi_1)
                                                rsi = zx.q(var_2c8_1)
                                            else
                                                rdi_1 = r10_1
                                                var_2a0_1 = r10_1
                                                var_2c8_1 = rsi.b
                                        else if (r10_1 s<= rdi_1)
                                            rsi = zx.q(var_2c8_1)
                                        else
                                            rdi_1 = r10_1
                                            var_2a0_1 = r10_1
                                            var_2c8_1 = rsi.b
                            
                            r13_2 += 1
                            var_29c_1 = r13_2
                        while (r13_2 u< var_278)
                        
                        rcx_6 = rax_3
                    
                    if (rdi_1 + 0x7fffffff u> 0xfffffffd)
                        r13_1 = var_290_1
                        r11_5 = var_298_1
                    else if (rsi.b == 0)
                        uint64_t r13_7 = zx.q(var_290_1)
                        var_1e8[r13_7] = rdi_1
                        r13_1 = r13_7.d + 1
                        var_290_1 = r13_1
                        r11_5 = var_298_1
                    else
                        uint64_t r11_4 = zx.q(var_298_1)
                        r13_1 = var_290_1
                        var_118[r11_4] = rdi_1
                        r11_5 = r11_4.d + 1
                        var_298_1 = r11_5
                
                j = *rcx_6
                r10 = arg1
            while (j != 0)
            
            if (r13_1 != 0 || r11_5 != 0)
                rdi = 1
                int32_t r10_2 = 1
                
                if (r11_5 u> 1)
                    do
                        uint64_t rdx_20 = zx.q(r10_2)
                        
                        if (r10_2 != 0)
                            void* rcx_41 = &var_118[zx.q(r10_2)]
                            
                            do
                                int32_t r8_12 = *rcx_41
                                rdx_20 = zx.q(rdx_20.d - 1)
                                int32_t r9_6 = var_118[rdx_20]
                                
                                if (r8_12 s>= r9_6)
                                    break
                                
                                *rcx_41 = r9_6
                                rcx_41 -= 4
                                var_118[rdx_20] = r8_12
                            while (rdx_20.d != 0)
                        
                        r10_2 += 1
                    while (r10_2 u< r11_5)
                
                int32_t r10_3 = 1
                
                if (r13_1 u> 1)
                    do
                        uint64_t rdx_21 = zx.q(r10_3)
                        
                        if (r10_3 != 0)
                            void* rcx_42 = &var_1e8[zx.q(r10_3)]
                            
                            do
                                int32_t r8_13 = *rcx_42
                                rdx_21 = zx.q(rdx_21.d - 1)
                                int32_t r9_7 = var_1e8[rdx_21]
                                
                                if (r8_13 s>= r9_7)
                                    break
                                
                                *rcx_42 = r9_7
                                rcx_42 -= 4
                                var_1e8[rdx_21] = r8_13
                            while (rdx_21.d != 0)
                        
                        r10_3 += 1
                    while (r10_3 u< r13_1)
                
                r9 = var_270
                uint64_t rcx_43 = zx.q(*(r9 + 0xd8))
                *(r9 + 0xd8) = (rcx_43 + 1).d
                void* r8_16 = r9 + ((rcx_43 * 9 + 0x37) << 2)
                
                if (r13_1 != 0)
                    uint64_t rax_76 = zx.q(r13_1) u>> 1
                    
                    if (r11_5 != 0)
                        *r8_16 = var_1e8[rax_76]
                        *(r8_16 + 0xc) = var_118[zx.q(r11_5) u>> 1]
                    else
                        int32_t rcx_45 = var_1e8[rax_76]
                        *(r8_16 + 0xc) = rcx_45
                        *r8_16 = rcx_45
                else
                    int32_t rcx_44 = var_118[zx.q(r11_5) u>> 1]
                    *(r8_16 + 0xc) = rcx_44
                    *r8_16 = rcx_44
                
                int32_t rdx_22 = *r8_16
                
                if (*(r8_16 + 0xc) != rdx_22)
                    int32_t r9_8 = *(r8_16 + 0xc)
                    int32_t rcx_46
                    rcx_46.b = (*(rbx + 4) & 3) != 0
                    int32_t rax_81
                    rax_81.b = r9_8 s> rdx_22
                    
                    if (rax_81 != rcx_46)
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(r9_8 + rdx_22)
                        int32_t rax_85 = (temp4_1 - temp3_1) s>> 1
                        *(r8_16 + 0xc) = rax_85
                        *r8_16 = rax_85
                    
                    r9 = var_270
                
                *(r8_16 + 0x20) = 0
                *(r8_16 + 0x18) = r14_1
                int32_t rax_86 = 0
                *(r8_16 + 0x1c) = r15_1
                
                if ((*(rbx + 4) & 1) != 0)
                    rax_86 = 2
                
                *(r8_16 + 0x20) = rax_86
                
                if ((*(rbx + 4) & 2) != 0)
                    *(r8_16 + 0x20) |= 4
                
                if ((*(rbx + 4) & 4) != 0)
                    *(r8_16 + 0x20) |= 8
                
                if ((*(rbx + 4) & 8) != 0)
                    *(r8_16 + 0x20) |= 0x10
                
                r10 = arg1
            else
                r9 = var_270
                rdi = 1
        
        i = *(rbx + 8)
        rbx += 8
        var_280 = rbx
    while (i != 0x1469)

int32_t i_3 = *(r9 + 0xd8)

if (i_3 != 0)
    void** rax_87 = &var_238
    uint64_t i_2 = zx.q(i_3)
    void* rcx_47 = r9 + 0xdc
    uint64_t i_1
    
    do
        *rax_87 = rcx_47
        rax_87 = &rax_87[1]
        rcx_47 += 0x24
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    
    if (i_3 u> 1)
        do
            uint64_t r8_17 = zx.q(rdi)
            
            if (rdi != 0)
                void* rdx_24 = &var_238 + (zx.q(rdi) << 3)
                
                do
                    r8_17 = zx.q(r8_17.d - 1)
                    int32_t* rax_89 = *(&var_238 + (r8_17 << 3))
                    int32_t r9_9
                    
                    if ((rax_89[8].b & 6) == 0)
                        r9_9 = rax_89[3]
                    else
                        r9_9 = *rax_89
                    
                    int32_t* rcx_48 = *rdx_24
                    int32_t r10_4
                    
                    if ((rcx_48[8].b & 6) == 0)
                        r10_4 = rcx_48[3]
                    else
                        r10_4 = *rcx_48
                    
                    if (r10_4 s>= r9_9)
                        break
                    
                    *rdx_24 = rax_89
                    rdx_24 -= 8
                    *(&var_238 + (r8_17 << 3)) = rcx_48
                while (r8_17.d != 0)
            
            rdi += 1
        while (rdi u< i_3)
        
        r9 = var_270
    
    i = i_3 - 1
    
    if (i != 0)
        uint64_t r8_18
        
        do
            int32_t* rcx_49 = *(&var_238 + (zx.q(r12) << 3))
            
            if ((rcx_49[8].b & 6) != 0)
                rcx_49 = &rcx_49[3]
            
            r8_18 = zx.q(r12 + 1)
            void* rdx_25 = *(&var_238 + (r8_18 << 3))
            
            if ((*(rdx_25 + 0x20) & 6) != 0)
                rdx_25 += 0xc
            
            int32_t rax_91 = *rdx_25
            
            if (*rcx_49 s> rax_91)
                *rcx_49 = rax_91
            
            r12 = r8_18.d
            i = *(r9 + 0xd8) - 1
        while (r8_18.d u< i)

__security_check_cookie(rax_1 ^ &var_2e8)
return i
