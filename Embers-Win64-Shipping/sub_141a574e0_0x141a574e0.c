// 函数: sub_141a574e0
// 地址: 0x141a574e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1 + 0x20
int32_t var_1b4 = 1
int32_t r10 = *(r15 + 0x28)
void* rsi = r15 + 0x10
int32_t rcx = 0
void* var_e8 = r15
int32_t var_1b8 = 0
int32_t r8 = 0
char arg_8 = 0
void* var_1b0 = rsi
int32_t var_1a8 = 0xffffffff
int64_t var_1a4 = 0

if (r10 != 0)
    void* rax_1 = *(rsi + 0x10)
    void* r9 = rsi
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_141a5759b:
        int32_t rax_7 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_1b4_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_1a4.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r10)
            var_1a4.d = r10
    else
        while (true)
            int64_t rax_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_1a4:4.d = r8
            var_1b8 = rcx
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = *(r9 + (rax_4 << 2) + 4)
            int32_t var_1a8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141a5759b
        
        var_1a4.d = r10

int32_t r9_2 = *(r15 + 0x28)
int32_t r8_3 = r9_2 s>> 5
int32_t var_1e8 = r9_2
int128_t var_60 = var_1b8.o
int32_t rcx_4 = r9_2 & 0xffffffe0
int128_t var_50 = 0xffffffff
int64_t var_90 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_b0 = r15.o
int128_t var_a0 = var_60
uint64_t rax_11

if (r9_2 != r10)
    void* rax_12 = *(rsi + 0x10)
    void* r9_1 = rsi
    
    if (rax_12 != 0)
        r9_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_6 = *(r9_1 + (sx.q(r8_3) << 2)) & 0xffffffff << (r9_2 & 0x1f).b
    
    if (rdx_6 != 0)
    label_141a5767b:
        rax_11 = (zx.q(rdx_6 - 1) & zx.q(rdx_6)) ^ zx.q(rdx_6)
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_11.d)
        int32_t rdi_1
        
        if (rax_11.d == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        r9_2 = rcx_4 - rdi_1 + 0x1f
        var_1e8 = r9_2
        
        if (r9_2 s> r10)
            r9_2 = r10
            var_1e8 = r10
    else
        while (true)
            rax_11 = sx.q(r8_3)
            rcx_4 += 0x20
            r8_3 += 1
            
            if (rax_11.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_6 = *(r9_1 + (rax_11 << 2) + 4)
            
            if (rdx_6 != 0)
                goto label_141a5767b
        
        r9_2 = r10
        var_1e8 = r10

while (true)
    int64_t rdx_8 = sx.q(var_a0:0xc.d)
    
    if (rdx_8.d != r9_2 || var_a0.q != rsi)
        rax_11.b = 0
    else
        rax_11.b = 1
    
    int64_t rcx_6 = var_b0.q
    
    if (rax_11.b == 0 || rcx_6 != r15)
        rax_11.b = 1
    else
        rax_11.b = 0
    
    if (rax_11.b == 0)
        break
    
    int32_t* rdi_4 = (rdx_8 << 4) + *rcx_6
    void* rsi_2
    
    if (arg2[1].d == *(arg2 + 0x34))
    label_141a5774f:
        rsi_2 = nullptr
    label_141a57838:
        arg_8 = 1
        
        if (arg4 != 0)
            int128_t zmm0
            
            if (rsi_2 == 0)
                char rdx_30 = *arg4
                int32_t var_11c_1 = 0
                int64_t var_f8 = 2.q
                int32_t var_188_1 = 0
                int64_t var_f0 = 2.q
                
                if (rdx_30 == 2)
                label_141a57d38:
                    void* rcx_34 = &var_f0
                    
                    if (arg4[8] == 2)
                        rcx_34 = &arg4[8]
                    
                    char* rax_66 = &var_f8
                    
                    if (rdx_30 == 2)
                        rax_66 = arg4
                    
                    int64_t var_c0_1 = *rcx_34
                    zmm0 = (*rax_66).o
                else
                    char rax_64 = arg4[8]
                    
                    if (rax_64 == 2)
                        goto label_141a57d38
                    
                    int32_t r8_15 = *(arg4 + 0xc)
                    int32_t temp4_1 = *(arg4 + 4)
                    
                    if (temp4_1 s<= r8_15 && (temp4_1 != r8_15 || (rdx_30 != 0 && rax_64 != 0)))
                        goto label_141a57d38
                    
                    zmm0 = var_f8.o
                    int64_t var_c8
                    var_c8.o = zmm0
            else if (*(rsi_2 + 0x30) s> 0)
                char rdx_29 = *arg4
                int32_t var_12c_1 = 0
                int64_t var_108 = 2.q
                int32_t var_124_1 = 0
                int64_t var_100 = 2.q
                
                if (rdx_29 == 2)
                label_141a57caf:
                    void* rcx_33 = &var_100
                    
                    if (arg4[8] == 2)
                        rcx_33 = &arg4[8]
                    
                    char* rax_59 = &var_108
                    
                    if (rdx_29 == 2)
                        rax_59 = arg4
                    
                    int64_t var_d0_1 = *rcx_33
                    zmm0 = (*rax_59).o
                else
                    char rax_57 = arg4[8]
                    
                    if (rax_57 == 2)
                        goto label_141a57caf
                    
                    int32_t r8_14 = *(arg4 + 0xc)
                    int32_t temp5_1 = *(arg4 + 4)
                    
                    if (temp5_1 s<= r8_14 && (temp5_1 != r8_14 || (rdx_29 != 0 && rax_57 != 0)))
                        goto label_141a57caf
                    
                    zmm0 = var_108.o
                    int64_t var_d8
                    var_d8.o = zmm0
            else
                char r9_4 = *(rsi_2 + 0x74)
                int128_t var_1f8
                int64_t rax_35
                int64_t rcx_20
                
                if (r9_4 == 2)
                label_141a5789d:
                    char r10_1 = *(rsi_2 + 0x44)
                    
                    if (r10_1 == 2)
                    label_141a578d9:
                        char r11_1 = *(rsi_2 + 0x7c)
                        void* rax_37 = rsi_2 + 0x7c
                        void* rcx_21 = rsi_2 + 0x4c
                        
                        if (r11_1 != 2)
                            if (*rcx_21 == 2)
                                rax_37 = rcx_21
                            else
                                int32_t r8_8 = *(rcx_21 + 4)
                                int32_t temp9_1 = *(rax_37 + 4)
                                
                                if (temp9_1 s<= r8_8)
                                    if (temp9_1 s>= r8_8 && r11_1 == 1)
                                        rcx_21 = rax_37
                                    
                                    rax_37 = rcx_21
                        
                        int64_t rcx_22
                        
                        if (r9_4 == 2)
                            rcx_22 = 0x74
                        else if (r10_1 != 2)
                            int32_t rcx_23 = *(rsi_2 + 0x78)
                            int32_t temp10_1 = *(rsi_2 + 0x48)
                            
                            if (rcx_23 s>= temp10_1)
                                rcx_22 = 0x44
                                
                                if (rcx_23 s<= temp10_1 && r9_4 == 1)
                                    rcx_22 = 0x74
                            else
                                rcx_22 = 0x74
                        else
                            rcx_22 = 0x44
                        
                        rcx_20 = *(rsi_2 + rcx_22)
                        rax_35 = *rax_37
                        var_1f8.q = rcx_20
                        var_1f8:8.q = rax_35
                        zmm0 = var_1f8
                    else
                        char rdx_19 = *(rsi_2 + 0x4c)
                        
                        if (rdx_19 == 2)
                            goto label_141a578d9
                        
                        int32_t rax_36 = *(rsi_2 + 0x48)
                        int32_t temp8_1 = *(rsi_2 + 0x50)
                        
                        if (rax_36 s<= temp8_1
                                && (rax_36 != temp8_1 || (r10_1 != 0 && rdx_19 != 0)))
                            goto label_141a578d9
                        
                        zmm0 = *(rsi_2 + 0x74)
                        var_1f8 = zmm0
                        rax_35 = var_1f8:8.q
                        rcx_20 = var_1f8.q
                else
                    char rdx_18 = *(rsi_2 + 0x7c)
                    
                    if (rdx_18 == 2)
                        goto label_141a5789d
                    
                    int32_t rax_34 = *(rsi_2 + 0x78)
                    int32_t temp6_1 = *(rsi_2 + 0x80)
                    
                    if (rax_34 s<= temp6_1 && (rax_34 != temp6_1 || (r9_4 != 0 && rdx_18 != 0)))
                        goto label_141a5789d
                    
                    zmm0 = *(rsi_2 + 0x44)
                    var_1f8 = zmm0
                    rax_35 = var_1f8:8.q
                    rcx_20 = var_1f8.q
                
                int32_t rdx_20 = var_1f8:0xc.d
                void* rbx_6 = rsi_2 + 0x84
                int32_t r11_2 = var_1f8:4.d
                int128_t var_1d8
                int64_t rbx_7
                int64_t rdi_5
                
                if (rcx_20.b == 2 || rax_35.b == 2 ||
                        (r11_2 s<= rdx_20 && (r11_2 != rdx_20 || (rcx_20.b != 0 && rax_35.b != 0))))
                    char r15_3 = *rbx_6
                    
                    if (r15_3 == 2)
                    label_141a579da:
                        void* rdi_6 = rsi_2 + 0x8c
                        
                        if (rax_35.b == 2)
                            rdi_6 = &var_1f8:8
                        else if (*rdi_6 != 2)
                            int32_t r8_10 = *(rdi_6 + 4)
                            
                            if (rdx_20 s> r8_10)
                                rdi_6 = &var_1f8:8
                            else if (rdx_20 s>= r8_10)
                                void* rdx_21 = &var_1f8:8
                                
                                if (rax_35.b != 1)
                                    rdx_21 = rdi_6
                                
                                rdi_6 = rdx_21
                        
                        if (rcx_20.b == 2)
                            rbx_6 = &var_1f8
                        else if (r15_3 != 2)
                            int32_t temp11_1 = *(rsi_2 + 0x88)
                            
                            if (r11_2 s< temp11_1)
                                rbx_6 = &var_1f8
                            else if (r11_2 s<= temp11_1)
                                void* rax_38 = &var_1f8
                                
                                if (rcx_20.b != 1)
                                    rax_38 = rbx_6
                                
                                rbx_6 = rax_38
                        
                        rbx_7 = *rbx_6
                        rdi_5 = *rdi_6
                        var_1d8.q = rbx_7
                        var_1d8:8.q = rdi_5
                    else
                        char r10_2 = *(rsi_2 + 0x8c)
                        
                        if (r10_2 == 2)
                            goto label_141a579da
                        
                        int32_t r8_9 = *(rsi_2 + 0x88)
                        int32_t r9_5 = *(rsi_2 + 0x90)
                        
                        if (r8_9 s<= r9_5 && (r8_9 != r9_5 || (r15_3 != 0 && r10_2 != 0)))
                            goto label_141a579da
                        
                        var_1d8 = zmm0
                        rdi_5 = var_1d8:8.q
                        rbx_7 = var_1d8.q
                else
                    var_1d8 = *rbx_6
                    rdi_5 = var_1d8:8.q
                    rbx_7 = var_1d8.q
                
                void var_198
                sub_141a56f70(rsi_2 + 0x18, &var_198)
                int64_t rbx_8
                
                if (rbx_7.b != 2)
                    void* r8_11 = &var_198
                    
                    if (rbx_7.b != 1)
                        int32_t var_164_1 = 0
                        char var_160_1 = 0
                        void var_78
                        int32_t var_15c_1 = *sub_141a352a0(&var_78, var_1d8:4.d.q, r8_11)
                        rbx_8 = var_160_1.q
                    else
                        int32_t var_174_1 = 0
                        char var_170_1 = 1
                        void var_80
                        int32_t var_16c_1 = *sub_141a352a0(&var_80, (rbx_7 u>> 0x20).d.q, r8_11)
                        rbx_8 = var_170_1.q
                else
                    int32_t var_180_1 = 0
                    rbx_8 = rbx_7.b.q
                
                int64_t rax_44
                
                if (rdi_5.b != 2)
                    void* r8_12 = &var_198
                    
                    if (rdi_5.b != 1)
                        int32_t var_13c_1 = 0
                        char var_138_1 = 0
                        void var_88
                        int32_t var_134_1 = *sub_141a352a0(&var_88, var_1d8:0xc.d.q, r8_12)
                        rax_44 = var_138_1.q
                    else
                        int32_t var_14c_1 = 0
                        char var_148_1 = 1
                        void var_70
                        int32_t var_144_1 = *sub_141a352a0(&var_70, (rdi_5 u>> 0x20).d.q, r8_12)
                        rax_44 = var_148_1.q
                else
                    int32_t var_154_1 = 0
                    rax_44 = rdi_5.b.q
                
                char r8_13 = *arg4
                int64_t var_1c8 = rbx_8
                int64_t var_1c0 = rax_44
                int128_t var_118
                
                if (r8_13 == 2)
                label_141a57b9a:
                    uint32_t rcx_31
                    uint32_t rdx_28
                    
                    if (rbx_8.b != 2 && rax_44.b != 2)
                        rcx_31 = (rbx_8 u>> 0x20).d
                        rdx_28 = (rax_44 u>> 0x20).d
                    
                    if (rbx_8.b != 2 && rax_44.b != 2 && (rcx_31 s> rdx_28
                            || (rcx_31 == rdx_28 && (rbx_8.b == 0 || rax_44.b == 0))))
                        zmm0 = *arg4
                        var_118 = zmm0
                    else
                        char r9_7 = arg4[8]
                        void* rcx_32 = &arg4[8]
                        
                        if (r9_7 != 2)
                            if (rax_44.b != 2)
                                uint32_t rax_50 = (rax_44 u>> 0x20).d
                                int32_t temp13_1 = *(rcx_32 + 4)
                                
                                if (temp13_1 s<= rax_50)
                                    if (temp13_1 s>= rax_50)
                                        void* rax_51 = &var_1c0
                                        
                                        if (r9_7 == 1)
                                            rax_51 = rcx_32
                                        
                                        rcx_32 = rax_51
                                    else
                                        rcx_32 = &var_1c0
                            else
                                rcx_32 = &var_1c0
                        
                        char* rax_52
                        
                        if (r8_13 == 2)
                            rax_52 = arg4
                        else if (rbx_8.b != 2)
                            uint32_t rbx_10 = (rbx_8 u>> 0x20).d
                            int32_t temp14_1 = *(arg4 + 4)
                            
                            if (temp14_1 s>= rbx_10)
                                rax_52 = &var_1c8
                                
                                if (temp14_1 s<= rbx_10 && r8_13 == 1)
                                    rax_52 = arg4
                            else
                                rax_52 = arg4
                        else
                            rax_52 = &var_1c8
                        
                        var_118.q = *rax_52
                        var_118:8.q = *rcx_32
                        zmm0 = var_118
                else
                    char r9_6 = arg4[8]
                    
                    if (r9_6 == 2)
                        goto label_141a57b9a
                    
                    int32_t rcx_29 = *(arg4 + 4)
                    int32_t temp12_1 = *(arg4 + 0xc)
                    
                    if (rcx_29 s<= temp12_1 && (rcx_29 != temp12_1 || (r8_13 != 0 && r9_6 != 0)))
                        goto label_141a57b9a
                    
                    zmm0 = var_1c8.o
                    var_118 = zmm0
            
            *arg4 = zmm0
    else
        void* rcx_7 = arg2[8]
        void* r8_4 = &arg2[7]
        int64_t r9_3 = sx.q(*rdi_4)
        
        if (rcx_7 != 0)
            r8_4 = rcx_7
        
        int32_t rax_19 = *(r8_4 + (((sx.q(arg2[9].d) - 1) & r9_3) << 2))
        
        if (rax_19 == 0xffffffff)
            goto label_141a5774f
        
        int64_t r8_5 = *arg2
        void* rsi_1
        
        while (true)
            void* rdx_12 = sx.q(rax_19) * 0xf8
            rsi_1 = rdx_12 + r8_5
            
            if (*(rdx_12 + r8_5) == r9_3.d)
                break
            
            rax_19 = *(rsi_1 + 0xf0)
            
            if (rax_19 == 0xffffffff)
                goto label_141a5774f
        
        if (rax_19 == 0xffffffff || rsi_1 == 0)
            goto label_141a5774f
        
        rsi_2 = rsi_1 + 8
        
        if (rsi_1 == -8)
            goto label_141a57838
        
        void* rax_20 = sub_140d3c6e0(rsi_2 + 0xb0)
        void* const rbx_5 = rax_20
        
        if (rax_20 == 0)
            void* rax_21 = sub_140d2bce0(rsi_2)
            rbx_5 = rax_21
            void* rax_22
            int64_t rax_23
            void* rdx_13
            
            if (rax_21 != 0)
                rax_22 = sub_141a77ca0()
                rdx_13 = *(rbx_5 + 0x10)
                rax_23 = sx.q(*(rax_22 + 0x38))
            
            if (rax_21 == 0 || rax_23.d s> *(rdx_13 + 0x38)
                    || *(*(rdx_13 + 0x30) + (rax_23 << 3)) != rax_22 + 0x30)
                rbx_5 = nullptr
            
            sub_140d3a3a0(rsi_2 + 0xb0, rbx_5)
        
        void* const var_b8 = rbx_5
        
        if (rbx_5 == 0)
            goto label_141a57838
        
        void* rax_26 = (*(*arg3 + 8))(arg3, rbx_5)
        int32_t rcx_18
        
        if (*(rax_26 + 0x180) == rdi_4[1])
            rcx_18 = (*(rax_26 + 0x17c) ^ *(rbx_5 + 0x34)) | (*(rax_26 + 0x178) ^ *(rbx_5 + 0x30))
                | (*(rax_26 + 0x174) ^ *(rbx_5 + 0x2c)) | (*(rax_26 + 0x170) ^ *(rbx_5 + 0x28))
        
        if (*(rax_26 + 0x180) != rdi_4[1] || rcx_18 != 0)
            if (arg5 == 0)
                goto label_141a57838
            
            void var_e0
            sub_140812a70(arg5, &var_e0, &var_b8, nullptr)
            goto label_141a57838
    var_a0:8.d &= not.d(var_b0:0xc.d)
    sub_14059bdd0(&var_b0:8)
    r9_2 = var_1e8
    rsi = var_1b0
    r15 = var_e8

return zx.q(arg_8)
