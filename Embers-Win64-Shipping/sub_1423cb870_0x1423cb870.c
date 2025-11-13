// 函数: sub_1423cb870
// 地址: 0x1423cb870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int32_t var_200
(*(*(arg1 - 0x10) + 0x18))(arg1 - 0x10, &var_200)
char rbx = (arg3 + 1) << 2 | 1
int32_t i = 0
char var_208 = rbx
int64_t result

do
    void* rax_3 = *(arg1 - 8)
    int128_t zmm1 = data_142d3f5a0
    int32_t var_f0_1 = 0
    int32_t var_ec
    __builtin_memset(&var_ec, 0xff, 0x14)
    int128_t var_d8_1 = zmm1
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x1a)
    void* var_1c8 = rax_3
    int64_t var_1c0_1 = 0
    int32_t var_1b8_1 = 0xffffffff
    char var_1b4_1 = 0
    char var_1b3_1 = rbx
    int64_t var_108
    __builtin_memset(&var_108, 0, 0x11)
    int32_t var_f4_1 = 0
    int16_t var_b0_1
    var_b0_1:1.b = *(rax_3 + 0x38) u> 1
    void var_1b0
    memset(&var_1b0, 0, 0xa8)
    int32_t j_5 = 0
    void** rax_4 = &var_1c8
    int64_t rcx_2 = 0
    uint64_t r14_1 = 0
    
    while (*rax_4 != 0)
        j_5 += 1
        rcx_2 += 1
        rax_4 = &rax_4[3]
        
        if (rcx_2 s>= 8)
            break
    
    void var_a8
    
    if (j_5 != 0)
        void* rdx_1 = &var_a8
        uint64_t j_4 = zx.q(j_5)
        void** rax_5 = &var_1c8
        uint64_t j
        
        do
            void* rcx_3 = *rax_5
            
            if (rcx_3 != 0)
                r14_1 = zx.q(r14_1.d + 1)
                *rdx_1 = rcx_3
                rdx_1 += 8
            
            rax_5 = &rax_5[3]
            j = j_4
            j_4 -= 1
        while (j != 1)
    
    int64_t r15_1 = var_108
    
    if (r15_1 != 0 && ((var_f4_1.b & 0xf) == 2 || (var_f4_1.b & 0xf0) == 0x20))
        void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_8 = &rcx_6[4]
        
        if (rax_8 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x28)
            rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_8 = &rcx_6[4]
        
        *(arg2 + 0x30) = rax_8
        int64_t* rax_9 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_9 = rcx_6
        *(arg2 + 8) = &rcx_6[1]
        rcx_6[1] = 0
        *rcx_6 = &data_142f115e8
        rcx_6[2].d = var_f4_1
        rcx_6[3] = r15_1
    
    uint32_t rdx_2 = (r14_1 << 3).d
    int64_t r15_2 = sx.q(rdx_2)
    int64_t* rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = r15_2 + rbx_4
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, rdx_2 + 8)
        rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = r15_2 + rbx_4
    
    *(arg2 + 0x30) = rax_11
    int64_t j_3 = sx.q(r14_1.d)
    
    if (r14_1.d s> 0)
        int64_t* rcx_11 = rbx_4
        int64_t j_1
        
        do
            *rcx_11 = *(rcx_11 + &var_a8 - rbx_4)
            rcx_11 = &rcx_11[1]
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
    
    void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_13 = &rcx_14[5]
    
    if (rax_13 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_13 = &rcx_14[5]
    
    *(arg2 + 0x30) = rax_13
    void**** rax_14 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_14 = rcx_14
    *(arg2 + 8) = &rcx_14[1]
    rcx_14[1] = 0
    rcx_14[3] = rbx_4
    *rcx_14 = &data_142d549c8
    rcx_14[2].d = r14_1.d
    rcx_14[4].d = 1
    int64_t rbx_9 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_16 = rbx_9 + 0x22
    
    if (rax_16 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x24)
        rbx_9 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_16 = rbx_9 + 0x22
    
    *(arg2 + 0x30) = rax_16
    wchar16 const* const rcx_19 = u"UpdateTargetCube"
    wchar16 const j_2
    
    do
        j_2 = *rcx_19
        *(rcx_19 + rbx_9 - u"UpdateTargetCube") = j_2
        rcx_19 = &rcx_19[1]
    while (j_2 != 0)
    void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_17 = &rcx_22[0x27]
    
    if (rax_17 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_22[0x27]
    
    *(arg2 + 0x30) = rax_17
    void**** rax_18 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_18 = rcx_22
    *(arg2 + 8) = &rcx_22[1]
    sub_1405d11b0(rcx_22, &var_1c8, rbx_9)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_1c8)
    zmm7 = zx.o(var_200)
    int64_t var_b8
    *(arg2 + 0x178) = var_b8:7.b
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1
    void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int32_t var_1fc
    zmm6 = _mm_cvtepi32_ps(zx.o(var_1fc))
    void* rax_21 = &rcx_29[5]
    zmm7 = _mm_cvtepi32_ps(zmm7)
    int512_t zmm1_1
    
    if (rax_21 u> *(arg2 + 0x38))
        zmm1_1, zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_21 = &rcx_29[5]
    
    *(arg2 + 0x30) = rax_21
    void**** rax_22 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_22 = rcx_29
    *(arg2 + 8) = &rcx_29[1]
    rcx_29[1] = 0
    *rcx_29 = &data_142d54998
    *(rcx_29 + 0x1c) = zmm7.d
    rcx_29[4].d = zmm6.d
    rcx_29[2] = 0
    rcx_29[3].d = 0
    *(rcx_29 + 0x24) = 0x3f800000
    void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_24 = &rcx_35[2]
    
    if (rax_24 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x18)
        rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_35[2]
    
    *(arg2 + 0x30) = rax_24
    *(arg2 + 0x14) += 1
    zmm1_1.o = data_142d3f800
    **(arg2 + 8) = rcx_35
    *(arg2 + 8) = &rcx_35[1]
    rcx_35[1] = 0
    *rcx_35 = &data_142d549b8
    *(arg2 + 0x1c4) = 0
    *(arg2 + 0x178) = 0
    int64_t* r14_2 = *(arg1 - 8)
    void*** rbx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t var_1d4_1 = 0
    int32_t var_1cc_1 = 0
    int64_t r15_3 = *(arg1 + 0x30)
    int128_t var_1f4
    __builtin_memset(&var_1f4, 0xff, 0x20)
    void* rax_27 = &rbx_14[0xa]
    
    if (rax_27 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x58)
        rbx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_27 = &rbx_14[0xa]
    
    *(arg2 + 0x30) = rax_27
    int64_t* rax_28 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_28 = rbx_14
    *(arg2 + 8) = &rbx_14[1]
    rbx_14[1] = 0
    *rbx_14 = &data_142d56628
    rbx_14[2].d = i
    *(rbx_14 + 0x14) = var_1f4.d
    rbx_14[3].d = var_1f4:4.d
    *(rbx_14 + 0x1c) = var_1f4:8.d
    rbx_14[4].d = var_1f4:0xc.d
    int128_t var_1e4
    *(rbx_14 + 0x24) = var_1e4.d
    rbx_14[5].d = var_1e4:4.d
    *(rbx_14 + 0x2c) = var_1e4:8.d
    rbx_14[6].d = var_1e4:0xc.d
    *(rbx_14 + 0x34) = var_1d4_1.d
    rbx_14[7].d = var_1d4_1:4.d
    *(rbx_14 + 0x3c) = var_1cc_1
    rbx_14[8] = r14_2
    rbx_14[9] = r15_3
    
    if ((*(*r14_2 + 8))(r14_2) == 0)
        int64_t* rcx_41 = rbx_14[8]
        
        if ((*(*rcx_41 + 0x18))(rcx_41) == 0)
            int64_t* rcx_42 = rbx_14[8]
            
            if ((*(*rcx_42 + 0x20))(rcx_42) == 0)
                int64_t* rcx_43 = rbx_14[8]
                (*(*rcx_43 + 0x10))(rcx_43)
    
    int64_t* rcx_44 = rbx_14[9]
    
    if ((*(*rcx_44 + 8))(rcx_44) == 0)
        int64_t* rcx_45 = rbx_14[9]
        
        if ((*(*rcx_45 + 0x18))(rcx_45) == 0)
            int64_t* rcx_46 = rbx_14[9]
            
            if ((*(*rcx_46 + 0x20))(rcx_46) == 0)
                int64_t* rcx_47 = rbx_14[9]
                (*(*rcx_47 + 0x10))(rcx_47)
    
    int64_t var_c0
    result = sub_1405d1550(&var_c0)
    rbx = var_208
    i += 1
while (i s< 6)

__security_check_cookie(rax_1 ^ &var_228)
return result
