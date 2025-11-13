// 函数: sub_14221ef30
// 地址: 0x14221ef30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t rax = *(arg2 + 0xc)
int64_t* r14 = arg2
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18

uint64_t result = zx.q(*(rax_7 + 8) u>> 0x1d)

if ((result.b & 1) == 0)
    if (data_143a2f088 == 0)
        jump(*(*r14 + 0x3a0))
    
    void* rax_9 = r14[0x15]
    
    if (rax_9 == 0)
        rax_9 = sub_141ee69e0(r14)
    
    int128_t zmm7 = *(rax_9 + 0x520)
    int128_t zmm0
    zmm0.d = zmm7.d f- arg1[0xa].d
    int32_t var_d8
    void* var_d0
    
    if (not(zmm0.d f<= data_143a2f08c))
        int32_t rcx_3 = 0
        void* r15_1 = &arg1[2]
        arg1[0xa].d = zmm7.d
        int32_t r11_1 = *(r15_1 + 0x18)
        int32_t r8_3 = 0
        int128_t zmm6
        int128_t var_48_1 = zmm6
        var_d8 = 0
        int32_t var_d4_1 = 1
        var_d0 = r15_1
        int32_t var_c8_1 = 0xffffffff
        int64_t var_c4_1 = 0
        
        if (r11_1 != 0)
            void* rax_10 = *(r15_1 + 0x10)
            void* r9_1 = r15_1
            
            if (rax_10 != 0)
                r9_1 = rax_10
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_5 = *r9_1
            
            if (rdx_5 != 0)
            label_14221f088:
                int32_t rax_17 = neg.d(rdx_5) & rdx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
                int32_t var_d4_2 = rax_17
                int32_t rax_18
                
                if (rax_17 == 0)
                    rax_18 = 0x20
                else
                    rax_18 = 0x1f - temp0_2
                
                var_c4_1.d = r8_3 - rax_18 + 0x1f
                
                if (r8_3 - rax_18 + 0x1f s> r11_1)
                    var_c4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_3)
                    r8_3 += 0x20
                    rcx_3 += 1
                    var_c4_1:4.d = r8_3
                    var_d8 = rcx_3
                    
                    if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                    int32_t var_c8_2 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_14221f088
                
                var_c4_1.d = r11_1
        
        int32_t rdx_7 = arg1[5].d
        int128_t var_68_1 = 0xffffffff
        int32_t rsi_1 = 0xffffffff << (rdx_7.b & 0x1f)
        int128_t var_78_1 = var_d8.o
        int32_t r8_6 = rdx_7 s>> 5
        int32_t r9_3 = rdx_7 & 0xffffffe0
        int64_t var_88_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int32_t var_c8_3 = rsi_1
        var_c4_1.d = rdx_7
        int128_t var_a8 = arg1.o
        int128_t var_98_1 = var_78_1
        
        if (rdx_7 != r11_1)
            void* rax_20 = *(r15_1 + 0x10)
            void* r10_1 = r15_1
            
            if (rax_20 != 0)
                r10_1 = rax_20
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_11 = *(r10_1 + (sx.q(r8_6) << 2)) & rsi_1
            
            if (rdx_11 != 0)
            label_14221f152:
                int32_t rax_27 = neg.d(rdx_11) & rdx_11
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_27)
                int32_t rbx_1
                
                if (rax_27 == 0)
                    rbx_1 = 0x20
                else
                    rbx_1 = 0x1f - temp0_4
                
                var_c4_1.d = r9_3 - rbx_1 + 0x1f
                
                if (r9_3 - rbx_1 + 0x1f s> r11_1)
                    var_c4_1.d = r11_1
            else
                while (true)
                    int64_t rcx_8 = sx.q(r8_6)
                    r9_3 += 0x20
                    r8_6 += 1
                    
                    if (rcx_8.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_11 = *(r10_1 + (rcx_8 << 2) + 4)
                    var_c8_3 = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_14221f152
                
                var_c4_1.d = r11_1
        
        uint64_t r14_2 = var_c8_3.q u>> 0x20
        uint64_t arg_18 = r14_2
        
        while (true)
            int64_t rax_29 = sx.q(var_98_1:0xc.d)
            int64_t* rcx_10 = var_a8.q
            
            if (rax_29.d == r14_2.d && var_98_1.q == r15_1 && rcx_10 == arg1)
                break
            
            int64_t r12_1 = *rcx_10
            int64_t r15_2 = rax_29 * 9
            int32_t rdx_12 = *(r12_1 + (r15_2 << 3) + 0x10)
            void* rdi_1 = r12_1 + (r15_2 << 3)
            int32_t rbx_2 = 0
            zmm6.d = zmm7.d f- data_143a2f084
            
            if (rdx_12 s> 0)
                int64_t* rsi_2 = nullptr
                
                do
                    int64_t rcx_11 = *(rdi_1 + 8)
                    
                    if (zmm6.d f<= *(rsi_2 + rcx_11 + 8))
                        rbx_2 += 1
                        rsi_2 = &rsi_2[2]
                    else
                        int64_t* rcx_12 = *(rsi_2 + rcx_11)
                        
                        if (rcx_12 != 0)
                            int64_t rax_30 = *rcx_12
                            *(rcx_12 + 0x43c) = 0
                            (*(rax_30 + 0x3a0))(rcx_12, 0)
                            rdx_12 = *(rdi_1 + 0x10)
                        
                        int32_t rcx_15 = rdx_12 - rbx_2 - 1
                        
                        if (rcx_15 s>= 1)
                            rcx_15 = 1
                        
                        if (rcx_15 != 0)
                            memcpy((sx.q(rbx_2) << 4) + *(rdi_1 + 8), 
                                (sx.q(rdx_12 - rcx_15) << 4) + *(rdi_1 + 8), rcx_15 << 4)
                            rdx_12 = *(r12_1 + (r15_2 << 3) + 0x10)
                        
                        rdx_12 -= 1
                        *(rdi_1 + 0x10) = rdx_12
                while (rbx_2 s< rdx_12)
                
                r14_2 = arg_18
            
            if (*(rdi_1 + 0x14) != rdx_12)
                sub_1405a5410(rdi_1 + 8, rdx_12)
            
            var_98_1:8.d &= not.d(var_a8:0xc.d)
            sub_14059bdd0(&var_a8:8)
            r15_1 = &arg1[2]
        
        r14 = arg_10
    
    sub_140758f00(arg1, &arg_10, r14[0x81])
    int64_t rax_33 = sx.q(arg_10.d)
    void* const rcx_22
    
    if (rax_33.d == 0xffffffff)
        rcx_22 = nullptr
    else
        rcx_22 = *arg1 + rax_33 * 0x48
    
    uint64_t* rbx_3 = rcx_22 + 8
    
    if (rcx_22 == 0)
        rbx_3 = nullptr
    
    if (rbx_3 == 0)
        rbx_3 = sub_142209b70(arg1, &r14[0x81])
    
    if (data_143a2f088 == 0 || rbx_3[1].d s>= *(r14[0x81] + 0x28))
        int64_t rax_37 = *r14
        *(r14 + 0x43c) = 0
        return (*(rax_37 + 0x3a0))(r14, 0)
    
    int64_t r8_10 = *r14
    *(r14 + 0x431) &= 0xf7
    (*(r8_10 + 0x400))(r14, &data_143a2de54, r8_10)
    var_d0.d = 0x3f800000
    int64_t var_b8 = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
    int32_t var_b0_1 = 0x3f800000
    sub_141f48ee0(r14, &var_b8)
    sub_141f47470(r14, 0, 0, 0)
    sub_141efdf10(r14)
    sub_141f247b0(r14, 0)
    r14[0x8b].d = 0
    
    if (*(r14 + 0x45c) != 0)
        sub_1405a5410(&r14[0x8a], 0)
    
    r14[0x8d].d = 0
    
    if (*(r14 + 0x46c) != 0)
        sub_1405a5410(&r14[0x8c], 0)
    
    r14[0x8f].d = 0
    
    if (*(r14 + 0x47c) != 0)
        sub_1405a5410(&r14[0x8e], 0)
    
    r14[0x91].d = 0
    
    if (*(r14 + 0x48c) != 0)
        sub_1405a5410(&r14[0x90], 0)
    
    r14[0x86].b &= 0xdf
    r14[0x89].d = 0
    
    if (*(r14 + 0x44c) s<= 0xffffffff)
        sub_140888ba0(&r14[0x88], 0)
    
    int32_t zmm7_1 = sub_141f24c70(r14, 0x7f7fffff)
    *(r14 + 0x43c) = 4
    int64_t rdi_2 = sx.q(rbx_3[1].d)
    var_d0.d = zmm7_1
    var_d8.q = r14
    int32_t rax_36 = (rdi_2 + 1).d
    rbx_3[1].d = rax_36
    
    if (rax_36 s> *(rbx_3 + 0xc))
        sub_1405a4f90(rbx_3)
    
    result = *rbx_3
    *(result + rdi_2 * 0x10) = var_d8.o

return result
