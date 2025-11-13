// 函数: sub_140ee8c70
// 地址: 0x140ee8c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* var_148 = arg5
void*** rdi = nullptr
int64_t* r15 = arg4
int32_t rbx = 0
int64_t* var_128 = arg3
int128_t var_d0 = zx.o(0)
int64_t* var_138
int64_t* rsi_3

while (true)
    if (rbx s>= 0 && rbx s< *(arg1 + 0x48))
        int64_t rsi_1 = sx.q(rbx)
        int64_t* rcx_3 = *(*(arg1 + 0x40) + rsi_1 * 0x10)
        
        if ((*(*rcx_3 + 8))(rcx_3, arg3, r15) != 0)
            rsi_3 = (rsi_1 << 4) + *(arg1 + 0x40)
            break
        
        rbx += 1
        continue
    
    int32_t rbx_1 = 0
    
    while (true)
        if (rbx_1 s< 0 || rbx_1 s>= *(arg1 + 0x38))
            var_138 = nullptr
            goto label_140ee8e8a
        
        int64_t rsi_4 = sx.q(rbx_1)
        int64_t* rcx_6 = *(*(arg1 + 0x30) + rsi_4 * 0x10)
        
        if ((*(*rcx_6 + 8))(rcx_6, arg3, r15) != 0)
            rsi_3 = (rsi_4 << 4) + *(arg1 + 0x30)
            break
        
        rbx_1 += 1
        continue
    
    break

int64_t* r11_1 = *rsi_3
int64_t* rsi_6 = rsi_3[1]
var_138 = rsi_6

if (rsi_6 != 0)
    rsi_6[1].d += 1

int64_t* rbx_2
int64_t rsi_7
void*** var_1c8
int64_t* var_1c0
void* var_178

if (r11_1 == 0)
label_140ee8e8a:
    int64_t* rax_19 = sub_140596d10(&var_178, arg3)
    int64_t var_a8 = *rax_19
    *rax_19 = 0
    int32_t var_a0_1 = rax_19[1].d
    int32_t var_9c_1 = *(rax_19 + 0xc)
    rax_19[1] = 0
    int64_t var_98
    memset(&var_98, 0, 0x50)
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    int64_t rcx_19 = *rax_19
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    void* r12_1 = &arg3[4]
    int32_t var_19c_1 = 1
    int32_t r11_2 = *(r12_1 + 0x28)
    void* r13_1 = r12_1 + 0x10
    void* var_b8_1 = r12_1
    int32_t rcx_20 = 0
    int32_t var_1a0_1 = 0
    int32_t r8_3 = 0
    void* var_198_1 = r13_1
    int32_t var_190 = 0xffffffff
    int64_t var_18c_1 = 0
    
    if (r11_2 != 0)
        void* rax_20 = *(r13_1 + 0x10)
        void* r9_1 = r13_1
        
        if (rax_20 != 0)
            r9_1 = rax_20
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_2 - 1)
        int32_t rdx_7 = *r9_1
        
        if (rdx_7 != 0)
        label_140ee8fa9:
            int32_t rax_27 = neg.d(rdx_7) & rdx_7
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_27)
            var_19c_1 = rax_27
            int32_t rax_28
            
            if (rax_27 == 0)
                rax_28 = 0x20
            else
                rax_28 = 0x1f - temp0_2
            
            var_18c_1.d = r8_3 - rax_28 + 0x1f
            
            if (r8_3 - rax_28 + 0x1f s> r11_2)
                var_18c_1.d = r11_2
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_20)
                r8_3 += 0x20
                rcx_20 += 1
                var_18c_1:4.d = r8_3
                var_1a0_1 = rcx_20
                
                if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                var_190 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_140ee8fa9
            
            var_18c_1.d = r11_2
    
    int32_t rdx_9 = *(r12_1 + 0x28)
    var_178 = r12_1
    double zmm2[0x2] = var_190.o
    uint128_t var_170_1 = var_1a0_1.o
    int32_t r14_1 = 0xffffffff << (rdx_9.b & 0x1f)
    uint128_t zmm0_1 = var_178.o
    int32_t r8_6 = rdx_9 s>> 5
    int32_t r9_3 = rdx_9 & 0xffffffe0
    double var_160_1[0x2] = zmm2
    int64_t var_f8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    uint128_t zmm1 = var_170_1
    var_170_1:8.d = r14_1
    var_170_1:0xc.d = rdx_9
    uint128_t var_118 = zmm0_1
    uint128_t var_108_1 = zmm1
    
    if (rdx_9 != r11_2)
        void* rax_30 = *(r13_1 + 0x10)
        void* r10_2 = r13_1
        
        if (rax_30 != 0)
            r10_2 = rax_30
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_2 - 1)
        int32_t rdx_13 = *(r10_2 + (sx.q(r8_6) << 2)) & r14_1
        
        if (rdx_13 != 0)
        label_140ee9074:
            int32_t rax_37 = neg.d(rdx_13) & rdx_13
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_37)
            int32_t rbx_4
            
            if (rax_37 == 0)
                rbx_4 = 0x20
            else
                rbx_4 = 0x1f - temp0_4
            
            var_170_1:0xc.d = r9_3 - rbx_4 + 0x1f
            
            if (r9_3 - rbx_4 + 0x1f s> r11_2)
                var_170_1:0xc.d = r11_2
        else
            while (true)
                int64_t rcx_25 = sx.q(r8_6)
                r9_3 += 0x20
                r8_6 += 1
                
                if (rcx_25.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r10_2 + (rcx_25 << 2) + 4)
                var_170_1:8.d = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_140ee9074
            
            var_170_1:0xc.d = r11_2
    
    uint64_t rdx_15 = var_170_1:8.q u>> 0x20
    uint64_t var_130_1 = rdx_15
    void*** var_1d8
    int64_t* var_1d0
    int32_t var_1b8
    int16_t* const r11_3
    
    while (true)
        int64_t rcx_27 = sx.q(var_108_1:0xc.d)
        r11_3 = &data_142d40450
        int64_t rax_39 = var_118.q
        
        if (rcx_27.d == rdx_15.d && var_108_1.q == r13_1 && rax_39 == r12_1)
            break
        
        var_1c8 = nullptr
        void* r13_4 = (rcx_27 << 5) + *rax_39
        var_1c0 = nullptr
        int64_t rdx_16 = sx.q(*(r13_4 + 0x10))
        int32_t rax_41 = *(r13_4 + 0x14) - rdx_16.d
        
        if (rax_41 s<= 0)
            rax_41 = 0
        
        if (rax_41 s>= 0)
            int32_t r8_7 = r15[1].d
            int32_t rbx_5 = r8_7 - 1
            
            if (r8_7 == 0)
                rbx_5 = 0
            
            int32_t rcx_28
            
            if (rdx_16.d s>= 0)
                rcx_28 = rbx_5
                
                if (rdx_16.d s< rbx_5)
                    rcx_28 = rdx_16.d
            else
                rcx_28 = 0
            
            int64_t rdx_17 = rdx_16 + sx.q(rax_41)
            int64_t r9_5 = sx.q(rcx_28)
            
            if (rdx_17 s< r9_5)
                rbx_5 = rcx_28
            else if (rdx_17 s< sx.q(rbx_5))
                rbx_5 = rdx_17.d
            
            int16_t* const rax_44
            
            if (r8_7 == 0)
                rax_44 = &data_142d40450
            else
                rax_44 = *r15
            
            int16_t* r12_2 = &rax_44[r9_5]
            var_1d8 = nullptr
            int32_t rbx_6 = rbx_5 - rcx_28
            var_1d0 = nullptr
            void*** r14_2 = nullptr
            int32_t rsi_8 = 0
            int32_t r15_1 = 0
            
            if (r12_2 != 0 && *r12_2 != 0 && rbx_6 s> 0)
                if (rbx_6 + 1 s> 0)
                    sub_1405947f0(&var_1d8, rbx_6 + 1)
                    r15_1 = var_1d0:4.d
                    rsi_8 = var_1d0.d
                    r14_2 = var_1d8
                
                rsi_8 += rbx_6 + 1
                var_1d0.d = rsi_8
                
                if (rsi_8 s> r15_1)
                    sub_140594770(&var_1d8)
                    r15_1 = var_1d0:4.d
                    rsi_8 = var_1d0.d
                    r14_2 = var_1d8
                
                UnDecorator::getReferenceType(r14_2, r12_2, rbx_6 * 2)
                *(r14_2 + (sx.q(rsi_8) << 1) - 2) = 0
                void*** rcx_32 = var_1c8
                
                if (rcx_32 != 0)
                    sub_140a74f90(rcx_32)
            
            r12_1 = var_b8_1
            var_1c0:4.d = r15_1
            r15 = arg4
            var_1c8 = r14_2
            var_1d8 = nullptr
            var_1c0.d = rsi_8
            var_1d0 = nullptr
        
        var_178 = r13_4
        var_170_1.q = &var_1c8
        sub_140ee05e0(&var_98, &var_1b8, &var_178, nullptr)
        void*** rcx_34 = var_1c8
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        var_108_1:8.d &= not.d(var_118:0xc.d)
        sub_14059bdd0(&var_118:8)
        rdx_15 = var_130_1
        r13_1 = var_198_1
    
    int64_t* rbx_7 = arg6
    int32_t rax_49 = *(*rbx_7 + 8)
    
    if (rax_49 == 0)
        var_1b8 = 0
    else
        var_1b8 = rax_49 - 1
    
    int64_t* r12_3 = var_128
    void* r13_5
    
    if (r12_3[1].d s<= 1)
        r13_5 = arg1
    label_140ee9413:
        int64_t rax_65 = sx.q(r12_3[2].d)
        void*** r14_4 = nullptr
        int32_t r8_18 = *(r12_3 + 0x14)
        int32_t rsi_12 = 0
        
        if (r8_18 - rax_65.d s>= 0)
            int32_t r9_7 = r15[1].d
            int32_t rbx_10 = r9_7 - 1
            
            if (r9_7 == 0)
                rbx_10 = 0
            
            int32_t rcx_46
            
            if (rax_65.d s>= 0)
                rcx_46 = rbx_10
                
                if (rax_65.d s< rbx_10)
                    rcx_46 = rax_65.d
            else
                rcx_46 = 0
            
            int64_t r10_4 = sx.q(rcx_46)
            int64_t rdx_33 = rax_65 + sx.q(r8_18 - rax_65.d)
            
            if (rdx_33 s< r10_4)
                rbx_10 = rcx_46
            else if (rdx_33 s< sx.q(rbx_10))
                rbx_10 = rdx_33.d
            
            if (r9_7 != 0)
                r11_3 = *r15
            
            void* r15_3 = &r11_3[r10_4]
            var_1d8 = nullptr
            int32_t rbx_11 = rbx_10 - rcx_46
            var_1d0.d = 0
            int32_t rax_68 = 0
            var_1d0:4.d = 0
            
            if (r15_3 != 0 && *r15_3 != 0 && rbx_11 s> 0)
                if (rbx_11 + 1 s> 0)
                    sub_1405947f0(&var_1d8, rbx_11 + 1)
                    rax_68 = var_1d0:4.d
                    rsi_12 = var_1d0.d
                    r14_4 = var_1d8
                
                rsi_12 += rbx_11 + 1
                var_1d0.d = rsi_12
                
                if (rsi_12 s> rax_68)
                    sub_140594770(&var_1d8)
                    rsi_12 = var_1d0.d
                    r14_4 = var_1d8
                
                UnDecorator::getReferenceType(r14_4, r15_3, rbx_11 * 2)
                *(r14_4 + (sx.q(rsi_12) << 1) - 2) = 0
            
            rbx_7 = arg6
        
        int32_t r8_22 = rsi_12 - 1
        
        if (rsi_12 == 0)
            r8_22 = 0
        
        sub_140a20ba0(*rbx_7, r14_4, r8_22)
        
        if (r14_4 != 0)
            sub_140a74f90(r14_4)
    else
        int64_t* rax_51 = sub_140b58260(&var_128, *r12_3, 1)
        r13_5 = arg1
        int64_t* rcx_37 = *(r13_5 + 0x50)
        int64_t var_130_2 = *rax_51
        
        if ((*(*rcx_37 + 0x88))(rcx_37, data_143e243e0) == 0)
            r11_3 = &data_142d40450
            goto label_140ee9413
        
        int64_t rax_54 = sx.q(r12_3[3].d)
        void*** r14_3 = nullptr
        int32_t r8_12 = *(r12_3 + 0x1c)
        int32_t rsi_10 = 0
        
        if (r8_12 - rax_54.d s>= 0)
            int32_t r9_6 = r15[1].d
            int32_t rbx_8 = r9_6 - 1
            
            if (r9_6 == 0)
                rbx_8 = 0
            
            int32_t rcx_38
            
            if (rax_54.d s>= 0)
                rcx_38 = rbx_8
                
                if (rax_54.d s< rbx_8)
                    rcx_38 = rax_54.d
            else
                rcx_38 = 0
            
            int64_t r10_3 = sx.q(rcx_38)
            int64_t rdx_25 = rax_54 + sx.q(r8_12 - rax_54.d)
            
            if (rdx_25 s< r10_3)
                rbx_8 = rcx_38
            else if (rdx_25 s< sx.q(rbx_8))
                rbx_8 = rdx_25.d
            
            int16_t* const rax_57
            
            if (r9_6 == 0)
                rax_57 = &data_142d40450
            else
                rax_57 = *r15
            
            int16_t* r15_2 = &rax_57[r10_3]
            var_1d8 = nullptr
            int32_t rbx_9 = rbx_8 - rcx_38
            var_1d0.d = 0
            int32_t rax_58 = 0
            var_1d0:4.d = 0
            
            if (r15_2 != 0 && *r15_2 != 0 && rbx_9 s> 0)
                if (rbx_9 + 1 s> 0)
                    sub_1405947f0(&var_1d8, rbx_9 + 1)
                    rax_58 = var_1d0:4.d
                    rsi_10 = var_1d0.d
                    r14_3 = var_1d8
                
                rsi_10 = rsi_10 + 1 + rbx_9
                var_1d0.d = rsi_10
                
                if (rsi_10 s> rax_58)
                    sub_140594770(&var_1d8)
                    rsi_10 = var_1d0.d
                    r14_3 = var_1d8
                
                UnDecorator::getReferenceType(r14_3, r15_2, rbx_9 * 2)
                *(r14_3 + (sx.q(rsi_10) << 1) - 2) = 0
            
            rbx_7 = arg6
        
        int32_t r8_16 = rsi_10 - 1
        
        if (rsi_10 == 0)
            r8_16 = 0
        
        sub_140a20ba0(*rbx_7, r14_3, r8_16)
        
        if (r14_3 != 0)
            sub_140a74f90(r14_3)
        
        int16_t* rax_60
        
        if (r12_3[1].d == 0)
            rax_60 = &data_142d40450
        else
            rax_60 = *r12_3
        
        int64_t* rax_61 = sub_140b58260(&var_128, rax_60, 1)
        int64_t* rcx_45 = *(r13_5 + 0x50)
        int64_t r8_17 = *rax_61
        int64_t var_130_3 = r8_17
        void* rax_63 = (*(*rcx_45 + 0x88))(rcx_45, data_143e243e0, r8_17)
        var_148 = rax_63
        
        if (rax_63 == 0)
            var_148 = sub_140e13900()
    
    void* rcx_52 = *rbx_7
    void* var_1b0 = var_148
    int32_t rax_71 = *(rcx_52 + 8)
    
    if (rax_71 == 0)
        int32_t var_1b4_2 = 0
    else
        int32_t var_1b4_1 = rax_71 - 1
    
    int64_t* rbx_12 = rbx_7[1]
    var_178 = rcx_52
    var_170_1.q = rbx_12
    void* rax_73
    
    if (rbx_12 == 0)
        rax_73 = var_148
    else
        rbx_12[1].d += 1
        rax_73 = var_1b0
    
    void**** rax_74 = sub_140ef7910(&var_1c8, &var_a8, &var_178, rax_73, &var_1b8)
    int64_t* r14_5 = rax_74[1]
    void*** r15_4 = *rax_74
    
    if (r14_5 != 0)
        r14_5[1].d += 1
    
    int64_t* rsi_14 = var_1c0
    
    if (rsi_14 != 0)
        rsi_14[1].d -= 1
        
        if (rsi_14[1].d == 1)
            (**rsi_14)(rsi_14)
            int32_t temp19_1 = *(rsi_14 + 0xc)
            *(rsi_14 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*rsi_14 + 8))(rsi_14, 1)
    
    if (rbx_12 != 0)
        rbx_12[1].d -= 1
        
        if (rbx_12[1].d == 1)
            (**rbx_12)(rbx_12)
            int32_t temp20_1 = *(rbx_12 + 0xc)
            *(rbx_12 + 0xc) -= 1
            
            if (temp20_1 == 1)
                (*(*rbx_12 + 8))(rbx_12, 1)
    
    if (r15_4 != 0)
        int32_t zmm1_1 = *(r13_5 + 0x58)
        
        if (not(zmm1_1 f== 0f))
            uint128_t zmm0_2
            zmm0_2.d = _mm_cvtepi32_ps(zx.o(r15_4[0x1b].d)).d f* zmm1_1
            r15_4[0x1b].d = zx.d((int.d(zmm0_2.d)).w)
    
    var_1c0 = r14_5
    
    if (r14_5 != 0)
        r14_5[1].d += 1
    
    var_d0.q = r15_4
    var_1c8 = nullptr
    sub_14066a200(&var_d0:8, &var_1c0)
    int64_t* rbx_13 = var_1c0
    
    if (rbx_13 != 0)
        rbx_13[1].d -= 1
        
        if (rbx_13[1].d == 1)
            (**rbx_13)(rbx_13)
            int32_t temp22_1 = *(rbx_13 + 0xc)
            *(rbx_13 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*(*rbx_13 + 8))(rbx_13, 1)
    
    void* rbx_14 = var_1b0
    int32_t rcx_62
    rcx_62.b = sub_140b5b8a0(*(rbx_14 + 0x230), 0) == 0
    void* rax_83
    
    if ((*(rbx_14 + 0x234) != 0 | rcx_62.b) == 0)
        rax_83 = *(rbx_14 + 0x228)
    
    int64_t rax_84
    
    if ((*(rbx_14 + 0x234) != 0 | rcx_62.b) != 0 || rax_83 == 0)
        rax_84 = *(rbx_14 + 0x230)
    else
        rax_84 = *(rax_83 + 0x18)
    
    int64_t rbx_15 = var_1b8.q
    int64_t* var_120
    int64_t* r13_6
    
    if (rax_84 == 0)
        r13_6 = arg9
    else
        void* r15_5 = var_1b0
        int64_t* r12_4 = arg10
        sub_1405ba560(r12_4, &var_1b8, r15_5)
        int64_t rax_85 = sx.q(var_1b8)
        int64_t rsi_16
        void* rsi_17
        
        if (rax_85.d != 0xffffffff)
            rsi_16 = rax_85 << 5
            rsi_17 = rsi_16 + *r12_4
        
        int64_t* rsi_18
        void*** r12_5
        
        if (rax_85.d == 0xffffffff || rsi_16 == neg.q(*r12_4))
            var_1d0 = nullptr
        label_140ee9719:
            var_108_1.b = *(r15_5 + 0x68)
            var_178.o = *(r15_5 + 0x88)
            var_108_1:8.q = *(r15_5 + 0x70)
            void* rax_88 = *(r15_5 + 0x78)
            void* var_f8_2 = rax_88
            var_118 = *(r15_5 + 0x58)
            
            if (rax_88 != 0)
                *(rax_88 + 8) += 1
                r15_5 = var_1b0
            
            void**** rax_89 = sub_140ef7bc0(&var_128, r15_5 + 0x1e0, r15_5 + 8, &var_118, 
                *(r15_5 + 0x80), &var_178)
            int64_t* rcx_65 = rax_89[1]
            void*** rdx_42 = *rax_89
            var_1c0 = rcx_65
            
            if (rcx_65 != 0)
                rcx_65[1].d += 1
            
            var_1d8 = rdx_42
            var_1c8 = nullptr
            sub_14066a200(&var_1d0, &var_1c0)
            int64_t* rsi_19 = var_1c0
            
            if (rsi_19 != 0)
                rsi_19[1].d -= 1
                
                if (rsi_19[1].d == 1)
                    (**rsi_19)(rsi_19)
                    int32_t temp31_1 = *(rsi_19 + 0xc)
                    *(rsi_19 + 0xc) -= 1
                    
                    if (temp31_1 == 1)
                        (*(*rsi_19 + 8))(rsi_19, 1)
            
            if (var_120 != 0)
                var_120[1].d -= 1
                
                if (var_120[1].d == 1)
                    (**var_120)(var_120)
                    int32_t temp32_1 = *(var_120 + 0xc)
                    *(var_120 + 0xc) -= 1
                    
                    if (temp32_1 == 1)
                        (*(*var_120 + 8))(var_120, 1)
            
            var_178 = &var_1b0
            var_170_1.q = &var_1d8
            sub_140ee0450(r12_4, &var_1b8, &var_178, nullptr)
            rsi_18 = var_1d0
            r12_5 = var_1d8
        else
            r12_5 = *(rsi_17 + 8)
            var_1d8 = r12_5
            rsi_18 = *(rsi_17 + 0x10)
            var_1d0 = rsi_18
            
            if (rsi_18 != 0)
                rsi_18[1].d += 1
                r15_5 = var_1b0
                rsi_18 = var_1d0
                r12_5 = var_1d8
            
            if (r12_5 == 0)
                r12_4 = arg10
                goto label_140ee9719
        
        if (rsi_18 != 0)
            rsi_18[1].d += 1
            rsi_18[1].d += 1
        
        int32_t var_1a0_2 = arg2
        var_19c_1.q = rbx_15
        var_198_1:4.d = 1
        var_190.q = r12_5
        var_18c_1 = rsi_18
        
        if (rsi_18 != 0)
            rsi_18[1].d += 1
        
        r13_6 = arg9
        int64_t r15_6 = sx.q(r13_6[1].d)
        int32_t rax_95 = (r15_6 + 1).d
        r13_6[1].d = rax_95
        
        if (rax_95 s> *(r13_6 + 0xc))
            sub_1405c4e40(r13_6)
        
        int32_t* rax_98 = (r15_6 << 5) + *r13_6
        *rax_98 = arg2
        *(rax_98 + 4) = rbx_15
        rax_98[3] = 1
        *(rax_98 + 0x10) = r12_5
        *(rax_98 + 0x18) = rsi_18
        
        if (rsi_18 != 0)
            rsi_18[1].d += 1
        
        sub_140597060(&var_190)
        
        if (rsi_18 != 0)
            rsi_18[1].d -= 1
            
            if (rsi_18[1].d == 1)
                (**rsi_18)(rsi_18)
                int32_t temp38_1 = *(rsi_18 + 0xc)
                *(rsi_18 + 0xc) -= 1
                
                if (temp38_1 == 1)
                    (*(*rsi_18 + 8))(rsi_18, 1)
            
            if (rsi_18 != 0)
                rsi_18[1].d -= 1
                
                if (rsi_18[1].d == 1)
                    (**rsi_18)(rsi_18)
                    int32_t temp42_1 = *(rsi_18 + 0xc)
                    *(rsi_18 + 0xc) -= 1
                    
                    if (temp42_1 == 1)
                        (*(*rsi_18 + 8))(rsi_18, 1)
        
        int64_t* rsi_21 = var_1d0
        
        if (rsi_21 != 0)
            rsi_21[1].d -= 1
            
            if (rsi_21[1].d == 1)
                (**rsi_21)(rsi_21)
                int32_t temp40_1 = *(rsi_21 + 0xc)
                *(rsi_21 + 0xc) -= 1
                
                if (temp40_1 == 1)
                    (*(*rsi_21 + 8))(rsi_21, 1)
    
    void* rsi_22 = var_1b0
    int32_t rcx_81
    rcx_81.b = sub_140b5b8a0(*(rsi_22 + 0x1a8), 0) == 0
    void* rax_106
    
    if ((*(rsi_22 + 0x1ac) != 0 | rcx_81.b) == 0)
        rax_106 = *(rsi_22 + 0x1a0)
    
    int64_t rax_107
    
    if ((*(rsi_22 + 0x1ac) != 0 | rcx_81.b) != 0 || rax_106 == 0)
        rax_107 = *(rsi_22 + 0x1a8)
    else
        rax_107 = *(rax_106 + 0x18)
    
    if (rax_107 != 0)
        void* r15_7 = var_1b0
        int64_t* r12_6 = arg11
        sub_1405ba560(r12_6, &var_1b8, r15_7)
        int64_t rax_108 = sx.q(var_1b8)
        int64_t rsi_24
        void* rsi_25
        
        if (rax_108.d != 0xffffffff)
            rsi_24 = rax_108 << 5
            rsi_25 = rsi_24 + *r12_6
        
        int64_t* rsi_26
        void*** r12_7
        
        if (rax_108.d == 0xffffffff || rsi_24 == neg.q(*r12_6))
            var_1d0 = nullptr
        label_140ee99ef:
            var_108_1.b = *(r15_7 + 0x68)
            var_178.o = *(r15_7 + 0x88)
            var_108_1:8.q = *(r15_7 + 0x70)
            void* rax_111 = *(r15_7 + 0x78)
            void* var_f8_3 = rax_111
            var_118 = *(r15_7 + 0x58)
            
            if (rax_111 != 0)
                *(rax_111 + 8) += 1
                r15_7 = var_1b0
            
            int64_t* rax_112 = sub_140ef7a50(&var_128, r15_7 + 0x158, r15_7 + 8, &var_118, 
                *(r15_7 + 0x80), &var_178)
            int64_t* rcx_84 = rax_112[1]
            void*** rdx_48 = *rax_112
            var_1c0 = rcx_84
            
            if (rcx_84 != 0)
                rcx_84[1].d += 1
            
            var_1d8 = rdx_48
            var_1c8 = nullptr
            sub_14066a200(&var_1d0, &var_1c0)
            int64_t* rdi_3 = var_1c0
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp36_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp36_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
            
            if (var_120 != 0)
                var_120[1].d -= 1
                
                if (var_120[1].d == 1)
                    (**var_120)(var_120)
                    int32_t temp39_1 = *(var_120 + 0xc)
                    *(var_120 + 0xc) -= 1
                    
                    if (temp39_1 == 1)
                        (*(*var_120 + 8))(var_120, 1)
            
            var_178 = &var_1b0
            var_170_1.q = &var_1d8
            sub_140ee0450(r12_6, &var_1b8, &var_178, nullptr)
            rsi_26 = var_1d0
            r12_7 = var_1d8
        else
            r12_7 = *(rsi_25 + 8)
            var_1d8 = r12_7
            rsi_26 = *(rsi_25 + 0x10)
            var_1d0 = rsi_26
            
            if (rsi_26 != 0)
                rsi_26[1].d += 1
                r15_7 = var_1b0
                rsi_26 = var_1d0
                r12_7 = var_1d8
            
            if (r12_7 == 0)
                r12_6 = arg11
                goto label_140ee99ef
        
        if (rsi_26 != 0)
            rsi_26[1].d += 1
            rsi_26[1].d += 1
        
        int32_t var_1a0_3 = arg2
        var_19c_1.q = rbx_15
        var_198_1:4.d = 1
        var_190.q = r12_7
        var_18c_1 = rsi_26
        
        if (rsi_26 != 0)
            rsi_26[1].d += 1
        
        int64_t rdi_5 = sx.q(r13_6[1].d)
        int32_t rax_117 = (rdi_5 + 1).d
        r13_6[1].d = rax_117
        
        if (rax_117 s> *(r13_6 + 0xc))
            sub_1405c4e40(r13_6)
        
        int32_t* rax_120 = (rdi_5 << 5) + *r13_6
        *rax_120 = arg2
        *(rax_120 + 4) = rbx_15
        rax_120[3] = 1
        *(rax_120 + 0x10) = r12_7
        *(rax_120 + 0x18) = rsi_26
        
        if (rsi_26 != 0)
            rsi_26[1].d += 1
        
        sub_140597060(&var_190)
        
        if (rsi_26 != 0)
            rsi_26[1].d -= 1
            
            if (rsi_26[1].d == 1)
                (**rsi_26)(rsi_26)
                int32_t temp45_1 = *(rsi_26 + 0xc)
                *(rsi_26 + 0xc) -= 1
                
                if (temp45_1 == 1)
                    (*(*rsi_26 + 8))(rsi_26, 1)
            
            if (rsi_26 != 0)
                rsi_26[1].d -= 1
                
                if (rsi_26[1].d == 1)
                    (**rsi_26)(rsi_26)
                    int32_t temp48_1 = *(rsi_26 + 0xc)
                    *(rsi_26 + 0xc) -= 1
                    
                    if (temp48_1 == 1)
                        (*(*rsi_26 + 8))(rsi_26, 1)
        
        int64_t* rbx_16 = var_1d0
        
        if (rbx_16 != 0)
            rbx_16[1].d -= 1
            
            if (rbx_16[1].d == 1)
                (**rbx_16)(rbx_16)
                int32_t temp46_1 = *(rbx_16 + 0xc)
                *(rbx_16 + 0xc) -= 1
                
                if (temp46_1 == 1)
                    (*(*rbx_16 + 8))(rbx_16, 1)
    
    if (r14_5 != 0)
        r14_5[1].d -= 1
        
        if (r14_5[1].d == 1)
            (**r14_5)(r14_5)
            int32_t temp29_1 = *(r14_5 + 0xc)
            *(r14_5 + 0xc) -= 1
            
            if (temp29_1 == 1)
                (*(*r14_5 + 8))(r14_5, 1)
    
    sub_140ee3ef0(&var_a8)
    rbx_2 = var_d0:8.q
    rsi_7 = var_d0.q
else
    int64_t* rcx_7 = *(arg7 + 0x10)
    
    if (rcx_7 != 0)
        int32_t rax_12 = rcx_7[1].d
        
        if (rax_12 != 0)
            rcx_7[1].d = rax_12 + 1
            rax_12.b = 1
        
        if (rax_12.b == 0)
            rcx_7 = nullptr
        
        if (rcx_7 != 0)
            rdi = *(arg7 + 8)
    
    int64_t rax_13 = *(arg1 + 0x50)
    var_1c0 = rcx_7
    var_1c8 = rdi
    int64_t* rax_14 = (*(*r11_1 + 0x10))(r11_1, &var_178, &var_1c8, arg3, r15, arg6, rax_13)
    int64_t* rcx_9 = rax_14[1]
    rsi_7 = *rax_14
    
    if (rcx_9 != 0)
        rcx_9[1].d += 1
    
    rbx_2 = var_d0:8.q
    
    if (rcx_9 != 0)
        rbx_2 = rcx_9
    
    int64_t* var_170
    
    if (var_170 != 0)
        var_170[1].d -= 1
        
        if (var_170[1].d == 1)
            (**var_170)(var_170)
            int32_t temp6_1 = *(var_170 + 0xc)
            *(var_170 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_170 + 8))(var_170, 1)
    
    int64_t* rdi_2 = var_1c0
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp7_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

if (rbx_2 != 0)
    rbx_2[1].d += 2

int64_t rdi_6 = sx.q(arg8[1].d)
int32_t rax_129 = (rdi_6 + 1).d
arg8[1].d = rax_129

if (rax_129 s> *(arg8 + 0xc))
    sub_1405a4f90(arg8)

int64_t* result = (rdi_6 << 4) + *arg8
*result = rsi_7
result[1] = rbx_2

if (rbx_2 != 0)
    result = zx.q(rbx_2[1].d)
    rbx_2[1].d = result.d
    
    if (result.d == 0)
        result = (**rbx_2)(rbx_2)
        int32_t temp12_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp12_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)
    
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp15_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp15_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

if (var_138 != 0)
    var_138[1].d -= 1
    
    if (var_138[1].d == 1)
        result = (**var_138)(var_138)
        int32_t temp14_1 = *(var_138 + 0xc)
        *(var_138 + 0xc) -= 1
        
        if (temp14_1 == 1)
            result = (*(*var_138 + 8))(var_138, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp16_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp16_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

__security_check_cookie(rax_1 ^ &var_218)
return result
