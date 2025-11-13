// 函数: sub_140771920
// 地址: 0x140771920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t rax = *(arg2 + 0xc)
void* r13 = nullptr
int64_t* r14 = arg2
void* rbx = arg1
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
    if (data_14396e8d0 == 0)
        jump(*(*r14 + 0x3a0))
    
    void* rax_9 = r14[0x15]
    
    if (rax_9 == 0)
        rax_9 = sub_141ee69e0(r14)
    
    int128_t zmm7 = *(rax_9 + 0x520)
    int128_t zmm0
    zmm0.d = zmm7.d f- *(rbx + 0x78)
    int32_t var_f8
    void* var_f0
    
    if (not(zmm0.d f<= data_14396e8d4))
        void* r12_1 = rbx + 0x28
        void* r15_1 = r12_1 + 0x10
        *(rbx + 0x78) = zmm7.d
        int32_t r11_1 = *(r15_1 + 0x18)
        int32_t rcx_3 = 0
        int128_t zmm6
        int128_t var_58_1 = zmm6
        int32_t r8_3 = 0
        void* arg_20 = r12_1
        var_f8 = 0
        int32_t var_f4_1 = 1
        var_f0 = r15_1
        int32_t var_e8_1 = 0xffffffff
        int64_t var_e4_1 = 0
        
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
            label_140771a9b:
                int32_t rax_17 = neg.d(rdx_5) & rdx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
                int32_t var_f4_2 = rax_17
                int32_t rax_18
                
                if (rax_17 == 0)
                    rax_18 = 0x20
                else
                    rax_18 = 0x1f - temp0_2
                
                var_e4_1.d = r8_3 - rax_18 + 0x1f
                
                if (r8_3 - rax_18 + 0x1f s> r11_1)
                    var_e4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_3)
                    r8_3 += 0x20
                    rcx_3 += 1
                    var_e4_1:4.d = r8_3
                    var_f8 = rcx_3
                    
                    if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                    int32_t var_e8_2 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_140771a9b
                
                var_e4_1.d = r11_1
        
        int32_t rdx_7 = *(r12_1 + 0x28)
        int32_t rsi_1 = 0xffffffff << (rdx_7.b & 0x1f)
        int32_t r8_6 = rdx_7 s>> 5
        int32_t r9_3 = rdx_7 & 0xffffffe0
        int128_t var_c0_1 = 0xffffffff
        int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int128_t var_d0_1
        var_d0_1:8.d = rsi_1
        var_d0_1:0xc.d = rdx_7
        int128_t var_98 = r12_1.o
        int128_t var_88_1 = var_f8.o
        
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
            label_140771b72:
                int32_t rax_27 = neg.d(rdx_11) & rdx_11
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_27)
                int32_t rbx_1
                
                if (rax_27 == 0)
                    rbx_1 = 0x20
                else
                    rbx_1 = 0x1f - temp0_4
                
                var_d0_1:0xc.d = r9_3 - rbx_1 + 0x1f
                
                if (r9_3 - rbx_1 + 0x1f s> r11_1)
                    var_d0_1:0xc.d = r11_1
            else
                while (true)
                    int64_t rcx_8 = sx.q(r8_6)
                    r9_3 += 0x20
                    r8_6 += 1
                    
                    if (rcx_8.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_11 = *(r10_1 + (rcx_8 << 2) + 4)
                    var_d0_1:8.d = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_140771b72
                
                var_d0_1:0xc.d = r11_1
        
        uint64_t r14_2 = var_d0_1:8.q u>> 0x20
        uint64_t arg_18 = r14_2
        
        while (true)
            int64_t rax_29 = sx.q(var_88_1:0xc.d)
            int64_t* rcx_10 = var_98.q
            
            if (rax_29.d == r14_2.d && var_88_1.q == r15_1 && rcx_10 == r12_1)
                break
            
            int64_t r12_2 = *rcx_10
            int64_t r15_2 = rax_29 * 9
            int32_t rdx_12 = *(r12_2 + (r15_2 << 3) + 0x10)
            void* rdi_1 = r12_2 + (r15_2 << 3)
            int32_t rbx_2 = 0
            zmm6.d = zmm7.d f- data_14396e8cc
            
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
                            *(rcx_12 + 0x554) = 0
                            (*(rax_30 + 0x3a0))(rcx_12, 0)
                            rdx_12 = *(rdi_1 + 0x10)
                        
                        int32_t rcx_15 = rdx_12 - rbx_2 - 1
                        
                        if (rcx_15 s>= 1)
                            rcx_15 = 1
                        
                        if (rcx_15 != 0)
                            memcpy((sx.q(rbx_2) << 4) + *(rdi_1 + 8), 
                                (sx.q(rdx_12 - rcx_15) << 4) + *(rdi_1 + 8), rcx_15 << 4)
                            rdx_12 = *(r12_2 + (r15_2 << 3) + 0x10)
                        
                        rdx_12 -= 1
                        *(rdi_1 + 0x10) = rdx_12
                while (rbx_2 s< rdx_12)
                
                r14_2 = arg_18
            
            if (*(rdi_1 + 0x14) != rdx_12)
                sub_1405a5410(rdi_1 + 8, rdx_12)
            
            var_88_1:8.d &= not.d(var_98:0xc.d)
            sub_14059bdd0(&var_98:8)
            r15_1 = var_f0
            r12_1 = arg_20
        
        r14 = arg_10
        rbx = arg1
    
    int64_t* rsi_3 = r14[0x81]
    sub_140758f00(rbx + 0x28, &arg_10, rsi_3)
    int64_t rax_33 = sx.q(arg_10.d)
    void* const rcx_22
    
    if (rax_33.d == 0xffffffff)
        rcx_22 = nullptr
    else
        rcx_22 = *(rbx + 0x28) + rax_33 * 0x48
    
    uint64_t* rbx_3 = rcx_22 + 8
    
    if (rcx_22 == 0)
        rbx_3 = nullptr
    
    if (rbx_3 == 0)
        arg_10 = rsi_3
        rbx_3 = sub_1406f4040(rbx + 0x28, &arg_10)
    
    if (data_14396e8d0 == 0 || rbx_3[1].d s>= *(r14[0x81] + 0x28))
        int64_t rax_42 = *r14
        *(r14 + 0x554) = 0
        return (*(rax_42 + 0x3a0))(r14, 0)
    
    sub_140752310(r14)
    int64_t r8_10 = *r14
    (*(r8_10 + 0x400))(r14, &data_143a2de54, r8_10)
    var_f0.d = 0x3f800000
    int64_t var_a8 = _mm_unpacklo_ps(0x3f800000, 0x3f800000).q
    int32_t var_a0_1 = 0x3f800000
    sub_141f48ee0(r14, &var_a8)
    sub_141f47470(r14, 0, 0, 0)
    sub_141efdf10(r14)
    sub_141f247b0(r14, 0)
    int32_t zmm7_1 = sub_141f24c70(r14, 0x7f7fffff)
    result = zx.q(*(r14 + 0xc))
    
    if (result.d s< data_143e1d9b4)
        int16_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(result.d)
        uint32_t rdx_23 = zx.d(temp6_1)
        int32_t rax_37 = temp7_1 + rdx_23
        result = data_143e1d9a0
        r13 = *(result + (sx.q(rax_37 s>> 0x10) << 3)) + sx.q(zx.d(rax_37.w) - rdx_23) * 0x18
    
    if ((*(r13 + 8) & 0x30000000) == 0)
        *(r14 + 0x554) = 4
        int64_t rdi_3 = sx.q(rbx_3[1].d)
        var_f0.d = zmm7_1
        var_f8.q = r14
        int32_t rax_41 = (rdi_3 + 1).d
        rbx_3[1].d = rax_41
        
        if (rax_41 s> *(rbx_3 + 0xc))
            sub_1405a4f90(rbx_3)
        
        result = *rbx_3
        *(result + rdi_3 * 0x10) = var_f8.o

return result
