// 函数: sub_140802bc0
// 地址: 0x140802bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg1
memset(&arg2[2], 0, 0x110)
memset(&arg2[0x48], 0, 0x70)
int32_t rsi = 0
arg2[1] = 0
*arg2 = 0xffffffff
*(arg2 + 0x118) = 0
*(arg2 + 0x120) = 0
sub_1424288a0(&arg2[0x4a])
*(arg2 + 0x128) = &data_142dc4f40
__builtin_memset(&arg2[0x56], 0, 0x20)
*(arg2 + 0x17c) = 0
int64_t var_238
sub_140d3a3a0(&var_238, nullptr)
void* rbx = &arg2[4]
*arg2 = var_238
*(arg2 + 8) = 0
*rbx = data_14399f6e0
*(rbx + 0x10) = data_14399f6f0
*(rbx + 0x20) = data_14399f700
*(rbx + 0x30) = data_14399f710
*(arg2 + 0x50) = data_14399f6e0
*(arg2 + 0x60) = data_14399f6f0
*(arg2 + 0x70) = data_14399f700
*(arg2 + 0x80) = data_14399f710
*(arg2 + 0x90) = data_14399f6e0
*(arg2 + 0xa0) = data_14399f6f0
*(arg2 + 0xb0) = data_14399f700
*(arg2 + 0xc0) = data_14399f710
*(arg2 + 0xd0) = data_14399f6e0
*(arg2 + 0xe0) = data_14399f6f0
*(arg2 + 0xf0) = data_14399f700
*(arg2 + 0x100) = data_14399f710
arg2[0x44] = 0
arg2[0x5e] = *(r12 + 0x58)
void* rdx = *(r12 + 0x40)
void* var_2c8
void* arg_20

if (rdx == 0)
    void* rbx_1 = *(r12 + 0x38)
    
    if (rbx_1 == 0)
        void* r15_1 = *(arg3 + 0x28)
        var_2c8 = r15_1
        
        if (r15_1 != 0)
            void* rbx_3 = *(r15_1 + 0xc0)
            void* rax_10
            int64_t rax_11
            void* rdx_4
            
            if (rbx_3 != 0)
                rax_10 = sub_1425b0750()
                rdx_4 = *(rbx_3 + 0x10)
                rax_11 = sx.q(*(rax_10 + 0x38))
            
            if (rbx_3 == 0 || rax_11.d s> *(rdx_4 + 0x38)
                    || *(*(rdx_4 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                void* rax_14 = sub_140d226f0(r15_1, sub_1425b0750())
                
                if (rax_14 == 0)
                    void* rax_16 = sub_141f3ba40(r15_1)
                    
                    if (rax_16 != 0)
                        void* r11_1 = rax_16 + 0x1a0
                        int32_t var_294_1 = 1
                        int32_t r10_1 = *(r11_1 + 0x28)
                        void* r15_2 = r11_1 + 0x10
                        arg_20 = r11_1
                        int32_t rcx_12 = 0
                        int32_t var_298_1 = 0
                        int32_t r8_3 = 0
                        void* var_290_1 = r15_2
                        int32_t var_288_1 = 0xffffffff
                        int64_t var_284_1 = 0
                        
                        if (r10_1 != 0)
                            void* rax_17 = *(r15_2 + 0x10)
                            void* r9_1 = r15_2
                            
                            if (rax_17 != 0)
                                r9_1 = rax_17
                            
                            int32_t temp1_1
                            int32_t temp2_1
                            temp1_1:temp2_1 = sx.q(r10_1 - 1)
                            int32_t rdx_9 = *r9_1
                            
                            if (rdx_9 != 0)
                            label_140802f1c:
                                int32_t rax_24 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
                                uint64_t rflags_1
                                int32_t temp0_1
                                temp0_1, rflags_1 = _bit_scan_reverse(rax_24)
                                int32_t var_294_2 = rax_24
                                int32_t var_240_1 = temp0_1
                                int32_t rax_25
                                
                                if (rax_24 == 0)
                                    rax_25 = 0x20
                                else
                                    rax_25 = 0x1f - temp0_1
                                
                                var_284_1.d = r8_3 - rax_25 + 0x1f
                                
                                if (r8_3 - rax_25 + 0x1f s> r10_1)
                                    var_284_1.d = r10_1
                            else
                                while (true)
                                    int64_t rdx_10 = sx.q(rcx_12)
                                    r8_3 += 0x20
                                    rcx_12 += 1
                                    var_284_1:4.d = r8_3
                                    var_298_1 = rcx_12
                                    
                                    if (rdx_10.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_9 = *(r9_1 + (rdx_10 << 2) + 4)
                                    int32_t var_288_2 = 0xffffffff
                                    
                                    if (rdx_9 != 0)
                                        goto label_140802f1c
                                
                                var_284_1.d = r10_1
                        
                        int32_t rdx_11 = *(r11_1 + 0x28)
                        float var_260_1[0x4] = var_298_1.o
                        int32_t r8_6 = rdx_11 s>> 5
                        int32_t r9_2 = 0xffffffff << (rdx_11 & 0x1f).b
                        int128_t var_250_1 = 0xffffffff
                        var_260_1[2] = r9_2
                        int32_t r9_4 = rdx_11 & 0xffffffe0
                        int64_t var_1f0_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                        void* var_268_1
                        var_268_1.d = r8_6
                        var_260_1[3] = rdx_11
                        var_250_1.d = r9_4
                        float var_210[0x4] = r11_1.o
                        
                        if (rdx_11 != r10_1)
                            void* rax_29 = *(r15_2 + 0x10)
                            void* r11_2 = r15_2
                            
                            if (rax_29 != 0)
                                r11_2 = rax_29
                            
                            int32_t temp3_1
                            int32_t temp4_1
                            temp3_1:temp4_1 = sx.q(r10_1 - 1)
                            int32_t rdx_15 = *(r11_2 + (sx.q(r8_6) << 2)) & r9_2
                            
                            if (rdx_15 != 0)
                            label_14080301f:
                                int32_t rax_35 = ((rdx_15 - 1) & rdx_15) ^ rdx_15
                                uint64_t rflags_2
                                int32_t temp0_3
                                temp0_3, rflags_2 = _bit_scan_reverse(rax_35)
                                int32_t var_23c_1 = temp0_3
                                int32_t rbx_4
                                
                                if (rax_35 == 0)
                                    rbx_4 = 0x20
                                else
                                    rbx_4 = 0x1f - temp0_3
                                
                                var_260_1[3] = r9_4 - rbx_4 + 0x1f
                                
                                if (r9_4 - rbx_4 + 0x1f s> r10_1)
                                    var_260_1[3] = r10_1
                            else
                                while (true)
                                    int64_t rcx_16 = sx.q(r8_6)
                                    r9_4 += 0x20
                                    r8_6 += 1
                                    var_250_1.d = r9_4
                                    var_268_1.d = r8_6
                                    
                                    if (rcx_16.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_15 = *(r11_2 + (rcx_16 << 2) + 4)
                                    var_260_1[2] = 0xffffffff
                                    
                                    if (rdx_15 != 0)
                                        goto label_14080301f
                                
                                var_260_1[3] = r10_1
                            
                            r11_1 = arg_20
                        
                        uint32_t r13_3 = (var_260_1[2].q u>> 0x20).d
                        
                        while (true)
                            int64_t rdx_16 = sx.q(var_260_1[3])
                            int32_t rax_28
                            
                            if (rdx_16.d != r13_3 || var_260_1[0].q != r15_2)
                                rax_28.b = 0
                            else
                                rax_28.b = 1
                            
                            int64_t* rcx_18 = var_210[0].q
                            
                            if (rax_28.b == 0 || rcx_18 != r11_1)
                                rax_28.b = 1
                            else
                                rax_28.b = 0
                            
                            if (rax_28.b == 0)
                                break
                            
                            void* rbx_5 = *(*rcx_18 + rdx_16 * 0x10)
                            
                            if (rbx_5 != 0)
                                void* rax_38 = sub_1425b0750()
                                void* rdx_17 = *(rbx_5 + 0x10)
                                int64_t rax_39 = sx.q(*(rax_38 + 0x38))
                                
                                if (rax_39.d s<= *(rdx_17 + 0x38)
                                        && *(*(rdx_17 + 0x30) + (rax_39 << 3)) == rax_38 + 0x30)
                                    void* rax_41 = *(rbx_5 + 0x440)
                                    
                                    if (rax_41 != 0 && *(rax_41 + 0x94) s< 0)
                                        *(arg2 + 8) = rax_41
                                        sub_140d3a3a0(arg2, rbx_5)
                                        break
                            
                            var_260_1[2] &= not.d(var_210[3])
                            sub_14059bdd0(&var_210[2])
                            r11_1 = arg_20
                        
                        r15_1 = var_2c8
                else
                    sub_140d3a3a0(arg2, rax_14)
                    *(arg2 + 8) = *(rax_14 + 0x440)
            else
                sub_140d3a3a0(arg2, rbx_3)
                *(arg2 + 8) = *(rbx_3 + 0x440)
            
            if (sub_140d3e110(arg2) == 0)
                sub_140d3a3a0(arg2, r15_1)
    else
        void* rax_3 = sub_1425b0690()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        void* rdx_2
        
        if (rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            int64_t* rbx_2 = *(r12 + 0x38)
            int64_t rax_6 = sub_1425b0750()
            int64_t r8_1 = *rbx_2
            int64_t var_1a8_1 = rax_6
            rdx_2 = (*(r8_1 + 0x610))(rbx_2, rax_6, r8_1)
        else
            rdx_2 = *(rbx_1 + 0x220)
        
        if (rdx_2 == 0)
            rdx_2 = *(*(r12 + 0x38) + 0x130)
        else
            *(arg2 + 8) = *(rdx_2 + 0x440)
        
        sub_140d3a3a0(arg2, rdx_2)
    
    rbx = &arg2[4]
else
    sub_140d3a3a0(arg2, rdx)
    *(arg2 + 8) = *(*(r12 + 0x40) + 0x440)

if (*(arg2 + 8) == 0)
    int64_t rax_45 = *(r12 + 0x30)
    
    if (rax_45 != 0)
        *(arg2 + 8) = rax_45

char result = sub_140d3e110(arg2)

if (result == 0)
    return result

float zmm1[0x4] = *(rbx + 0x10)
*(arg2 + 0x90) = *rbx
float zmm0[0x4] = *(rbx + 0x20)
*(arg2 + 0xa0) = zmm1
zmm1 = *(rbx + 0x30)
*(arg2 + 0xb0) = zmm0
*(arg2 + 0xd0) = *(arg2 + 0x50)
zmm0 = *(arg2 + 0x70)
*(arg2 + 0xc0) = zmm1
*(arg2 + 0xe0) = *(arg2 + 0x60)
zmm1 = *(arg2 + 0x80)
*(arg2 + 0xf0) = zmm0
*(arg2 + 0x100) = zmm1
void* rax_46 = sub_140d3c6e0(arg2)
float zmm3[0x4] = *(rax_46 + 0x1c0)
float temp0_4[0x4] = _mm_add_ps(zmm3, zmm3)
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_7[0x4] = _mm_mul_ps(zmm3, temp0_4)
float temp0_9[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
float temp0_10[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x1a)
float temp0_12[0x4] = _mm_mul_ps(temp0_6, temp0_10)
zmm1 = *(rax_46 + 0x1e0)
float temp0_14[0x4] = _mm_add_ps(temp0_11, _mm_shuffle_ps(temp0_7, temp0_7, 1))
float temp0_15[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float zmm4_1[0x4] = data_143ce2b60
float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_9)
float temp0_17[0x4] = _mm_sub_ps(temp0_9, temp0_12)
float temp0_18[0x4] = _mm_mul_ps(temp0_16, zmm1)
float temp0_19[0x4] = _mm_mul_ps(temp0_15, temp0_17)
float zmm2[0x4] =
    __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4_1, temp0_14), zmm1), data_143ce2b70)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, zmm2, 0x32)
float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm2, 0), temp0_23, 0x82)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_18, zmm2, 0x31)
float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm2, 0x10), temp0_26, 0x88)
zmm0 = *(rax_46 + 0x1d0)
*rbx = temp0_25
*(rbx + 0x10) = temp0_28
float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, temp0_19, 0x12), zmm2, 0xe8)
zmm4_1[0].q = zmm0 u>> 0x40
float temp0_31[0x4] = _mm_shuffle_ps(zmm0, zmm4_1, 0xc4)
*(rbx + 0x20) = temp0_30
float var_158_1[0x4] = temp0_31
*(rbx + 0x30) = temp0_31
float var_188_1[0x4] = temp0_25
float var_178_1[0x4] = temp0_28
float var_168_1[0x4] = temp0_30
uint32_t var_128[0x4][0x4]
uint32_t (* rax_47)[0x4] = sub_140631b10(rbx, &var_128)
uint32_t zmm7_1 = (*rax_47)[6]
uint32_t zmm11_1 = (*rax_47)[7]
uint32_t zmm9_1 = (*rax_47)[0xa]
uint32_t zmm13_1 = (*rax_47)[0xb]
uint32_t zmm6_1 = (*rax_47)[0xd]
uint32_t zmm10_1 = (*rax_47)[0xe]
uint32_t zmm14_1 = (*rax_47)[0xf]
float zmm4_2[0x4] = *rax_47
float zmm8_1[0x4] = (*rax_47)[1]
int128_t zmm0_1 = rax_47[1][0]
float zmm12_1[0x4] = (*rax_47)[2]
uint32_t zmm3_1 = (*rax_47)[5]
float zmm15_1[0x4] = (*rax_47)[3]
void*** zmm1_1 = rax_47[2][0]
uint32_t zmm5_2 = (*rax_47)[9]
uint32_t zmm2_1 = rax_47[3][0]
void* rax_48 = *(arg2 + 8)
float temp0_32[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xe1)
float temp0_33[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xe1)
temp0_32[0] = zmm3_1
float temp0_34[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xe1)
temp0_33[0] = zmm7_1
temp0_34[0] = zmm11_1
float temp0_35[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
float temp0_36[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc6)
temp0_35[0] = zmm0_1.d
float temp0_37[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc6)
temp0_36[0] = zmm5_2
float temp0_38[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc6)
temp0_37[0] = zmm9_1
temp0_38[0] = zmm13_1
float temp0_39[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc6)
float temp0_40[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x27)
temp0_39[0] = zmm1_1.d
float temp0_41[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x27)
temp0_40[0] = zmm6_1
temp0_41[0] = zmm10_1
float temp0_42[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x27)
float temp0_43[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x39)
temp0_42[0] = zmm14_1
float temp0_44[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x39)
float temp0_45[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x39)
float temp0_46[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x27)
float var_1d8_1[0x4] = temp0_43
temp0_46[0] = zmm2_1
float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0x39)
float var_1c8_1[0x4] = temp0_44
float var_1b8_1[0x4] = temp0_45
float var_1e8_1[0x4] = temp0_47
*(arg2 + 0x50) = temp0_47
*(arg2 + 0x60) = temp0_43
*(arg2 + 0x70) = temp0_44
*(arg2 + 0x80) = temp0_45

if (rax_48 != 0 && *(rax_48 + 0x94) s>= 0)
    *(arg2 + 8) = 0

arg2[0x45] &= 0xfffffff8
arg2[0x48] = 0

if (arg2[0x49] != 0)
    sub_1405dadb0(&arg2[0x46], 0)

void* rcx_29 = *(arg2 + 8)

if (rcx_29 != 0)
    int32_t rdx_20 = *(rcx_29 + 0x60)
    arg2[0x5f] = rdx_20
    int64_t* rcx_30 = *(rcx_29 + 0x50)
    uint32_t rax_49 = zx.d(*(rcx_30 + 0x5f))
    
    if (rax_49 s>= rdx_20)
        rdx_20 = rax_49
    
    int32_t rax_50 = sub_1423647f0(rcx_30, rdx_20)
    void* rbx_6 = *(arg2 + 8)
    arg2[0x60] = rax_50
    int32_t rcx_33 = zx.d(*(rbx_6 + 0x94)) u>> 7 | (arg2[0x45] & 0xfffffffe)
    arg2[0x45] = rcx_33
    int32_t rcx_34 = rcx_33 ^ ((zx.d(*(rbx_6 + 0x94)) u>> 2 ^ rcx_33) & 2)
    arg2[0x45] = rcx_34
    int32_t rax_57
    
    if ((rcx_34.b & 2) != 0)
        rax_57 = 4
    
    if ((rcx_34.b & 2) == 0 || (*(rbx_6 + 0x95) & 1) == 0)
        rax_57 = 0
    
    int32_t rdx_21 = arg2[0x5f]
    arg2[0x45] = (rcx_34 & 0xfffffffb) | rax_57
    int64_t* rbx_7 = *(rbx_6 + 0x50)
    uint32_t rax_58 = zx.d(*(rbx_7 + 0x5f))
    
    if (rax_58 s>= rdx_21)
        rdx_21 = rax_58
    
    int32_t rax_59 = sub_1423647f0(rbx_7, rdx_21)
    int64_t* rbx_9 = *(*rbx_7 + (sx.q(rax_59) << 3))
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
    
    int32_t i = 0
    
    if (rbx_9[6].d s> 0)
        int64_t r9_6 = 0
        int32_t arg_10
        arg_10.q = 0
        
        do
            if (*(r12 + 0x50) == 0)
            label_14080356f:
                int64_t r13_4 = sx.q(arg2[0x48])
                int32_t rax_62 = (r13_4 + 1).d
                arg2[0x48] = rax_62
                
                if (rax_62 s> arg2[0x49])
                    sub_1405a4cf0(&arg2[0x46])
                    r9_6 = arg_10.q
                
                *(*(arg2 + 0x118) + (r13_4 << 2)) = i
            else
                int32_t* rcx_39 = *(r12 + 0x48)
                void* r8_8 = &rbx_9[2]
                void* r10_2 = *(r8_8 + 0x18)
                void* rdx_22 = &rcx_39[sx.q(*(r12 + 0x50))]
                
                if (rcx_39 != rdx_22)
                    if (r10_2 != 0)
                        r8_8 = r10_2
                    
                    do
                        if (*rcx_39 == *(r8_8 + r9_6))
                            goto label_14080356f
                        
                        rcx_39 = &rcx_39[1]
                    while (rcx_39 != rdx_22)
            
            r9_6 += 0x18
            i += 1
            arg_10.q = r9_6
        while (i s< rbx_9[6].d)
    
    int64_t* rcx_41 = *(arg2 + 0x158)
    *(arg2 + 0x158) = rbx_9
    rbx_9[1].d += 1
    
    if (rcx_41 != 0)
        rcx_41[1].d -= 1
        
        if (rcx_41[1].d == 1)
            (**rcx_41)(rcx_41, 1)
    
    int64_t rax_66 = *(arg2 + 0x128)
    *(arg2 + 0x160) = arg2
    (*(rax_66 + 0x10))(&arg2[0x4a])
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        (**rbx_9)(rbx_9, 1)

void*** r15_3 = nullptr

if (*(arg2 + 8) != 0 && ((*(arg3 + 0x6b8) u>> 5).b & 1) != 0)
    void*** rax_72 = j_sub_140a82f30(0x70)
    void*** var_270_1 = rax_72
    r15_3 = rax_72
    
    if (rax_72 == 0)
        r15_3 = nullptr
        var_270_1 = nullptr
    else
        rax_72[1].d = 0xffffffff
        *(rax_72 + 0xc) = 4
        *r15_3 = &data_142dc4f68
        __builtin_memset(&r15_3[2], 0, 0x50)
        r15_3[0xd] = 0
    
    int32_t rdx_24 = arg2[0x5f]
    int64_t* rbx_10 = *(*(arg2 + 8) + 0x50)
    uint32_t rax_74 = zx.d(*(rbx_10 + 0x5f))
    
    if (rax_74 s>= rdx_24)
        rdx_24 = rax_74
    
    int32_t rax_75 = sub_1423647f0(rbx_10, rdx_24)
    int64_t* rbx_12 = *(*rbx_10 + (sx.q(rax_75) << 3))
    
    if (rbx_12 != 0)
        rbx_12[1].d += 1
    
    void* r11_3 = &arg2[0x50]
    uint32_t rax_77
    rax_77.b = (arg2[0x45] u>> 2).b & 1
    r15_3[2] = rbx_12
    int32_t r13_5 = arg2[0x48]
    arg_20.d = rax_77
    void* var_278_1 = r11_3
    
    if (r13_5 s> *(r15_3 + 0x24))
        sub_1405a5410(&r15_3[3], r13_5)
        r11_3 = var_278_1
    
    if (r13_5 != 0)
        do
            void* rax_79 = rbx_12[5]
            void* r9_7 = &rbx_12[2]
            int64_t r10_3 = sx.q(rsi)
            
            if (rax_79 != 0)
                r9_7 = rax_79
            
            int64_t r8_9 = sx.q(*(*(arg2 + 0x118) + (r10_3 << 2))) * 3
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = mulu.dp.d(0xaaaaaaab, *(r9_7 + (r8_9 << 3) + 4))
            int32_t var_2a4_1 = *(r9_7 + (r8_9 << 3) + 8)
            void* rax_82 = *(arg2 + 0x130)
            
            if ((rax_82.b & 1) != 0)
                rax_82 = (rax_82 s>> 1) + &arg2[0x4c]
            
            void* rax_84 = *r11_3
            int32_t var_2a0_1 = (*(rax_82 + (r10_3 << 2))).d
            
            if ((rax_84.b & 1) != 0)
                rax_84 = (rax_84 s>> 1) + r11_3
            
            int64_t r13_6 = sx.q(r15_3[4].d)
            int32_t var_29c_1 = *(rax_84 + (r10_3 << 2))
            int32_t rax_87 = (r13_6 + 1).d
            r15_3[4].d = rax_87
            
            if (rax_87 s> *(r15_3 + 0x24))
                sub_1405a4f90(&r15_3[3])
                r11_3 = var_278_1
            
            rsi += 1
            *(r15_3[3] + r13_6 * 0x10) = (temp5_1 u>> 1).o
        while (rsi u< r13_5)
        
        r15_3 = var_270_1
        r12 = arg1
    
    if (arg_20.b != 0)
        sub_1405d16e0(&r15_3[7], rbx_12[0x5a])
    
    if (rbx_12 != 0)
        rbx_12[1].d -= 1
        
        if (rbx_12[1].d == 1)
            (**rbx_12)(rbx_12, 1)

void* rax_91 = *(r12 + 0x28)
int64_t var_2b8 = *(arg3 + 0xe0)

if (sub_140a80f40() == 0)
    uint32_t rax_96
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_96.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_96.b == 0))
        void var_148
        void** rax_97 = sub_1407eb250(&var_148, nullptr, 0xff)
        void* rcx_59 = *rax_97
        *(rcx_59 + 0x10) = rax_91.o
        *(rcx_59 + 0x20) = r15_3
        void* rcx_60 = *rax_97
        int64_t* rbx_14 = *(rcx_60 + 0x30)
        
        if (rbx_14 != 0)
            rbx_14[9].d += 1
        
        sub_140778000(rcx_60, rax_97[1], rax_97[2].d, 1)
        
        if (rbx_14 != 0)
            rbx_14[9].d -= 1
            
            if (rbx_14[9].d == 1)
                sub_140a2f6e0(rbx_14)
    else
        int128_t var_1a0 = rax_91.o
        void*** var_190_1 = r15_3
        sub_1407e5840(&var_1a0)
else
    void*** rdi_2 = r15_3
    
    if (rdi_2 != 0)
        (*rdi_2)[5](rdi_2)
        rdi_2 = r15_3
    
    int64_t* var_220 = &var_2b8
    sub_1407d11c0(rax_91 + 0xc8, &var_2c8, &var_220, nullptr)
    *(sx.q(var_2c8.d) * 0xc0 + *(rax_91 + 0xc8) + 0x10) = rdi_2

return 1
