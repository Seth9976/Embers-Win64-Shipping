// 函数: sub_142199c00
// 地址: 0x142199c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && (*(arg2 + 0xe0) & 0x100) != 0)
    void* rcx = *(arg2 + 0x1d0)
    
    if (rcx != 0)
        if (*(arg1 + 0x30) == 3)
            *arg6 += 4
        
        if (*(rcx + 0x30) == 2)
            *arg6 += 4

int64_t r15 = sx.q(arg7)
float zmm6[0x4]
float var_38[0x4] = zmm6
int32_t var_78
int64_t var_70
uint64_t var_68
int32_t* result
uint128_t zmm0
uint128_t zmm2
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (arg8 == 1 || (*(arg1 + 0x88) & 1) == 0)
    uint32_t rcx_1 = zx.d(*(arg1 + 0x30))
    float var_60
    
    if (rcx_1 == 1)
        int32_t rax_20 = *(arg2 + 0x250)
        
        if (rax_20 s<= 0)
        label_142199feb:
            void* r14_3 = *(arg2 + 0x18)
            zmm2 = *(arg2 + 0x12c)
            int64_t* rdx_4 = &var_68
            int32_t r9_1 = r14_3.d
            var_70 = 0
            var_78 = 0
            
            if ((*(arg1 + 0x3c) & 1) == 0)
                int64_t* rax_25 = sub_141fe56b0(arg1 + 0x40, rdx_4, zmm2, arg5, r9_1, nullptr)
                zmm5 = *(r14_3 + 0x1c0)
                zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                zmm2 = *(rax_25 + 4)
                zmm6 = _mm_unpacklo_ps(*rax_25, rax_25[1].d.q)
                zmm2 = _mm_unpacklo_ps(zmm2, 0)
                arg5 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                zmm6 = __mulps_xmmps_memps(_mm_unpacklo_ps(zmm6, zmm2.q), *(r14_3 + 0x1e0))
                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), arg5)
                zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4), zmm0)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm5 = _mm_mul_ps(zmm5, zmm2)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), arg5)
                zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                zmm5 = _mm_add_ps(zmm5, zmm6)
                zmm3 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, zmm4), zmm0), zmm5), *(r14_3 + 0x1d0))
                var_60 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
                arg5 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                *arg3 = (_mm_unpacklo_ps(zmm3, arg5.q)).q
                arg3[1].d = var_60
            else
                int64_t* rax_21 = sub_141fe56b0(arg1 + 0x40, rdx_4, zmm2, arg5, r9_1, nullptr)
                *arg3 = *rax_21
                arg3[1].d = rax_21[1].d
                void* rcx_17 = *(arg2 + 0x18)
                void* rax_23 = *(rcx_17 + 0xa8)
                
                if (rax_23 == 0)
                    rax_23 = sub_141ee69e0(rcx_17)
                
                int32_t rcx_18 = *(rax_23 + 0x540)
                arg5 = *arg3
                var_68 = *(rax_23 + 0x538)
                uint64_t rax_24 = var_68
                arg5.d = arg5.d f- _mm_cvtepi32_ps(zx.o(var_68.d)).d
                zmm0 = _mm_cvtepi32_ps(zx.o((rax_24 u>> 0x20).d))
                *arg3 = arg5.d
                arg5.d = (*(arg3 + 4)).d f- zmm0.d
                zmm0 = _mm_cvtepi32_ps(zx.o(rcx_18))
                *(arg3 + 4) = arg5.d
                arg5.d = arg3[1].d.d f- zmm0.d
                arg3[1].d = arg5.d
        else
            int64_t* rdx_3 = *(arg2 + 0x248)
            
            if (r15.d s< rax_20)
                int64_t rcx_15 = r15 * 3
                *arg3 = *(rdx_3 + (rcx_15 << 2))
                arg3[1].d = *(rdx_3 + (rcx_15 << 2) + 8)
            else
                *arg3 = *rdx_3
                arg3[1].d = rdx_3[1].d
    else if (rcx_1 == 2)
        zmm2 = *(*(arg2 + 0x18) + 0x1d0)
        result = zx.q(_mm_shuffle_ps(zmm2, zmm2, 0xaa).d)
        arg5 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        *arg3 = (_mm_unpacklo_ps(zmm2, arg5.q)).q
        arg3[1].d = result.d
    else if (rcx_1 == 3)
        if (*(*(arg2 + 0x1d0) + 0x30) - 1 u> 1)
            goto label_142199feb
        
        int64_t* rcx_10 = *(arg2 + 0x240)
        
        if (rcx_10 == 0)
            sub_142199af0(arg2)
            rcx_10 = *(arg2 + 0x240)
            
            if (rcx_10 == 0)
                goto label_142199feb
        
        uint32_t r14_1 = *(arg1 + 0x114)
        uint128_t zmm7
        uint128_t var_48_1 = zmm7
        int128_t zmm8
        int128_t var_58_1 = zmm8
        
        if (rcx_10[0x1f] == 0)
            *arg3 = var_68
        else
            uint32_t rdx = r14_1
            
            if (r14_1 == 0xffffffff)
                goto label_142199d9f
            
            void* rax_4 = (*(*rcx_10 + 0x110))(rcx_10, rdx)
            int64_t* r8
            
            if (rax_4 == 0 || 1f f< *(rax_4 + 0xc))
                rdx = *(arg1 + 0x114)
                r14_1 = -1
            label_142199d9f:
                int32_t rdx_1 = rdx + 1
                *(arg1 + 0x114) = rdx_1
                r8 = *(arg2 + 0x240)
                int64_t* rax_5 = r8
                
                if (rdx_1 s>= r8[0x23].d)
                    *(arg1 + 0x114) = 0
                    rdx_1 = 0
                    r8 = *(arg2 + 0x240)
                    rax_5 = r8
                
                uint32_t r9 = zx.d(*(rax_5[0x1f] + (sx.q(rdx_1) << 1)))
                
                if (r14_1 == r9)
                    r14_1 = -1
                else
                    r14_1 = r9
                    
                    if (rdx_1 == 0xffffffff)
                        r14_1 = -1
            else
                r8 = *(arg2 + 0x240)
            
            void* rax_18 = r8[3]
            uint128_t* rax_8
            
            if (r14_1 s>= 0)
                rax_8 = (*(*r8 + 0x110))(r8, zx.q(r14_1))
            
            if (r14_1 s< 0 || rax_8 == 0)
                zmm2 = *(rax_18 + 0x1d0)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                arg5 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                *arg3 = (_mm_unpacklo_ps(zmm2, arg5.q)).q
                var_60 = zmm0.d
            else
                void* rcx_14 = *(arg2 + 0x240)
                zmm0 = _mm_cvtps_pd(rax_8[1].d.q)
                zmm7 = *(rcx_14 + 0xd0)
                zmm8 = *(rcx_14 + 0xd4)
                zmm6 = *(rcx_14 + 0xd8)
                
                if (_finite(zmm0.q) == 0)
                    *arg3 = var_68
                else if (_finite(_mm_cvtps_pd((*(rax_8 + 0x14)).q).q) == 0)
                    *arg3 = var_68
                else if (_finite(_mm_cvtps_pd((*(rax_8 + 0x18)).q).q) == 0)
                    *arg3 = var_68
                else if (_finite(_mm_cvtps_pd((*rax_8).q).q) == 0)
                    *arg3 = var_68
                else if (_finite(_mm_cvtps_pd((*(rax_8 + 4)).q).q) == 0)
                    *arg3 = var_68
                else if (_finite(_mm_cvtps_pd((*(rax_8 + 8)).q).q) == 0)
                    *arg3 = var_68
                else if (_finite(_mm_cvtps_pd(zmm7.q).q) == 0)
                    *arg3 = var_68
                else if (_finite(_mm_cvtps_pd(zmm8.q).q) == 0)
                    *arg3 = var_68
                else if (_finite(_mm_cvtps_pd(zmm6[0].q).q) == 0)
                    *arg3 = var_68
                else
                    zmm7.d = zmm7.d f+ rax_8[1].d
                    zmm8.d = zmm8.d f+ *(rax_8 + 0x14)
                    zmm6[0] = zmm6[0] f+ *(rax_8 + 0x18)
                    *arg3 = (_mm_unpacklo_ps(zmm7, zmm8.q)).q
                    var_60 = zmm6[0]
        
        arg3[1].d = var_60
    else
        if (rcx_1 != 4)
            goto label_142199feb
        
        int32_t rcx_5
        rcx_5.b = sub_140b5b8a0(*(arg1 + 0x34), 0) == 0
        
        if ((*(arg1 + 0x38) != 0 | rcx_5.b) == 0)
            goto label_142199feb
        
        sub_142199af0(arg2)
        void* rax_1 = *(arg2 + 0x238)
        
        if (rax_1 == 0)
            goto label_142199feb
        
        void* rcx_7 = *(rax_1 + 0x130)
        int128_t* rcx_8
        
        if (rcx_7 == 0)
            rcx_8 = &data_143dbb0c0
        else
            rcx_8 = rcx_7 + 0x1c0
        
        zmm2 = rcx_8[1]
        var_60 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
        arg5 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        *arg3 = (_mm_unpacklo_ps(zmm2, arg5.q)).q
        arg3[1].d = var_60

if (arg8 == 1 || (*(arg1 + 0xd8) & 1) == 0)
    uint32_t rcx_19 = zx.d(*(arg1 + 0x8c))
    
    if (rcx_19 == 0)
    label_14219a184:
        zmm6 = data_142d4cc00
    label_14219a18b:
        void* rax_26 = *(arg2 + 0x18)
        zmm6 = __mulps_xmmps_memps(zmm6, *(rax_26 + 0x1e0))
        zmm5 = *(rax_26 + 0x1c0)
        arg5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        zmm2 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm2)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), arg5)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm3 = _mm_sub_ps(zmm3, zmm0)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        zmm5 = _mm_mul_ps(zmm5, zmm3)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm2)
        zmm4 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
        zmm5 = _mm_add_ps(zmm5, zmm6)
        zmm4 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm4, arg5), zmm0), zmm5)
        result = zx.q(_mm_shuffle_ps(zmm4, zmm4, 0xaa).d)
        *(arg3 + 0xc) = (_mm_unpacklo_ps(zmm4, _mm_shuffle_ps(zmm4, zmm4, 0x55).q)).q
        *(arg3 + 0x14) = result.d
    else if (rcx_19 == 1)
        int32_t rax_28 = *(arg2 + 0x260)
        
        if (rax_28 s<= 0)
        label_14219a2e8:
            var_70 = 0
            var_78 = 0
            int64_t* rax_29 = sub_141fe56b0(arg1 + 0x90, &var_68, *(arg4 + 0xc), arg5, 
                (*(arg2 + 0x18)).d, nullptr)
            *(arg3 + 0xc) = *rax_29
            *(arg3 + 0x14) = rax_29[1].d
            
            if ((*(arg1 + 0x3c) & 1) == 0)
                zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg3 + 0xc), (*(arg3 + 0x14)).q), 
                    _mm_unpacklo_ps(arg3[2].d, 0).q)
                goto label_14219a18b
        else
            int64_t* rdx_6 = *(arg2 + 0x258)
            
            if (r15.d s< rax_28)
                int64_t rcx_24 = r15 * 3
                *(arg3 + 0xc) = *(rdx_6 + (rcx_24 << 2))
                result = zx.q(*(rdx_6 + (rcx_24 << 2) + 8))
            else
                *(arg3 + 0xc) = *rdx_6
                result = zx.q(rdx_6[1].d)
            
            *(arg3 + 0x14) = result.d
    else
        if (rcx_19 != 2)
            if (rcx_19 != 3)
                goto label_14219a2e8
            
            goto label_14219a184
        
        var_70 = 0
        var_78 = 0
        int64_t* rax_27 =
            sub_141fe56b0(arg1 + 0x90, &var_68, *(arg4 + 0xc), arg5, (*(arg2 + 0x18)).d, nullptr)
        *(arg3 + 0xc) = *rax_27
        result = zx.q(rax_27[1].d)
        *(arg3 + 0x14) = result.d

if (arg8 == 1 || (*(arg1 + 0x110) & 1) == 0)
    if (*(arg1 + 0x8c) == 1)
        result = zx.q(*(arg2 + 0x270))
    
    if (*(arg1 + 0x8c) != 1 || result.d s<= 0)
        zmm0, result =
            sub_141fe5610(arg1 + 0xe0, *(arg4 + 0xc), *(arg2 + 0x18), nullptr, var_78, var_70)
    else
        uint128_t* rcx_22 = *(arg2 + 0x268)
        
        if (r15.d s< result.d)
            zmm0 = *(rcx_22 + (r15 << 2))
        else
            zmm0 = *rcx_22
    
    arg3[3].d = zmm0.d

result.b = 1
return result
