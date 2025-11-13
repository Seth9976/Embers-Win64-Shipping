// 函数: sub_1407c5450
// 地址: 0x1407c5450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* rax_2 = *arg3
void* result_12 = nullptr
void* result_1 = nullptr

if (rax_2 != 0)
    int64_t rdx = sx.q(*(rax_2 + 0x10c))
    int64_t* rbx_1 = *(arg3[1] + 0x10)
    int64_t rax_4 = rbx_1[3]
    
    if (*(rax_4 + (rdx << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx.d)
        rax_4 = rbx_1[3]
    
    result_12 = *(rax_4 + (rdx << 3))
    result_1 = result_12

void* r10 = arg3[2]
void* result_2 = result_12
int64_t* rcx_5

if (*(r10 + 0xd0) == *(r10 + 0xfc))
label_1407c553e:
    rcx_5 = nullptr
else
    int64_t r11_1 = arg3[3]
    void* r9_1 = r10 + 0x100
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_10 =
        *(r9_1 + ((sx.q((r11_1 u>> 0x20).d * 0x17 + r11_1.d) & (sx.q(*(r10 + 0x110)) - 1)) << 2))
    
    if (rax_10 == 0xffffffff)
    label_1407c553e_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_10) * 0x78 + *(r10 + 0xc8)
            
            if (*rcx_5 == r11_1)
                break
            
            rax_10 = rcx_5[0xe].d
            
            if (rax_10 == 0xffffffff)
                goto label_1407c553e_2
        
        if (rax_10 == 0xffffffff)
        label_1407c553e_2:
            rcx_5 = nullptr

void* result_13 = &rcx_5[1]

if (rcx_5 == 0)
    result_13 = nullptr

uint32_t result_3
void* result_4
int32_t var_50
void* result
void*** rcx_20

if (result_13 == 0)
    int32_t var_48 = 0x3f800000
    int32_t var_4c = 0x3f800000
    var_50 = 0x3f800000
    result_3 = 0
    sub_140741e30(arg2, &result_2, arg1 + 8, &result_3, 0)
    sub_14077c5f0(arg2, &result_2, arg1 + 0xe, &var_50, 0)
    result_3 = 0
    sub_140741e30(arg2, &result_2, arg1 + 0x14, &result_3, 0)
    result_4 = result_13
    int32_t var_58_1 = result_13.d
    sub_14077c5f0(arg2, &result_2, arg1 + 0x1a, &result_4, 0)
    int64_t rax_11 = sub_14082c590()
    void* result_6 = sub_140790e00(arg3)
    bool cond:0_1 = *(arg1 + 0x22) u<= 0
    result_2 = result_6
    
    if (not(cond:0_1))
        uint32_t r14_2 = zx.d(*(arg1 + 0x20))
        void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rdx_7 = &rcx_13[5]
        
        if (rdx_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_7 = &rcx_13[5]
        
        *(arg2 + 0x30) = rdx_7
        void**** rax_12 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_12 = rcx_13
        *(arg2 + 8) = &rcx_13[1]
        rcx_13[1] = 0
        rcx_13[2] = result_2
        *rcx_13 = &data_142d99560
        rcx_13[3].d = r14_2
        rcx_13[4] = rax_11
    
    int64_t rax_15 = sub_14082c590()
    result = sub_140790e00(arg3)
    void* result_5 = result
    
    if (*(arg1 + 0x26) u<= 0)
        goto label_1407c5b22
    
    rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    result_3 = zx.d(*(arg1 + 0x24))
    void* rdx_8 = &rcx_20[5]
    
    if (rdx_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_8 = &rcx_20[5]
    
    *(arg2 + 0x30) = rdx_8
    void** rax_17 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_17 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[1] = 0
    result = zx.q(result_3)
    rcx_20[3].d = result.d
    rcx_20[2] = result_5
    rcx_20[4] = rax_15
    goto label_1407c5b13

uint32_t count = zx.d(*(arg1 + 0xc))

if (count u>= 0xc)
    count = 0xc

if (count != 0)
    uint32_t rcx_24 = zx.d(*(arg1 + 0xa))
    int64_t rbx_3 = *(arg2 + 0x30) + 0xf
    result_3 = zx.d(*(arg1 + 8))
    int64_t rbx_4 = rbx_3 & 0xfffffffffffffff0
    int64_t rax_21 = zx.q(count) + rbx_4
    result_4.d = rcx_24
    
    if (rax_21 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, count + 0x10)
        rbx_4 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_21 = zx.q(count) + rbx_4
    
    *(arg2 + 0x30) = rax_21
    memcpy(rbx_4, result_13, count)
    void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_23 = &rcx_29[6]
    
    if (rax_23 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_23 = &rcx_29[6]
    
    *(arg2 + 0x30) = rax_23
    void**** rax_24 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_24 = rcx_29
    *(arg2 + 8) = &rcx_29[1]
    rcx_29[1] = 0
    *rcx_29 = &data_142d99550
    rcx_29[2] = result_1
    rcx_29[4].d = result_3
    *(rcx_29 + 0x24) = result_4.d
    rcx_29[3] = rbx_4
    rcx_29[5].d = count

int32_t var_88_4 = 0
uint128_t zmm1
zmm1.d = (*(result_13 + 0x18)).d f/ _mm_cvtepi32_ps(zx.o(*result_13)).d
var_50 = zmm1.d
uint128_t zmm0
zmm0.d = (*(result_13 + 0x1c)).d f/ _mm_cvtepi32_ps(zx.o(*(result_13 + 4))).d
int32_t var_4c_1 = zmm0.d
uint128_t zmm2
zmm2.d = (*(result_13 + 0x20)).d f/ _mm_cvtepi32_ps(zx.o(*(result_13 + 8))).d
int32_t var_48_1 = zmm2.d
sub_14077c5f0(arg2, &result_2, arg1 + 0xe, &var_50, var_88_4)
sub_140741e30(arg2, &result_2, arg1 + 0x14, result_13 + 0x14, 0)
result = sub_14077c5f0(arg2, &result_2, arg1 + 0x1a, result_13 + 0x18, 0)

if (*(arg3 + 0x34) != 0)
    int64_t rax_47 = sub_14082c590()
    void* result_9 = sub_140790e00(arg3)
    bool cond:2_1 = *(arg1 + 0x22) u<= 0
    result_1 = result_9
    
    if (not(cond:2_1))
        void*** rcx_82 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        result_4.d = zx.d(*(arg1 + 0x20))
        void* rdx_20 = &rcx_82[5]
        
        if (rdx_20 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_82 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_20 = &rcx_82[5]
        
        *(arg2 + 0x30) = rdx_20
        void**** rax_49 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_49 = rcx_82
        *(arg2 + 8) = &rcx_82[1]
        rcx_82[1] = 0
        rcx_82[2] = result_1
        rcx_82[3].d = result_4.d
        *rcx_82 = &data_142d99560
        rcx_82[4] = rax_47
    
    int64_t rax_53 = sub_14082c590()
    result = sub_140790e00(arg3)
    bool cond:6_1 = *(arg1 + 0x26) u<= 0
    result_1 = result
    
    if (not(cond:6_1))
        void*** rcx_89 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        result_4.d = zx.d(*(arg1 + 0x24))
        void* rdx_21 = &rcx_89[5]
        
        if (rdx_21 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_89 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_21 = &rcx_89[5]
        
        *(arg2 + 0x30) = rdx_21
        void**** rax_55 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_55 = rcx_89
        *(arg2 + 8) = &rcx_89[1]
        rcx_89[1] = 0
        rcx_89[2] = result_1
        result = zx.q(result_4.d)
        rcx_89[3].d = result.d
        *rcx_89 = &data_142d99560
        rcx_89[4] = rax_53
    
    if (*(arg1 + 0x32) u> 0 || *(arg1 + 0x36) u> 0)
        void* result_10 = *(result_13 + 0x30)
        void** rbx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        result_1 = result_10
        void* rcx_93 = &rbx_9[1]
        
        if (rcx_93 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            result_10 = result_1
            rbx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_93 = &rbx_9[1]
        
        *(arg2 + 0x30) = rcx_93
        *rbx_9 = result_10
        void*** rcx_97 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_58 = &rcx_97[6]
        
        if (rax_58 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_97 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_58 = &rcx_97[6]
        
        *(arg2 + 0x30) = rax_58
        void**** rax_59 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_59 = rcx_97
        *(arg2 + 8) = &rcx_97[1]
        rcx_97[1] = 0
        *rcx_97 = &data_142da7798
        rcx_97[2].d = 1
        rcx_97[3] = rbx_9
        rcx_97[4].d = 1
        *(rcx_97 + 0x24) = 3
        rcx_97[5] = 0
        result_1 = sub_140790e00(arg3)
        result = sub_14077c370(arg1 + 0x30, arg2, &result_1, result_13 + 0x28)
    
    if (*(arg1 + 0x2a) u> 0 || *(arg1 + 0x2e) u> 0)
        void* result_11 = *(result_13 + 0x50)
        void** rbx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        result_1 = result_11
        void* rcx_103 = &rbx_14[1]
        
        if (rcx_103 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            result_11 = result_1
            rbx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_103 = &rbx_14[1]
        
        *(arg2 + 0x30) = rcx_103
        *rbx_14 = result_11
        void*** rcx_107 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_62 = &rcx_107[6]
        
        if (rax_62 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_107 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_62 = &rcx_107[6]
        
        *(arg2 + 0x30) = rax_62
        void**** rax_63 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_63 = rcx_107
        *(arg2 + 8) = &rcx_107[1]
        rcx_107[1] = 0
        *rcx_107 = &data_142da7798
        rcx_107[2].d = 1
        rcx_107[3] = rbx_14
        rcx_107[4].d = 1
        *(rcx_107 + 0x24) = 3
        rcx_107[5] = 0
        result_1 = sub_140790e00(arg3)
        result = sub_14077c370(arg1 + 0x28, arg2, &result_1, result_13 + 0x48)
else
    if (*(arg1 + 0x22) u> 0)
        void* result_7 = *(result_13 + 0x30)
        void** r14_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        result_2 = result_7
        void* rcx_36 = &r14_6[1]
        
        if (rcx_36 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            result_7 = result_2
            r14_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_36 = &r14_6[1]
        
        *(arg2 + 0x30) = rcx_36
        *r14_6 = result_7
        void*** rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_29 = &rcx_40[6]
        
        if (rax_29 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_29 = &rcx_40[6]
        
        *(arg2 + 0x30) = rax_29
        void**** rax_30 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_30 = rcx_40
        *(arg2 + 8) = &rcx_40[1]
        rcx_40[1] = 0
        *rcx_40 = &data_142da7798
        rcx_40[2].d = 1
        rcx_40[3] = r14_6
        rcx_40[4].d = 0
        *(rcx_40 + 0x24) = 3
        rcx_40[5] = 0
        result_4 = *(result_13 + 0x38)
        result = sub_140790e00(arg3)
        bool cond:7_1 = *(arg1 + 0x22) u<= 0
        result_2 = result
        
        if (not(cond:7_1))
            uint32_t r14_9 = zx.d(*(arg1 + 0x20))
            void*** rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rdx_14 = &rcx_47[5]
            
            if (rdx_14 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rdx_14 = &rcx_47[5]
            
            *(arg2 + 0x30) = rdx_14
            void** rax_33 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_33 = rcx_47
            *(arg2 + 8) = &rcx_47[1]
            rcx_47[1] = 0
            rcx_47[2] = result_2
            result = result_4
            rcx_47[4] = result
            *rcx_47 = &data_142d99560
            rcx_47[3].d = r14_9
    
    if (*(arg1 + 0x26) u<= 0)
        goto label_1407c5b22
    
    void* result_8 = *(result_13 + 0x50)
    void** r14_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    result_2 = result_8
    void* rcx_51 = &r14_12[1]
    
    if (rcx_51 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        result_8 = result_2
        r14_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_51 = &r14_12[1]
    
    *(arg2 + 0x30) = rcx_51
    *r14_12 = result_8
    void*** rcx_55 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_36 = &rcx_55[6]
    
    if (rax_36 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_55 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_36 = &rcx_55[6]
    
    *(arg2 + 0x30) = rax_36
    void**** rax_37 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_37 = rcx_55
    *(arg2 + 8) = &rcx_55[1]
    rcx_55[1] = 0
    *rcx_55 = &data_142da7798
    rcx_55[2].d = 1
    rcx_55[3] = r14_12
    rcx_55[4].d = 0
    *(rcx_55 + 0x24) = 3
    rcx_55[5] = 0
    int64_t r15_1 = *(result_13 + 0x58)
    result = sub_140790e00(arg3)
    bool cond:8_1 = *(arg1 + 0x26) u<= 0
    result_2 = result
    
    if (cond:8_1)
        goto label_1407c5b22
    
    uint32_t r14_15 = zx.d(*(arg1 + 0x24))
    rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_15 = &rcx_20[5]
    
    if (rdx_15 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_15 = &rcx_20[5]
    
    *(arg2 + 0x30) = rdx_15
    void**** rax_39 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_39 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[1] = 0
    result = result_2
    rcx_20[2] = result
    rcx_20[3].d = r14_15
    rcx_20[4] = r15_1
label_1407c5b13:
    *rcx_20 = &data_142d99560
label_1407c5b22:
    
    if (*(arg1 + 0x36) u> 0)
        int64_t rax_41 = sub_14082f7c0(arg3[4], arg2, 0x1d, 0)
        uint32_t r13_1 = zx.d(*(arg1 + 0x34))
        void*** rcx_68 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rdx_17 = &rcx_68[5]
        
        if (rdx_17 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_68 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_17 = &rcx_68[5]
        
        *(arg2 + 0x30) = rdx_17
        void**** rax_42 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_42 = rcx_68
        *(arg2 + 8) = &rcx_68[1]
        rcx_68[1] = 0
        result = result_1
        *rcx_68 = &data_142da77d8
        rcx_68[2] = result
        rcx_68[3].d = r13_1
        rcx_68[4] = rax_41
    
    if (*(arg1 + 0x2e) u> 0)
        int64_t rax_44 = sub_14082f7c0(arg3[4], arg2, 0x1d, 0)
        uint32_t r15_3 = zx.d(*(arg1 + 0x2c))
        void*** rcx_75 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rdx_19 = &rcx_75[5]
        
        if (rdx_19 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_75 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_19 = &rcx_75[5]
        
        *(arg2 + 0x30) = rdx_19
        void**** rax_45 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_45 = rcx_75
        *(arg2 + 8) = &rcx_75[1]
        rcx_75[1] = 0
        result = result_1
        *rcx_75 = &data_142da77d8
        rcx_75[2] = result
        rcx_75[3].d = r15_3
        rcx_75[4] = rax_44

__security_check_cookie(rax_1 ^ &var_a8)
return result
