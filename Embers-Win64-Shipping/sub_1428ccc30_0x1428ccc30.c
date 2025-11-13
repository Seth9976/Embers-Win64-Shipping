// 函数: sub_1428ccc30
// 地址: 0x1428ccc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
uint64_t i_8 = zx.q(*(arg3 + 0x28))
int64_t* r12 = arg2
int64_t* r15 = arg1

if (i_8.d == 0)
    arg1[1].d = 0
    return zx.q((i_8 + 1).d)

uint32_t rbx = (i_8 * 2).d

if (sub_142890e60(r12, rbx) != 0)
    r12[2].d ^= *(arg3 + 0x30)
    int32_t i = 0
    int32_t r10_1 = r12[1].d
    int64_t* rax_3 = *(arg3 + 0x20)
    void* rdi_1 = *r12
    uint128_t zmm3 = _mm_shuffle_epi32(zx.o(r10_1), 0)
    uint128_t zmm1
    int32_t zmm2[0x4]
    
    if (rbx s> 0 && rbx u>= 8)
        int64_t zmm4_1 = (data_142e11d00).q
        int32_t rax_5 = rbx & 0x80000007
        
        if (rax_5 s< 0)
            rax_5 = ((rax_5 - 1) | 0xfffffff8) + 1
        
        void* rdx_1 = rdi_1 + 0x20
        uint128_t zmm5_1 = 0x1f
        int32_t r9_1 = 4
        
        do
            rdx_1 += 0x40
            int32_t temp0_3[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), zx.o(zmm4_1))
            i += 8
            zmm1 = _mm_sub_epi64(zx.o(0), 
                _mm_srl_epi64(_mm_unpacklo_epi32(_mm_sub_epi32(temp0_3, zx.o(zmm3.q)), 0), zmm5_1))
                & *(rdx_1 - 0x60)
            zmm2 = _mm_shuffle_epi32(zx.o(r9_1 - 2), 0)
            *(rdx_1 - 0x60) = zmm1
            int32_t rax_9 = r9_1 + 2
            zmm1 = _mm_sub_epi64(zx.o(0), 
                _mm_srl_epi64(
                    _mm_unpacklo_epi32(
                        _mm_sub_epi32(_mm_add_epi32(zmm2, zx.o(zmm4_1)), zx.o(zmm3.q)), 0), 
                    zmm5_1)) & *(rdx_1 - 0x50)
            zmm2 = _mm_shuffle_epi32(zx.o(r9_1), 0)
            *(rdx_1 - 0x50) = zmm1
            r9_1 += 8
            zmm1 = _mm_sub_epi64(zx.o(0), 
                _mm_srl_epi64(
                    _mm_unpacklo_epi32(
                        _mm_sub_epi32(_mm_add_epi32(zmm2, zx.o(zmm4_1)), zx.o(zmm3.q)), 0), 
                    zmm5_1)) & *(rdx_1 - 0x40)
            int32_t temp0_21[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_9), 0), zx.o(zmm4_1))
            *(rdx_1 - 0x40) = zmm1
            *(rdx_1 - 0x30) &= _mm_sub_epi64(zx.o(0), 
                _mm_srl_epi64(_mm_unpacklo_epi32(_mm_sub_epi32(temp0_21, zx.o(zmm3.q)), 0), zmm5_1))
        while (i s< rbx - rax_5)
    
    for (int64_t i_1 = sx.q(i); i_1 s< sx.q(rbx); i_1 += 1)
        int32_t i_5 = i
        i += 1
        *(rdi_1 + (i_1 << 3)) &= neg.q(zx.q(i_5 - r10_1) u>> 0x1f)
    
    r12[1].d = rbx
    int64_t rbx_1 = 0
    int64_t rax_10 = *(arg3 + 0x50)
    int64_t arg_20 = rax_10
    int64_t r14_1 = sx.q(i_8.d)
    
    if (i_8.d s> 0)
        uint64_t i_7 = i_8
        uint64_t i_2
        
        do
            int64_t rax_11 = sub_14291d050(rdi_1, rax_3, i_8.d, rax_10 * *rdi_1)
            int64_t rdx_3 = *(rdi_1 + (r14_1 << 3))
            int64_t rax_12 = rax_11 + rdx_3 + rbx_1
            *(rdi_1 + (r14_1 << 3)) = rax_12
            rax_10 = arg_20
            
            if (rax_12 != rdx_3)
                rbx_1 = 1
            
            int64_t rcx_8
            rcx_8.b = rax_12 u<= rdx_3
            rbx_1 &= rcx_8
            rdi_1 += 8
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
        r12 = arg2
        r15 = arg1
    
    if (sub_142890e60(r15, i_8.d) != 0)
        int64_t* rdi_2 = *r15
        r15[1].d = i_8.d
        r15[2].d = r12[2].d
        int64_t* r15_1 = *r12 + (r14_1 << 3)
        int64_t rbx_2 = rbx_1 - sub_142921500(rdi_2, r15_1, rax_3, i_8.d)
        int32_t rdx_6 = 0
        zmm2 = zx.o(rbx_2)
        int32_t temp0_26[0x4] = _mm_unpacklo_epi64(zmm2, zmm2[0].q)
        
        if (i_8.d s> 0 && i_8.d u>= 8)
            int64_t rcx_11 = sx.q((i_8 - 1).d)
            
            if (r15_1 u> &rdi_2[rcx_11] || &r15_1[rcx_11] u< rdi_2)
                int32_t rax_20 = i_8.d & 0x80000007
                
                if (rax_20 s< 0)
                    rax_20 = ((rax_20 - 1) | 0xfffffff8) + 1
                
                zmm3 = temp0_26 & not.o(data_142d3f800)
                void* rax_23 = &r15_1[2]
                void* rcx_13 = rdi_2 - r15_1
                int64_t i_3 = 0
                
                do
                    int128_t zmm0_2 = *(rcx_13 + rax_23 - 0x10)
                    rax_23 += 0x40
                    rdx_6 += 8
                    i_3 += 8
                    zmm1 = zmm3 & zmm0_2
                    zmm0_2 = *(rax_23 - 0x50)
                    __builtin_memset(rax_23 - 0x50, 0, 0x40)
                    *(rcx_13 + rax_23 - 0x50) = zmm1 | (zmm0_2 & temp0_26)
                    *(rcx_13 + rax_23 - 0x40) =
                        (zmm3 & *(rcx_13 + rax_23 - 0x40)) | (*(rax_23 - 0x40) & temp0_26)
                    *(rcx_13 + rax_23 - 0x30) =
                        (zmm3 & *(rcx_13 + rax_23 - 0x30)) | (*(rax_23 - 0x30) & temp0_26)
                    *(rcx_13 + rax_23 - 0x20) =
                        (zmm3 & *(rcx_13 + rax_23 - 0x20)) | (*(rax_23 - 0x20) & temp0_26)
                while (i_3 s< sx.q(i_8.d - rax_20))
        
        int64_t rax_24 = sx.q(rdx_6)
        
        if (rax_24 s< r14_1)
            void* rdx_7 = &r15_1[rax_24]
            int64_t rdi_3 = rdi_2 - r15_1
            int64_t i_6 = r14_1 - rax_24
            int64_t i_4
            
            do
                int64_t rax_25 = *rdx_7
                rdx_7 += 8
                *(rdx_7 + rdi_3 - 8) = (not.q(rbx_2) & *(rdx_7 + rdi_3 - 8)) | (rax_25 & rbx_2)
                *(rdx_7 - 8) = 0
                i_4 = i_6
                i_6 -= 1
            while (i_4 != 1)
        
        return 1

return 0
