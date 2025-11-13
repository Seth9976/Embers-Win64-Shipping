// 函数: sub_140a296a0
// 地址: 0x140a296a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x10188)
void var_101c8
int64_t rax_1 = __security_cookie ^ &var_101c8
int32_t r14 = arg8
void* r15_1 = sx.q(*arg4) + arg2
int32_t var_10098 = arg3.d
int32_t* r8 = arg1
int32_t var_100b0 = arg2.d
void* rdi = arg2
void* rcx_1 = &arg3[sx.q(arg5)]
int32_t* var_10140 = arg2
*arg4 = 0
int32_t r12 = arg2.d
void* var_10118 = arg2
void* r13 = arg2
void* rax_2 = rcx_1 - 5

if (r14 != 2)
    rax_2 = rcx_1

char* var_10110 = arg3
int64_t rcx_2 = 0xfff

if (arg7 u< 0x1000)
    rcx_2 = arg7

char* r9 = arg3

if (rdi u> r15_1 - 0xc)
    goto label_140a2c3c0

void* rax_3 = &r8[0x8000]
char* r15_9

while (true)
    void* r14_1 = *(r8 + 0x40008)
    int32_t rsi_1 = r8[0x10007]
    uint64_t r12_1 = zx.q(r8[0x10006])
    int32_t rax_5 = r13.d - rdi.d
    int32_t var_10148_1 = 0
    int32_t rdx_2 = r13.d - r14_1.d
    int32_t var_10138_1 = 0
    int32_t var_100e0_1 = 0
    int32_t var_10154_1 = 0
    void* r15_2 = r14_1 + r12_1
    int32_t var_100dc_1 = 0
    void* rax_6 = *(r8 + 0x40028)
    int32_t var_1018c_1 = 0
    
    if (rsi_1 + 0x10000 u<= rdx_2)
        rsi_1 = rdx_2 - 0xffff
    
    void* var_10100_1 = nullptr
    int32_t var_10150_1 = r13.d
    uint64_t r11_1 = 3
    int32_t j_27 = 0
    void* rdx_3 = *(r8 + 0x40010)
    int32_t rbx_1 = *var_10140
    int32_t i = r13.d - r14_1.d
    int32_t i_1 = arg6
    int32_t var_101a8_1 = 3
    uint64_t rdi_2 = zx.q(arg1[0x10008])
    int32_t var_10158_1 = r12_1.d
    void* var_10130_1 = r15_2
    void* var_10160_1 = rdx_3
    int32_t i_12 = i_1
    int32_t var_101a0_1 = rbx_1
    int32_t* r14_2
    
    if (rdi_2.d u>= i)
        r14_2 = arg1
    else
        int32_t* r8_1 = r14_1 + rdi_2
        r14_2 = arg1
        
        do
            uint64_t rcx_4 = zx.q(*r8_1 * 0x9e3779b1)
            r8_1 += 1
            uint64_t rcx_7 = zx.q(rdi_2.d - r14_2[rcx_4 u>> 0x11])
            
            if (rcx_7 u> 0xffff)
                rcx_7 = 0xffff
            
            *(r14_2 + (zx.q(rdi_2.w) << 1) + 0x20000) = rcx_7.w
            r14_2[rcx_4 u>> 0x11] = rdi_2.d
            rdi_2 = zx.q(rdi_2.d + 1)
        while (rdi_2.d u< i)
        
        r15_2 = var_10130_1
        rdx_3 = var_10160_1
        i_1 = i_12
    
    r14_2[0x10008] = i
    int64_t rdi_3 = sx.q(0)
    int64_t var_10128_1 = rdi_3
    int32_t r14_3 = r14_2[zx.q(*var_10140 * 0x9e3779b1) u>> 0x11]
    int32_t var_10198
    
    if (r14_3 u>= rsi_1)
        while (i_1 != 0)
            i_12 -= 1
            int32_t r9_2 = 0
            
            if (arg11 != 0 && rdx_2 - r14_3 u< 8)
                goto label_140a29cd6
            
            bool cond:15_1
            
            if (r14_3 u< r12_1.d)
                uint64_t rsi_3 = zx.q(r14_3)
                void* r11_2 = rsi_3 + rdx_3
                
                if (*(rsi_3 + rdx_3) != rbx_1)
                    r11_1 = zx.q(var_101a8_1)
                label_140a29cd6:
                    cond:15_1 = 0 != r11_1.d
                else
                    void* rcx_18 = zx.q(r12_1.d - r14_3) + var_10140
                    void* rbx_5 = zx.q(arg1[0x10007]) + rdx_3
                    void* rdx_7 = r11_2 + 4
                    void* r9_3 = r15_1 - 5
                    
                    if (rcx_18 u<= r15_1 - 5)
                        r9_3 = rcx_18
                    
                    void* j = &var_10140[1]
                    
                    if (&var_10140[1] u>= r9_3 - 7)
                        goto label_140a29aec
                    
                    uint64_t rax_38 = *(var_10140 + 4) ^ *rdx_7
                    uint32_t rcx_19
                    
                    if (rax_38 != 0)
                        var_10198 = 0
                        uint64_t rflags_3
                        int32_t rcx_24
                        rcx_24, rflags_3 = _bit_scan_forward(rax_38)
                        rcx_19 = rcx_24 u>> 3
                    else
                        j = &var_10140[3]
                        rdx_7 += 8
                    label_140a29aec:
                        
                        while (j u< r9_3 - 7)
                            uint64_t rax_40 = *j ^ *rdx_7
                            
                            if (rax_40 != 0)
                                uint64_t rflags_4
                                int32_t rax_61
                                rax_61, rflags_4 = _bit_scan_forward(rax_40)
                                var_10198 = 0
                                rcx_19 = j.d + (rax_61 u>> 3) - (&var_10140[1]).d
                                goto label_140a29b4b
                            
                            j += 8
                            rdx_7 += 8
                        
                        if (j u< r9_3 - 3 && *rdx_7 == *j)
                            j += 4
                            rdx_7 += 4
                        
                        if (j u< r9_3 - 1 && *rdx_7 == *j)
                            j += 2
                            rdx_7 += 2
                        
                        if (j u< r9_3 && *rdx_7 == *j)
                            j += 1
                        
                        rcx_19 = j.d - (&var_10140[1]).d
                    
                label_140a29b4b:
                    int32_t r8_9 = rcx_19 + 4
                    void* j_18 = var_10140 + sx.q(r8_9)
                    
                    if (j_18 == r9_3 && r9_3 u< r15_1 - 5)
                        void* rdx_8 = r15_2
                        void* j_1 = j_18
                        
                        if (j_18 u>= r15_1 - 0xc)
                            goto label_140a29b96
                        
                        uint64_t rax_48 = *r15_2 ^ *j_18
                        uint32_t rcx_20
                        
                        if (rax_48 != 0)
                            var_10198 = 0
                            uint64_t rflags_5
                            int32_t rcx_25
                            rcx_25, rflags_5 = _bit_scan_forward(rax_48)
                            rcx_20 = rcx_25 u>> 3
                        else
                            j_1 = j_18 + 8
                            rdx_8 = r15_2 + 8
                        label_140a29b96:
                            
                            while (j_1 u< r15_1 - 0xc)
                                uint64_t rax_50 = *j_1 ^ *rdx_8
                                
                                if (rax_50 != 0)
                                    uint64_t rflags_6
                                    int32_t rax_64
                                    rax_64, rflags_6 = _bit_scan_forward(rax_50)
                                    var_10198 = 0
                                    rcx_20 = j_1.d + (rax_64 u>> 3) - j_18.d
                                    goto label_140a29c04
                                
                                j_1 += 8
                                rdx_8 += 8
                            
                            if (j_1 u< r15_1 - 8 && *rdx_8 == *j_1)
                                j_1 += 4
                                rdx_8 += 4
                            
                            if (j_1 u< r15_1 - 6 && *rdx_8 == *j_1)
                                j_1 += 2
                                rdx_8 += 2
                            
                            if (j_1 u< r15_1 - 5 && *rdx_8 == *j_1)
                                j_1 += 1
                            
                            rcx_20 = j_1.d - j_18.d
                        
                    label_140a29c04:
                        r8_9 += rcx_20
                    
                    int32_t rdx_9 = 0
                    
                    if (var_10128_1 != 0)
                        int32_t rbx_6 = rbx_5.d - r11_2.d
                        
                        if (rbx_5 - r11_2 s< 0)
                            rbx_6 = 0
                        
                        if (rbx_6 s< 0)
                            void* rcx_21 = var_10140 - 1
                            
                            while (*rcx_21 == *(r11_2 - var_10140 + rcx_21))
                                rcx_21 -= 1
                                rdx_9 -= 1
                                
                                if (rcx_21 + 1 - var_10140 s<= sx.q(rbx_6))
                                    break
                    
                    r11_1 = zx.q(var_101a8_1)
                    int32_t r8_10 = r8_9 - rdx_9
                    cond:15_1 = r8_10 != r11_1.d
                    
                    if (r8_10 s> r11_1.d)
                        r11_1 = zx.q(r8_10)
                        var_101a8_1 = r8_10
                        var_10150_1 = rdx_9 + var_10140.d
                        var_10148_1 = rdx_9 + rsi_3.d + r14_1.d
                        goto label_140a29ce1
            else
                int64_t rcx_10 = sx.q(r11_1.d)
                void* rdx_5 = var_10140 - 1
                int32_t* r10_4 = zx.q(r14_3) + r14_1
                
                if (*(rcx_10 + rdx_5) != *(rcx_10 - rdi_3 + r10_4 - 1) || *r10_4 != rbx_1)
                    goto label_140a29cd6
                
                if (rdi_3 != 0)
                    int32_t rax_18 = r15_2.d - r10_4.d
                    
                    if (r15_2 - r10_4 s< 0)
                        rax_18 = 0
                    
                    if (rax_18 s< 0)
                        while (*rdx_5 == *(r10_4 - var_10140 + rdx_5))
                            rdx_5 -= 1
                            r9_2 -= 1
                            
                            if (1 - var_10140 + rdx_5 s<= sx.q(rax_18))
                                break
                
                void* rdx_6 = &r10_4[1]
                void* j_2 = &var_10140[1]
                
                if (&var_10140[1] u>= r15_1 - 0xc)
                    goto label_140a299c5
                
                uint64_t rax_22 = *(var_10140 + 4) ^ *rdx_6
                uint32_t r8_4
                
                if (rax_22 != 0)
                    uint64_t rflags_1
                    int32_t r8_7
                    r8_7, rflags_1 = _bit_scan_forward(rax_22)
                    var_10198 = 0
                    r8_4 = r8_7 u>> 3
                else
                    j_2 = &var_10140[3]
                    rdx_6 += 8
                label_140a299c5:
                    
                    while (j_2 u< r15_1 - 0xc)
                        uint64_t rax_24 = *j_2 ^ *rdx_6
                        
                        if (rax_24 != 0)
                            uint64_t rflags_2
                            int32_t rax_31
                            rax_31, rflags_2 = _bit_scan_forward(rax_24)
                            var_10198 = 0
                            r8_4 = j_2.d + (rax_31 u>> 3) - (&var_10140[1]).d
                            goto label_140a29a35
                        
                        j_2 += 8
                        rdx_6 += 8
                    
                    if (j_2 u< r15_1 - 8 && *rdx_6 == *j_2)
                        j_2 += 4
                        rdx_6 += 4
                    
                    if (j_2 u< r15_1 - 6 && *rdx_6 == *j_2)
                        j_2 += 2
                        rdx_6 += 2
                    
                    if (j_2 u< r15_1 - 5 && *rdx_6 == *j_2)
                        j_2 += 1
                    
                    r8_4 = j_2.d - (&var_10140[1]).d
                
            label_140a29a35:
                cond:15_1 = r8_4 - r9_2 + 4 != r11_1.d
                
                if (r8_4 - r9_2 + 4 s> r11_1.d)
                    r11_1 = zx.q(r8_4 - r9_2 + 4)
                    var_101a8_1 = r8_4 - r9_2 + 4
                    var_10148_1 = r9_2 + r10_4.d
                    var_10150_1 = r9_2 + var_10140.d
                label_140a29ce1:
                    
                    if (r14_3 + r11_1.d u> rdx_2)
                        goto label_140a29d55
                    
                    goto label_140a29ceb
            
            if (cond:15_1 || r14_3 + r11_1.d u> rdx_2)
            label_140a29d55:
                void* r8_13 = rax_3
                uint64_t r11_5 = zx.q(r14_3.w)
                
                if (*(r8_13 + (r11_5 << 1)) != 1 || j_27 != 0)
                    goto label_140a29dd6
                
                int32_t rsi_4 = r14_3 - 1
                int32_t rbx_7
                
                if (var_1018c_1 != 0)
                    if (var_1018c_1 != 2)
                        goto label_140a29dd6
                    
                    rbx_7 = var_101a0_1
                label_140a29e12:
                    
                    if (rsi_4 u< rsi_1 || r12_1.d - rsi_4 - 1 u< 3)
                        goto label_140a29dd6
                    
                    void* rdi_16 = r14_1
                    
                    if (rsi_4 u< r12_1.d)
                        rdi_16 = var_10160_1
                    
                    char* rdi_17 = rdi_16 + zx.q(rsi_4)
                    
                    if (*rdi_17 != rbx_7)
                        goto label_140a29dd6
                    
                    void* rdx_17 = zx.q(r12_1.d) + var_10160_1
                    void* r15_6 = zx.q(arg1[0x10007]) + var_10160_1
                    
                    if (rsi_4 u>= r12_1.d)
                        rdx_17 = r15_1 - 5
                    
                    void* rbx_9 = zx.q(sub_140a2c4c0(&rdi_17[4], rdx_17, rbx_7)) + 4
                    int64_t* r11_8
                    
                    if (rsi_4 u>= r12_1.d || rbx_9 + rdi_17 != rdx_17)
                        r11_8 = var_10130_1
                    else
                        int32_t r8_15 = var_101a0_1
                        uint64_t rax_84 = (zx.q(rbx_9.d) & 3) << 3
                        
                        if (rax_84 != 0)
                            r8_15 = rol.d(r8_15, rax_84.b)
                        
                        r11_8 = var_10130_1
                        rbx_9 += zx.q(sub_140a2c4c0(r11_8, r15_1 - 5, r8_15))
                    
                    int64_t* rdx_20 = r11_8
                    
                    if (rsi_4 u< r12_1.d)
                        rdx_20 = r15_6
                    
                    uint64_t r14_5 = zx.q(sub_140a2c5c0(rdi_17, rdx_20, var_101a0_1))
                    
                    if (rsi_4 u>= r12_1.d && rdi_17 - r14_5 == var_10130_1
                            && arg1[0x10007] u< r12_1.d)
                        int32_t r8_17 = var_101a0_1
                        uint64_t rax_91 = (zx.q(neg.d(r14_5.d)) & 3) << 3
                        
                        if (rax_91 != 0)
                            r8_17 = rol.d(r8_17, rax_91.b)
                        
                        r14_5 += zx.q(sub_140a2c5c0(zx.q(r12_1.d) + var_10160_1, r15_6, r8_17))
                    
                    int32_t rax_95 = rsi_4 - r14_5.d
                    r14_3 = rsi_1
                    
                    if (rax_95 u> r14_3)
                        r14_3 = rax_95
                    
                    void* rdx_24 = zx.q(rsi_4 - r14_3) + rbx_9
                    
                    if (rdx_24 u>= var_10100_1 && rbx_9 u<= var_10100_1)
                        r14_3 = rbx_9.d - var_10100_1.d + rsi_4
                        
                        if (r12_1.d - r14_3 - 1 u< 3)
                            r14_3 = r12_1.d
                    else if (r12_1.d - r14_3 - 1 u< 3)
                        r14_3 = r12_1.d
                    else if (var_10128_1 == 0)
                        r11_1 = sx.q(var_101a8_1)
                        void* rcx_39 = var_10100_1
                        
                        if (rdx_24 u< var_10100_1)
                            rcx_39 = rdx_24
                        
                        if (r11_1 u< rcx_39)
                            if (var_10140 - r14_1 - zx.q(r14_3) s> 0xffff)
                                i_1 = i_12
                                break
                                break
                            
                            var_101a8_1 = rcx_39.d
                            var_10148_1 = r14_1.d + r14_3
                            r11_1 = zx.q(rcx_39.d)
                            var_10150_1 = var_10140.d
                        
                        uint32_t rcx_30 = zx.d(*(rax_3 + (zx.q(r14_3.w) << 1)))
                        
                        if (rcx_30 u> r14_3)
                            i_1 = i_12
                            break
                        
                        r14_3 -= rcx_30
                else
                    rbx_7 = var_101a0_1
                    int32_t rdi_15
                    rdi_15.b = rbx_7.b == (rbx_7 u>> 0x18).b
                    int32_t rcx_26
                    rcx_26.b = zx.d(rbx_7.w) == rbx_7 u>> 0x10
                    
                    if ((rcx_26 & rdi_15) != 0)
                        var_1018c_1 = 2
                        r8_13 = rax_3
                        var_10100_1 = zx.q(sub_140a2c4c0(&var_10140[1], r15_1 - 5, rbx_7)) + 4
                        goto label_140a29e12
                    
                    var_1018c_1 = 1
                label_140a29dd6:
                    r11_5.w += j_27.w
                    r14_3 -= zx.d(*(r8_13 + (zx.q(r11_5.w) << 1)))
            else
            label_140a29ceb:
                uint32_t r10_6 = 1
                int32_t j_3 = 0
                int32_t rdi_13 = 0x10
                
                if (r11_1.d - 3 s<= 0)
                    goto label_140a29d55
                
                uint32_t r8_11
                
                do
                    int32_t rdx_10 = rdi_13
                    rdi_13 += 1
                    uint32_t rcx_27 = zx.d(*(rax_3 + (zx.q(j_3.w + r14_3.w) << 1)))
                    int32_t j_15 = j_3
                    r8_11 = rcx_27
                    
                    if (rcx_27 u<= r10_6)
                        r8_11 = r10_6
                    
                    if (rcx_27 u<= r10_6)
                        j_15 = j_27
                    
                    if (rcx_27 u> r10_6)
                        rdi_13 = 0x10
                    
                    j_27 = j_15
                    j_3 += rdx_10 s>> 4
                    r10_6 = r8_11
                while (j_3 s< r11_1.d - 3)
                
                r12_1 = zx.q(var_10158_1)
                
                if (r8_11 u<= 1)
                    goto label_140a29d55
                
                if (r8_11 u> r14_3)
                    r11_1 = zx.q(var_101a8_1)
                    i_1 = i_12
                    break
                
                r14_3 -= r8_11
            
            r15_2 = var_10130_1
            rdx_3 = var_10160_1
            r11_1 = zx.q(var_101a8_1)
            i_1 = i_12
            
            if (r14_3 u< rsi_1)
                break
            
            rbx_1 = var_101a0_1
            rdi_3 = var_10128_1
    
    int32_t* r13_1
    
    if (arg10 != 1 || i_1 == 0)
        r13_1 = var_10140
    else
        r13_1 = var_10140
        
        if (rdx_2 - rsi_1 u< 0xffff)
            int64_t rsi_7 = *(rax_6 + 0x40000) - *(rax_6 + 0x40008)
            int32_t rbx_11 = *(rax_6 + (zx.q(*r13_1 * 0x9e3779b1) u>> 0x11 << 2))
            int32_t r14_8 = rsi_1 - rsi_7.d + rbx_11
            
            while (rdx_2 - r14_8 u<= 0xffff)
                int32_t i_14 = i_1
                i_1 -= 1
                
                if (i_14 == 0)
                    break
                
                int64_t r11_9 = *(rax_6 + 0x40008)
                uint64_t rcx_43 = zx.q(rbx_11)
                void* r9_5 = r11_9 + rcx_43
                
                if (*(r11_9 + rcx_43) != var_101a0_1)
                    r11_1 = zx.q(var_101a8_1)
                else
                    int32_t* rdx_26 = r9_5 + 4
                    void* rcx_44 = rsi_7 - rcx_43 + r13_1
                    void* r8_18 = r15_1 - 5
                    
                    if (rcx_44 u<= r15_1 - 5)
                        r8_18 = rcx_44
                    
                    void* i_2 = &r13_1[1]
                    
                    if (&r13_1[1] u>= r8_18 - 7)
                        goto label_140a2a0d7
                    
                    uint64_t rax_117 = *(r13_1 + 4) ^ *rdx_26
                    uint32_t rcx_45
                    
                    if (rax_117 != 0)
                        uint64_t rflags_7
                        int32_t rcx_50
                        rcx_50, rflags_7 = _bit_scan_forward(rax_117)
                        var_10198 = 0
                        rcx_45 = rcx_50 u>> 3
                    else
                        i_2 = &r13_1[3]
                        rdx_26 = &rdx_26[2]
                    label_140a2a0d7:
                        
                        while (i_2 u< r8_18 - 7)
                            uint64_t rax_119 = *i_2 ^ *rdx_26
                            
                            if (rax_119 != 0)
                                uint64_t rflags_8
                                int32_t rax_132
                                rax_132, rflags_8 = _bit_scan_forward(rax_119)
                                var_10198 = 0
                                rcx_45 = i_2.d + (rax_132 u>> 3) - (&r13_1[1]).d
                                goto label_140a2a146
                            
                            i_2 += 8
                            rdx_26 = &rdx_26[2]
                        
                        if (i_2 u< r8_18 - 3 && *rdx_26 == *i_2)
                            i_2 += 4
                            rdx_26 = &rdx_26[1]
                        
                        if (i_2 u< r8_18 - 1 && *rdx_26 == *i_2)
                            i_2 += 2
                            rdx_26 += 2
                        
                        if (i_2 u< r8_18 && *rdx_26 == *i_2)
                            i_2 += 1
                        
                        rcx_45 = i_2.d - (&r13_1[1]).d
                    
                label_140a2a146:
                    int32_t rdx_27 = 0
                    
                    if (var_10128_1 != 0)
                        void* rax_126 = zx.q(*(rax_6 + 0x40018)) - r9_5
                        int32_t rax_127 = rax_126.d + r11_9.d
                        
                        if (rax_126 + r11_9 s< 0)
                            rax_127 = 0
                        
                        if (rax_127 s< 0)
                            void* rcx_46 = r13_1 - 1
                            
                            while (*rcx_46 == *(r9_5 - r13_1 + rcx_46))
                                rcx_46 -= 1
                                rdx_27 -= 1
                                
                                if (rcx_46 + 1 - r13_1 s<= sx.q(rax_127))
                                    break
                    
                    r11_1 = zx.q(var_101a8_1)
                    int32_t r10_9 = rcx_45 + 4 - rdx_27
                    
                    if (r10_9 s> r11_1.d)
                        r11_1 = zx.q(r10_9)
                        var_101a8_1 = r10_9
                        var_10148_1 = r14_8 + r14_1.d + rdx_27
                        var_10150_1 = rdx_27 + r13_1.d
                
                uint32_t rcx_51 = zx.d(*(rax_6 + (zx.q(rbx_11.w) << 1) + 0x20000))
                r14_8 -= rcx_51
                rbx_11 -= rcx_51
    
    int32_t rsi_9
    int32_t r9_7
    
    if (r11_1.d s<= 3)
        rsi_9 = var_10138_1
        r9_7 = rsi_9
    else
        if (arg11 != 0)
            int32_t rcx_52
            rcx_52.b = r11_1.d s<= 0x24
            int32_t rax_138
            rax_138.b = r11_1.d s> 0x12
            
            if ((rax_138 & rcx_52) != 0)
                r11_1 = 0x12
        
        r9_7 = r11_1.d
        rsi_9 = var_10150_1 - var_10148_1
        var_100e0_1 = rsi_9
        var_10154_1 = r11_1.d
        int32_t var_100dc_2 = r11_1.d
    
    uint32_t rax_140 = (var_100e0_1.q u>> 0x20).d
    
    if (rax_140 != 0)
        int64_t rbx_12 = sx.q(rax_140)
        
        if (rbx_12 u<= rcx_2)
            int32_t rax_156 = rax_5
            
            if (rax_5 s>= 0xf)
                rax_156 = rax_5 + 1 + (rax_5 - 0xf) s/ 0xff
            
            void* r12_6 = nullptr
            int32_t var_10088[0x4]
            var_10088[0] = rax_156
            int32_t rax_160 = rax_5 + 1
            var_10088[2] = 1
            var_10088[1] = 0
            int32_t rdi_23 = rax_160
            var_10088[3] = rax_5
            
            if (rax_160 s>= 0xf)
                rax_160 = rax_5 + 2 + (rax_5 - 0xe) s/ 0xff
            
            int32_t var_10078[0x4]
            var_10078[0] = rax_160
            int32_t rax_164 = rax_5 + 2
            var_10078[3] = rdi_23
            int32_t rdi_24 = rax_164
            var_10078[2] = 1
            var_10078[1] = 0
            
            if (rax_164 s>= 0xf)
                rax_164 = rax_5 + 3 + (rax_5 - 0xd) s/ 0xff
            
            int32_t var_10068[0x4]
            var_10068[0] = rax_164
            int32_t rax_168 = rax_5 + 3
            var_10068[3] = rdi_24
            int32_t rdi_25 = rax_168
            var_10068[2] = 1
            var_10068[1] = 0
            
            if (rax_168 s>= 0xf)
                rax_168 = rax_5 + 4 + (rax_5 - 0xc) s/ 0xff
            
            int32_t r8_22 = 4
            int64_t r11_12 = sx.q(r9_7)
            int32_t var_10050_1 = 1
            int32_t var_10054_1 = 0
            int32_t var_1004c_1 = rdi_25
            int32_t var_10058_1 = rax_168
            void var_10044
            
            if (r11_12 s>= 4)
                void* rdi_26 = &var_10044
                int64_t i_18 = r11_12 - 3
                int64_t i_3
                
                do
                    int32_t r9_10 = rax_5
                    
                    if (rax_5 s>= 0xf)
                        r9_10 = rax_5 + 1 + (rax_5 - 0xf) s/ 0xff
                    
                    int32_t r9_12 = r9_10 + 3
                    
                    if (r8_22 s>= 0x13)
                        r9_12 = r9_12 + 1 + (r8_22 - 0x13) s/ 0xff
                    
                    *(rdi_26 + 4) = r8_22
                    r8_22 += 1
                    *rdi_26 = rsi_9
                    *(rdi_26 + 8) = rax_5
                    *(rdi_26 - 4) = r9_12
                    rdi_26 += 0x10
                    i_3 = i_18
                    i_18 -= 1
                while (i_3 != 1)
            
            int32_t r13_2 = 1
            int64_t rdx_61 = (r11_12 + 1) * 2
            int32_t var_10170_2 = 1
            int32_t r11_13 = var_10154_1
            void* rcx_64 = &(&var_10088)[r11_12]
            var_10080
            *(&var_10080 + (rdx_61 << 3)) = 1
            var_10084
            *(&var_10084 + (rdx_61 << 3)) = 0
            var_1007c
            *(&var_1007c + (rdx_61 << 3)) = 1
            int32_t rax_179 = *rcx_64 + 1
            var_10070
            *(&var_10070 + (rdx_61 << 3)) = 1
            var_10088[rdx_61 * 2] = rax_179
            var_10074
            *(&var_10074 + (rdx_61 << 3)) = 0
            var_1006c
            *(&var_1006c + (rdx_61 << 3)) = 2
            int32_t rax_181 = *rcx_64 + 2
            var_10060
            *(&var_10060 + (rdx_61 << 3)) = 1
            var_10078[rdx_61 * 2] = rax_181
            var_10064
            *(&var_10064 + (rdx_61 << 3)) = 0
            var_1005c
            *(&var_1005c + (rdx_61 << 3)) = 3
            int64_t rcx_65 = 1
            int64_t var_10100_2 = 1
            var_10068[rdx_61 * 2] = *rcx_64 + 3
            uint32_t rdx_117
            int32_t r10_34
            
            if (r11_13 s<= 1)
            label_140a2c129:
                int64_t rax_492 = sx.q(r11_13) * 2
                rdx_117 = *(&var_10080 + (rax_492 << 3))
                r13_2 = r11_13 - rdx_117
                r10_34 = *(&var_10084 + (rax_492 << 3))
            else
                while (true)
                    void* r15_11 = sx.q(r13_2) + var_10140
                    void* var_10178_1 = r15_11
                    
                    if (r15_11 u> r15_1 - 0xc)
                        goto label_140a2c129
                    
                    int64_t rcx_66 = rcx_65 << 4
                    void* rdx_62 = &(&var_10088)[rcx_65]
                    int32_t rax_184 = (&var_10078)[rcx_65][0]
                    int32_t rdx_63 = *rdx_62
                    void var_10048
                    
                    if (arg9 == 0)
                        if (rax_184 s> rdx_63)
                        label_140a2a681:
                            void* var_10148_2 = nullptr
                            void* r8_23 = *(arg1 + 0x40008)
                            void* rax_186 = *(arg1 + 0x40028)
                            int32_t rdx_65 = r15_11.d - r8_23.d
                            uint64_t rcx_67 = zx.q(arg1[0x10006])
                            int32_t rdi_27 = arg1[0x10007]
                            int32_t r10_12 = r15_11.d
                            int32_t var_10190_2 = rcx_67.d
                            int64_t rcx_183
                            
                            if (arg9 == 0)
                                int32_t i_5 = arg6
                                void* r14_14 = r8_23 + rcx_67
                                int32_t r8_41 = *r15_11
                                int32_t rax_324 = r11_13 - r13_2
                                int64_t var_100d0_1 = 0
                                var_10198 = rax_324
                                int32_t rbx_21 = rax_324
                                int32_t var_101a4_5 = rax_324
                                void* r11_25 = nullptr
                                void* var_10160_3 = r14_14
                                void* rdx_92 = *(arg1 + 0x40010)
                                
                                if (rdi_27 + 0x10000 u<= rdx_65)
                                    rdi_27 = rdx_65 - 0xffff
                                
                                int32_t i_4 = r15_11.d - r8_23.d
                                uint64_t rdi_54 = zx.q(arg1[0x10008])
                                int32_t r10_26 = r10_12 - r15_11.d
                                void* var_10108_1 = rdx_92
                                int32_t j_28 = 0
                                int32_t i_13 = i_5
                                int32_t var_1018c_3 = r8_41
                                int32_t var_10158_3 = 0
                                
                                if (rdi_54.d u< i_4)
                                    void* r8_42 = r8_23 + rdi_54
                                    
                                    do
                                        uint64_t rcx_123 = zx.q(*r8_42 * 0x9e3779b1)
                                        r8_42 += 1
                                        int32_t* rdx_93 = rcx_123 u>> 0x11 << 2
                                        uint64_t rcx_126 = zx.q(rdi_54.d - *(rdx_93 + arg1))
                                        
                                        if (rcx_126 u> 0xffff)
                                            rcx_126 = 0xffff
                                        
                                        *(arg1 + (zx.q(rdi_54.w) << 1) + 0x20000) = rcx_126.w
                                        *(rdx_93 + arg1) = rdi_54.d
                                        rdi_54 = zx.q(rdi_54.d + 1)
                                    while (rdi_54.d u< i_4)
                                    
                                    r14_14 = var_10160_3
                                    rdx_92 = var_10108_1
                                    r8_41 = var_1018c_3
                                    r15_11 = var_10178_1
                                
                                int64_t r10_27 = sx.q(r10_26)
                                int64_t var_10150_3 = r10_27
                                arg1[0x10008] = i_4
                                uint64_t r15_15 = zx.q(arg1[zx.q(*r15_11 * 0x9e3779b1) u>> 0x11])
                                void* rdi_56 = var_10178_1
                                void* var_10130_3 = rdi_56
                                
                                if (r15_15.d u>= rdi_27)
                                    var_10130_3 = rdi_56
                                    
                                    while (i_5 != 0)
                                        i_13 = i_5 - 1
                                        bool cond:49_1
                                        
                                        if (arg11 != 0 && rdx_65 - r15_15.d u< 8)
                                        label_140a2b7fb:
                                            cond:49_1 = 0 != rbx_21
                                        else if (r15_15.d u< var_10190_2)
                                            uint64_t rsi_16 = zx.q(r15_15.d)
                                            void* r11_28 = rdx_92 + rsi_16
                                            
                                            if (*(rdx_92 + rsi_16) != r8_41)
                                                goto label_140a2b7fb
                                            
                                            void* rbx_23 = zx.q(arg1[0x10007]) + rdx_92
                                            void* rdx_96 = r11_28 + 4
                                            void* rcx_137 = zx.q(var_10190_2 - r15_15.d) + rdi_56
                                            void* r8_45 = r15_1 - 5
                                            
                                            if (rcx_137 u<= r15_1 - 5)
                                                r8_45 = rcx_137
                                            
                                            void* j_4 = rdi_56 + 4
                                            
                                            if (rdi_56 + 4 u>= r8_45 - 7)
                                                goto label_140a2b617
                                            
                                            uint64_t rax_353 = *(rdi_56 + 4) ^ *rdx_96
                                            uint32_t rcx_138
                                            
                                            if (rax_353 != 0)
                                                int32_t var_101a8_5 = 0
                                                uint64_t rflags_22
                                                int32_t rcx_144
                                                rcx_144, rflags_22 = _bit_scan_forward(rax_353)
                                                rcx_138 = rcx_144 u>> 3
                                            else
                                                j_4 = rdi_56 + 0xc
                                                rdx_96 += 8
                                            label_140a2b617:
                                                
                                                while (j_4 u< r8_45 - 7)
                                                    uint64_t rax_355 = *j_4 ^ *rdx_96
                                                    
                                                    if (rax_355 != 0)
                                                        uint64_t rflags_23
                                                        int32_t rax_375
                                                        rax_375, rflags_23 =
                                                            _bit_scan_forward(rax_355)
                                                        rcx_138 =
                                                            j_4.d - (rdi_56 + 4).d + (rax_375 u>> 3)
                                                        int32_t var_101a8_6 = 0
                                                        goto label_140a2b67b
                                                    
                                                    j_4 += 8
                                                    rdx_96 += 8
                                                
                                                if (j_4 u< r8_45 - 3 && *rdx_96 == *j_4)
                                                    j_4 += 4
                                                    rdx_96 += 4
                                                
                                                if (j_4 u< r8_45 - 1 && *rdx_96 == *j_4)
                                                    j_4 += 2
                                                    rdx_96 += 2
                                                
                                                if (j_4 u< r8_45 && *rdx_96 == *j_4)
                                                    j_4 += 1
                                                
                                                rcx_138 = j_4.d - (rdi_56 + 4).d
                                            
                                        label_140a2b67b:
                                            int32_t r9_43 = rcx_138 + 4
                                            void* j_20 = sx.q(r9_43) + var_10178_1
                                            
                                            if (j_20 == r8_45 && r8_45 u< r15_1 - 5)
                                                void* rdx_97 = r14_14
                                                void* j_5 = j_20
                                                
                                                if (j_20 u>= r15_1 - 0xc)
                                                    goto label_140a2b6c8
                                                
                                                uint64_t rax_362 = *r14_14 ^ *j_20
                                                uint32_t rcx_139
                                                
                                                if (rax_362 != 0)
                                                    int32_t var_101a8_7 = 0
                                                    uint64_t rflags_24
                                                    int32_t rcx_146
                                                    rcx_146, rflags_24 = _bit_scan_forward(rax_362)
                                                    rcx_139 = rcx_146 u>> 3
                                                else
                                                    j_5 = j_20 + 8
                                                    rdx_97 = r14_14 + 8
                                                label_140a2b6c8:
                                                    
                                                    while (j_5 u< r15_1 - 0xc)
                                                        uint64_t rax_364 = *j_5 ^ *rdx_97
                                                        
                                                        if (rax_364 != 0)
                                                            uint64_t rflags_25
                                                            int32_t rax_377
                                                            rax_377, rflags_25 =
                                                                _bit_scan_forward(rax_364)
                                                            rcx_139 =
                                                                j_5.d - j_20.d + (rax_377 u>> 3)
                                                            int32_t var_101a8_8 = 0
                                                            goto label_140a2b734
                                                        
                                                        j_5 += 8
                                                        rdx_97 += 8
                                                    
                                                    if (j_5 u< r15_1 - 8 && *rdx_97 == *j_5)
                                                        j_5 += 4
                                                        rdx_97 += 4
                                                    
                                                    if (j_5 u< r15_1 - 6 && *rdx_97 == *j_5)
                                                        j_5 += 2
                                                        rdx_97 += 2
                                                    
                                                    if (j_5 u< r15_1 - 5 && *rdx_97 == *j_5)
                                                        j_5 += 1
                                                    
                                                    rcx_139 = j_5.d - j_20.d
                                                
                                            label_140a2b734:
                                                r9_43 += rcx_139
                                            
                                            int32_t rdx_98 = 0
                                            
                                            if (var_10150_3 != 0)
                                                int32_t rbx_24 = rbx_23.d - r11_28.d
                                                
                                                if (rbx_23 - r11_28 s< 0)
                                                    rbx_24 = 0
                                                
                                                if (rbx_24 s< 0)
                                                    void* rcx_140 = var_10178_1 - 1
                                                    
                                                    while (*rcx_140
                                                            == *(r11_28 - var_10178_1 + rcx_140))
                                                        rcx_140 -= 1
                                                        rdx_98 -= 1
                                                        
                                                        if (1 - var_10178_1 + rcx_140
                                                                s<= sx.q(rbx_24))
                                                            break
                                            
                                            rbx_21 = var_101a4_5
                                            int32_t r9_44 = r9_43 - rdx_98
                                            cond:49_1 = r9_44 != rbx_21
                                            
                                            if (r9_44 s> rbx_21)
                                                rbx_21 = r9_44
                                                int64_t rax_373 = sx.q(rdx_98)
                                                var_101a4_5 = rbx_21
                                                var_10130_3 = rax_373 + var_10178_1
                                                var_10148_2 = r8_23 + rsi_16 + rax_373
                                                goto label_140a2b80a
                                        else
                                            int64_t rcx_129 = sx.q(rbx_21)
                                            void* rdx_94 = rdi_56 - 1
                                            int32_t* r11_27 = zx.q(r15_15.d) + r8_23
                                            
                                            if (*(rdx_94 + rcx_129)
                                                    != *(r11_27 - r10_27 + rcx_129 - 1)
                                                    || *r11_27 != r8_41)
                                                goto label_140a2b7fb
                                            
                                            int32_t r10_28 = 0
                                            
                                            if (r10_27 != 0)
                                                int32_t rax_335 = r14_14.d - r11_27.d
                                                
                                                if (r14_14 - r11_27 s< 0)
                                                    rax_335 = 0
                                                
                                                if (rax_335 s< 0)
                                                    while (*rdx_94 == *(r11_27 - rdi_56 + rdx_94))
                                                        rdx_94 -= 1
                                                        r10_28 -= 1
                                                        
                                                        if (1 - var_10178_1 + rdx_94
                                                                s<= sx.q(rax_335))
                                                            break
                                                    
                                                    rdi_56 = var_10178_1
                                            
                                            void* rdx_95 = &r11_27[1]
                                            void* j_6 = rdi_56 + 4
                                            
                                            if (rdi_56 + 4 u>= r15_1 - 0xc)
                                                goto label_140a2b500
                                            
                                            uint64_t rax_339 = *(rdi_56 + 4) ^ *rdx_95
                                            uint32_t r9_36
                                            
                                            if (rax_339 != 0)
                                                uint64_t rflags_20
                                                int32_t r9_39
                                                r9_39, rflags_20 = _bit_scan_forward(rax_339)
                                                int32_t var_101a8_3 = 0
                                                r9_36 = r9_39 u>> 3
                                            else
                                                j_6 = rdi_56 + 0xc
                                                rdx_95 += 8
                                            label_140a2b500:
                                                
                                                while (j_6 u< r15_1 - 0xc)
                                                    uint64_t rax_341 = *j_6 ^ *rdx_95
                                                    
                                                    if (rax_341 != 0)
                                                        uint64_t rflags_21
                                                        int32_t r9_40
                                                        r9_40, rflags_21 =
                                                            _bit_scan_forward(rax_341)
                                                        int32_t var_101a8_4 = 0
                                                        r9_36 =
                                                            (r9_40 u>> 3) + j_6.d - (rdi_56 + 4).d
                                                        goto label_140a2b567
                                                    
                                                    j_6 += 8
                                                    rdx_95 += 8
                                                
                                                if (j_6 u< r15_1 - 8 && *rdx_95 == *j_6)
                                                    j_6 += 4
                                                    rdx_95 += 4
                                                
                                                if (j_6 u< r15_1 - 6 && *rdx_95 == *j_6)
                                                    j_6 += 2
                                                    rdx_95 += 2
                                                
                                                if (j_6 u< r15_1 - 5 && *rdx_95 == *j_6)
                                                    j_6 += 1
                                                
                                                r9_36 = j_6.d - (rdi_56 + 4).d
                                            
                                        label_140a2b567:
                                            cond:49_1 = r9_36 - r10_28 + 4 != rbx_21
                                            
                                            if (r9_36 - r10_28 + 4 s> rbx_21)
                                                int64_t rax_347 = sx.q(r10_28)
                                                rbx_21 = r9_36 - r10_28 + 4
                                                var_101a4_5 = rbx_21
                                                var_10130_3 = rax_347 + var_10178_1
                                                var_10148_2 = r11_27 + rax_347
                                            label_140a2b80a:
                                                
                                                if (r15_15.d + rbx_21 u> rdx_65)
                                                    goto label_140a2b88d
                                                
                                                goto label_140a2b813
                                        
                                        if (cond:49_1 || r15_15.d + rbx_21 u> rdx_65)
                                        label_140a2b88d:
                                            int32_t* r9_45 = arg1
                                            uint64_t r11_31 = zx.q(r15_15.w)
                                            
                                            if (*(r9_45 + (r11_31 << 1) + 0x20000) != 1
                                                    || j_28 != 0)
                                                r10_27 = var_10150_3
                                                r15_15 = zx.q(r15_15.d - zx.d(*(r9_45
                                                    + (zx.q(r11_31.w + j_28.w) << 1) + 0x20000)))
                                            else
                                                int32_t rbx_25 = (r15_15 - 1).d
                                                int32_t rsi_17
                                                
                                                if (var_10158_3 == 0)
                                                    rsi_17 = var_1018c_3
                                                    int32_t rdi_68
                                                    rdi_68.b = rsi_17.b == (rsi_17 u>> 0x18).b
                                                    int32_t rcx_148
                                                    rcx_148.b = zx.d(rsi_17.w) == rsi_17 u>> 0x10
                                                    
                                                    if ((rcx_148 & rdi_68) != 0)
                                                        var_10158_3 = 2
                                                        r9_45 = arg1
                                                        r12_6 = zx.q(sub_140a2c4c0(var_10178_1 + 4, 
                                                            r15_1 - 5, rsi_17)) + 4
                                                        goto label_140a2b934
                                                    
                                                    var_10158_3 = 1
                                                    r10_27 = var_10150_3
                                                    r15_15 = zx.q(r15_15.d - zx.d(*(r9_45
                                                        + (zx.q(r11_31.w + j_28.w) << 1)
                                                        + 0x20000)))
                                                else if (var_10158_3 != 2)
                                                    r10_27 = var_10150_3
                                                    r15_15 = zx.q(r15_15.d - zx.d(*(r9_45
                                                        + (zx.q(r11_31.w + j_28.w) << 1)
                                                        + 0x20000)))
                                                else
                                                    rsi_17 = var_1018c_3
                                                label_140a2b934:
                                                    
                                                    if (rbx_25 u< rdi_27)
                                                        r10_27 = var_10150_3
                                                        r15_15 = zx.q(r15_15.d - zx.d(*(r9_45
                                                            + (zx.q(r11_31.w + j_28.w) << 1)
                                                            + 0x20000)))
                                                    else
                                                        uint64_t r8_49 = zx.q(var_10190_2)
                                                        
                                                        if (r8_49.d - rbx_25 - 1 u< 3)
                                                            r10_27 = var_10150_3
                                                            r15_15 = zx.q(r15_15.d - zx.d(*(r9_45
                                                                + (zx.q(r11_31.w + j_28.w) << 1)
                                                                + 0x20000)))
                                                        else
                                                            void* rdi_69 = r8_23
                                                            
                                                            if (rbx_25 u< r8_49.d)
                                                                rdi_69 = var_10108_1
                                                            
                                                            char* rdi_70 = rdi_69 + zx.q(rbx_25)
                                                            
                                                            if (*rdi_70 != rsi_17)
                                                                r10_27 = var_10150_3
                                                                r15_15 = zx.q(r15_15.d - zx.d(*(r9_45
                                                                    + (zx.q(r11_31.w + j_28.w) << 1)
                                                                    + 0x20000)))
                                                            else
                                                                void* rdx_105 = var_10108_1 + r8_49
                                                                void* r15_17 =
                                                                    zx.q(r9_45[0x10007]) + var_10108_1
                                                                
                                                                if (rbx_25 u>= r8_49.d)
                                                                    rdx_105 = r15_1 - 5
                                                                
                                                                int32_t rcx_155 = var_10190_2
                                                                void* r14_18 = zx.q(sub_140a2c4c0(
                                                                    &rdi_70[4], rdx_105, rsi_17)) + 4
                                                                void* r11_34
                                                                
                                                                if (rbx_25 u>= rcx_155
                                                                        || r14_18 + rdi_70 != rdx_105)
                                                                    r11_34 = var_10160_3
                                                                else
                                                                    int32_t r8_51 = rsi_17
                                                                    uint64_t rax_396 =
                                                                        (zx.q(r14_18.d) & 3) << 3
                                                                    
                                                                    if (rax_396 != 0)
                                                                        r8_51 = rol.d(r8_51, rax_396.b)
                                                                    
                                                                    r11_34 = var_10160_3
                                                                    rcx_155 = var_10190_2
                                                                    r14_18 += zx.q(sub_140a2c4c0(r11_34, 
                                                                        r15_1 - 5, r8_51))
                                                                
                                                                void* rdx_108 = r11_34
                                                                
                                                                if (rbx_25 u< rcx_155)
                                                                    rdx_108 = r15_17
                                                                
                                                                uint64_t r9_46 = zx.q(var_10190_2)
                                                                int32_t* r11_35 = arg1
                                                                uint64_t rsi_18 = zx.q(sub_140a2c5c0(
                                                                    rdi_70, rdx_108, rsi_17))
                                                                
                                                                if (rbx_25 u>= r9_46.d
                                                                        && rdi_70 - rsi_18 == var_10160_3
                                                                        && r11_35[0x10007] u< r9_46.d)
                                                                    int32_t r8_53 = var_1018c_3
                                                                    uint64_t rax_402 =
                                                                        (zx.q(neg.d(rsi_18.d)) & 3) << 3
                                                                    
                                                                    if (rax_402 != 0)
                                                                        r8_53 = rol.d(r8_53, rax_402.b)
                                                                    
                                                                    int32_t rax_403 = sub_140a2c5c0(
                                                                        r9_46 + var_10108_1, r15_17, r8_53)
                                                                    r9_46 = zx.q(var_10190_2)
                                                                    r11_35 = arg1
                                                                    rsi_18 += zx.q(rax_403)
                                                                
                                                                r15_15 = zx.q(rdi_27)
                                                                int32_t rax_406 = rbx_25 - rsi_18.d
                                                                
                                                                if (rax_406 u> r15_15.d)
                                                                    r15_15 = zx.q(rax_406)
                                                                
                                                                void* rdx_112 =
                                                                    zx.q(rbx_25 - r15_15.d) + r14_18
                                                                
                                                                if (rdx_112 u< r12_6 || r14_18 u> r12_6)
                                                                    r10_27 = var_10150_3
                                                                    
                                                                    if (r9_46.d - r15_15.d - 1 u< 3)
                                                                        r15_15 = zx.q(r9_46.d)
                                                                        r14_14 = var_10160_3
                                                                    else if (r10_27 != 0)
                                                                        r14_14 = var_10160_3
                                                                    else
                                                                        void* rcx_162 = r12_6
                                                                        
                                                                        if (rdx_112 u< r12_6)
                                                                            rcx_162 = rdx_112
                                                                        
                                                                        if (sx.q(var_101a4_5) u< rcx_162)
                                                                            if (var_10178_1 - r8_23 - zx.q(r15_15.d)
                                                                                    s> 0xffff)
                                                                                i_5 = i_13
                                                                                break
                                                                                break
                                                                            
                                                                            var_101a4_5 = rcx_162.d
                                                                            var_10148_2 = r8_23 + r15_15
                                                                            var_10130_3 = var_10178_1
                                                                        
                                                                        uint32_t rcx_164 = zx.d(*(r11_35
                                                                            + (zx.q(r15_15.w) << 1) + 0x20000))
                                                                        
                                                                        if (rcx_164 u> r15_15.d)
                                                                            i_5 = i_13
                                                                            break
                                                                        
                                                                        r15_15 = zx.q(r15_15.d - rcx_164)
                                                                        r14_14 = var_10160_3
                                                                else
                                                                    r10_27 = var_10150_3
                                                                    r15_15 =
                                                                        zx.q(rbx_25 - r12_6.d + r14_18.d)
                                                                    
                                                                    if (r9_46.d - r15_15.d - 1 u< 3)
                                                                        r15_15 = zx.q(r9_46.d)
                                                                    
                                                                    r14_14 = var_10160_3
                                        else
                                        label_140a2b813:
                                            int32_t j_7 = 0
                                            uint32_t r11_30 = 1
                                            int32_t r8_47 = 0x10
                                            
                                            if (rbx_21 - 3 s<= 0)
                                                goto label_140a2b88d
                                            
                                            uint32_t rdi_66
                                            
                                            do
                                                int32_t rdx_99 = r8_47
                                                r8_47 += 1
                                                uint32_t rcx_149 = zx.d(*(arg1
                                                    + (zx.q(j_7.w + r15_15.w) << 1) + 0x20000))
                                                int32_t j_16 = j_7
                                                rdi_66 = rcx_149
                                                
                                                if (rcx_149 u<= r11_30)
                                                    rdi_66 = r11_30
                                                
                                                if (rcx_149 u<= r11_30)
                                                    j_16 = j_28
                                                
                                                if (rcx_149 u> r11_30)
                                                    r8_47 = 0x10
                                                
                                                j_28 = j_16
                                                j_7 += rdx_99 s>> 4
                                                r11_30 = rdi_66
                                            while (j_7 s< rbx_21 - 3)
                                            
                                            r14_14 = var_10160_3
                                            
                                            if (rdi_66 u<= 1)
                                                goto label_140a2b88d
                                            
                                            if (rdi_66 u> r15_15.d)
                                                i_5 = i_13
                                                break
                                            
                                            r10_27 = var_10150_3
                                            r15_15 = zx.q(r15_15.d - rdi_66)
                                        
                                        rdx_92 = var_10108_1
                                        i_5 = i_13
                                        
                                        if (r15_15.d u< rdi_27)
                                            break
                                        
                                        rbx_21 = var_101a4_5
                                        r8_41 = var_1018c_3
                                        rdi_56 = var_10178_1
                                    
                                    r11_25 = var_10148_2
                                    rdi_56 = var_10130_3
                                
                                if (arg10 == 1 && i_5 != 0 && rdx_65 - rdi_27 u< 0xffff)
                                    void* r10_31 = rax_186
                                    int64_t rsi_20 = *(r10_31 + 0x40000) - *(r10_31 + 0x40008)
                                    int32_t rbx_27 =
                                        *(r10_31 + (zx.q(*var_10178_1 * 0x9e3779b1) u>> 0x11 << 2))
                                    int32_t r13_8 = rdi_27 - rsi_20.d + rbx_27
                                    
                                    if (rdx_65 - r13_8 u<= 0xffff)
                                        int32_t i_19 = i_13
                                        
                                        do
                                            int32_t i_20 = i_19
                                            i_19 -= 1
                                            
                                            if (i_20 == 0)
                                                break
                                            
                                            int64_t r11_36 = *(r10_31 + 0x40008)
                                            uint64_t rcx_167 = zx.q(rbx_27)
                                            void* r10_32 = rcx_167 + r11_36
                                            
                                            if (*(rcx_167 + r11_36) != var_1018c_3)
                                                r11_25 = var_10148_2
                                            else
                                                int32_t* rdx_114 = r10_32 + 4
                                                void* rcx_168 = rsi_20 - rcx_167 + var_10178_1
                                                void* r8_55 = r15_1 - 5
                                                void* i_6 = var_10178_1 + 4
                                                
                                                if (rcx_168 u<= r15_1 - 5)
                                                    r8_55 = rcx_168
                                                
                                                if (var_10178_1 + 4 u>= r8_55 - 7)
                                                    goto label_140a2bc12
                                                
                                                uint64_t rcx_170 = *(var_10178_1 + 4) ^ *rdx_114
                                                uint32_t rax_427
                                                
                                                if (rcx_170 != 0)
                                                    uint64_t rflags_26
                                                    int32_t rax_435
                                                    rax_435, rflags_26 = _bit_scan_forward(rcx_170)
                                                    int32_t var_10158_4 = 0
                                                    rax_427 = rax_435 u>> 3
                                                else
                                                    i_6 = var_10178_1 + 0xc
                                                    rdx_114 = &rdx_114[2]
                                                label_140a2bc12:
                                                    
                                                    while (i_6 u< r8_55 - 7)
                                                        uint64_t rcx_172 = *i_6 ^ *rdx_114
                                                        
                                                        if (rcx_172 != 0)
                                                            uint64_t rflags_27
                                                            int32_t rcx_179
                                                            rcx_179, rflags_27 =
                                                                _bit_scan_forward(rcx_172)
                                                            rax_427 = i_6.d - (var_10178_1 + 4).d
                                                                + (rcx_179 u>> 3)
                                                            int32_t var_10158_5 = 0
                                                            goto label_140a2bc7b
                                                        
                                                        i_6 += 8
                                                        rdx_114 = &rdx_114[2]
                                                    
                                                    if (i_6 u< r8_55 - 3 && *rdx_114 == *i_6)
                                                        i_6 += 4
                                                        rdx_114 = &rdx_114[1]
                                                    
                                                    if (i_6 u< r8_55 - 1 && *rdx_114 == *i_6)
                                                        i_6 += 2
                                                        rdx_114 += 2
                                                    
                                                    if (i_6 u< r8_55 && *rdx_114 == *i_6)
                                                        i_6 += 1
                                                    
                                                    rax_427 = i_6.d - (var_10178_1 + 4).d
                                                
                                            label_140a2bc7b:
                                                int32_t rdx_115 = 0
                                                
                                                if (var_10150_3 != 0)
                                                    void* rax_430 =
                                                        zx.q(*(rax_186 + 0x40018)) - r10_32
                                                    int32_t rax_431 = rax_430.d + r11_36.d
                                                    
                                                    if (rax_430 + r11_36 s< 0)
                                                        rax_431 = 0
                                                    
                                                    if (rax_431 s< 0)
                                                        void* rcx_178 = var_10178_1 - 1
                                                        
                                                        while (*rcx_178
                                                                == *(r10_32 - var_10178_1 + rcx_178))
                                                            rcx_178 -= 1
                                                            rdx_115 -= 1
                                                            
                                                            if (1 - var_10178_1 + rcx_178
                                                                    s<= sx.q(rax_431))
                                                                break
                                                
                                                int32_t r9_49 = rax_427 + 4 - rdx_115
                                                
                                                if (r9_49 s<= var_101a4_5)
                                                    rdi_56 = var_10130_3
                                                    r11_25 = var_10148_2
                                                else
                                                    int64_t rax_434 = sx.q(rdx_115)
                                                    r11_25 = zx.q(r13_8) + r8_23 + rax_434
                                                    var_101a4_5 = r9_49
                                                    rdi_56 = rax_434 + var_10178_1
                                                    var_10148_2 = r11_25
                                                    var_10130_3 = rdi_56
                                            
                                            r10_31 = rax_186
                                            uint32_t rcx_181 =
                                                zx.d(*(r10_31 + (zx.q(rbx_27.w) << 1) + 0x20000))
                                            r13_8 -= rcx_181
                                            rbx_27 -= rcx_181
                                        while (rdx_65 - r13_8 u<= 0xffff)
                                
                                int32_t rdx_116 = var_101a4_5
                                
                                if (rdx_116 s> var_10198)
                                    if (arg11 != 0)
                                        int32_t rcx_182
                                        rcx_182.b = rdx_116 s<= 0x24
                                        int32_t rax_440
                                        rax_440.b = rdx_116 s> 0x12
                                        
                                        if ((rax_440 & rcx_182) != 0)
                                            rdx_116 = 0x12
                                    
                                    var_100d0_1:4.d = rdx_116
                                    var_100d0_1.d = rdi_56.d - r11_25.d
                                
                                rcx_183 = var_100d0_1
                            else
                                int32_t r14_9 = *r15_11
                                void* j_21 = r8_23 + rcx_67
                                int32_t i_8 = arg6
                                void* rdx_66 = *(arg1 + 0x40010)
                                
                                if (rdi_27 + 0x10000 u<= rdx_65)
                                    rdi_27 = rdx_65 - 0xffff
                                
                                int32_t i_7 = r15_11.d - r8_23.d
                                uint64_t rdi_28 = zx.q(arg1[0x10008])
                                int32_t r10_13 = r10_12 - r15_11.d
                                int64_t var_100d8_1 = 0
                                uint64_t rsi_11 = 3
                                int32_t var_101a8_2 = 3
                                int32_t rbx_14 = 0
                                void* j_22 = j_21
                                void* r11_14 = nullptr
                                void* var_10130_2 = rdx_66
                                int32_t var_10188_2 = 0
                                int32_t var_1018c_2 = r14_9
                                int32_t var_10138_2 = 0
                                
                                if (rdi_28.d u< i_7)
                                    void* r8_24 = r8_23 + rdi_28
                                    
                                    do
                                        uint64_t rcx_70 = zx.q(*r8_24 * 0x9e3779b1)
                                        r8_24 += 1
                                        uint64_t rcx_73 = zx.q(rdi_28.d - arg1[rcx_70 u>> 0x11])
                                        
                                        if (rcx_73 u> 0xffff)
                                            rcx_73 = 0xffff
                                        
                                        *(arg1 + (zx.q(rdi_28.w) << 1) + 0x20000) = rcx_73.w
                                        arg1[rcx_70 u>> 0x11] = rdi_28.d
                                        rdi_28 = zx.q(rdi_28.d + 1)
                                    while (rdi_28.d u< i_7)
                                    
                                    rdx_66 = var_10130_2
                                    r14_9 = var_1018c_2
                                    r15_11 = var_10178_1
                                
                                int64_t r10_14 = sx.q(r10_13)
                                int64_t var_10160_2 = r10_14
                                arg1[0x10008] = i_7
                                uint64_t rcx_75 = zx.q(*r15_11 * 0x9e3779b1) u>> 0x11
                                uint64_t r15_12 = zx.q(arg1[rcx_75])
                                void* rdi_30 = var_10178_1
                                void* var_10150_2 = rdi_30
                                
                                if (r15_12.d u>= rdi_27)
                                    var_10150_2 = rdi_30
                                    
                                    while (i_8 != 0)
                                        int32_t r9_15 = 0
                                        
                                        if (arg11 != 0 && rdx_65 - r15_12.d u< 8)
                                            goto label_140a2abe3
                                        
                                        bool cond:51_1
                                        
                                        if (r15_12.d u< var_10190_2)
                                            uint64_t rsi_12 = zx.q(r15_12.d)
                                            void* r11_17 = rdx_66 + rsi_12
                                            
                                            if (*(rdx_66 + rsi_12) != r14_9)
                                                goto label_140a2abdf
                                            
                                            void* rbx_16 = zx.q(arg1[0x10007]) + rdx_66
                                            void* rdx_70 = r11_17 + 4
                                            void* rcx_85 = zx.q(var_10190_2 - r15_12.d) + rdi_30
                                            void* r8_28 = r15_1 - 5
                                            
                                            if (rcx_85 u<= r15_1 - 5)
                                                r8_28 = rcx_85
                                            
                                            void* j_8 = rdi_30 + 4
                                            
                                            if (rdi_30 + 4 u>= r8_28 - 7)
                                                goto label_140a2a9fb
                                            
                                            uint64_t rax_215 = *rdx_70 ^ *(rdi_30 + 4)
                                            uint32_t rcx_86
                                            
                                            if (rax_215 != 0)
                                                var_10198 = 0
                                                uint64_t rflags_11
                                                int32_t rcx_92
                                                rcx_92, rflags_11 = _bit_scan_forward(rax_215)
                                                rcx_86 = rcx_92 u>> 3
                                            else
                                                j_8 = rdi_30 + 0xc
                                                rdx_70 += 8
                                            label_140a2a9fb:
                                                
                                                while (j_8 u< r8_28 - 7)
                                                    uint64_t rax_217 = *rdx_70 ^ *j_8
                                                    
                                                    if (rax_217 != 0)
                                                        uint64_t rflags_12
                                                        int32_t rax_237
                                                        rax_237, rflags_12 =
                                                            _bit_scan_forward(rax_217)
                                                        rcx_86 =
                                                            j_8.d - (rdi_30 + 4).d + (rax_237 u>> 3)
                                                        var_10198 = 0
                                                        goto label_140a2aa5b
                                                    
                                                    j_8 += 8
                                                    rdx_70 += 8
                                                
                                                if (j_8 u< r8_28 - 3 && *rdx_70 == *j_8)
                                                    j_8 += 4
                                                    rdx_70 += 4
                                                
                                                if (j_8 u< r8_28 - 1 && *rdx_70 == *j_8)
                                                    j_8 += 2
                                                    rdx_70 += 2
                                                
                                                if (j_8 u< r8_28 && *rdx_70 == *j_8)
                                                    j_8 += 1
                                                
                                                rcx_86 = j_8.d - (rdi_30 + 4).d
                                            
                                        label_140a2aa5b:
                                            int32_t r9_25 = rcx_86 + 4
                                            void* j_19 = sx.q(r9_25) + var_10178_1
                                            
                                            if (j_19 == r8_28 && r8_28 u< r15_1 - 5)
                                                void* j_23 = j_21
                                                void* j_9 = j_19
                                                
                                                if (j_19 u>= r15_1 - 0xc)
                                                    goto label_140a2aaa9
                                                
                                                uint64_t rax_224 = *j_21 ^ *j_19
                                                uint32_t rcx_87
                                                
                                                if (rax_224 != 0)
                                                    var_10198 = 0
                                                    uint64_t rflags_13
                                                    int32_t rcx_94
                                                    rcx_94, rflags_13 = _bit_scan_forward(rax_224)
                                                    rcx_87 = rcx_94 u>> 3
                                                else
                                                    j_9 = j_19 + 8
                                                    j_23 = j_21 + 8
                                                label_140a2aaa9:
                                                    
                                                    while (j_9 u< r15_1 - 0xc)
                                                        uint64_t rax_226 = *j_9 ^ *j_23
                                                        
                                                        if (rax_226 != 0)
                                                            uint64_t rflags_14
                                                            int32_t rax_239
                                                            rax_239, rflags_14 =
                                                                _bit_scan_forward(rax_226)
                                                            rcx_87 =
                                                                j_9.d - j_19.d + (rax_239 u>> 3)
                                                            var_10198 = 0
                                                            goto label_140a2ab14
                                                        
                                                        j_9 += 8
                                                        j_23 += 8
                                                    
                                                    if (j_9 u< r15_1 - 8 && *j_23 == *j_9)
                                                        j_9 += 4
                                                        j_23 += 4
                                                    
                                                    if (j_9 u< r15_1 - 6 && *j_23 == *j_9)
                                                        j_9 += 2
                                                        j_23 += 2
                                                    
                                                    if (j_9 u< r15_1 - 5 && *j_23 == *j_9)
                                                        j_9 += 1
                                                    
                                                    rcx_87 = j_9.d - j_19.d
                                                
                                            label_140a2ab14:
                                                r9_25 += rcx_87
                                            
                                            int32_t rdx_71 = 0
                                            
                                            if (var_10160_2 != 0)
                                                int32_t rbx_17 = rbx_16.d - r11_17.d
                                                
                                                if (rbx_16 - r11_17 s< 0)
                                                    rbx_17 = 0
                                                
                                                if (rbx_17 s< 0)
                                                    void* rcx_88 = var_10178_1 - 1
                                                    
                                                    while (*rcx_88
                                                            == *(r11_17 - var_10178_1 + rcx_88))
                                                        rcx_88 -= 1
                                                        rdx_71 -= 1
                                                        
                                                        if (rcx_88 + 1 - var_10178_1
                                                                s<= sx.q(rbx_17))
                                                            break
                                            
                                            r9_15 = r9_25 - rdx_71
                                            
                                            if (r9_15 s> var_101a8_2)
                                                int64_t rax_235 = sx.q(rdx_71)
                                                var_101a8_2 = r9_15
                                                rsi_11 = zx.q(r9_15)
                                                var_10150_2 = rax_235 + var_10178_1
                                                var_10148_2 = r8_23 + rsi_12 + rax_235
                                                goto label_140a2abec
                                            
                                            rbx_14 = var_10188_2
                                        label_140a2abdf:
                                            rsi_11 = zx.q(var_101a8_2)
                                        label_140a2abe3:
                                            cond:51_1 = r9_15 != rsi_11.d
                                        label_140a2abe6:
                                            
                                            if (not(cond:51_1))
                                                goto label_140a2abec
                                            
                                        label_140a2ac83:
                                            int32_t* r8_33 = arg1
                                            uint64_t r9_27 = zx.q(r15_12.w)
                                            
                                            if (*(r8_33 + (r9_27 << 1) + 0x20000) != 1
                                                    || rbx_14 != 0)
                                                goto label_140a2ad78
                                            
                                            int32_t r14_12 = (r15_12 - 1).d
                                            int32_t r11_20
                                            
                                            if (var_10138_2 != 0)
                                                if (var_10138_2 != 2)
                                                    goto label_140a2ad78
                                                
                                                r11_20 = var_1018c_2
                                            label_140a2ada1:
                                                
                                                if (r14_12 u< rdi_27)
                                                    goto label_140a2ad78
                                                
                                                uint64_t rdi_43 = zx.q(var_10190_2)
                                                
                                                if (rdi_43.d - r14_12 - 1 u< 3)
                                                    goto label_140a2ad78
                                                
                                                void* r10_21 = r8_23
                                                
                                                if (r14_12 u< rdi_43.d)
                                                    r10_21 = var_10130_2
                                                
                                                void* j_26 = r10_21 + zx.q(r14_12)
                                                
                                                if (*j_26 != r11_20)
                                                    goto label_140a2ad78
                                                
                                                uint64_t r11_21 = zx.q(r8_33[0x10007])
                                                void* r8_34 = var_10130_2 + rdi_43
                                                uint64_t r15_13 = zx.q(var_1018c_2)
                                                void* j_10 = j_26 + 4
                                                void* j_29 = var_10130_2 + r11_21
                                                
                                                if (r14_12 u>= rdi_43.d)
                                                    r8_34 = r15_1 - 5
                                                
                                                uint64_t rax_260 = zx.q(r15_13.d) * 0x100000001
                                                int32_t rcx_102
                                                
                                                if (j_26 + 4 u< r8_34 - 7)
                                                    do
                                                        uint64_t rdx_80 = *j_10 ^ rax_260
                                                        
                                                        if (rdx_80 != 0)
                                                            var_10198 = 0
                                                            uint64_t rflags_16
                                                            int32_t rax_266
                                                            rax_266, rflags_16 =
                                                                _bit_scan_forward(rdx_80)
                                                            rcx_102 =
                                                                j_10.d - (j_26 + 4).d + (rax_266 u>> 3)
                                                            goto label_140a2ae43
                                                        
                                                        j_10 += 8
                                                    while (j_10 u< r8_34 - 7)
                                                
                                                if (j_10 u< r8_34)
                                                    while (*j_10 == rax_260.b)
                                                        j_10 += 1
                                                        rax_260 u>>= 8
                                                        
                                                        if (j_10 u>= r8_34)
                                                            break
                                                
                                                rcx_102 = j_10.d - (j_26 + 4).d
                                            label_140a2ae43:
                                                uint64_t r9_29 = zx.q(var_10190_2)
                                                void* rbx_19 = zx.q(rcx_102) + 4
                                                
                                                if (r14_12 u< r9_29.d && rbx_19 + j_26 == r8_34)
                                                    uint64_t rax_264 = (zx.q(rbx_19.d) & 3) << 3
                                                    uint64_t rax_265
                                                    
                                                    if (rax_264 != 0)
                                                        rax_265 = zx.q(rol.d(r15_13.d, rax_264.b))
                                                    else
                                                        rax_265 = r15_13
                                                    
                                                    void* j_11 = j_21
                                                    uint64_t rax_269 = rax_265 * 0x100000001
                                                    int32_t rcx_105
                                                    
                                                    if (j_21 u< r15_1 - 0xc)
                                                        do
                                                            uint64_t rdx_82 = rax_269 ^ *j_11
                                                            
                                                            if (rdx_82 != 0)
                                                                var_10198 = 0
                                                                uint64_t rflags_17
                                                                int32_t rax_283
                                                                rax_283, rflags_17 =
                                                                    _bit_scan_forward(rdx_82)
                                                                rcx_105 =
                                                                    j_11.d - j_21.d + (rax_283 u>> 3)
                                                                goto label_140a2aef5
                                                            
                                                            j_11 += 8
                                                        while (j_11 u< r15_1 - 0xc)
                                                    
                                                    if (j_11 u< r15_1 - 5)
                                                        while (*j_11 == rax_269.b)
                                                            j_11 += 1
                                                            rax_269 u>>= 8
                                                            
                                                            if (j_11 u>= r15_1 - 5)
                                                                break
                                                    
                                                    rcx_105 = j_11.d - j_21.d
                                                label_140a2aef5:
                                                    rbx_19 += zx.q(rcx_105)
                                                
                                                var_10198 = r15_13.d
                                                void* j_25 = j_21
                                                void* j_17 = j_26
                                                
                                                if (r14_12 u< r9_29.d)
                                                    j_25 = j_29
                                                
                                                if (j_26 u>= j_25 + 4)
                                                    void* j_12
                                                    
                                                    do
                                                        j_12 = j_17 - 4
                                                        
                                                        if (*(j_17 - 4) != r15_13.d)
                                                            break
                                                        
                                                        j_17 = j_12
                                                    while (j_12 u>= j_25 + 4)
                                                
                                                if (j_17 u> j_25)
                                                    char* rdi_46 = &var_10198:3 - j_17
                                                    void* j_24
                                                    
                                                    do
                                                        j_24 = j_17 - 1
                                                        
                                                        if (*j_24 != *(rdi_46 + j_17))
                                                            break
                                                        
                                                        j_17 = j_24
                                                    while (j_24 u> j_25)
                                                
                                                uint64_t rdi_49 = zx.q(j_26.d - j_17.d)
                                                
                                                if (r14_12 u>= r9_29.d && j_26 - rdi_49 == j_21
                                                        && r11_21.d u< r9_29.d)
                                                    int32_t r8_37 = r15_13.d
                                                    uint64_t rax_275 =
                                                        (zx.q(neg.d(rdi_49.d)) & 3) << 3
                                                    
                                                    if (rax_275 != 0)
                                                        r8_37 = rol.d(r8_37, rax_275.b)
                                                    
                                                    int32_t rax_276 = sub_140a2c5c0(
                                                        r9_29 + var_10130_2, j_29, r8_37)
                                                    r9_29 = zx.q(var_10190_2)
                                                    rdi_49 += zx.q(rax_276)
                                                
                                                r15_12 = zx.q(rdi_27)
                                                int32_t rax_279 = r14_12 - rdi_49.d
                                                
                                                if (rax_279 u> r15_12.d)
                                                    r15_12 = zx.q(rax_279)
                                                
                                                void* rdx_87 = zx.q(r14_12 - r15_12.d) + rbx_19
                                                
                                                if (rdx_87 u< r12_6 || rbx_19 u> r12_6)
                                                    r10_14 = var_10160_2
                                                    
                                                    if (r9_29.d - r15_12.d - 1 u< 3)
                                                        r15_12 = zx.q(r9_29.d)
                                                        rsi_11 = zx.q(var_101a8_2)
                                                        rbx_14 = var_10188_2
                                                    else if (r10_14 != 0)
                                                        rsi_11 = zx.q(var_101a8_2)
                                                        rbx_14 = var_10188_2
                                                    else
                                                        rsi_11 = sx.q(var_101a8_2)
                                                        void* rcx_110 = r12_6
                                                        
                                                        if (rdx_87 u< r12_6)
                                                            rcx_110 = rdx_87
                                                        
                                                        if (rsi_11 u< rcx_110)
                                                            if (var_10178_1 - r8_23 - zx.q(r15_12.d)
                                                                s> 0xffff)
                                                            label_140a2b08e:
                                                                r14_9 = var_1018c_2
                                                                i_8 -= 1
                                                                break
                                                                break
                                                            
                                                            rsi_11 = zx.q(rcx_110.d)
                                                            var_101a8_2 = rcx_110.d
                                                            var_10150_2 = var_10178_1
                                                            var_10148_2 = r8_23 + r15_12
                                                        
                                                        uint32_t rcx_113 = zx.d(*(arg1
                                                            + (zx.q(r15_12.w) << 1) + 0x20000))
                                                        
                                                        if (rcx_113 u> r15_12.d)
                                                            goto label_140a2b08e
                                                        
                                                        r15_12 = zx.q(r15_12.d - rcx_113)
                                                        rbx_14 = var_10188_2
                                                else
                                                    r10_14 = var_10160_2
                                                    r15_12 = zx.q(r14_12 - r12_6.d + rbx_19.d)
                                                    
                                                    if (r9_29.d - r15_12.d - 1 u< 3)
                                                        r15_12 = zx.q(r9_29.d)
                                                    
                                                    rsi_11 = zx.q(var_101a8_2)
                                                    rbx_14 = var_10188_2
                                            else
                                                r11_20 = var_1018c_2
                                                int32_t rdi_41
                                                rdi_41.b = r11_20.b == (r11_20 u>> 0x18).b
                                                int32_t rcx_96
                                                rcx_96.b = zx.d(r11_20.w) == r11_20 u>> 0x10
                                                
                                                if ((rcx_96 & rdi_41) != 0)
                                                    var_10138_2 = 2
                                                    void* j_13 = var_10178_1 + 4
                                                    uint64_t rax_249 = zx.q(r11_20) * 0x100000001
                                                    
                                                    if (var_10178_1 + 4 u< r15_1 - 0xc)
                                                        do
                                                            uint64_t rdx_77 = rax_249 ^ *j_13
                                                            
                                                            if (rdx_77 != 0)
                                                                r8_33 = arg1
                                                                var_10198 = 0
                                                                uint64_t rflags_15
                                                                int32_t rax_250
                                                                rax_250, rflags_15 =
                                                                    _bit_scan_forward(rdx_77)
                                                                r12_6 = zx.q(j_13.d
                                                                    - (var_10178_1 + 4).d
                                                                    + (rax_250 u>> 3)) + 4
                                                                goto label_140a2ada1
                                                            
                                                            j_13 += 8
                                                        while (j_13 u< r15_1 - 0xc)
                                                    
                                                    if (j_13 u< r15_1 - 5)
                                                        while (*j_13 == rax_249.b)
                                                            j_13 += 1
                                                            rax_249 u>>= 8
                                                            
                                                            if (j_13 u>= r15_1 - 5)
                                                                break
                                                    
                                                    r8_33 = arg1
                                                    r12_6 = zx.q(j_13.d - (var_10178_1 + 4).d) + 4
                                                    goto label_140a2ada1
                                                
                                                var_10138_2 = 1
                                            label_140a2ad78:
                                                r10_14 = var_10160_2
                                                r9_27.w += rbx_14.w
                                                r15_12 = zx.q(r15_12.d -
                                                    zx.d(*(r8_33 + (zx.q(r9_27.w) << 1) + 0x20000)))
                                        else
                                            int64_t rcx_77 = sx.q(rsi_11.d)
                                            void* rdx_68 = rdi_30 - 1
                                            int32_t* r11_16 = zx.q(r15_12.d) + r8_23
                                            
                                            if (*(rcx_77 + rdx_68)
                                                    != *(r11_16 - r10_14 + rcx_77 - 1) || *r11_16 != r14_9)
                                                goto label_140a2abe3
                                            
                                            int32_t r10_15
                                            
                                            if (r10_14 == 0)
                                                r10_15 = 0
                                            else
                                                int32_t rax_197 = j_21.d - r11_16.d
                                                r10_15 = 0
                                                
                                                if (j_21 - r11_16 s< 0)
                                                    rax_197 = 0
                                                
                                                if (rax_197 s< 0)
                                                    while (*rdx_68 == *(r11_16 - rdi_30 + rdx_68))
                                                        rdx_68 -= 1
                                                        r10_15 -= 1
                                                        
                                                        if (1 - var_10178_1 + rdx_68
                                                                s<= sx.q(rax_197))
                                                            break
                                                    
                                                    rdi_30 = var_10178_1
                                            
                                            void* rdx_69 = &r11_16[1]
                                            void* j_14 = rdi_30 + 4
                                            
                                            if (rdi_30 + 4 u>= r15_1 - 0xc)
                                                goto label_140a2a8dd
                                            
                                            uint64_t rax_201 = *(rdi_30 + 4) ^ *rdx_69
                                            uint32_t r9_18
                                            
                                            if (rax_201 != 0)
                                                uint64_t rflags_9
                                                int32_t r9_21
                                                r9_21, rflags_9 = _bit_scan_forward(rax_201)
                                                var_10198 = 0
                                                r9_18 = r9_21 u>> 3
                                            else
                                                j_14 = rdi_30 + 0xc
                                                rdx_69 += 8
                                            label_140a2a8dd:
                                                
                                                while (j_14 u< r15_1 - 0xc)
                                                    uint64_t rax_203 = *j_14 ^ *rdx_69
                                                    
                                                    if (rax_203 != 0)
                                                        uint64_t rflags_10
                                                        int32_t r9_22
                                                        r9_22, rflags_10 =
                                                            _bit_scan_forward(rax_203)
                                                        r9_18 =
                                                            (r9_22 u>> 3) + j_14.d - (rdi_30 + 4).d
                                                        var_10198 = 0
                                                        goto label_140a2a945
                                                    
                                                    j_14 += 8
                                                    rdx_69 += 8
                                                
                                                if (j_14 u< r15_1 - 8 && *rdx_69 == *j_14)
                                                    j_14 += 4
                                                    rdx_69 += 4
                                                
                                                if (j_14 u< r15_1 - 6 && *rdx_69 == *j_14)
                                                    j_14 += 2
                                                    rdx_69 += 2
                                                
                                                if (j_14 u< r15_1 - 5 && *rdx_69 == *j_14)
                                                    j_14 += 1
                                                
                                                r9_18 = j_14.d - (rdi_30 + 4).d
                                            
                                        label_140a2a945:
                                            cond:51_1 = r9_18 - r10_15 + 4 != rsi_11.d
                                            
                                            if (r9_18 - r10_15 + 4 s<= rsi_11.d)
                                                goto label_140a2abe6
                                            
                                            int64_t rax_209 = sx.q(r10_15)
                                            rsi_11 = zx.q(r9_18 - r10_15 + 4)
                                            var_101a8_2 = r9_18 - r10_15 + 4
                                            var_10150_2 = rax_209 + var_10178_1
                                            var_10148_2 = r11_16 + rax_209
                                        label_140a2abec:
                                            rbx_14 = var_10188_2
                                            
                                            if ((r15_12 + rsi_11).d u> rdx_65)
                                                goto label_140a2ac83
                                            
                                            int32_t r10_17 = (rsi_11 - 3).d
                                            int32_t r9_26 = 0
                                            uint32_t r11_19 = 1
                                            int32_t r8_30 = 0x10
                                            
                                            if (r10_17 s<= 0)
                                                goto label_140a2ac83
                                            
                                            int32_t rax_244
                                            uint32_t rdi_40
                                            
                                            do
                                                int32_t rdx_72 = r8_30
                                                r8_30 += 1
                                                uint32_t rcx_97 = zx.d(*(arg1
                                                    + (zx.q(r9_26.w + r15_12.w) << 1) + 0x20000))
                                                rax_244 = r9_26
                                                rdi_40 = rcx_97
                                                
                                                if (rcx_97 u<= r11_19)
                                                    rdi_40 = r11_19
                                                
                                                if (rcx_97 u<= r11_19)
                                                    rax_244 = rbx_14
                                                
                                                if (rcx_97 u> r11_19)
                                                    r8_30 = 0x10
                                                
                                                rbx_14 = rax_244
                                                r9_26 += rdx_72 s>> 4
                                                r11_19 = rdi_40
                                            while (r9_26 s< r10_17)
                                            
                                            j_21 = j_22
                                            r14_9 = var_1018c_2
                                            var_10188_2 = rax_244
                                            
                                            if (rdi_40 u<= 1)
                                                goto label_140a2ac83
                                            
                                            if (rdi_40 u> r15_12.d)
                                                i_8 -= 1
                                                break
                                            
                                            r10_14 = var_10160_2
                                            r15_12 = zx.q(r15_12.d - rdi_40)
                                        rdx_66 = var_10130_2
                                        r14_9 = var_1018c_2
                                        i_8 -= 1
                                        
                                        if (r15_12.d u< rdi_27)
                                            break
                                        
                                        rdi_30 = var_10178_1
                                    
                                    r11_14 = var_10148_2
                                    rdi_30 = var_10150_2
                                
                                if (arg10 == 1 && i_8 != 0 && rdx_65 - rdi_27 u< 0xffff)
                                    void* r10_23 = rax_186
                                    int64_t rsi_14 = *(r10_23 + 0x40000) - *(r10_23 + 0x40008)
                                    int32_t rbx_20 = *(r10_23 + (rcx_75 << 2))
                                    int32_t r13_5 = rdi_27 - rsi_14.d + rbx_20
                                    
                                    while (rdx_65 - r13_5 u<= 0xffff)
                                        int32_t i_15 = i_8
                                        i_8 -= 1
                                        
                                        if (i_15 == 0)
                                            break
                                        
                                        int64_t r11_22 = *(r10_23 + 0x40008)
                                        uint64_t rcx_114 = zx.q(rbx_20)
                                        void* r10_24 = r11_22 + rcx_114
                                        
                                        if (*(r11_22 + rcx_114) != r14_9)
                                            r11_14 = var_10148_2
                                        else
                                            int32_t* rdx_89 = r10_24 + 4
                                            void* rcx_115 = rsi_14 - rcx_114 + var_10178_1
                                            void* r8_39 = r15_1 - 5
                                            
                                            if (rcx_115 u<= r15_1 - 5)
                                                r8_39 = rcx_115
                                            
                                            void* i_9 = var_10178_1 + 4
                                            
                                            if (var_10178_1 + 4 u>= r8_39 - 7)
                                                goto label_140a2b17a
                                            
                                            uint64_t rax_301 = *(var_10178_1 + 4) ^ *rdx_89
                                            uint32_t rcx_116
                                            
                                            if (rax_301 != 0)
                                                uint64_t rflags_18
                                                int32_t rcx_118
                                                rcx_118, rflags_18 = _bit_scan_forward(rax_301)
                                                var_10198 = 0
                                                rcx_116 = rcx_118 u>> 3
                                            else
                                                i_9 = var_10178_1 + 0xc
                                                rdx_89 = &rdx_89[2]
                                            label_140a2b17a:
                                                
                                                while (i_9 u< r8_39 - 7)
                                                    uint64_t rax_303 = *i_9 ^ *rdx_89
                                                    
                                                    if (rax_303 != 0)
                                                        uint64_t rflags_19
                                                        int32_t rax_316
                                                        rax_316, rflags_19 =
                                                            _bit_scan_forward(rax_303)
                                                        var_10198 = 0
                                                        rcx_116 = i_9.d + (rax_316 u>> 3)
                                                            - (var_10178_1 + 4).d
                                                        goto label_140a2b1e7
                                                    
                                                    i_9 += 8
                                                    rdx_89 = &rdx_89[2]
                                                
                                                if (i_9 u< r8_39 - 3 && *rdx_89 == *i_9)
                                                    i_9 += 4
                                                    rdx_89 = &rdx_89[1]
                                                
                                                if (i_9 u< r8_39 - 1 && *rdx_89 == *i_9)
                                                    i_9 += 2
                                                    rdx_89 += 2
                                                
                                                if (i_9 u< r8_39 && *rdx_89 == *i_9)
                                                    i_9 += 1
                                                
                                                rcx_116 = i_9.d - (var_10178_1 + 4).d
                                            
                                        label_140a2b1e7:
                                            int32_t rdx_90 = 0
                                            
                                            if (var_10160_2 != 0)
                                                void* rax_311 = zx.q(*(rax_186 + 0x40018)) - r10_24
                                                int32_t rax_312 = rax_311.d + r11_22.d
                                                
                                                if (rax_311 + r11_22 s< 0)
                                                    rax_312 = 0
                                                
                                                if (rax_312 s< 0)
                                                    void* rcx_117 = var_10178_1 - 1
                                                    
                                                    while (*rcx_117
                                                            == *(r10_24 - var_10178_1 + rcx_117))
                                                        rcx_117 -= 1
                                                        rdx_90 -= 1
                                                        
                                                        if (rcx_117 + 1 - var_10178_1
                                                                s<= sx.q(rax_312))
                                                            break
                                            
                                            int32_t r9_32 = rcx_116 + 4 - rdx_90
                                            
                                            if (r9_32 s<= var_101a8_2)
                                                rdi_30 = var_10150_2
                                                r11_14 = var_10148_2
                                            else
                                                int64_t rax_315 = sx.q(rdx_90)
                                                r11_14 = zx.q(r13_5) + r8_23 + rax_315
                                                var_101a8_2 = r9_32
                                                rdi_30 = rax_315 + var_10178_1
                                                var_10148_2 = r11_14
                                                var_10150_2 = rdi_30
                                        
                                        r10_23 = rax_186
                                        uint32_t rcx_119 =
                                            zx.d(*(r10_23 + (zx.q(rbx_20.w) << 1) + 0x20000))
                                        r13_5 -= rcx_119
                                        rbx_20 -= rcx_119
                                
                                int32_t rdx_91 = var_101a8_2
                                
                                if (rdx_91 s> 3)
                                    if (arg11 != 0)
                                        int32_t rcx_120
                                        rcx_120.b = rdx_91 s<= 0x24
                                        int32_t rax_322
                                        rax_322.b = rdx_91 s> 0x12
                                        
                                        if ((rax_322 & rcx_120) != 0)
                                            rdx_91 = 0x12
                                    
                                    var_100d8_1:4.d = rdx_91
                                    var_100d8_1.d = rdi_30.d - r11_14.d
                                
                                rcx_183 = var_100d8_1
                            
                            r13_2 = var_10170_2
                            uint32_t rax_442 = (rcx_183 u>> 0x20).d
                            r10_34 = rcx_183.d
                            rdx_117 = rax_442
                            
                            if (rax_442 == 0)
                                r11_13 = var_10154_1
                                r12_6 = nullptr
                            else
                                if (sx.q(rax_442) u<= rcx_2)
                                    rdx_117 = rax_442
                                
                                if (sx.q(rax_442) u> rcx_2 || rax_442 + r13_2 s>= 0x1000)
                                    r11_13 = r13_2 + 1
                                    var_10154_1 = r11_13
                                    break
                                
                                int32_t r8_58 = *(&var_1007c + rcx_66)
                                int32_t r9_51 = r8_58
                                
                                if (r8_58 s>= 0xf)
                                    r9_51 = r8_58 + 1 + (r8_58 - 0xf) s/ 0xff
                                
                                int32_t rax_451 = r8_58 + 1
                                int32_t r11_39 = rax_451
                                
                                if (rax_451 s>= 0xf)
                                    rax_451 = r8_58 + 2 + (rax_451 - 0xf) s/ 0xff
                                
                                int32_t rax_453 = rax_451 - r9_51 + *rdx_62
                                int64_t rdx_127 = (var_10100_2 + 1) * 2
                                
                                if (rax_453 s< var_10088[rdx_127 * 2])
                                    *(&var_10080 + (rdx_127 << 3)) = 1
                                    *(&var_10084 + (rdx_127 << 3)) = 0
                                    *(&var_1007c + (rdx_127 << 3)) = r11_39
                                    var_10088[rdx_127 * 2] = rax_453
                                
                                int32_t rsi_21 = r8_58
                                
                                if (r8_58 s>= 0xf)
                                    rsi_21 = r8_58 + 1 + (r8_58 - 0xf) s/ 0xff
                                
                                int32_t rax_456 = r11_39 + 1
                                
                                if (r11_39 + 1 s>= 0xf)
                                    rax_456 = r8_58 + 3 + (r11_39 - 0xe) s/ 0xff
                                
                                int32_t r9_54 = *rdx_62
                                int64_t rdx_137 = (var_10100_2 + 2) * 2
                                void* rsi_23 = rdx_62
                                int32_t rax_461 = rax_456 - rsi_21 + r9_54
                                
                                if (rax_461 s< var_10088[rdx_137 * 2])
                                    *(&var_10080 + (rdx_137 << 3)) = 1
                                    *(&var_10084 + (rdx_137 << 3)) = 0
                                    *(&var_1007c + (rdx_137 << 3)) = r11_39 + 1
                                    var_10088[rdx_137 * 2] = rax_461
                                    r9_54 = *rsi_23
                                
                                int32_t rbx_29 = r8_58
                                
                                if (r8_58 s>= 0xf)
                                    rbx_29 = r8_58 + 1 + (r8_58 - 0xf) s/ 0xff
                                
                                int32_t rax_464 = r11_39 + 2
                                
                                if (r11_39 + 2 s>= 0xf)
                                    rax_464 = r8_58 + 4 + (r11_39 - 0xd) s/ 0xff
                                
                                int64_t rdx_147 = (var_10100_2 + 3) * 2
                                int32_t rax_469 = rax_464 - rbx_29 + r9_54
                                
                                if (rax_469 s< var_10088[rdx_147 * 2])
                                    *(&var_10080 + (rdx_147 << 3)) = 1
                                    *(&var_10084 + (rdx_147 << 3)) = 0
                                    *(&var_1007c + (rdx_147 << 3)) = r11_39 + 2
                                    var_10088[rdx_147 * 2] = rax_469
                                
                                int64_t r12_12 = sx.q(rcx_183:4.d)
                                int64_t r14_19 = 4
                                r11_13 = var_10154_1
                                
                                if (4 s<= r12_12)
                                    int64_t rdx_148 = rcx_66
                                    int32_t r8_59 = r13_2 + 4
                                    int32_t rax_470 = r13_2
                                    void* r10_37 = &var_10044 + rdx_148
                                    int32_t r13_9 = 0xffffffed - rax_470
                                    int32_t r15_21 = neg.d(rax_470)
                                    
                                    do
                                        int32_t rdx_163
                                        int32_t rbx_31
                                        int32_t r9_55
                                        
                                        if (*(&var_10080 + rdx_148) != 1)
                                            rbx_31 = r15_21 + r8_59
                                            r9_55 = 0
                                            int32_t rdx_159 = 3
                                            
                                            if (rbx_31 s>= 0x13)
                                                int32_t rdi_82 = r8_59 + r13_9
                                                int32_t temp36_1
                                                int32_t temp37_1
                                                temp36_1:temp37_1 = muls.dp.d(0x80808081, rdi_82)
                                                int32_t rdx_162 = (temp36_1 + rdi_82) s>> 7
                                                rdx_159 = rdx_162 + (rdx_162 u>> 0x1f) + 4
                                            
                                            rdx_163 = rdx_159 + *rsi_23
                                        else
                                            r9_55 = *(&var_1007c + rdx_148)
                                            int32_t rsi_24
                                            
                                            if (rax_470 s<= r9_55)
                                                rsi_24 = 0
                                            else
                                                rsi_24 = (&var_10088)[sx.q(rax_470 - r9_55)][0]
                                            
                                            int32_t r11_40 = r9_55
                                            
                                            if (r9_55 s>= 0xf)
                                                r11_40 = r9_55 + 1 + (r9_55 - 0xf) s/ 0xff
                                            
                                            int32_t r11_42 = r11_40 + 3
                                            rbx_31 = r15_21 + r8_59
                                            
                                            if (rbx_31 s>= 0x13)
                                                int32_t rdi_81 = r8_59 + r13_9
                                                int32_t temp40_1
                                                int32_t temp41_1
                                                temp40_1:temp41_1 = muls.dp.d(0x80808081, rdi_81)
                                                int32_t rdx_157 = (temp40_1 + rdi_81) s>> 7
                                                r11_42 += rdx_157 + (rdx_157 u>> 0x1f) + 1
                                            
                                            rdx_163 = r11_42 + rsi_24
                                            rsi_23 = rdx_62
                                            r11_13 = var_10154_1
                                        
                                        if (r8_59 s> r11_13 + 3
                                                || rdx_163 s<= *(r10_37 - 4) - arg11)
                                            if (r14_19 == r12_12)
                                                if (r11_13 s< r8_59)
                                                    r11_13 = r8_59
                                                
                                                var_10154_1 = r11_13
                                            
                                            *(r10_37 + 4) = rbx_31
                                            *r10_37 = rcx_183.d
                                            *(r10_37 + 8) = r9_55
                                            *(r10_37 - 4) = rdx_163
                                        
                                        rax_470 = var_10170_2
                                        r8_59 += 1
                                        rdx_148 = rcx_66
                                        r14_19 += 1
                                        r10_37 += 0x10
                                    while (r14_19 s<= r12_12)
                                    
                                    r13_2 = rax_470
                                
                                r12_6 = nullptr
                                int64_t rcx_184 = sx.q(r11_13)
                                void* rdx_164 = &(&var_10088)[rcx_184]
                                int64_t rcx_186 = (rcx_184 + 1) * 2
                                *(&var_10080 + (rcx_186 << 3)) = 1
                                *(&var_10084 + (rcx_186 << 3)) = 0
                                *(&var_1007c + (rcx_186 << 3)) = 1
                                int32_t rax_486 = *rdx_164 + 1
                                *(&var_10070 + (rcx_186 << 3)) = 1
                                var_10088[rcx_186 * 2] = rax_486
                                *(&var_10074 + (rcx_186 << 3)) = 0
                                *(&var_1006c + (rcx_186 << 3)) = 2
                                int32_t rax_488 = *rdx_164 + 2
                                *(&var_10060 + (rcx_186 << 3)) = 1
                                var_10078[rcx_186 * 2] = rax_488
                                *(&var_10064 + (rcx_186 << 3)) = 0
                                *(&var_1005c + (rcx_186 << 3)) = 3
                                var_10068[rcx_186 * 2] = *rdx_164 + 3
                    else if (rax_184 s> rdx_63 || *(&var_10048 + rcx_66) s>= rdx_63 + 3)
                        goto label_140a2a681
                    r13_2 += 1
                    rcx_65 = var_10100_2 + 1
                    var_10170_2 = r13_2
                    var_10100_2 = rcx_65
                    
                    if (r13_2 s>= r11_13)
                        goto label_140a2c129
            
            int64_t rax_494 = sx.q(r13_2) * 2
            int32_t rdi_83 = *(&var_10080 + (rax_494 << 3))
            int32_t r8_60 = *(&var_10084 + (rax_494 << 3))
            *(&var_10080 + (rax_494 << 3)) = rdx_117
            int32_t rdx_165 = rdi_83
            *(&var_10084 + (rax_494 << 3)) = r10_34
            
            while (rdi_83 s<= r13_2)
                r13_2 -= rdi_83
                int64_t rcx_189 = sx.q(r13_2) * 2
                rdi_83 = *(&var_10080 + (rcx_189 << 3))
                int32_t rax_495 = *(&var_10084 + (rcx_189 << 3))
                *(&var_10080 + (rcx_189 << 3)) = rdx_165
                rdx_165 = rdi_83
                *(&var_10084 + (rcx_189 << 3)) = r8_60
                r8_60 = rax_495
            
            int32_t rsi_25 = 0
            
            if (r11_13 s<= 0)
                r13 = var_10140
                goto label_140a2c36c
            
            while (true)
                rdi = var_10118
                int64_t rax_497 = sx.q(rsi_25) * 2
                int64_t rbx_32 = sx.q(*(&var_10080 + (rax_497 << 3)))
                
                if (rbx_32.d != 1)
                    r15_9 = var_10110
                    char* r10_38 = var_10110
                    char* r14_20 = var_10110
                    int16_t r11_44 = var_10140.w - (*(&var_10084 + (rax_497 << 3))).w
                    void* r12_14 = &var_10110[1]
                    void* r8_62 = var_10140 - rdi
                    
                    if (arg8 != 0 && r12_14 + 8 + r8_62 u/ 0xff + r8_62 u> rax_2)
                        r14 = arg8
                        break
                    
                    if (r8_62 u< 0xf)
                        *r10_38 = r8_62.b << 4
                    else
                        void* r9_56 = r8_62 - 0xf
                        *r10_38 = 0xf0
                        
                        if (r9_56 u>= 0xff)
                            void* rdi_84 = r12_14
                            uint64_t count_1 = r9_56 u/ 0xff
                            r12_14 += count_1
                            __builtin_memset(rdi_84, 0xff, count_1)
                            rdi = var_10118
                            r9_56 = r9_56 u% 0xff
                        
                        *r12_14 = r9_56.b
                        r12_14 += 1
                    
                    void* rdx_170 = r8_62 + r12_14
                    int64_t* rcx_192 = rdi - r12_14
                    
                    do
                        *r12_14 = *(rcx_192 + r12_14)
                        r12_14 += 8
                    while (r12_14 u< rdx_170)
                    
                    r9 = rdx_170 + 2
                    var_10110 = r9
                    *rdx_170 = var_10140.w - r11_44
                    
                    if (arg8 != 0 && &r9[6 + (rbx_32 - 4) u/ 0xff] u> rax_2)
                        rdi = var_10118
                        r14 = arg8
                        break
                    
                    char rax_510 = *r14_20
                    
                    if (rbx_32 - 4 u< 0xf)
                        *r10_38 = rax_510 + (rbx_32 - 4).b
                    else
                        int64_t rcx_194 = rbx_32 - 0x13
                        *r10_38 = rax_510 + 0xf
                        
                        if (rcx_194 u>= 0x1fe)
                            uint64_t i_17 = rcx_194 u/ 0x1fe
                            rcx_194 = rcx_194 u% 0x1fe
                            uint64_t i_10
                            
                            do
                                *r9 = 0xffff
                                r9 = &r9[2]
                                i_10 = i_17
                                i_17 -= 1
                            while (i_10 != 1)
                        
                        if (rcx_194 u>= 0xff)
                            rcx_194 -= 0xff
                            *r9 = 0xff
                            r9 = &r9[1]
                        
                        *r9 = rcx_194.b
                        r9 = &r9[1]
                        var_10110 = r9
                    
                    r11_13 = var_10154_1
                    r13 = var_10140 + rbx_32
                    rdi = r13
                    var_10118 = r13
                else
                    r9 = var_10110
                    r13 = var_10140 + 1
                
                rsi_25 += rbx_32.d
                var_10140 = r13
                
                if (rsi_25 s>= r11_13)
                    goto label_140a2c374
            
            break
        
        rdi = var_10118
        r14 = arg8
        r15_9 = var_10110
        char* r10_10 = var_10110
        char* rsi_10 = var_10110
        void* r12_5 = &var_10110[1]
        void* r8_21 = r13_1 - rdi
        
        if (r14 != 0 && r12_5 + 8 + r8_21 u/ 0xff + r8_21 u> rax_2)
            break
        
        if (r8_21 u< 0xf)
            *r10_10 = r8_21.b << 4
        else
            void* r9_8 = r8_21 - 0xf
            *r10_10 = 0xf0
            
            if (r9_8 u>= 0xff)
                void* rdi_22 = r12_5
                uint64_t count = r9_8 u/ 0xff
                r12_5 += count
                __builtin_memset(rdi_22, 0xff, count)
                rdi = var_10118
                r9_8 = r9_8 u% 0xff
            
            *r12_5 = r9_8.b
            r12_5 += 1
        
        void* rdx_32 = r8_21 + r12_5
        int64_t rcx_55 = rdi - r12_5
        
        do
            *r12_5 = *(r12_5 + rcx_55)
            r12_5 += 8
        while (r12_5 u< rdx_32)
        
        r9 = rdx_32 + 2
        var_10110 = r9
        *rdx_32 = rsi_9.w
        
        if (r14 != 0 && (rbx_12 - 4) u/ 0xff + 6 + r9 u> rax_2)
            break
        
        char rax_153 = *rsi_10
        
        if (rbx_12 - 4 u< 0xf)
            int64_t rcx_56
            rcx_56.b = (rbx_12 - 4).b + rax_153
            r13 = r13_1 + rbx_12
            *r10_10 = rcx_56.b
            var_10140 = r13
            rdi = r13
            var_10118 = r13
        else
            int64_t rcx_57 = rbx_12 - 0x13
            *r10_10 = rax_153 + 0xf
            
            if (rcx_57 u>= 0x1fe)
                uint64_t i_16 = rcx_57 u/ 0x1fe
                rcx_57 = rcx_57 u% 0x1fe
                uint64_t i_11
                
                do
                    *r9 = 0xffff
                    r9 = &r9[2]
                    i_11 = i_16
                    i_16 -= 1
                while (i_11 != 1)
            
            if (rcx_57 u>= 0xff)
                rcx_57 -= 0xff
                *r9 = 0xff
                r9 = &r9[1]
            
            *r9 = rcx_57.b
            r9 = &r9[1]
            r13 = r13_1 + rbx_12
            var_10110 = r9
            var_10140 = r13
            rdi = r13
            var_10118 = r13
    else
        r13 = r13_1 + 1
        var_10140 = r13
    label_140a2c36c:
        rdi = var_10118
        r9 = var_10110
    label_140a2c374:
        r14 = arg8
    
    if (r13 u> r15_1 - 0xc)
        goto label_140a2c3b7
    
    r8 = arg1

uint64_t result

if (r14 != 2)
    result = 0
else
    r9 = r15_9
label_140a2c3b7:
    r12 = var_100b0
label_140a2c3c0:
    int64_t r15_25 = r15_1 - rdi
    void* rcx_196 = rax_2 + 5
    
    if (r14 != 2)
        rcx_196 = rax_2
    
    if (r14 == 0 || (r15_25 + 0xf0) u/ 0xff + 1 + r15_25 + r9 u<= rcx_196)
        goto label_140a2c422
    
    if (r14 != 1)
        r15_25 = rcx_196 - r9 - 1 - (rcx_196 - r9 + 0xef) u/ 0xff
    label_140a2c422:
        int32_t rsi_26 = r15_25.d + rdi.d
        char* rbx_33 = &r9[1]
        
        if (r15_25 u< 0xf)
            *r9 = r15_25.b << 4
        else
            int64_t r8_63 = r15_25 - 0xf
            *r9 = 0xf0
            
            if (r8_63 u>= 0xff)
                char* rdi_85 = rbx_33
                uint64_t count_2 = r8_63 u/ 0xff
                rbx_33 = &rbx_33[count_2]
                __builtin_memset(rdi_85, 0xff, count_2)
                rdi = var_10118
                r8_63 = r8_63 u% 0xff
            
            *rbx_33 = r8_63.b
            rbx_33 = &rbx_33[1]
        
        memcpy(rbx_33, rdi, r15_25.d)
        *arg4 = rsi_26 - r12
        result = zx.q(r15_25.d + rbx_33.d - var_10098)
    else
        result = 0

__security_check_cookie(rax_1 ^ &var_101c8)
return result
