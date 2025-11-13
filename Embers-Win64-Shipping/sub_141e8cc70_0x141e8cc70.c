// 函数: sub_141e8cc70
// 地址: 0x141e8cc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t rsi = 0
int32_t var_19c = 1
int32_t var_190 = 0xffffffff
int32_t rcx = 0
int32_t* result
float var_178[0x4]

if (data_143a2d44c == 0)
    int32_t r11_1 = *(arg1 + 0x418)
    int32_t var_1a0_1 = 0
    void* var_198_1 = arg1 + 0x400
    int32_t var_18c_6 = 0
    int32_t var_188_2 = 0
    
    if (r11_1 != 0)
        void* rax_29 = *(arg1 + 0x410)
        void* r8_9 = arg1 + 0x400
        
        if (rax_29 != 0)
            r8_9 = rax_29
        
        int32_t temp0_7
        int32_t temp1_1
        temp0_7:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_18 = *r8_9
        int32_t var_18c_8
        
        if (rdx_18 != 0)
        label_141e8d139:
            int32_t rax_36 = neg.d(rdx_18) & rdx_18
            uint64_t rflags_3
            int32_t temp0_8
            temp0_8, rflags_3 = _bit_scan_reverse(rax_36)
            int32_t var_19c_2 = rax_36
            int32_t rax_37
            
            if (rax_36 == 0)
                rax_37 = 0x20
            else
                rax_37 = 0x1f - temp0_8
            
            int32_t var_18c_7 = rcx - rax_37 + 0x1f
            
            if (rcx - rax_37 + 0x1f s> r11_1)
                var_18c_8 = r11_1
        else
            while (true)
                int64_t rdx_19 = sx.q(rsi)
                rcx += 0x20
                rsi += 1
                int32_t var_188_3 = rcx
                var_1a0_1 = rsi
                
                if (rdx_19.d s>= (temp1_1 + (temp0_7 & 0x1f)) s>> 5)
                    break
                
                rdx_18 = *(r8_9 + (rdx_19 << 2) + 4)
                int32_t var_190_2 = 0xffffffff
                
                if (rdx_18 != 0)
                    goto label_141e8d139
            
            var_18c_8 = r11_1
    
    int32_t rdx_21 = *(arg1 + 0x418)
    int128_t var_110_1 = 0xffffffff
    int32_t r15 = 0xffffffff << (rdx_21.b & 0x1f)
    float var_120_1[0x4] = var_1a0_1.o
    int32_t r8_11 = rdx_21 s>> 5
    int32_t r9_8 = rdx_21 & 0xffffffe0
    int64_t var_158_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    int32_t var_190_3 = r15
    int32_t var_18c_9 = rdx_21
    var_178 = (arg1 + 0x3f0).o
    uint128_t var_168_1 = var_120_1
    
    if (rdx_21 != r11_1)
        void* rax_39 = *(arg1 + 0x410)
        void* r11_2 = arg1 + 0x400
        
        if (rax_39 != 0)
            r11_2 = rax_39
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_25 = *(r11_2 + (sx.q(r8_11) << 2)) & r15
        int32_t var_18c_11
        
        if (rdx_25 != 0)
        label_141e8d213:
            int32_t rax_46 = neg.d(rdx_25) & rdx_25
            uint64_t rflags_4
            int32_t temp0_10
            temp0_10, rflags_4 = _bit_scan_reverse(rax_46)
            int32_t r10_2
            
            if (rax_46 == 0)
                r10_2 = 0x20
            else
                r10_2 = 0x1f - temp0_10
            
            int32_t var_18c_10 = r9_8 - r10_2 + 0x1f
            
            if (r9_8 - r10_2 + 0x1f s> r11_1)
                var_18c_11 = r11_1
        else
            while (true)
                int64_t rcx_29 = sx.q(r8_11)
                r9_8 += 0x20
                r8_11 += 1
                
                if (rcx_29.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_25 = *(r11_2 + (rcx_29 << 2) + 4)
                var_190_3 = 0xffffffff
                
                if (rdx_25 != 0)
                    goto label_141e8d213
            
            var_18c_11 = r11_1
    
    while (true)
        result = sx.q(var_168_1:0xc.d)
        int64_t* rdx_26 = var_178[0].q
        
        if (result.d == (var_190_3.q u>> 0x20).d && var_168_1.q == arg1 + 0x400
                && rdx_26 == arg1 + 0x3f0)
            break
        
        void* rbx_4 = *(*rdx_26 + result * 0x28)
        int64_t rdx_27 = *(rbx_4 + 0x28)
        
        if (rdx_27 != 0)
            sub_1407c23d0(arg1 + 0x4c8, rdx_27)
        
        sub_141e733a0(arg1, rbx_4, nullptr)
        sub_141dbcc30(rbx_4)
        sub_141e744f0(arg1, rbx_4)
        var_168_1:8.d &= not.d(var_178[3])
        sub_14059bdd0(&var_178[2])
else
    int32_t rbx_1 = *(arg1 + 0x418)
    int32_t result_1 = 0
    void* r12_1 = nullptr
    int32_t r8_1 = 0
    void* r11 = arg1 + 0x400
    void* var_150 = nullptr
    int32_t var_144_1 = 0
    int32_t var_1a0 = 0
    void* var_198 = r11
    int32_t var_18c
    var_18c.q = 0
    
    if (rbx_1 != 0)
        void* rax_2 = *(r11 + 0x10)
        void* r9_1 = r11
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_2 = *r9_1
        int32_t var_18c_2
        
        if (rdx_2 != 0)
        label_141e8cd5b:
            int32_t rax_9 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_19c_1 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_1
            
            int32_t var_18c_1 = r8_1 - rax_10 + 0x1f
            
            if (r8_1 - rax_10 + 0x1f s> rbx_1)
                var_18c_2 = rbx_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                int32_t var_188_1 = r8_1
                var_1a0 = rcx
                
                if (rdx_3.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_190 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141e8cd5b
            
            var_18c_2 = rbx_1
        r11 = arg1 + 0x400
    
    int32_t rdx_4 = *(arg1 + 0x418)
    double zmm2[0x2] = var_190.o
    int32_t rdi = *(r11 + 0x18)
    int32_t r9_2 = 0xffffffff << (rdx_4.b & 0x1f)
    int32_t var_180 = r9_2
    int32_t var_190_1 = r9_2
    float var_120[0x4] = var_1a0.o
    int32_t r9_4 = rdx_4 & 0xffffffe0
    int32_t r8_4 = rdx_4 s>> 5
    int32_t var_18c_3 = rdx_4
    double var_110[0x2] = zmm2
    int64_t var_158 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_178 = (arg1 + 0x3f0).o
    uint128_t var_168 = var_120
    
    if (rdx_4 != rdi)
        void* rax_12 = *(r11 + 0x10)
        
        if (rax_12 != 0)
            r11 = rax_12
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(rdi - 1)
        int32_t rdx_8 = *(r11 + (sx.q(r8_4) << 2)) & var_180
        int32_t var_18c_5
        
        if (rdx_8 != 0)
        label_141e8ce43:
            int32_t rax_19 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t r10_1
            
            if (rax_19 == 0)
                r10_1 = 0x20
            else
                r10_1 = 0x1f - temp0_3
            
            int32_t rax_20 = r9_4 - r10_1 + 0x1f
            int32_t var_18c_4 = rax_20
            
            if (rax_20 s> rdi)
                var_18c_5 = rdi
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_4 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r11 + (rcx_5 << 2) + 4)
                var_190_1 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141e8ce43
            
            var_18c_5 = rdi
        r11 = arg1 + 0x400
    
    int128_t zmm7 = zx.o(0)
    int128_t zmm8 = 0x3f000000
    uint64_t rcx_8 = var_190_1.q u>> 0x20
    uint64_t var_130_1 = rcx_8
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    
    while (true)
        int64_t rax_21 = sx.q(var_168:0xc.d)
        int64_t* rdx_9 = var_178[0].q
        
        if (rax_21.d == rcx_8.d && var_168.q == r11 && rdx_9 == arg1 + 0x3f0)
            break
        
        int64_t rcx_9 = rax_21 * 5
        int64_t rax_22 = *rdx_9
        void* rdi_1 = rax_22 + (rcx_9 << 3)
        void* rax_23 = *(rax_22 + (rcx_9 << 3) + 0x18)
        
        if ((*(rax_23 + 0x183) & 0x10) == 0)
            if (*(rax_23 + 0x185) == 0)
                float temp0_4[0x4] = _mm_min_ss((*(arg1 + 0x36c))[0], zmm8.d)
                uint128_t zmm1
                zmm1.d = temp0_4.d f* *(rax_23 + 0x198)
                float zmm0[0x4] = zmm1
                zmm0[0] = zmm0[0] f+ *(rax_23 + 0x190)
                *(rax_23 + 0x190) = zmm0[0]
                zmm1.d = zmm1.d f+ *(rdi_1 + 0xc)
                temp0_4[0] = temp0_4[0] f+ *(rdi_1 + 8)
                *(rdi_1 + 0xc) = zmm1.d
                
                if (arg2 != 0)
                label_141e8cf3e:
                    *(rdi_1 + 8) = 0
                label_141e8cf41:
                    void* rax_24 = *(rdi_1 + 0x18)
                    void* rcx_11 = rax_24
                    
                    if ((*(rax_24 + 0x180) & 4) != 0 && (*(rax_24 + 0x328) & 1) != 0)
                        zmm1 = *(rax_24 + 0x230)
                        void* rbx_2 = *(rax_24 + 0x50)
                        float var_140 = zmm1.d
                        float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        r9_4.b = 1
                        int32_t var_138_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                        float var_13c_1 = temp0_5[0]
                        int32_t rax_25 = sub_141e7ab30(rbx_2, &var_140, &var_180, r9_4.b)
                        void* r9_5 = *(rdi_1 + 0x18)
                        void var_f8
                        int64_t rdx_13
                        int512_t zmm1_1
                        int128_t zmm6_1
                        rdx_13, zmm1_1, zmm6_1, zmm8 =
                            sub_141e77da0(&var_f8, rbx_2, rax_25, r9_5 + 0x220, r9_5 + 0x278)
                        zmm1_1.o = zmm6_1
                        sub_141ddbd50(*(rdi_1 + 0x18), rdx_13, &var_f8, nullptr)
                        rcx_11 = *(rdi_1 + 0x18)
                    
                    char rax_26
                    rax_26, zmm7 = sub_141e808a0(rcx_11, nullptr)
                    
                    if (rax_26 != 0)
                        int64_t result_2 = sx.q(result_1)
                        result_1 = (result_2 + 1).d
                        
                        if (result_1 s> var_144_1)
                            sub_1405a4df0(&var_150)
                            r12_1 = var_150
                        
                        int64_t rcx_18 = result_2 * 3
                        *(r12_1 + (rcx_18 << 3)) = *(rdi_1 + 8)
                        *(r12_1 + (rcx_18 << 3) + 0x10) = *(rdi_1 + 0x18)
                    else
                        sub_141e76210(rdi_1 + 8)
                else
                    zmm0 = *(rdi_1 + 0x10)
                    
                    if (zmm0[0] f<= zmm7.d)
                        goto label_141e8cf41
                    
                    bool cond:7_1 = zmm0[0] > temp0_4[0]
                    *(rdi_1 + 8) = temp0_4[0]
                    
                    if (not(cond:7_1))
                        goto label_141e8cf3e
            else
                zmm7 = sub_141e744f0(arg1, rax_23)
        
        var_168:8.d &= not.d(var_178[3])
        sub_14059bdd0(&var_178[2])
        rcx_8 = var_130_1
        r11 = arg1 + 0x400
    
    void* rbx_3 = r12_1
    result = sx.q(result_1)
    void* rdi_2 = r12_1 + result * 0x18
    
    if (r12_1 != rdi_2)
        do
            result = sub_141e733a0(arg1, *(rbx_3 + 0x10), rbx_3)
            rbx_3 += 0x18
        while (rbx_3 != rdi_2)
    
    if (r12_1 != 0)
        result = sub_140a74f90(r12_1)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
