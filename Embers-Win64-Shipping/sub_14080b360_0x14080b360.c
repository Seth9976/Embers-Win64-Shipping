// 函数: sub_14080b360
// 地址: 0x14080b360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg3
int64_t r14 = 0

if (rax != 0)
    int64_t rdx = sx.q(*(rax + 0x10c))
    int64_t* r15_1 = *(arg3[1] + 0x10)
    int64_t r14_1 = r15_1[3]
    
    if (*(r14_1 + (rdx << 3)) == 0)
        arg4 = sub_1419ccf30(r15_1, rdx.d)
        r14_1 = r15_1[3]
    
    r14 = *(r14_1 + (rdx << 3))

void* r10 = arg3[2]
int64_t var_108 = r14
int64_t* rcx_6

if (*(r10 + 0xd0) == *(r10 + 0xfc))
label_14080b445:
    rcx_6 = nullptr
else
    int64_t r11_1 = arg3[3]
    void* r9_1 = r10 + 0x100
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_7 =
        *(r9_1 + ((sx.q((r11_1 u>> 0x20).d * 0x17 + r11_1.d) & (sx.q(*(r10 + 0x110)) - 1)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_14080b445_1:
        rcx_6 = nullptr
    else
        while (true)
            rcx_6 = sx.q(rax_7) * 0xc0 + *(r10 + 0xc8)
            
            if (*rcx_6 == r11_1)
                break
            
            rax_7 = rcx_6[0x16].d
            
            if (rax_7 == 0xffffffff)
                goto label_14080b445_2
        
        if (rax_7 == 0xffffffff)
        label_14080b445_2:
            rcx_6 = nullptr

void* r12_2 = &rcx_6[2]

if (rcx_6 == 0)
    r12_2 = nullptr

int32_t arg_18
int32_t arg_20

if (r12_2 == 0)
    sub_14077c730(arg2, &var_108, arg1 + 0x2a, &data_14399f6e0, 0)
    sub_14077c730(arg2, &var_108, arg1 + 0x30, &data_14399f6e0, 0)
    sub_14077c730(arg2, &var_108, arg1 + 0x36, &data_14399f6e0, 0)
    arg_18 = 0x3f800000
    sub_140741e30(arg2, &var_108, arg1 + 0x3c, &arg_18, 0)
    sub_14077c5f0(arg2, &var_108, arg1 + 0x42, &data_143dbb1f8, 0)
    arg_18 = 0
    sub_140741e30(arg2, &var_108, arg1 + 0x48, &arg_18, 0)
else
    float zmm1 = *(r12_2 + 0x90)
    int32_t zmm0 = (zx.o(0)).d
    int128_t var_48_1 = arg4
    
    if (not(zmm1 f<= zmm0))
        zmm0 = 1f / zmm1
    
    arg4.d = (*(r12_2 + 0x40)).d f- *(r12_2 + 0x80)
    int128_t zmm7
    zmm7.d = (*(r12_2 + 0x44)).d f- *(r12_2 + 0x84)
    int128_t zmm8
    zmm8.d = (*(r12_2 + 0x48)).d f- *(r12_2 + 0x88)
    arg_18 = zmm0
    sub_14077c730(arg2, &var_108, arg1 + 0x2a, r12_2 + 0x10, 0)
    uint32_t var_a8[0x4][0x4]
    uint32_t (* rax_8)[0x4]
    float zmm7_1
    float zmm8_1
    rax_8, zmm7_1, zmm8_1 = sub_140631b10(r12_2 + 0x10, &var_a8)
    uint32_t var_e8 = *rax_8
    uint32_t var_e4_1 = rax_8[1][0]
    uint32_t var_e0_1 = rax_8[2][0]
    uint32_t var_dc_1 = rax_8[3][0]
    uint32_t var_d8_1 = (*rax_8)[1]
    uint32_t var_d4_1 = (*rax_8)[5]
    uint32_t var_d0_1 = (*rax_8)[9]
    uint32_t var_cc_1 = (*rax_8)[0xd]
    uint32_t var_c8_1 = (*rax_8)[2]
    uint32_t var_c4_1 = (*rax_8)[6]
    uint32_t var_c0_1 = (*rax_8)[0xa]
    uint32_t var_bc_1 = (*rax_8)[0xe]
    uint32_t var_b8_1 = (*rax_8)[3]
    uint32_t var_b4_1 = (*rax_8)[7]
    uint32_t var_b0_1 = (*rax_8)[0xb]
    uint32_t var_ac_1 = (*rax_8)[0xf]
    sub_14077c730(arg2, &var_108, arg1 + 0x30, &var_e8, 0)
    sub_14077c730(arg2, &var_108, arg1 + 0x36, r12_2 + 0x50, 0)
    float zmm6 = sub_140741e30(arg2, &var_108, arg1 + 0x3c, &arg_18, 0)
    int32_t zmm0_2 = arg_18
    float var_100 = zmm6 f* zmm0_2
    float var_fc_1 = zmm7_1 f* zmm0_2
    float var_f8_1 = zmm8_1 f* zmm0_2
    sub_14077c5f0(arg2, &var_108, arg1 + 0x42, &var_100, 0)
    int32_t rax_9
    rax_9.b = *(r12_2 + 8) != 0
    arg_20 = rax_9
    sub_140741e30(arg2, &var_108, arg1 + 0x48, &arg_20, 0)
    int512_t zmm6_1
    zmm6_1.o = var_48_1

void* const r15_2

if (r12_2 == 0)
    r15_2 = nullptr
else
    r15_2 = *r12_2

void* result
void*** rcx_72
uint32_t r12_3
void* result_1

if (r15_2 == 0)
    int64_t rax_62 = sub_14082c510()
    
    if (*(arg1 + 0xe) u> 0)
        uint32_t r13_1 = zx.d(*(arg1 + 0xc))
        void*** rcx_83 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_63 = &rcx_83[5]
        
        if (rax_63 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_83 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_63 = &rcx_83[5]
        
        *(arg2 + 0x30) = rax_63
        void**** rax_64 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_64 = rcx_83
        *(arg2 + 8) = &rcx_83[1]
        rcx_83[1] = 0
        *rcx_83 = &data_142d99560
        rcx_83[2] = r14
        rcx_83[3].d = r13_1
        rcx_83[4] = rax_62
    
    int64_t rax_66 = sub_14082c490()
    
    if (*(arg1 + 0x12) u> 0)
        uint32_t r13_2 = zx.d(*(arg1 + 0x10))
        void*** rcx_89 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rdx_22 = &rcx_89[5]
        
        if (rdx_22 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_89 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_22 = &rcx_89[5]
        
        *(arg2 + 0x30) = rdx_22
        void**** rax_67 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_67 = rcx_89
        *(arg2 + 8) = &rcx_89[1]
        rcx_89[1] = 0
        *rcx_89 = &data_142d99560
        rcx_89[2] = r14
        rcx_89[3].d = r13_2
        rcx_89[4] = rax_66
    
    int64_t rax_69 = sub_14082c830()
    
    if (*(arg1 + 0xa) u> 0)
        uint32_t r13_3 = zx.d(*(arg1 + 8))
        void*** rcx_95 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rdx_23 = &rcx_95[5]
        
        if (rdx_23 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_95 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_23 = &rcx_95[5]
        
        *(arg2 + 0x30) = rdx_23
        void**** rax_70 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_70 = rcx_95
        *(arg2 + 8) = &rcx_95[1]
        rcx_95[1] = 0
        *rcx_95 = &data_142d99560
        rcx_95[2] = r14
        rcx_95[3].d = r13_3
        rcx_95[4] = rax_69
    
    arg_18 = 0
    sub_140741e30(arg2, &var_108, arg1 + 0x4e, &arg_18, 0)
    int64_t rax_72 = sub_14082c410()
    
    if (*(arg1 + 0x16) u> 0)
        uint32_t r13_4 = zx.d(*(arg1 + 0x14))
        void*** rcx_102 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rdx_25 = &rcx_102[5]
        
        if (rdx_25 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_102 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_25 = &rcx_102[5]
        
        *(arg2 + 0x30) = rdx_25
        void**** rax_73 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_73 = rcx_102
        *(arg2 + 8) = &rcx_102[1]
        rcx_102[1] = 0
        *rcx_102 = &data_142d99560
        rcx_102[2] = r14
        rcx_102[3].d = r13_4
        rcx_102[4] = rax_72
    
    int64_t rax_75 = sub_14082c8b0()
    
    if (*(arg1 + 0x1a) u> 0)
        uint32_t r13_5 = zx.d(*(arg1 + 0x18))
        void*** rcx_108 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rdx_26 = &rcx_108[5]
        
        if (rdx_26 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_108 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_26 = &rcx_108[5]
        
        *(arg2 + 0x30) = rdx_26
        void**** rax_76 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_76 = rcx_108
        *(arg2 + 8) = &rcx_108[1]
        rcx_108[1] = 0
        *rcx_108 = &data_142d99560
        rcx_108[2] = r14
        rcx_108[3].d = r13_5
        rcx_108[4] = rax_75
    
    arg_18 = 0
    sub_140741e30(arg2, &var_108, arg1 + 0x54, &arg_18, 0)
    arg_18 = 0
    sub_140741e30(arg2, &var_108, arg1 + 0x24, &arg_18, 0)
    int64_t rax_78 = sub_14082c7b0()
    
    if (*(arg1 + 0x1e) u> 0)
        uint32_t r12_9 = zx.d(*(arg1 + 0x1c))
        void*** rcx_116 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rdx_29 = &rcx_116[5]
        
        if (rdx_29 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_116 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_29 = &rcx_116[5]
        
        *(arg2 + 0x30) = rdx_29
        void**** rax_79 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_79 = rcx_116
        *(arg2 + 8) = &rcx_116[1]
        rcx_116[1] = 0
        *rcx_116 = &data_142d99560
        rcx_116[2] = r14
        rcx_116[3].d = r12_9
        rcx_116[4] = rax_78
    
    result = sub_14082c7b0()
    result_1 = result
    
    if (*(arg1 + 0x22) u> 0)
        r12_3 = zx.d(*(arg1 + 0x20))
        rcx_72 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rdx_30 = &rcx_72[5]
        
        if (rdx_30 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_72 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_30 = &rcx_72[5]
        
        *(arg2 + 0x30) = rdx_30
        void**** rax_81 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_81 = rcx_72
        result = &rcx_72[1]
        *(arg2 + 8) = result
        *result = 0
        goto label_14080bfa9
else
    arg_20.q = *(r15_2 + 0x48)
    
    if (*(arg1 + 0xe) u> 0)
        int64_t rcx_21 = *(arg2 + 0x30) + 7
        arg_18 = zx.d(*(arg1 + 0xc))
        void*** rcx_22 = rcx_21 & 0xfffffffffffffff8
        void* rax_12 = &rcx_22[5]
        
        if (rax_12 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_12 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_12
        int64_t* rax_13 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_13 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        rcx_22[3].d = arg_18
        rcx_22[4] = arg_20.q
        *rcx_22 = &data_142d99560
        rcx_22[2] = r14
    
    arg_20.q = *(r15_2 + 0x50)
    
    if (*(arg1 + 0x12) u> 0)
        int64_t rcx_27 = *(arg2 + 0x30) + 7
        arg_18 = zx.d(*(arg1 + 0x10))
        void*** rcx_28 = rcx_27 & 0xfffffffffffffff8
        void* rax_19 = &rcx_28[5]
        
        if (rax_19 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_19 = &rcx_28[5]
        
        *(arg2 + 0x30) = rax_19
        int64_t* rax_20 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_20 = rcx_28
        *(arg2 + 8) = &rcx_28[1]
        rcx_28[1] = 0
        rcx_28[3].d = arg_18
        rcx_28[4] = arg_20.q
        *rcx_28 = &data_142d99560
        rcx_28[2] = r14
    
    arg_20.q = *(r15_2 + 0x40)
    
    if (*(arg1 + 0xa) u> 0)
        int64_t rcx_33 = *(arg2 + 0x30) + 7
        arg_18 = zx.d(*(arg1 + 8))
        void*** rcx_34 = rcx_33 & 0xfffffffffffffff8
        void* rax_26 = &rcx_34[5]
        
        if (rax_26 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_26 = &rcx_34[5]
        
        *(arg2 + 0x30) = rax_26
        int64_t* rax_27 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_27 = rcx_34
        *(arg2 + 8) = &rcx_34[1]
        rcx_34[1] = 0
        rcx_34[3].d = arg_18
        rcx_34[4] = arg_20.q
        *rcx_34 = &data_142d99560
        rcx_34[2] = r14
    
    arg_18 = *(r15_2 + 0x60)
    sub_140741e30(arg2, &var_108, arg1 + 0x4e, &arg_18, 0)
    void*** rcx_41
    
    if (*(r15_2 + 0x60) u<= 0)
        arg_20.q = sub_14082c410()
        
        if (*(arg1 + 0x16) u> 0)
            rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            arg_18 = zx.d(*(arg1 + 0x14))
            void* rdx_17 = &rcx_41[5]
            
            if (rdx_17 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rdx_17 = &rcx_41[5]
            
            *(arg2 + 0x30) = rdx_17
        label_14080b97c:
            int64_t* rax_37 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_37 = rcx_41
            *(arg2 + 8) = &rcx_41[1]
            rcx_41[1] = 0
            rcx_41[3].d = arg_18
            rcx_41[4] = arg_20.q
            rcx_41[2] = r14
            *rcx_41 = &data_142d99560
    else
        arg_20.q = *(r15_2 + 0x58)
        
        if (*(arg1 + 0x16) u> 0)
            int64_t rcx_40 = *(arg2 + 0x30) + 7
            arg_18 = zx.d(*(arg1 + 0x14))
            rcx_41 = rcx_40 & 0xfffffffffffffff8
            void* rax_34 = &rcx_41[5]
            
            if (rax_34 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_34 = &rcx_41[5]
            
            *(arg2 + 0x30) = rax_34
            goto label_14080b97c
    int64_t rax_41 = *(r15_2 + 0x68)
    arg_20.q = rax_41
    
    if (rax_41 == 0)
        arg_20.q = sub_14082c8b0()
        
        if (*(arg1 + 0x1a) u> 0)
            void*** rcx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            arg_18 = zx.d(*(arg1 + 0x18))
            void* rdx_18 = &rcx_58[5]
            
            if (rdx_18 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rdx_18 = &rcx_58[5]
            
            *(arg2 + 0x30) = rdx_18
            void**** rax_50 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_50 = rcx_58
            *(arg2 + 8) = &rcx_58[1]
            rcx_58[1] = 0
            rcx_58[3].d = arg_18
            rcx_58[4] = arg_20.q
            *rcx_58 = &data_142d99560
            rcx_58[2] = r14
        
        arg_18 = 0
    else
        if (*(arg1 + 0x1a) u> 0)
            int64_t rcx_51 = *(arg2 + 0x30) + 7
            arg_18 = zx.d(*(arg1 + 0x18))
            void*** rcx_52 = rcx_51 & 0xfffffffffffffff8
            void* rax_43 = &rcx_52[5]
            
            if (rax_43 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_43 = &rcx_52[5]
            
            *(arg2 + 0x30) = rax_43
            int64_t* rax_44 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_44 = rcx_52
            *(arg2 + 8) = &rcx_52[1]
            rcx_52[1] = 0
            rcx_52[3].d = arg_18
            rcx_52[4] = arg_20.q
            *rcx_52 = &data_142d99560
            rcx_52[2] = r14
        
        arg_18 = 1
    
    sub_140741e30(arg2, &var_108, arg1 + 0x54, &arg_18, 0)
    arg_18 = *(r15_2 + 0x20)
    sub_140741e30(arg2, &var_108, arg1 + 0x24, &arg_18, 0)
    result = *(r15_2 + 0x30)
    arg_20.q = result
    
    if (*(arg1 + 0x1e) u> 0)
        int64_t rcx_65 = *(arg2 + 0x30) + 7
        arg_18 = zx.d(*(arg1 + 0x1c))
        void*** rcx_66 = rcx_65 & 0xfffffffffffffff8
        void* rax_56 = &rcx_66[5]
        
        if (rax_56 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_66 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_56 = &rcx_66[5]
        
        *(arg2 + 0x30) = rax_56
        void**** rax_57 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_57 = rcx_66
        *(arg2 + 8) = &rcx_66[1]
        rcx_66[1] = 0
        rcx_66[3].d = arg_18
        result = arg_20.q
        rcx_66[4] = result
        *rcx_66 = &data_142d99560
        rcx_66[2] = r14
    
    if (*(r12_2 + 8) == 0)
        result = sub_14082c830()
        result_1 = result
        
        if (*(arg1 + 0x22) u> 0)
            r12_3 = zx.d(*(arg1 + 0x20))
            rcx_72 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rdx_21 = &rcx_72[5]
            
            if (rdx_21 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_72 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rdx_21 = &rcx_72[5]
            
            *(arg2 + 0x30) = rdx_21
        label_14080bbbf:
            void** rax_61 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_61 = rcx_72
            result = &rcx_72[1]
            *(arg2 + 8) = result
            *result = 0
        label_14080bfa9:
            rcx_72[4] = result_1
            rcx_72[3].d = r12_3
            rcx_72[2] = r14
            *rcx_72 = &data_142d99560
    else
        result_1 = *(r15_2 + 0x38)
        
        if (*(arg1 + 0x22) u> 0)
            r12_3 = zx.d(*(arg1 + 0x20))
            rcx_72 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_60 = &rcx_72[5]
            
            if (rax_60 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_72 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_60 = &rcx_72[5]
            
            *(arg2 + 0x30) = rax_60
            goto label_14080bbbf
return result
