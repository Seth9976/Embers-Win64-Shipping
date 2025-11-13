// 函数: sub_141e601c0
// 地址: 0x141e601c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_70
sub_140cebfd0(arg2, &var_70)
int32_t rsi = 0
int32_t var_b4 = 1
int32_t var_b8 = 0
int32_t r11 = *(arg1 + 0x358)
int32_t rcx_1 = 0
int32_t var_a8 = 0xffffffff
int32_t r8 = 0
int32_t var_a4 = 0
int32_t var_a0 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x350)
    void* r9_1 = arg1 + 0x340
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_a4_2
    
    if (rdx_3 != 0)
    label_141e60288:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_a4_1 = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_a4_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            int32_t var_a0_1 = rcx_1
            var_b8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e60288
        
        var_a4_2 = r11

int32_t rdx_6 = *(arg1 + 0x358)
double zmm2[0x2] = var_a8.o
double var_48[0x2] = zmm2
int32_t r14 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_58 = var_b8.o
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_78 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_a8_1 = r14
int32_t var_a4_3 = rdx_6
int128_t var_98 = (arg1 + 0x330).o
int128_t var_88 = var_58

if (rdx_6 != r11)
    void* rax_11 = *(arg1 + 0x350)
    void* r10_1 = arg1 + 0x340
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & r14
    int32_t var_a4_5
    
    if (rdx_10 != 0)
    label_141e60352:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        int32_t var_a4_4 = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_a4_5 = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_a8_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141e60352
        
        var_a4_5 = r11

while (true)
    int64_t rax_21 = sx.q(var_88:0xc.d)
    int64_t* rdx_11 = var_98.q
    
    if (rax_21.d == (var_a8_1.q u>> 0x20).d && var_88.q == arg1 + 0x340 && rdx_11 == arg1 + 0x330)
        int32_t rcx_14 = 0
        var_b8 = 0
        int32_t r10_3 = *(arg1 + 0x308)
        int32_t var_b4_2 = 1
        void* var_b0_1 = arg1 + 0x2f0
        int32_t var_a8_2 = 0xffffffff
        int32_t var_a4_6 = 0
        int32_t var_a0_2 = 0
        
        if (r10_3 != 0)
            void* rax_30 = *(arg1 + 0x300)
            void* r8_5 = arg1 + 0x2f0
            
            if (rax_30 != 0)
                r8_5 = rax_30
            
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = sx.q(r10_3 - 1)
            int32_t rdx_20 = *r8_5
            int32_t var_a4_8
            
            if (rdx_20 != 0)
            label_141e604f7:
                int32_t rax_37 = neg.d(rdx_20) & rdx_20
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_37)
                int32_t var_b4_3 = rax_37
                int32_t rax_38
                
                if (rax_37 == 0)
                    rax_38 = 0x20
                else
                    rax_38 = 0x1f - temp0_5
                
                int32_t var_a4_7 = rcx_14 - rax_38 + 0x1f
                
                if (rcx_14 - rax_38 + 0x1f s> r10_3)
                    var_a4_8 = r10_3
            else
                while (true)
                    int64_t rdx_21 = sx.q(rsi)
                    rcx_14 += 0x20
                    rsi += 1
                    int32_t var_a0_3 = rcx_14
                    var_b8 = rsi
                    
                    if (rdx_21.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_20 = *(r8_5 + (rdx_21 << 2) + 4)
                    var_a8_2 = 0xffffffff
                    
                    if (rdx_20 != 0)
                        goto label_141e604f7
                
                var_a4_8 = r10_3
        
        int32_t rdx_23 = *(arg1 + 0x308)
        zmm2 = var_a8_2.o
        double var_48_1[0x2] = zmm2
        int32_t rsi_1 = 0xffffffff << (rdx_23.b & 0x1f)
        int128_t var_58_1 = var_b8.o
        int32_t r8_7 = rdx_23 s>> 5
        int32_t r9_7 = rdx_23 & 0xffffffe0
        int64_t var_78_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int32_t var_a8_3 = rsi_1
        int32_t var_a4_9 = rdx_23
        var_98 = (arg1 + 0x2e0).o
        int128_t var_88_1 = var_58_1
        
        if (rdx_23 != r10_3)
            void* rax_40 = *(arg1 + 0x300)
            void* r10_4 = arg1 + 0x2f0
            
            if (rax_40 != 0)
                r10_4 = rax_40
            
            int32_t temp7_1
            int32_t temp8_1
            temp7_1:temp8_1 = sx.q(r10_3 - 1)
            int32_t rdx_27 = *(r10_4 + (sx.q(r8_7) << 2)) & rsi_1
            int32_t var_a4_11
            
            if (rdx_27 != 0)
            label_141e605c2:
                int32_t rax_47 = neg.d(rdx_27) & rdx_27
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_47)
                int32_t r12_1
                
                if (rax_47 == 0)
                    r12_1 = 0x20
                else
                    r12_1 = 0x1f - temp0_7
                
                int32_t var_a4_10 = r9_7 - r12_1 + 0x1f
                
                if (r9_7 - r12_1 + 0x1f s> r10_3)
                    var_a4_11 = r10_3
            else
                while (true)
                    int64_t rcx_19 = sx.q(r8_7)
                    r9_7 += 0x20
                    r8_7 += 1
                    
                    if (rcx_19.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_27 = *(r10_4 + (rcx_19 << 2) + 4)
                    var_a8_3 = 0xffffffff
                    
                    if (rdx_27 != 0)
                        goto label_141e605c2
                
                var_a4_11 = r10_3
        
        while (true)
            int64_t result = sx.q(var_88_1:0xc.d)
            int64_t* rdx_28 = var_98.q
            
            if (result.d == (var_a8_3.q u>> 0x20).d && var_88_1.q == arg1 + 0x2f0
                    && rdx_28 == arg1 + 0x2e0)
                int16_t* rcx_26 = var_70
                
                if (rcx_26 == 0)
                    return result
                
                return sub_140a74f90(rcx_26)
            
            int64_t* rdx_29 = *rdx_28 + result * 0x18
            
            if (rdx_29[1] == *arg2)
                void* r9_9 = *arg3
                int64_t rax_51 = *rdx_29
                void* rdx_30 = r9_9
                int64_t r10_5 = sx.q(arg3[1].d)
                int64_t rcx_23 = arg2[1]
                int64_t rdi_6 = r10_5 * 2
                var_b8.q = rax_51
                int64_t var_b0_2 = rcx_23
                void* r8_8 = r9_9 + (rdi_6 << 3)
                
                if (r9_9 != r8_8)
                    while (*rdx_30 != rax_51 || *(rdx_30 + 8) != rcx_23)
                        rdx_30 += 0x10
                        
                        if (rdx_30 == r8_8)
                            goto label_141e60672
                
                if (r9_9 == r8_8 || ((rdx_30 - r9_9) s>> 4).d == 0xffffffff)
                label_141e60672:
                    int32_t rax_52 = (r10_5 + 1).d
                    arg3[1].d = rax_52
                    
                    if (rax_52 s> *(arg3 + 0xc))
                        sub_1405a4f90(arg3)
                    
                    *(*arg3 + (rdi_6 << 3)) = var_b8.o
            
            var_88_1:8.d &= not.d(var_98:0xc.d)
            sub_14059bdd0(&var_98:8)
    
    int16_t* const rdx_12 = &data_142d40450
    int32_t var_68
    
    if (var_68 != 0)
        rdx_12 = var_70
    
    int16_t** rdi_1 = *rdx_11 + rax_21 * 0x28
    int16_t* const rcx_9
    
    if (rdi_1[3].d == 0)
        rcx_9 = &data_142d40450
    else
        rcx_9 = rdi_1[2]
    
    if (sub_140a54510(rcx_9, rdx_12) == 0)
        int32_t rax_24 = rdi_1[1].d
        int32_t r8_3 = rax_24 - 1
        
        if (rax_24 == 0)
            r8_3 = 0
        
        int16_t* rdx_13
        
        if (rax_24 == 0)
            rdx_13 = &data_142d40450
        else
            rdx_13 = *rdi_1
        
        sub_140ce2e40(&var_b8, rdx_13, r8_3)
        void* r10_2 = *arg3
        int64_t r9_5 = sx.q(arg3[1].d)
        void* rdx_14 = r10_2
        int64_t rdi_3 = r9_5 * 2
        void* r8_4 = r10_2 + (rdi_3 << 3)
        
        if (r10_2 != r8_4)
            while (*rdx_14 != var_b8.q || *(rdx_14 + 8) != arg1 + 0x340)
                rdx_14 += 0x10
                
                if (rdx_14 == r8_4)
                    goto label_141e60442
        
        if (r10_2 == r8_4 || ((rdx_14 - r10_2) s>> 4).d == 0xffffffff)
        label_141e60442:
            int32_t rax_26 = (r9_5 + 1).d
            arg3[1].d = rax_26
            
            if (rax_26 s> *(arg3 + 0xc))
                sub_1405a4f90(arg3)
            
            *(*arg3 + (rdi_3 << 3)) = var_b8.o
    
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)
