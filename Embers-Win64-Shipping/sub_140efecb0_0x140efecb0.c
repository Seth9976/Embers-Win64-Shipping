// 函数: sub_140efecb0
// 地址: 0x140efecb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = &arg2[1]
__builtin_memset(arg2, 0, 0x18)
void* r8 = r12 + 0x10
void* rcx = &arg2[0xd]
int64_t* result = arg2
*(r8 + 0x1c) = 0x80
void* rax = *(r8 + 0x10)
void* var_d8 = r12
int64_t* r14 = &result[0x1f]

if (rax != 0)
    r8 = rax

int64_t* var_d0 = r14
__builtin_memset(r8, 0, 0x1c)
*(r12 + 0x30) = 0xffffffff
*(r12 + 0x34) = 0
*(r12 + 0x40) = 0
*(r12 + 0x48) = 0
arg2[0xb] = 0
arg2[0xc] = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

__builtin_memset(rcx, 0, 0x1c)
void* rcx_1 = &arg2[0x17]
arg2[0x11].d = 0xffffffff
*(arg2 + 0x8c) = 0
arg2[0x13] = 0
arg2[0x14].d = 0
arg2[0x15] = 0
arg2[0x16] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

void* rax_3 = &result[0x21]
__builtin_memset(rcx_1, 0, 0x1c)
arg2[0x1b].d = 0xffffffff
*(arg2 + 0xdc) = 0
arg2[0x1d] = 0
arg2[0x1e].d = 0
*r14 = 0
r14[1] = 0
sub_140ae6810(rax_3)
int64_t* rcx_3 = *arg1
int64_t rdx_1 = 0
int64_t* arg_18 = rcx_3
int64_t arg_20 = 0
uint64_t r8_2 = sx.q(arg1[1].d) << 3 u>> 3

if (rcx_3 u> &rcx_3[arg1[1]])
    r8_2 = 0

uint64_t var_c8 = r8_2

if (r8_2 != 0)
    do
        int64_t* r15_1 = *rcx_3
        
        if (r15_1 != 0)
            *result = *r15_1
            
            if (r15_1[0x20].d s> 0 && r14 != &r15_1[0x1f])
                int64_t rbx_1 = sx.q(r15_1[0x20].d)
                int64_t rdi_1 = r15_1[0x1f]
                int32_t r8_3 = *(result + 0x104)
                result[0x20].d = rbx_1.d
                
                if (rbx_1.d != 0 || r8_3 != 0)
                    sub_1405c4a00(r14, rbx_1.d, r8_3)
                    memcpy(*r14, rdi_1, (rbx_1 << 3).d)
                else
                    *(result + 0x104) = rbx_1.d
            
            int32_t rcx_6 = 0
            int32_t var_134_1 = 1
            int32_t var_138_1 = 0
            int32_t r11_1 = r15_1[0x1a].d
            int32_t r8_6 = 0
            void* var_130_1 = &r15_1[0x17]
            int32_t var_128_1 = 0xffffffff
            int64_t var_124_1 = 0
            
            if (r11_1 != 0)
                void* rax_8 = r15_1[0x19]
                void* r9_1 = &r15_1[0x17]
                
                if (rax_8 != 0)
                    r9_1 = rax_8
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r11_1 - 1)
                int32_t rdx_6 = *r9_1
                
                if (rdx_6 != 0)
                label_140efef1b:
                    int32_t rax_15 = neg.d(rdx_6) & rdx_6
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
                    int32_t var_134_2 = rax_15
                    int32_t rax_16
                    
                    if (rax_15 == 0)
                        rax_16 = 0x20
                    else
                        rax_16 = 0x1f - temp0_2
                    
                    var_124_1.d = r8_6 - rax_16 + 0x1f
                    
                    if (r8_6 - rax_16 + 0x1f s> r11_1)
                        var_124_1.d = r11_1
                else
                    while (true)
                        int64_t rdx_7 = sx.q(rcx_6)
                        r8_6 += 0x20
                        rcx_6 += 1
                        var_124_1:4.d = r8_6
                        var_138_1 = rcx_6
                        
                        if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
                        int32_t var_128_2 = 0xffffffff
                        
                        if (rdx_6 != 0)
                            goto label_140efef1b
                    
                    var_124_1.d = r11_1
            
            int32_t rdx_8 = r15_1[0x1a].d
            int128_t var_f8_1 = 0xffffffff
            int32_t rbx_2 = 0xffffffff << (rdx_8.b & 0x1f)
            int32_t r8_9 = rdx_8 s>> 5
            int32_t r9_3 = rdx_8 & 0xffffffe0
            int64_t var_a0_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_128_3 = rbx_2
            var_124_1.d = rdx_8
            int128_t var_c0 = (&r15_1[0x15]).o
            int128_t var_b0_1 = var_138_1.o
            
            if (rdx_8 != r11_1)
                void* rax_18 = r15_1[0x19]
                void* r10_1 = &r15_1[0x17]
                
                if (rax_18 != 0)
                    r10_1 = rax_18
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r11_1 - 1)
                int32_t rdx_12 = *(r10_1 + (sx.q(r8_9) << 2)) & rbx_2
                
                if (rdx_12 != 0)
                label_140efeff3:
                    int32_t rax_25 = neg.d(rdx_12) & rdx_12
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
                    int32_t rax_26
                    
                    if (rax_25 == 0)
                        rax_26 = 0x20
                    else
                        rax_26 = 0x1f - temp0_4
                    
                    var_124_1.d = r9_3 - rax_26 + 0x1f
                    
                    if (r9_3 - rax_26 + 0x1f s> r11_1)
                        var_124_1.d = r11_1
                else
                    while (true)
                        int64_t rcx_11 = sx.q(r8_9)
                        r9_3 += 0x20
                        r8_9 += 1
                        
                        if (rcx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_12 = *(r10_1 + (rcx_11 << 2) + 4)
                        var_128_3 = 0xffffffff
                        
                        if (rdx_12 != 0)
                            goto label_140efeff3
                    
                    var_124_1.d = r11_1
            
            while (true)
                int64_t rcx_13 = sx.q(var_b0_1:0xc.d)
                int64_t rax_28 = var_c0.q
                
                if (rcx_13.d == (var_128_3.q u>> 0x20).d && var_b0_1.q == &r15_1[0x17]
                        && rax_28 == &r15_1[0x15])
                    break
                
                int64_t* rdx_15 = (rcx_13 << 5) + *rax_28
                sub_140ee00f0(&arg2[0x15], rdx_15, &rdx_15[1])
                var_b0_1:8.d &= not.d(var_c0:0xc.d)
                sub_14059bdd0(&var_c0:8)
            
            int32_t var_138_2 = 0
            int32_t r11_2 = r15_1[6].d
            int32_t var_134_3 = 1
            int32_t rcx_16 = 0
            void* var_130_2 = &r15_1[3]
            int32_t r8_11 = 0
            int32_t var_128_4 = 0xffffffff
            int64_t var_124_2 = 0
            
            if (r11_2 != 0)
                void* rax_31 = r15_1[5]
                void* r9_5 = &r15_1[3]
                
                if (rax_31 != 0)
                    r9_5 = rax_31
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r11_2 - 1)
                int32_t rdx_18 = *r9_5
                
                if (rdx_18 != 0)
                label_140eff0fb:
                    int32_t rax_38 = neg.d(rdx_18) & rdx_18
                    uint64_t rflags_3
                    int32_t temp0_5
                    temp0_5, rflags_3 = _bit_scan_reverse(rax_38)
                    int32_t var_134_4 = rax_38
                    int32_t rax_39
                    
                    if (rax_38 == 0)
                        rax_39 = 0x20
                    else
                        rax_39 = 0x1f - temp0_5
                    
                    var_124_2.d = r8_11 - rax_39 + 0x1f
                    
                    if (r8_11 - rax_39 + 0x1f s> r11_2)
                        var_124_2.d = r11_2
                else
                    while (true)
                        int64_t rdx_19 = sx.q(rcx_16)
                        r8_11 += 0x20
                        rcx_16 += 1
                        var_124_2:4.d = r8_11
                        var_138_2 = rcx_16
                        
                        if (rdx_19.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_18 = *(r9_5 + (rdx_19 << 2) + 4)
                        int32_t var_128_5 = 0xffffffff
                        
                        if (rdx_18 != 0)
                            goto label_140eff0fb
                    
                    var_124_2.d = r11_2
            
            int32_t rdx_20 = r15_1[6].d
            int128_t var_f8_2 = 0xffffffff
            int32_t rbx_5 = 0xffffffff << (rdx_20.b & 0x1f)
            int32_t r8_14 = rdx_20 s>> 5
            int32_t r9_7 = rdx_20 & 0xffffffe0
            int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_128_6 = rbx_5
            var_124_2.d = rdx_20
            int128_t var_98 = (&r15_1[1]).o
            int128_t var_88_1 = var_138_2.o
            
            if (rdx_20 != r11_2)
                void* rax_41 = r15_1[5]
                void* r10_2 = &r15_1[3]
                
                if (rax_41 != 0)
                    r10_2 = rax_41
                
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(r11_2 - 1)
                int32_t rdx_24 = *(r10_2 + (sx.q(r8_14) << 2)) & rbx_5
                
                if (rdx_24 != 0)
                label_140eff1d3:
                    int32_t rax_48 = neg.d(rdx_24) & rdx_24
                    uint64_t rflags_4
                    int32_t temp0_7
                    temp0_7, rflags_4 = _bit_scan_reverse(rax_48)
                    int32_t rax_49
                    
                    if (rax_48 == 0)
                        rax_49 = 0x20
                    else
                        rax_49 = 0x1f - temp0_7
                    
                    var_124_2.d = r9_7 - rax_49 + 0x1f
                    
                    if (r9_7 - rax_49 + 0x1f s> r11_2)
                        var_124_2.d = r11_2
                else
                    while (true)
                        int64_t rcx_21 = sx.q(r8_14)
                        r9_7 += 0x20
                        r8_14 += 1
                        
                        if (rcx_21.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_24 = *(r10_2 + (rcx_21 << 2) + 4)
                        var_128_6 = 0xffffffff
                        
                        if (rdx_24 != 0)
                            goto label_140eff1d3
                    
                    var_124_2.d = r11_2
            
            while (true)
                int64_t rax_51 = sx.q(var_88_1:0xc.d)
                int64_t* rdx_25 = var_98.q
                
                if (rax_51.d == (var_128_6.q u>> 0x20).d && var_88_1.q == &r15_1[3]
                        && rdx_25 == &r15_1[1])
                    break
                
                int64_t rcx_23 = rax_51 * 5
                int64_t rax_52 = *rdx_25
                int64_t rbx_6 = *(rax_52 + (rcx_23 << 2))
                int64_t* rdi_3 = rax_52 + (rcx_23 << 2)
                void* const rcx_27
                
                if (*(r12 + 8) == *(r12 + 0x34))
                label_140eff29b:
                    rcx_27 = nullptr
                else
                    int32_t rax_55 = sub_140b5ead0(rbx_6.d) + rbx_6:4.d
                    void* r8_15 = r12 + 0x38
                    void* rcx_25 = *(r8_15 + 8)
                    
                    if (rcx_25 != 0)
                        r8_15 = rcx_25
                    
                    int32_t rax_57 = *(r8_15 + (((sx.q(*(r12 + 0x48)) - 1) & sx.q(rax_55)) << 2))
                    
                    if (rax_57 == 0xffffffff)
                    label_140eff29b_1:
                        rcx_27 = nullptr
                    else
                        int64_t r8_16 = *r12
                        
                        while (true)
                            int64_t rdx_29 = sx.q(rax_57) * 5
                            rcx_27 = r8_16 + (rdx_29 << 2)
                            
                            if (*(r8_16 + (rdx_29 << 2)) == rbx_6)
                                break
                            
                            rax_57 = *(rcx_27 + 0xc)
                            
                            if (rax_57 == 0xffffffff)
                                goto label_140eff29b_2
                        
                        if (rax_57 == 0xffffffff)
                        label_140eff29b_2:
                            rcx_27 = nullptr
                
                void* rax_58 = rcx_27 + 8
                
                if (rcx_27 == 0)
                    rax_58 = nullptr
                
                if (rax_58 == 0)
                    sub_140ee0050(r12, rdi_3, &rdi_3[1])
                else
                    int32_t rcx_28 = rdi_3[1].d
                    
                    if (rcx_28 != 0)
                        *rax_58 = rcx_28
                
                var_88_1:8.d &= not.d(var_98:0xc.d)
                sub_14059bdd0(&var_98:8)
            
            int32_t rcx_31 = 0
            int32_t var_138_3 = 0
            int32_t r11_3 = r15_1[0x10].d
            int32_t var_134_5 = 1
            int32_t r8_18 = 0
            void* var_130_3 = &r15_1[0xd]
            int32_t var_128_7 = 0xffffffff
            int64_t var_124_3 = 0
            
            if (r11_3 != 0)
                void* rax_61 = r15_1[0xf]
                void* r9_9 = &r15_1[0xd]
                
                if (rax_61 != 0)
                    r9_9 = rax_61
                
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(r11_3 - 1)
                int32_t rdx_33 = *r9_9
                
                if (rdx_33 != 0)
                label_140eff37b:
                    int32_t rax_68 = neg.d(rdx_33) & rdx_33
                    uint64_t rflags_5
                    int32_t temp0_8
                    temp0_8, rflags_5 = _bit_scan_reverse(rax_68)
                    int32_t var_134_6 = rax_68
                    int32_t rax_69
                    
                    if (rax_68 == 0)
                        rax_69 = 0x20
                    else
                        rax_69 = 0x1f - temp0_8
                    
                    var_124_3.d = r8_18 - rax_69 + 0x1f
                    
                    if (r8_18 - rax_69 + 0x1f s> r11_3)
                        var_124_3.d = r11_3
                else
                    while (true)
                        int64_t rdx_34 = sx.q(rcx_31)
                        r8_18 += 0x20
                        rcx_31 += 1
                        var_124_3:4.d = r8_18
                        var_138_3 = rcx_31
                        
                        if (rdx_34.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_33 = *(r9_9 + (rdx_34 << 2) + 4)
                        int32_t var_128_8 = 0xffffffff
                        
                        if (rdx_33 != 0)
                            goto label_140eff37b
                    
                    var_124_3.d = r11_3
            
            int32_t rdx_35 = r15_1[0x10].d
            int128_t var_f8_3 = 0xffffffff
            int32_t rbx_7 = 0xffffffff << (rdx_35.b & 0x1f)
            int32_t r8_21 = rdx_35 s>> 5
            int32_t r9_11 = rdx_35 & 0xffffffe0
            int64_t var_50_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_128_9 = rbx_7
            var_124_3.d = rdx_35
            int128_t var_70 = (&r15_1[0xb]).o
            int64_t var_60_1 = var_138_3.o.q
            
            if (rdx_35 != r11_3)
                void* rax_71 = r15_1[0xf]
                void* r10_3 = &r15_1[0xd]
                
                if (rax_71 != 0)
                    r10_3 = rax_71
                
                int32_t temp10_1
                int32_t temp11_1
                temp10_1:temp11_1 = sx.q(r11_3 - 1)
                int32_t rdx_39 = *(r10_3 + (sx.q(r8_21) << 2)) & rbx_7
                
                if (rdx_39 != 0)
                label_140eff453:
                    int32_t rax_78 = neg.d(rdx_39) & rdx_39
                    uint64_t rflags_6
                    int32_t temp0_10
                    temp0_10, rflags_6 = _bit_scan_reverse(rax_78)
                    int32_t rax_79
                    
                    if (rax_78 == 0)
                        rax_79 = 0x20
                    else
                        rax_79 = 0x1f - temp0_10
                    
                    var_124_3.d = r9_11 - rax_79 + 0x1f
                    
                    if (r9_11 - rax_79 + 0x1f s> r11_3)
                        var_124_3.d = r11_3
                else
                    while (true)
                        int64_t rcx_36 = sx.q(r8_21)
                        r9_11 += 0x20
                        r8_21 += 1
                        
                        if (rcx_36.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_39 = *(r10_3 + (rcx_36 << 2) + 4)
                        var_128_9 = 0xffffffff
                        
                        if (rdx_39 != 0)
                            goto label_140eff453
                    
                    var_124_3.d = r11_3
            
            while (true)
                int32_t var_54
                int64_t rax_81 = sx.q(var_54)
                int64_t* rdx_40 = var_70.q
                
                if (rax_81.d == (var_128_9.q u>> 0x20).d && var_60_1 == &r15_1[0xd]
                        && rdx_40 == &r15_1[0xb])
                    break
                
                int64_t rcx_38 = rax_81 * 5
                int64_t rax_82 = *rdx_40
                int64_t rbx_8 = *(rax_82 + (rcx_38 << 2))
                int64_t* rdi_4 = rax_82 + (rcx_38 << 2)
                void* const rcx_42
                
                if (arg2[0xc].d == *(arg2 + 0x8c))
                label_140eff520:
                    rcx_42 = nullptr
                else
                    int32_t rax_85 = sub_140b5ead0(rbx_8.d) + rbx_8:4.d
                    void* r8_22 = &arg2[0x12]
                    void* rcx_40 = *(r8_22 + 8)
                    
                    if (rcx_40 != 0)
                        r8_22 = rcx_40
                    
                    int32_t rax_87 = *(r8_22 + (((sx.q(arg2[0x14].d) - 1) & sx.q(rax_85)) << 2))
                    
                    if (rax_87 == 0xffffffff)
                    label_140eff520_1:
                        rcx_42 = nullptr
                    else
                        int64_t r8_23 = arg2[0xb]
                        
                        while (true)
                            int64_t rdx_44 = sx.q(rax_87) * 5
                            rcx_42 = r8_23 + (rdx_44 << 2)
                            
                            if (*(r8_23 + (rdx_44 << 2)) == rbx_8)
                                break
                            
                            rax_87 = *(rcx_42 + 0xc)
                            
                            if (rax_87 == 0xffffffff)
                                goto label_140eff520_2
                        
                        if (rax_87 == 0xffffffff)
                        label_140eff520_2:
                            rcx_42 = nullptr
                
                void* rax_88 = rcx_42 + 8
                
                if (rcx_42 == 0)
                    rax_88 = nullptr
                
                if (rax_88 == 0)
                    sub_140ee0050(&arg2[0xb], rdi_4, &rdi_4[1])
                else
                    int32_t rcx_43 = rdi_4[1].d
                    
                    if (rcx_43 != 0)
                        *rax_88 = rcx_43
                
                int32_t var_58 = var_58 & not.d(var_70:0xc.d)
                sub_14059bdd0(&var_70:8)
            
            sub_140aea950(rax_3, &r15_1[0x21])
            rcx_3 = arg_18
            rdx_1 = arg_20
            r8_2 = var_c8
            r12 = var_d8
            result = arg2
            r14 = var_d0
        
        rcx_3 = &rcx_3[1]
        rdx_1 += 1
        arg_18 = rcx_3
        arg_20 = rdx_1
    while (rdx_1 != r8_2)

return result
