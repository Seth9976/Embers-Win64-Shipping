// 函数: sub_14137e270
// 地址: 0x14137e270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* rcx = *(arg4 + 0x28)
void* rdi = arg4
(*(*rcx + 0x38))(rcx, 0)
uint128_t zmm6

if (arg1[0x7b] u> 0)
    int64_t* rdi_1 = data_14395f4d0
    uint32_t r14_1 = zx.d(arg1[0x7a])
    
    if ((*(*rdi_1 + 8))(rdi_1) == 0)
        void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_3 = &rcx_4[5]
        
        if (rax_3 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_3 = &rcx_4[5]
        
        *(arg2 + 0x30) = rax_3
        void** rax_4 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_4 = rcx_4
        *(arg2 + 8) = &rcx_4[1]
        rcx_4[1] = 0
        *rcx_4 = &data_142da77c8
        rcx_4[2] = arg3
        rcx_4[3].d = r14_1
        rcx_4[4] = rdi_1
    
    rdi = arg4

uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
int32_t var_128
uint128_t var_108
uint128_t zmm0
uint128_t zmm1

if (arg1[2] u> 0 || arg1[0x76] u> 0 || arg1[5] u> 0)
    zmm0 = *(rdi + 0x48)
    var_108 = zmm0
    int64_t rbx_1 = var_108.q
    int64_t rcx_8 = _mm_bsrli_si128(zmm0, 8).q
    uint32_t r12_3 = (rcx_8 u>> 0x20).d - (rbx_1 u>> 0x20).d
    zmm7 = _mm_cvtepi32_ps(zx.o(rcx_8.d - rbx_1.d))
    zmm6 = _mm_cvtepi32_ps(zx.o(r12_3))
    zmm0.d = 1f f/ zmm7.d
    zmm1.d = 1f f/ zmm6.d
    var_128 = zmm7.d
    int32_t var_11c_1 = zmm1.d
    int32_t var_124_1 = zmm6.d
    int32_t var_120_1 = zmm0.d
    float zmm6_1 = sub_14077c870(arg2, &arg_18, arg1, &var_128, 0)
    uint32_t count = zx.d(arg1[5])
    
    if (count u>= 0x10)
        count = 0x10
    
    var_108 = *(rdi + 0x48)
    
    if (count != 0)
        uint32_t rax_8 = zx.d(arg1[4])
        uint32_t rax_9 = zx.d(arg1[3])
        int64_t rdi_4 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        int64_t rax_11 = zx.q(count) + rdi_4
        
        if (rax_11 u> *(arg2 + 0x38))
            zmm6_1 = sub_140b0e3d0(arg2 + 0x30, count + 0x10)
            rdi_4 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax_11 = zx.q(count) + rdi_4
        
        *(arg2 + 0x30) = rax_11
        memcpy(rdi_4, &var_108, count)
        void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_13 = &rcx_15[6]
        
        if (rax_13 u> *(arg2 + 0x38))
            zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_13 = &rcx_15[6]
        
        *(arg2 + 0x30) = rax_13
        void** rax_14 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_14 = rcx_15
        *(arg2 + 8) = &rcx_15[1]
        rcx_15[1] = 0
        *rcx_15 = &data_142d99550
        rcx_15[2] = arg_18
        rcx_15[4].d = rax_9
        rcx_15[3] = rdi_4
        rdi = arg4
        *(rcx_15 + 0x24) = rax_8
        rcx_15[5].d = count
    
    zmm7.d = zmm7.d f* 0.5f
    uint128_t zmm1_1
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(rbx_1.d)).d f+ zmm7.d
    uint128_t zmm0_1
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(neg.d(r12_3))).d f* 0.5f
    var_128 = zmm7.d
    zmm1_1.d = zmm1_1.d f- 0.5f
    int32_t var_124_2 = zmm0_1.d
    int32_t var_120_2 = zmm1_1.d
    float var_11c_2 = zmm6_1 * 0.5f f+ _mm_cvtepi32_ps(zx.o(rbx_1:4.d)).d - 0.5f
    sub_14077c870(arg2, &arg_18, &arg1[0x74], &var_128, 0)

if (*(rdi + 0x48) != *(rdi + 0x50) || *(rdi + 0x4c) != *(rdi + 0x54))
    var_108 = *(rdi + 8)
else
    var_108 = zx.o(0)

int64_t rdx_4 = *(rdi + 0x18)
uint128_t zmm2 = var_108
int64_t r10 = zmm2.q
zmm0 = _mm_cvtepi32_ps(zx.o(rdx_4.d))
uint32_t r8_4 = (r10 u>> 0x20).d
int64_t rcx_20 = _mm_bsrli_si128(zmm2, 8).q
zmm1 = _mm_cvtepi32_ps(zx.o((rdx_4 u>> 0x20).d))
uint32_t rax_24 = (rcx_20 u>> 0x20).d
bool cond:2 = arg1[0x79] u<= 0
uint128_t zmm10
zmm10.d = _mm_cvtepi32_ps(zx.o(r10.d)).d f/ zmm0.d
zmm0 = _mm_cvtepi32_ps(zx.o(rdx_4.d))
uint128_t zmm11 = _mm_cvtepi32_ps(zx.o(r8_4))
uint128_t zmm12
zmm12.d = _mm_cvtepi32_ps(zx.o(rcx_20.d)).d f/ zmm0.d
zmm11.d = zmm11.d f/ zmm1.d
uint128_t zmm13
zmm13.d = _mm_cvtepi32_ps(zx.o(rax_24)).d f/ zmm1.d

if (not(cond:2))
    zmm0 = _mm_cvtepi32_ps(zx.o(rdx_4.d))
    int32_t var_120_3 = zmm10.d
    int32_t var_11c_3 = zmm11.d
    zmm1.d = _mm_cvtepi32_ps(zx.o(rcx_20.d - r10.d)).d f/ zmm0.d
    var_128 = zmm1.d
    zmm1.d = _mm_cvtepi32_ps(zx.o(rax_24 - r8_4)).d f/ _mm_cvtepi32_ps(zx.o((rdx_4 u>> 0x20).d)).d
    int32_t var_124_3 = zmm1.d
    sub_14077c870(arg2, &arg_18, &arg1[0x77], &var_128, 0)

var_128.q = sub_14139ca30(arg6)
void* r14_2 = &arg1[0x1d]
int64_t* r15_1 = arg7
int64_t* var_f8_2 = arg7
uint64_t r12_5 = 0
uint32_t var_118
var_118.q = &arg1[0x55]
int128_t zmm8
int128_t var_68 = zmm8
uint64_t result

do
    int64_t* rcx_25 = *(rdi + 0x28)
    int64_t r8_6 = *rcx_25
    result = (*(r8_6 + 0x10))(rcx_25, zx.q(r12_5.d), r8_6)
    
    if (result == 0)
        break
    
    int64_t* rcx_26 = *result
    int64_t* rbx_2 = nullptr
    
    if (rcx_26 != 0)
        int64_t r8_7 = *rcx_26
        void* rax_28 = (*(r8_7 + 0x38))(rcx_26, zx.q(*(result + 8)), r8_7)
        
        if (rax_28 != 0)
            rbx_2 = *(rax_28 + 0x50)
            
            if (rbx_2 != 0)
                (*(*rbx_2 + 0x30))(rbx_2)
    
    int64_t* rdi_7
    
    if (arg7 == 0)
        rdi_7 = arg5
    else
        rdi_7 = *r15_1
    
    int16_t* rdi_8
    
    if (rbx_2 == 0)
        int64_t rax_46 = *var_128.q
        
        if (*(r14_2 - 0x2c) u> 0)
            uint32_t rax_47 = zx.d(*(r14_2 - 0x2e))
            void*** rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_48 = &rcx_46[5]
            
            if (rax_48 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_48 = &rcx_46[5]
            
            *(arg2 + 0x30) = rax_48
            void**** rax_49 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_49 = rcx_46
            *(arg2 + 8) = &rcx_46[1]
            rcx_46[1] = 0
            *rcx_46 = &data_142da77b8
            rcx_46[2] = arg_18
            rcx_46[3].d = rax_47
            rcx_46[4] = rax_46
        
        if (*r14_2 u> 0)
            uint32_t rax_54 = zx.d(*(r14_2 - 2))
            
            if ((*(*rdi_7 + 8))(rdi_7) == 0)
                void*** rcx_53 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_57 = &rcx_53[5]
                
                if (rax_57 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_53 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_57 = &rcx_53[5]
                
                *(arg2 + 0x30) = rax_57
                void**** rax_58 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_58 = rcx_53
                *(arg2 + 8) = &rcx_53[1]
                rcx_53[1] = 0
                *rcx_53 = &data_142da77c8
                rcx_53[2] = arg_18
                rcx_53[3].d = rax_54
                rcx_53[4] = rdi_7
        
        uint64_t rdi_10 = r12_5 * 3
        var_108 = data_142d3f670
        sub_14077c870(arg2, &arg_18, &arg1[0x32 + rdi_10], &var_108, 0)
        result = sub_14077c870(arg2, &arg_18, &arg1[rdi_10 + 0x53], &var_108, 0)
        rdi_8 = var_118.q
    else
        result = rbx_2[2]
        
        if (*(r14_2 - 0x2c) u> 0)
            uint32_t rax_30 = zx.d(*(r14_2 - 0x2e))
            void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_31 = &rcx_30[5]
            
            if (rax_31 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_31 = &rcx_30[5]
            
            *(arg2 + 0x30) = rax_31
            void** rax_32 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_32 = rcx_30
            *(arg2 + 8) = &rcx_30[1]
            rcx_30[1] = 0
            *rcx_30 = &data_142da77b8
            rcx_30[2] = arg_18
            rcx_30[3].d = rax_30
            rcx_30[4] = result
        
        if (*r14_2 u> 0)
            uint32_t result_1 = zx.d(*(r14_2 - 2))
            result = (*(*rdi_7 + 8))(rdi_7)
            
            if (result.b == 0)
                void*** rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_37 = &rcx_37[5]
                
                if (rax_37 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_37 = &rcx_37[5]
                
                *(arg2 + 0x30) = rax_37
                void**** rax_38 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_38 = rcx_37
                *(arg2 + 8) = &rcx_37[1]
                rcx_37[1] = 0
                *rcx_37 = &data_142da77c8
                rcx_37[2] = arg_18
                result = zx.q(result_1)
                rcx_37[3].d = result.d
                rcx_37[4] = rdi_7
        
        rdi_8 = var_118.q
        
        if (rdi_8[-0x21] u> 0 || *rdi_8 u> 0)
            zmm6 = zx.o(*((*(*rbx_2 + 0x10))(rbx_2) + 0x14))
            int64_t rax_43 = *rbx_2
            zmm6 = _mm_cvtepi32_ps(zmm6)
            uint64_t rdi_9 = r12_5 * 3
            zmm8.d = 1f f/ zmm6.d
            uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(*((*(rax_43 + 0x10))(rbx_2) + 0x18)))
            int32_t var_e8 = zmm6.d
            zmm7.d = 1f f/ zmm0_2.d
            int32_t var_e4_1 = zmm0_2.d
            int32_t var_dc_1 = zmm7.d
            int32_t var_e0_1 = zmm8.d
            sub_14077c870(arg2, &arg_18, &arg1[0x32 + rdi_9], &var_e8, 0)
            zmm8.d = zmm8.d f* 0.5f
            zmm7.d = zmm7.d f* 0.5f
            float var_d8 = zmm8.d f+ zmm10.d
            float var_d0_1 = zmm12.d f- zmm8.d
            float var_d4_1 = zmm7.d f+ zmm11.d
            float var_cc_1 = zmm13.d f- zmm7.d
            result = sub_14077c870(arg2, &arg_18, &arg1[0x53 + rdi_9], &var_d8, 0)
            rdi_8 = var_118.q
    
    if (rbx_2 != 0)
        result = (*(*rbx_2 + 0x38))(rbx_2)
    
    r15_1 = &var_f8_2[1]
    var_118.q = &rdi_8[3]
    rdi = arg4
    r12_5 = zx.q(r12_5.d + 1)
    r14_2 += 4
    var_f8_2 = r15_1
while (r12_5.d u< 0xb)

return result
