// 函数: sub_142a51110
// 地址: 0x142a51110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = arg5
int32_t var_b0 = 0
int32_t var_98 = 0
int16_t var_7c = 0x28
int16_t var_84 = 0x5b
int16_t var_78 = 0x29
int16_t var_80 = 0x5d
char var_b7 = 1
bool var_b8 = true
char i = 0
int32_t var_88 = 0

if (r14 != 0 && *r14 s<= 0)
    if (arg4 s>= 0 && (arg4 s<= 0 || arg3 != 0))
        int32_t var_9c = 0
        char** rax = sub_142a641c0("icudt64l-lang", arg2, &var_9c)
        char** rax_1 = sub_142a62230(rax, "localeDisplayPattern", nullptr, &var_9c)
        void* rax_2 = sub_142a63c50(rax_1, "separator", &var_b0, &var_9c)
        void* rax_3 = sub_142a63c50(rax_1, "pattern", &var_98, &var_9c)
        void* var_60 = rax_3
        void* r13 = rax_3
        
        if (rax_1 != 0)
            sub_142a5f860(rax_1)
        
        if (rax != 0)
            sub_142a5f860(rax)
        
        void* rbx_1 = u"{0}, {1}"
        
        if (var_b0 != 0)
            rbx_1 = rax_2
        
        void* rax_4 = sub_142a8c3e0(rbx_1, &data_1436140a0)
        int64_t rax_5 = sub_142a8c3e0(rbx_1, &data_1436140a8)
        
        if (rax_4 != 0 && rax_5 != 0 && rax_5 u>= rax_4)
            var_b0 = ((rax_5 - (rax_4 + 6)) s>> 1).d
            int32_t rax_8 = var_98
            int32_t rax_9
            
            if (rax_8 != 0 && rax_8 == 9)
                rax_9 = sub_142a8c300(r13, u"{0} ({1})", rax_8)
            
            uint64_t var_90_1
            int32_t var_68
            uint64_t rsi_3
            
            if (rax_8 == 0 || (rax_8 == 9 && rax_9 == 0))
                r13 = u"{0} ({1})"
                var_98 = 9
                rsi_3 = 0
                var_60 = u"{0} ({1})"
                var_90_1 = 0
                var_68 = 5
            label_142a518ad:
                int32_t r12_1
                int16_t* r15_3
                
                do
                    int16_t* rdx_1 = arg3
                    int32_t r8_4 = arg4
                    int64_t* rbx_5 = nullptr
                    int32_t var_ac_1 = 0
                    int16_t* rdi_2 = rdx_1
                    int32_t var_74_1 = 0
                    int32_t var_70_1 = 0
                    int32_t var_a0_1 = 0
                    int32_t var_a8_1 = 0
                    int64_t* var_58_1 = nullptr
                    int32_t var_a4_1
                    int32_t var_94_1
                    int32_t rax_15
                    int32_t rcx_13
                    
                    if (rsi_3.d == 0)
                        rcx_13 = 0
                        r12_1 = 0
                        rax_15 = 0
                        var_a4_1 = 0
                        var_94_1 = 0
                    else if (r8_4 s< rsi_3.d)
                        rcx_13 = 0
                        var_ac_1 = rsi_3.d
                        rax_15 = 0
                        var_a4_1 = 0
                        var_94_1 = 0
                        r12_1 = rsi_3.d
                    else
                        int64_t rcx_12 = 0
                        var_ac_1 = 0
                        int64_t rdx = sx.q(rsi_3.d)
                        
                        if (rsi_3.d s> 0)
                            var_ac_1 = rdx.d
                            
                            do
                                int16_t rax_14 = *(r13 + (rcx_12 << 1))
                                rcx_12 += 1
                                *rdi_2 = rax_14
                                rdi_2 = &rdi_2[1]
                            while (rcx_12 s< rdx)
                        
                        rdx_1 = arg3
                        rcx_13 = 0
                        rax_15 = 0
                        var_a4_1 = 0
                        var_94_1 = 0
                        r12_1 = rsi_3.d
                    
                    while (true)
                        r13.b = 0
                        int32_t r15_2 = r8_4 - r12_1
                        int32_t rsi_4 = r15_2
                        
                        if (r15_2 s> 0)
                            rdi_2 = &rdx_1[sx.q(r12_1)]
                            rax_15 = var_94_1
                        else
                            rsi_4 = 0
                        
                        if (rcx_13 == var_88)
                            if (var_b7 != 0)
                                var_70_1 = r12_1
                                int32_t rax_17 = sub_142a50240(arg1, arg2, rdi_2, rsi_4, 
                                    sub_142a4d500, "Languages", r14)
                                r12_1 += rax_17
                                var_74_1 = rax_17
                                rax_17.b = rax_17 s> 0
                                var_b7 = rax_17.b
                            
                            r15_3 = arg3
                            r13.b = 1
                            goto label_142a51491
                        
                        bool rcx_15 = var_b8
                        int32_t rax_18
                        int32_t rdx_3
                        
                        if (rcx_15 != 0)
                            var_94_1 = rax_15 + 1
                            char* var_d0_2
                            int32_t* var_c8_2
                            int32_t var_b4
                            uint64_t (* rax_35)(char* arg1, int64_t arg2, int32_t arg3, 
                                int32_t* arg4)
                            int32_t rdx_10
                            
                            if (rax_15 == 0)
                                var_c8_2 = r14
                                var_d0_2 = "Scripts"
                                rax_35 = sub_142a4d690
                                var_a8_1 = r12_1
                            label_142a516fc:
                                int32_t rax_36 = sub_142a50240(arg1, arg2, rdi_2, rsi_4, rax_35, 
                                    var_d0_2, var_c8_2)
                                r15_3 = arg3
                                rdx_10 = rax_36
                                var_b4 = rax_36
                            label_142a5170a:
                                
                                if (rdx_10 s<= 0)
                                label_142a51491:
                                    rcx_15 = var_b8
                                    rdx_3 = var_a8_1
                                    rax_18 = var_a0_1
                                else
                                    int32_t r9_10 = var_b0
                                    
                                    if (rdx_10 + r9_10 s<= rsi_4)
                                        int64_t rax_38 = sx.q(rdx_10)
                                        int64_t r8_11 = 0
                                        uint64_t r10_2 = ((rax_38 << 1) + 1) u>> 1
                                        
                                        if (rdi_2 u> &rdi_2[rax_38])
                                            r10_2 = 0
                                        
                                        if (r10_2 != 0)
                                            do
                                                int16_t rax_39 = *rdi_2
                                                
                                                if (rax_39 == var_7c)
                                                    *rdi_2 = var_84
                                                else if (rax_39 == var_78)
                                                    *rdi_2 = var_80
                                                
                                                rdi_2 = &rdi_2[1]
                                                r8_11 += 1
                                            while (r8_11 u< r10_2)
                                            
                                            r9_10 = var_b0
                                            rdx_10 = var_b4
                                            rbx_5 = var_58_1
                                            r14 = arg5
                                            r15_3 = arg3
                                        
                                        int32_t r8_12 = 0
                                        
                                        if (r9_10 s> 0)
                                            int16_t* rcx_31 = rax_4 + 6
                                            
                                            do
                                                r8_12 += 1
                                                *rdi_2 = *rcx_31
                                                rcx_31 = &rcx_31[1]
                                                r9_10 = var_b0
                                                rdi_2 = &rdi_2[1]
                                            while (r8_12 s< r9_10)
                                            
                                            rdx_10 = var_b4
                                    
                                    rcx_15 = var_b8
                                    r12_1 += rdx_10 + r9_10
                                    rdx_3 = var_a8_1
                                    rax_18 = var_a0_1
                            else
                                if (rax_15 == 1)
                                    var_c8_2 = r14
                                    var_d0_2 = "Countries"
                                    rax_35 = sub_142a4cc70
                                    goto label_142a516fc
                                
                                if (rax_15 == 2)
                                    var_c8_2 = r14
                                    rax_35 = sub_142a4d730
                                    var_d0_2 = "Variants"
                                    goto label_142a516fc
                                
                                if (rax_15 == 3)
                                    int64_t* rax_24 = sub_142a4da70(arg1, r14)
                                    
                                    if (rbx_5 != 0)
                                        sub_142a92960(rbx_5)
                                    
                                    rbx_5 = rax_24
                                    r14 = arg5
                                    var_58_1 = rbx_5
                                
                                char* rax_25 = sub_142a92a50(rbx_5, &var_b4, r14)
                                
                                if (rax_25 != 0)
                                    int32_t rax_28 = sub_142a510a0(rax_25, arg2, rdi_2, rsi_4, arg5)
                                    var_b4 = rax_28
                                    
                                    if (rax_28 != 0)
                                        if (rax_28 s< rsi_4)
                                            rdi_2[sx.q(rax_28)] = 0x3d
                                            rax_28 = var_b4
                                        
                                        rsi_4 -= rax_28 + 1
                                        var_b4 = rax_28 + 1
                                        
                                        if (rsi_4 s> 0)
                                            rdi_2 = &rdi_2[sx.q(rax_28 + 1)]
                                        else
                                            rsi_4 = 0
                                    
                                    if (*arg5 == 0xf)
                                        *arg5 = 0
                                    
                                    int32_t* var_d8_1
                                    var_d8_1.d = rsi_4
                                    int32_t rax_33 =
                                        sub_142a50e20(arg1, rax_25, arg2, rdi_2, var_d8_1.d, arg5)
                                    int32_t rdx_9 = var_b4
                                    
                                    if (rdx_9 == 0)
                                        r15_3 = arg3
                                        rdx_10 = rdx_9 + rax_33
                                        r14 = arg5
                                        var_b4 = rdx_10
                                    else
                                        if (rax_33 == 0)
                                            rdx_9 -= 1
                                        
                                        rsi_4 = r15_2
                                        r15_3 = arg3
                                        
                                        if (r15_2 s> 0)
                                            r14 = arg5
                                            rdx_10 = rdx_9 + rax_33
                                            var_b4 = rdx_10
                                            rdi_2 = &r15_3[sx.q(r12_1)]
                                        else
                                            r14 = arg5
                                            rsi_4 = 0
                                            rdx_10 = rdx_9 + rax_33
                                            var_b4 = rdx_10
                                    
                                    goto label_142a5170a
                                
                                rdx_3 = var_a8_1
                                var_b4 = 0
                                r13.b = 1
                                
                                if (r12_1 != rdx_3)
                                    r12_1 -= var_b0
                                
                                r14 = arg5
                                r15_3 = arg3
                                rax_18 = r12_1 - rdx_3
                                var_a0_1 = rax_18
                                rcx_15 = rax_18 s> 0
                                var_b8 = rcx_15
                        else
                            r15_3 = arg3
                            r13.b = 1
                            rdx_3 = var_a8_1
                            rax_18 = var_a0_1
                        
                        if (*r14 == 0xf)
                            *r14 = 0
                        
                        if (r13.b == 0)
                            rcx_13 = var_a4_1
                        else
                            r13 = zx.q(var_b7)
                            
                            if (r13.b != 0 && rcx_15 != 0)
                                int32_t rax_19 = var_98
                                int32_t r9_5 = var_ac_1 + 3
                                var_ac_1 = r9_5
                                
                                if (var_a4_1 == 0)
                                    rax_19 = var_68
                                
                                uint64_t j_1 = zx.q(rax_19 - r9_5)
                                int32_t r8_6 = j_1.d + r12_1
                                
                                if (r8_6 s>= arg4)
                                    var_ac_1 = rax_19
                                label_142a517d3:
                                    r12_1 = r8_6
                                    rcx_13 = var_a4_1 + 1
                                    var_a4_1 = rcx_13
                                else
                                    rdi_2 = &r15_3[sx.q(r12_1)]
                                    
                                    if (j_1.d s<= 0)
                                        goto label_142a517d3
                                    
                                    var_ac_1 = r9_5 + j_1.d
                                    void* rcx_17 = var_60 + (sx.q(r9_5) << 1)
                                    uint64_t j
                                    
                                    do
                                        int16_t rax_22 = *rcx_17
                                        rcx_17 += 2
                                        *rdi_2 = rax_22
                                        rdi_2 = &rdi_2[1]
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                                    r12_1 = r8_6
                                    rcx_13 = var_a4_1 + 1
                                    var_a4_1 = rcx_13
                            else if (var_a4_1 == 0)
                                rcx_13 = var_a4_1 + 1
                                var_90_1 = 0
                                r12_1 = 0
                                var_a4_1 = rcx_13
                            else if (r12_1 s<= 0)
                                rcx_13 = var_a4_1 + 1
                                var_a4_1 = rcx_13
                            else
                                r12_1 = rax_18
                                
                                if (r13.b != 0)
                                    r12_1 = var_74_1
                                
                                if (arg3 == 0)
                                    goto label_142a5184e
                                
                                int32_t rax_42 = var_90_1.d
                                
                                if (rax_42 == 0)
                                    goto label_142a5184e
                                
                                if (rax_42 + r12_1 s> arg4)
                                    var_90_1.d = 0
                                    i = 1
                                label_142a5184e:
                                    r15_3 = arg3
                                    rcx_13 = var_a4_1 + 1
                                    var_a4_1 = rcx_13
                                else
                                    int32_t rax_44 = rdx_3
                                    
                                    if (r13.b != 0)
                                        rax_44 = var_70_1
                                    
                                    sub_142a8bcd0(arg3, &arg3[sx.q(rax_44)], r12_1)
                                    r15_3 = arg3
                                    rcx_13 = var_a4_1 + 1
                                    var_a4_1 = rcx_13
                        
                        rax_15 = var_94_1
                        
                        if (rcx_13 s>= 2)
                            break
                        
                        rdx_1 = arg3
                        r8_4 = arg4
                    
                    if (rbx_5 != 0)
                        sub_142a92960(rbx_5)
                    
                    rsi_3 = var_90_1
                    r13 = var_60
                while (i != 0)
                
                return sub_142a8c440(r15_3, arg4, r12_1, r14)
            
            int64_t rax_10 = sub_142a8c3e0(r13, &data_1436140a0)
            int64_t rax_11 = sub_142a8c3e0(r13, &data_1436140a8)
            
            if (rax_10 != 0 && rax_11 != 0)
                rsi_3 = (rax_10 - r13) s>> 1
                int64_t rbx_4 = (rax_11 - r13) s>> 1
                var_90_1 = rsi_3
                var_68.q = rbx_4
                
                if (rbx_4.d s< rsi_3.d)
                    int32_t rax_12 = rsi_3.d
                    var_88 = 1
                    rsi_3 = zx.q(rbx_4.d)
                    var_68 = rax_12
                    var_90_1 = rsi_3
                
                if (sub_142a8c220(r13, 0xff08) != 0)
                    var_7c = 0xff08
                    var_84 = 0xff3b
                    var_78 = 0xff09
                    var_80 = 0xff3d
                
                goto label_142a518ad
        
        *r14 = 1
        return 0
    
    *r14 = 1

return 0
