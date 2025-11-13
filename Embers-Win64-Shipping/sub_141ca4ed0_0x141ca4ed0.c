// 函数: sub_141ca4ed0
// 地址: 0x141ca4ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void* r15 = arg2
int32_t r14 = arg6

if (r14 == 0)
    sub_141cabdc0(arg1)

int32_t r11 = *(r15 + 0x28)
void* rsi = r15 + 0x10
int32_t var_1a4 = 1
int32_t var_1a8 = 0
int32_t rcx = 0
void* var_1a0 = rsi
int32_t r8 = 0
int32_t var_198 = 0xffffffff
int64_t var_194 = 0

if (r11 != 0)
    void* rax_3 = *(rsi + 0x10)
    void* r9 = rsi
    
    if (rax_3 != 0)
        r9 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_141ca4fbb:
        int32_t rax_10 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_1a4_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_194.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r11)
            var_194.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_194:4.d = r8
            var_1a8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_198 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141ca4fbb
        
        var_194.d = r11

int32_t r13 = *(r15 + 0x28)
int128_t zmm0 = var_1a8.o
void* var_f8 = r15
double zmm2[0x2] = var_198.o
int128_t var_f0 = zmm0
int32_t r8_3 = r13 s>> 5
zmm0 = var_f8.o
int32_t r9_2 = r13 & 0xffffffe0
double var_e0[0x2] = zmm2
int64_t var_150 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t var_170 = zmm0
int128_t var_e8
int128_t var_160 = var_e8

if (r13 != r11)
    void* rax_13 = *(rsi + 0x10)
    void* r10_1 = rsi
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_7 = *(r10_1 + (sx.q(r8_3) << 2)) & 0xffffffff << (r13.b & 0x1f)
    
    if (rdx_7 != 0)
    label_141ca508b:
        int32_t rax_20 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rax_21
        
        if (rax_20 == 0)
            rax_21 = 0x20
        else
            rax_21 = 0x1f - temp0_4
        
        r13 = r9_2 - rax_21 + 0x1f
        
        if (r13 s> r11)
            r13 = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r10_1 + (rcx_5 << 2) + 4)
            
            if (rdx_7 != 0)
                goto label_141ca508b
        
        r13 = r11

while (true)
    int64_t rax_22 = sx.q(var_160:0xc.d)
    int64_t* rdx_8 = var_170.q
    int32_t var_180
    int64_t var_a0
    
    if (rax_22.d == r13 && var_160.q == rsi && rdx_8 == r15)
        int32_t var_5c = 0x80
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x2c)
        uint64_t rcx_35 = 0
        uint64_t var_48 = 0
        int32_t var_58 = 0xffffffff
        int32_t var_54 = 0
        int32_t var_40 = 0
        
        if (r14 != 1)
            void* rsi_3 = arg4
            int32_t r8_12 = 0
            int32_t r11_1 = *(rsi_3 + 0x28)
            void* r15_2 = rsi_3 + 0x10
            var_1a8 = 0
            int32_t var_1a4_2 = 1
            void* var_1a0_1 = r15_2
            int32_t var_198_1 = 0xffffffff
            int64_t var_194_1 = 0
            
            if (r11_1 != 0)
                void* rax_51 = *(r15_2 + 0x10)
                void* r9_6 = r15_2
                
                if (rax_51 != 0)
                    r9_6 = rax_51
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r11_1 - 1)
                int32_t rdx_28 = *r9_6
                
                if (rdx_28 != 0)
                label_141ca54fd:
                    int32_t rax_58 = neg.d(rdx_28) & rdx_28
                    uint64_t rflags_3
                    int32_t temp0_5
                    temp0_5, rflags_3 = _bit_scan_reverse(rax_58)
                    int32_t var_1a4_3 = rax_58
                    int32_t rax_59
                    
                    if (rax_58 == 0)
                        rax_59 = 0x20
                    else
                        rax_59 = 0x1f - temp0_5
                    
                    var_194_1.d = r8_12 - rax_59 + 0x1f
                    
                    if (r8_12 - rax_59 + 0x1f s> r11_1)
                        var_194_1.d = r11_1
                else
                    while (true)
                        int64_t rdx_29 = sx.q(rcx_35.d)
                        r8_12 += 0x20
                        rcx_35 = zx.q(rcx_35.d + 1)
                        var_194_1:4.d = r8_12
                        var_1a8 = rcx_35.d
                        
                        if (rdx_29.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_28 = *(r9_6 + (rdx_29 << 2) + 4)
                        var_198_1 = 0xffffffff
                        
                        if (rdx_28 != 0)
                            goto label_141ca54fd
                    
                    var_194_1.d = r11_1
            
            int32_t rdx_30 = *(rsi_3 + 0x28)
            zmm2 = var_198_1.o
            var_f8 = rsi_3
            double var_e0_1[0x2] = zmm2
            int32_t rdi_4 = 0xffffffff << (rdx_30.b & 0x1f)
            int128_t var_f0_1 = var_1a8.o
            int32_t r8_15 = rdx_30 s>> 5
            int32_t r9_8 = rdx_30 & 0xffffffe0
            int64_t var_150_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
            int32_t var_198_2 = rdi_4
            var_194_1.d = rdx_30
            var_170 = var_f8.o
            int128_t var_160_1 = var_e8
            
            if (rdx_30 != r11_1)
                void* rax_61 = *(r15_2 + 0x10)
                void* r10_2 = r15_2
                
                if (rax_61 != 0)
                    r10_2 = rax_61
                
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(r11_1 - 1)
                int32_t rdx_34 = *(r10_2 + (sx.q(r8_15) << 2)) & rdi_4
                
                if (rdx_34 != 0)
                label_141ca55d3:
                    int32_t rax_68 = neg.d(rdx_34) & rdx_34
                    uint64_t rflags_4
                    int32_t temp0_7
                    temp0_7, rflags_4 = _bit_scan_reverse(rax_68)
                    int32_t rax_69
                    
                    if (rax_68 == 0)
                        rax_69 = 0x20
                    else
                        rax_69 = 0x1f - temp0_7
                    
                    var_194_1.d = r9_8 - rax_69 + 0x1f
                    
                    if (r9_8 - rax_69 + 0x1f s> r11_1)
                        var_194_1.d = r11_1
                else
                    while (true)
                        int64_t rcx_40 = sx.q(r8_15)
                        r9_8 += 0x20
                        r8_15 += 1
                        
                        if (rcx_40.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_34 = *(r10_2 + (rcx_40 << 2) + 4)
                        var_198_2 = 0xffffffff
                        
                        if (rdx_34 != 0)
                            goto label_141ca55d3
                    
                    var_194_1.d = r11_1
            
            while (true)
                int64_t rax_71 = sx.q(var_160_1:0xc.d)
                int64_t* rdx_35 = var_170.q
                
                if (rax_71.d == (var_198_2.q u>> 0x20).d && var_160_1.q == r15_2 && rdx_35 == rsi_3)
                    break
                
                int32_t* rdi_5 = *rdx_35 + rax_71 * 0x18
                char rax_74 = sub_140bace20(sub_140b63b70(rdi_5, &var_a0))
                int64_t rcx_45 = var_a0
                
                if (rcx_45 != 0)
                    sub_140a74f90(rcx_45)
                
                if (*(rdi_5 + 8) != 0)
                    int64_t rbx_9 = *rdi_5
                    
                    if (rax_74 == 0)
                        int64_t* rdx_43
                        
                        if (arg1[0xb].d == *(arg1 + 0x84))
                        label_141ca571e:
                            rdx_43 = nullptr
                        else
                            int32_t rax_77 = sub_140b5ead0(rbx_9.d) + rbx_9:4.d
                            void* r8_17 = &arg1[0x11]
                            void* rcx_48 = *(r8_17 + 8)
                            
                            if (rcx_48 != 0)
                                r8_17 = rcx_48
                            
                            int32_t rax_79 =
                                *(r8_17 + (((sx.q(arg1[0x13].d) - 1) & sx.q(rax_77)) << 2))
                            
                            if (rax_79 == 0xffffffff)
                            label_141ca571e_1:
                                rdx_43 = nullptr
                            else
                                while (true)
                                    rdx_43 = (sx.q(rax_79) << 5) + arg1[0xa]
                                    
                                    if (*rdx_43 == rbx_9)
                                        break
                                    
                                    rax_79 = rdx_43[3].d
                                    
                                    if (rax_79 == 0xffffffff)
                                        goto label_141ca571e_2
                                
                                if (rax_79 == 0xffffffff)
                                label_141ca571e_2:
                                    rdx_43 = nullptr
                        
                        void* rax_80 = &rdx_43[1]
                        
                        if (rdx_43 == 0)
                            rax_80 = nullptr
                        
                        if (rax_80 != 0)
                            goto label_141ca5737
                    else
                        int64_t var_148_2 = 0
                        int64_t var_178_1 = 0
                        var_1a8.q = rbx_9
                        int64_t var_1a0_2
                        __builtin_memset(&var_1a0_2, 0, 0x18)
                        sub_141c8fa40(&var_88, &var_180, &var_1a8, nullptr)
                    label_141ca5737:
                        int128_t* rax_81 = sub_141c9a400(arg1, *rdi_5)
                        int128_t* rcx_50 = *(rdi_5 + 8)
                        *rax_81 = *rcx_50
                        rax_81[1] = rcx_50[1]
                        rax_81[2] = rcx_50[2]
                
                var_160_1:8.d &= not.d(var_170:0xc.d)
                sub_14059bdd0(&var_170:8)
                rsi_3 = arg4
            
            int32_t rcx_52 = 0
            int32_t r11_2 = *(arg3 + 0x28)
            var_1a8 = 0
            int32_t r8_19 = 0
            int32_t var_1a4_4 = 1
            void* var_1a0_3 = arg3 + 0x10
            int32_t var_198_3 = 0xffffffff
            int64_t var_194_2 = 0
            
            if (r11_2 != 0)
                void* rax_84 = *(arg3 + 0x20)
                void* r9_10 = arg3 + 0x10
                
                if (rax_84 != 0)
                    r9_10 = rax_84
                
                int32_t temp12_1
                int32_t temp13_1
                temp12_1:temp13_1 = sx.q(r11_2 - 1)
                int32_t rdx_47 = *r9_10
                
                if (rdx_47 != 0)
                label_141ca57fb:
                    int32_t rax_91 = neg.d(rdx_47) & rdx_47
                    uint64_t rflags_5
                    int32_t temp0_8
                    temp0_8, rflags_5 = _bit_scan_reverse(rax_91)
                    int32_t var_1a4_5 = rax_91
                    int32_t rax_92
                    
                    if (rax_91 == 0)
                        rax_92 = 0x20
                    else
                        rax_92 = 0x1f - temp0_8
                    
                    var_194_2.d = r8_19 - rax_92 + 0x1f
                    
                    if (r8_19 - rax_92 + 0x1f s> r11_2)
                        var_194_2.d = r11_2
                else
                    while (true)
                        int64_t rdx_48 = sx.q(rcx_52)
                        r8_19 += 0x20
                        rcx_52 += 1
                        var_194_2:4.d = r8_19
                        var_1a8 = rcx_52
                        
                        if (rdx_48.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_47 = *(r9_10 + (rdx_48 << 2) + 4)
                        var_198_3 = 0xffffffff
                        
                        if (rdx_47 != 0)
                            goto label_141ca57fb
                    
                    var_194_2.d = r11_2
            
            int32_t rdx_49 = *(arg3 + 0x28)
            zmm2 = var_198_3.o
            var_f8 = arg3
            int32_t rdi_6 = 0xffffffff << (rdx_49.b & 0x1f)
            int128_t var_f0_2 = var_1a8.o
            int32_t r8_22 = rdx_49 s>> 5
            int32_t r9_12 = rdx_49 & 0xffffffe0
            int64_t var_150_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
            int32_t var_198_4 = rdi_6
            var_194_2.d = rdx_49
            var_170 = var_f8.o
            int128_t var_160_2 = var_e8
            
            if (rdx_49 != r11_2)
                void* rax_94 = *(arg3 + 0x20)
                void* r10_3 = arg3 + 0x10
                
                if (rax_94 != 0)
                    r10_3 = rax_94
                
                int32_t temp16_1
                int32_t temp17_1
                temp16_1:temp17_1 = sx.q(r11_2 - 1)
                int32_t rdx_53 = *(r10_3 + (sx.q(r8_22) << 2)) & rdi_6
                
                if (rdx_53 != 0)
                label_141ca58d3:
                    int32_t rax_101 = neg.d(rdx_53) & rdx_53
                    uint64_t rflags_6
                    int32_t temp0_10
                    temp0_10, rflags_6 = _bit_scan_reverse(rax_101)
                    int32_t rax_102
                    
                    if (rax_101 == 0)
                        rax_102 = 0x20
                    else
                        rax_102 = 0x1f - temp0_10
                    
                    var_194_2.d = r9_12 - rax_102 + 0x1f
                    
                    if (r9_12 - rax_102 + 0x1f s> r11_2)
                        var_194_2.d = r11_2
                else
                    while (true)
                        int64_t rcx_57 = sx.q(r8_22)
                        r9_12 += 0x20
                        r8_22 += 1
                        
                        if (rcx_57.d s>= (temp17_1 + (temp16_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_53 = *(r10_3 + (rcx_57 << 2) + 4)
                        var_198_4 = 0xffffffff
                        
                        if (rdx_53 != 0)
                            goto label_141ca58d3
                    
                    var_194_2.d = r11_2
            
            uint32_t rdi_8 = (var_198_4.q u>> 0x20).d
            
            while (true)
                int64_t rax_104 = sx.q(var_160_2:0xc.d)
                int64_t rcx_59 = var_170.q
                
                if (rax_104.d == rdi_8 && var_160_2.q == arg3 + 0x10 && rcx_59 == arg3)
                    break
                
                var_1a8.q = arg1
                int64_t* rbx_13 = rax_104 * 0x30 + *rcx_59
                var_198_4.q = &var_88
                void* var_1a0_4 = arg3
                var_194_2 = rbx_13[4]
                int128_t* rax_106 = sub_141c9a300(arg1, rbx_13)
                int32_t* rcx_61 = rbx_13[4]
                var_f8.o = var_1a8.o
                zmm2[1] = rax_106
                int128_t var_e8_1 = var_198_4.o
                sub_141c90bc0(rcx_61, &var_f8, 0x1f)
                var_160_2:8.d &= not.d(var_170:0xc.d)
                sub_14059bdd0(&var_170:8)
            
            rcx_35 = var_48
        
        int32_t var_40_1 = 0
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        int64_t var_80
        var_80.d = 0
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_78
        void* result = sub_14059a8e0(&var_78, 0)
        int64_t var_68
        
        if (var_68 != 0)
            result = sub_140a74f90(var_68)
        
        int64_t rcx_66 = var_88
        
        if (rcx_66 != 0)
            result = sub_140a74f90(rcx_66)
        
        __security_check_cookie(rax_1 ^ &var_1e8)
        return result
    
    int64_t* rsi_1 = *rdx_8 + rax_22 * 0x18
    int64_t* rdi_1 = nullptr
    
    if (r14 != 1)
    label_141ca5185:
        void* rsi_2 = rsi_1[1]
        
        if (rsi_2 != 0)
            int64_t r8_6 = *(rsi_2 + 0x20)
            void* var_140 = nullptr
            int32_t i_2 = 0
            sub_140a73990(arg5 + 0x10, &var_180, r8_6)
            int64_t rax_30 = sx.q(var_180)
            void* const rax_33
            
            if (rax_30.d == 0xffffffff)
                rax_33 = nullptr
            else
                rax_33 = rax_30 * 0x60 + *(arg5 + 0x10)
            
            int64_t* r8_7 = rax_33 + 8
            
            if (rax_33 == 0)
                r8_7 = nullptr
            
            int64_t var_1c8
            sub_141c9fa20(rsi_2 + 0x28, &var_140, r8_7, arg5, var_1c8.d)
            
            if (r14 != 1)
                int64_t* rax_43 = j_sub_140a82f30(0x50)
                int64_t* rax_48
                
                if (rax_43 == 0)
                    rax_48 = nullptr
                else
                    int64_t rdi_3 = *(rsi_2 + 0x38)
                    int64_t var_120 = 0
                    int64_t rbx_6 = sx.q(*(rsi_2 + 0x40))
                    int32_t var_118_1 = rbx_6.d
                    
                    if (rbx_6.d != 0)
                        sub_140638750(&var_120, rbx_6.d, 0)
                        memcpy(var_120, rdi_3, (rbx_6 << 2).d)
                    else
                        int32_t var_114_1 = 0
                    
                    int32_t i_1 = i_2
                    int64_t var_110 = 0
                    int32_t i_3 = i_1
                    
                    if (i_1 != 0)
                        sub_140808f70(&var_110, i_1, 0)
                        void* rax_44 = var_140
                        void* r14_2 = var_110 - rax_44
                        int64_t* rbx_7 = rax_44 + 8
                        int32_t i
                        
                        do
                            *(r14_2 + rbx_7 - 8) = rbx_7[-1]
                            sub_140596d10(rbx_7 + r14_2, rbx_7)
                            rbx_7 = &rbx_7[3]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        r14 = arg6
                    else
                        int32_t var_104_1 = 0
                    
                    var_1c8 = *(rsi_2 + 0x20)
                    rax_48 = sub_141c91700(rax_43, *(rsi_2 + 8), *(rsi_2 + 0x10), *(rsi_2 + 0x18), 
                        var_1c8, &var_110, &var_120, *(rsi_2 + 0x48))
                
                sub_141c97c90(arg1, rax_48)
                r15 = arg2
            else if (rdi_1 != 0 && sub_141c95d80(&var_140, sub_14098ef70(&rdi_1[5])) == 0)
                sub_141c913c0(&var_f8, rdi_1)
                int64_t* rax_36 = sub_141c922a0(&var_a0, &var_140)
                int64_t var_d0
                int64_t* var_c8
                
                if (&var_d0 != rax_36)
                    var_d0 = *rax_36
                    *rax_36 = 0
                    int64_t* rcx_18 = rax_36[1]
                    int64_t* rbx_3 = var_c8
                    
                    if (rcx_18 != rbx_3)
                        rax_36[1] = 0
                        var_c8 = rcx_18
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= r14
                            
                            if (rbx_3[1].d == r14)
                                (**rbx_3)(rbx_3)
                                int32_t temp15_1 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= r14
                                
                                if (temp15_1 == r14)
                                    (*(*rbx_3 + 8))(rbx_3, zx.q(r14))
                
                int64_t* var_98
                
                if (var_98 != 0)
                    var_98[1].d -= 1
                    
                    if (var_98[1].d == 1)
                        (**var_98)(var_98)
                        int32_t temp10_1 = *(var_98 + 0xc)
                        *(var_98 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*var_98 + 8))(var_98, 1)
                
                sub_141cb6040(arg1, rdi_1, &var_f8)
                int64_t var_c0
                
                if (var_c0 != 0)
                    sub_140a74f90(var_c0)
                
                if (var_c8 != 0)
                    var_c8[1].d -= 1
                    
                    if (var_c8[1].d == 1)
                        (**var_c8)(var_c8)
                        int32_t temp18_1 = *(var_c8 + 0xc)
                        *(var_c8 + 0xc) -= 1
                        
                        if (temp18_1 == 1)
                            (*(*var_c8 + 8))(var_c8, 1)
            
            sub_1408464b0(&var_140)
    else
        int64_t rbx_1 = *rsi_1
        
        if (arg1[1].d != *(arg1 + 0x34))
            int32_t rax_26 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
            void* r8_4 = &arg1[7]
            void* rcx_9 = *(r8_4 + 8)
            
            if (rcx_9 != 0)
                r8_4 = rcx_9
            
            int32_t rax_28 = *(r8_4 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_26)) << 2))
            
            if (rax_28 != 0xffffffff)
                int64_t r8_5 = *arg1
                int64_t rdx_12
                
                while (true)
                    rdx_12 = sx.q(rax_28)
                    int64_t rcx_10 = rdx_12 * 3
                    
                    if (*(r8_5 + (rcx_10 << 3)) == rbx_1)
                        break
                    
                    rax_28 = *(r8_5 + (rcx_10 << 3) + 0x10)
                    
                    if (rax_28 == 0xffffffff)
                        goto label_141ca5411
                
                if (rax_28 != 0xffffffff)
                    void* rdi_2 = r8_5 + rdx_12 * 0x18
                    
                    if (rdi_2 != 0)
                        rdi_1 = *(rdi_2 + 8)
                        
                        if (rdi_1 != 0)
                            goto label_141ca5185
    
label_141ca5411:
    var_160:8.d &= not.d(var_170:0xc.d)
    sub_14059bdd0(&var_170:8)
    rsi = var_1a0
