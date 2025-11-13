// 函数: sub_1408f90a0
// 地址: 0x1408f90a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_f4 = 1
int32_t var_f8 = 0
int32_t r11 = *(arg1 + 0x358)
void* var_f0 = arg1 + 0x340
int32_t r13 = 0
int32_t var_e8 = 0xffffffff
int32_t rcx = 0
int64_t var_e4 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x350)
    void* r9_1 = arg1 + 0x340
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_1408f915b:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_f4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_e4.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_e4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_e4:4.d = rcx
            var_f8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_e8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1408f915b
        
        var_e4.d = r11

int32_t rdx_5 = *(arg1 + 0x358)
int128_t var_80 = var_f8.o
int32_t r14 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int32_t var_c0 = r14
int32_t var_bc = rdx_5
int64_t var_70 = 0xffffffff
int64_t var_d8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_f8.o = (arg1 + 0x330).o
var_e8.o = var_80

if (rdx_5 != r11)
    void* rax_11 = *(arg1 + 0x350)
    void* r10_1 = arg1 + 0x340
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & r14
    
    if (rdx_9 != 0)
    label_1408f9232:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_bc = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_bc = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_c0 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1408f9232
        
        var_bc = r11

while (true)
    int32_t var_dc
    int64_t rcx_7 = sx.q(var_dc)
    int64_t* rax_21 = var_f8.q
    
    if (rcx_7.d == (var_c0.q u>> 0x20).d && var_e8.q == arg1 + 0x340 && rax_21 == arg1 + 0x330)
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) s<= 0xffffffff)
            sub_1405a5410(arg2, 0)
        
        int64_t* r14_1 = arg1 + 0x380
        int32_t var_f8_1 = 0
        int32_t r11_1 = r14_1[5].d
        void* rsi_1 = &r14_1[2]
        int64_t* arg_18 = r14_1
        int32_t rcx_12 = 0
        int32_t var_f4_2 = 1
        int32_t r8_3 = 0
        var_f0 = rsi_1
        int32_t var_e8_1 = 0xffffffff
        int64_t var_e4_1 = 0
        
        if (r11_1 != 0)
            void* rax_26 = *(rsi_1 + 0x10)
            void* r9_5 = rsi_1
            
            if (rax_26 != 0)
                r9_5 = rax_26
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_12 = *r9_5
            
            if (rdx_12 != 0)
            label_1408f935b:
                int32_t rax_33 = neg.d(rdx_12) & rdx_12
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_33)
                int32_t var_f4_3 = rax_33
                int32_t rax_34
                
                if (rax_33 == 0)
                    rax_34 = 0x20
                else
                    rax_34 = 0x1f - temp0_5
                
                var_e4_1.d = r8_3 - rax_34 + 0x1f
                
                if (r8_3 - rax_34 + 0x1f s> r11_1)
                    var_e4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_13 = sx.q(rcx_12)
                    r8_3 += 0x20
                    rcx_12 += 1
                    var_e4_1:4.d = r8_3
                    var_f8_1 = rcx_12
                    
                    if (rdx_13.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_12 = *(r9_5 + (rdx_13 << 2) + 4)
                    int32_t var_e8_2 = 0xffffffff
                    
                    if (rdx_12 != 0)
                        goto label_1408f935b
                
                var_e4_1.d = r11_1
        
        int32_t r13_1 = r14_1[5].d
        int128_t var_a8 = var_f8_1.o
        int32_t r8_6 = r13_1 s>> 5
        int32_t r9_7 = r13_1 & 0xffffffe0
        int64_t var_98 = 0xffffffff
        var_70 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        void* var_88
        var_88.o = r14_1.o
        var_80 = var_a8
        
        if (r13_1 != r11_1)
            void* rax_36 = *(rsi_1 + 0x10)
            void* r10_2 = rsi_1
            
            if (rax_36 != 0)
                r10_2 = rax_36
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_17 = *(r10_2 + (sx.q(r8_6) << 2)) & 0xffffffff << (r13_1.b & 0x1f)
            
            if (rdx_17 != 0)
            label_1408f942b:
                int32_t rax_43 = neg.d(rdx_17) & rdx_17
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_43)
                int32_t rax_44
                
                if (rax_43 == 0)
                    rax_44 = 0x20
                else
                    rax_44 = 0x1f - temp0_7
                
                r13_1 = r9_7 - rax_44 + 0x1f
                
                if (r13_1 s> r11_1)
                    r13_1 = r11_1
            else
                while (true)
                    int64_t rcx_17 = sx.q(r8_6)
                    r9_7 += 0x20
                    r8_6 += 1
                    
                    if (rcx_17.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_17 = *(r10_2 + (rcx_17 << 2) + 4)
                    
                    if (rdx_17 != 0)
                        goto label_1408f942b
                
                r13_1 = r11_1
        
        while (true)
            int64_t result = sx.q(var_70:4.d)
            
            if (result.d == r13_1 && var_80:8.q == rsi_1 && var_88 == r14_1)
                return result
            
            int128_t* r15_2 = result * 0x68 + *var_88
            
            if (*(r15_2 + 0x18) - *(r15_2 + 0x44) == r13)
                int32_t rcx_20 = 0
                int32_t var_cc_1 = 1
                int32_t var_d0_1 = 0
                int32_t r11_2 = *(r15_2 + 0x38)
                int32_t r8_7 = 0
                void* var_c8_1 = &r15_2[2]
                int32_t var_c0_1 = 0xffffffff
                var_bc.q = 0
                
                if (r11_2 != 0)
                    void* rax_47 = r15_2[3].q
                    void* r9_9 = &r15_2[2]
                    
                    if (rax_47 != 0)
                        r9_9 = rax_47
                    
                    int32_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(r11_2 - 1)
                    int32_t rdx_20 = *r9_9
                    int32_t var_bc_2
                    
                    if (rdx_20 != 0)
                    label_1408f9508:
                        int32_t rax_54 = neg.d(rdx_20) & rdx_20
                        uint64_t rflags_5
                        int32_t temp0_8
                        temp0_8, rflags_5 = _bit_scan_reverse(rax_54)
                        int32_t var_cc_2 = rax_54
                        int32_t rax_55
                        
                        if (rax_54 == 0)
                            rax_55 = 0x20
                        else
                            rax_55 = 0x1f - temp0_8
                        
                        int32_t var_bc_1 = r8_7 - rax_55 + 0x1f
                        
                        if (r8_7 - rax_55 + 0x1f s> r11_2)
                            var_bc_2 = r11_2
                    else
                        while (true)
                            int64_t rdx_21 = sx.q(rcx_20)
                            r8_7 += 0x20
                            rcx_20 += 1
                            int32_t var_b8_1 = r8_7
                            var_d0_1 = rcx_20
                            
                            if (rdx_21.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_20 = *(r9_9 + (rdx_21 << 2) + 4)
                            int32_t var_c0_2 = 0xffffffff
                            
                            if (rdx_20 != 0)
                                goto label_1408f9508
                        
                        var_bc_2 = r11_2
                
                int32_t rdx_22 = *(r15_2 + 0x38)
                int128_t var_48_1 = 0xffffffff
                int32_t rsi_2 = 0xffffffff << (rdx_22.b & 0x1f)
                int128_t var_58_1 = var_d0_1.o
                int32_t r8_10 = rdx_22 s>> 5
                int32_t r9_11 = rdx_22 & 0xffffffe0
                var_98 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                int32_t var_c0_3 = rsi_2
                var_bc = rdx_22
                int64_t* var_b0
                var_b0.o = (&r15_2[1]).o
                var_a8 = var_58_1
                
                if (rdx_22 != r11_2)
                    void* rax_57 = r15_2[3].q
                    void* r10_3 = &r15_2[2]
                    
                    if (rax_57 != 0)
                        r10_3 = rax_57
                    
                    int32_t temp10_1
                    int32_t temp11_1
                    temp10_1:temp11_1 = sx.q(r11_2 - 1)
                    int32_t rdx_26 = *(r10_3 + (sx.q(r8_10) << 2)) & rsi_2
                    
                    if (rdx_26 != 0)
                    label_1408f95d2:
                        int32_t rax_64 = neg.d(rdx_26) & rdx_26
                        uint64_t rflags_6
                        int32_t temp0_10
                        temp0_10, rflags_6 = _bit_scan_reverse(rax_64)
                        int32_t rax_65
                        
                        if (rax_64 == 0)
                            rax_65 = 0x20
                        else
                            rax_65 = 0x1f - temp0_10
                        
                        var_bc = r9_11 - rax_65 + 0x1f
                        
                        if (r9_11 - rax_65 + 0x1f s> r11_2)
                            var_bc = r11_2
                    else
                        while (true)
                            int64_t rcx_25 = sx.q(r8_10)
                            r9_11 += 0x20
                            r8_10 += 1
                            
                            if (rcx_25.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_26 = *(r10_3 + (rcx_25 << 2) + 4)
                            var_c0_3 = 0xffffffff
                            
                            if (rdx_26 != 0)
                                goto label_1408f95d2
                        
                        var_bc = r11_2
                
                while (true)
                    int64_t rcx_27 = sx.q(var_98:4.d)
                    
                    if (rcx_27.d == (var_c0_3.q u>> 0x20).d && var_a8:8.q == &r15_2[2]
                            && var_b0 == &r15_2[1])
                        int64_t rbx_6 = sx.q(arg2[1].d)
                        int32_t rax_71 = (rbx_6 + 1).d
                        arg2[1].d = rax_71
                        
                        if (rax_71 s> *(arg2 + 0xc))
                            sub_1405a4f90(arg2)
                        
                        *(*arg2 + rbx_6 * 0x10) = *r15_2
                        break
                    
                    if ((*(arg1 + 0x328)).d f> *((rcx_27 << 5) + *var_b0 + 8))
                        break
                    
                    var_98.d &= not.d(var_a8:4.d)
                    sub_14059bdd0(&var_a8)
                
                r14_1 = arg_18
                rsi_1 = var_f0
            
            var_70.d &= not.d(var_80:4.d)
            sub_14059bdd0(&var_80)
    
    void* rax_23 = *(*((rcx_7 << 5) + *rax_21) + 0x228)
    
    if (rax_23 == 0 || (*(rax_23 + 0x22a) & 2) == 0)
        r13 += 1
    
    var_e4:4.d &= not.d(var_f0:4.d)
    sub_14059bdd0(&var_f0)
