// 函数: sub_1403b84a0
// 地址: 0x1403b84a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = arg5
int64_t* rax = arg7
int32_t zmm6[0x4] = zx.o(0)
int32_t zmm7[0x4] = zx.o(0)
int32_t i_9 = arg9 s>> 1
int64_t rdi_1 = arg8 << 1
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
uint16_t zmm4[0x8]

if (arg3 == 0)
    if (arg4 != 0)
        if (arg4 == 4)
            int32_t i
            
            do
                zmm0 = zx.o(*arg1)
                zmm2 = _mm_unpacklo_epi32(zx.o(*(arg1 + arg2)), zx.q(*(arg1 + (arg2 << 1))))
                zmm1 = zx.o(*r10)
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm2.q)
                zmm3 = zx.o(*(r10 + arg6))
                zmm0 = _mm_avg_epu8(zmm0, zmm2)
                zmm1 = _mm_unpacklo_epi8(zmm1, 0)
                zmm0 = _mm_avg_epu8(zmm0, zx.o(*rax))
                zmm3 = _mm_unpacklo_epi8(zmm3, 0)
                zmm0 = _mm_unpacklo_epi8(zmm0, 0)
                zmm2.q = zmm0 u>> 0x40
                zmm2 = _mm_sub_epi16(zmm2, zmm3)
                zmm0 = _mm_sub_epi16(zmm0, zmm1)
                zmm6 = _mm_add_epi16(zmm6, zmm2)
                zmm2 = _mm_madd_epi16(zmm2, zmm2)
                zmm6 = _mm_add_epi16(zmm6, zmm0)
                zmm0 = _mm_madd_epi16(zmm0, zmm0)
                zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
                arg1 += arg2 << 1
                r10 += arg6 << 1
                rax += rdi_1
                i = i_9
                i_9 -= 1
            while (i s> 1)
            uint16_t temp0_37[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
            zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
            zmm6 = _mm_add_epi16(zmm6, temp0_37)
            int32_t temp0_40[0x4] = _mm_add_epi32(zmm7, zmm3)
            int32_t temp0_42[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
            *arg10 = temp0_40[0]
            return zx.q(_mm_add_epi32(temp0_42, _mm_shufflelo_epi16(temp0_42, 0xe))[0])
        
        int32_t i_1
        
        do
            zmm2 = zx.o(*(arg1 + arg2))
            zmm4 = zx.o(*(arg1 + (arg2 << 1)))
            zmm3 = zx.o(*(r10 + arg6))
            zmm1 = zx.o(*r10)
            zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), zmm2.q)
            zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
            zmm0 = __pmaddubsw_xmmdq_memdq(zmm0, *(zx.q(arg4 << 4) + &data_14427eef0))
            zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg4 << 4) + &data_14427eef0))
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
            zmm0 = _mm_srai_epi16(__paddw_xmmdq_memdq(zmm0, data_14427ede0), 4)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            zmm0 = _mm_unpacklo_epi8(
                _mm_avg_epu8(_mm_packus_epi16(zmm0.q | zmm2.q << 0x40, zmm2), zx.o(*rax)), 0)
            zmm2.q = zmm0 u>> 0x40
            zmm1 = _mm_unpacklo_epi8(zmm1, 0)
            zmm2 = _mm_sub_epi16(zmm2, zmm3)
            zmm0 = _mm_sub_epi16(zmm0, zmm1)
            zmm6 = _mm_add_epi16(zmm6, zmm2)
            zmm2 = _mm_madd_epi16(zmm2, zmm2)
            zmm6 = _mm_add_epi16(zmm6, zmm0)
            zmm0 = _mm_madd_epi16(zmm0, zmm0)
            zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
            arg1 += arg2 << 1
            r10 += arg6 << 1
            rax += rdi_1
            i_1 = i_9
            i_9 -= 1
        while (i_1 s> 1)
        uint16_t temp0_66[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
        zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
        zmm6 = _mm_add_epi16(zmm6, temp0_66)
        int32_t temp0_69[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_71[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
        *arg10 = temp0_69[0]
        return zx.q(_mm_add_epi32(temp0_71, _mm_shufflelo_epi16(temp0_71, 0xe))[0])
    
    int32_t i_2
    
    do
        zmm0 = _mm_unpacklo_epi32(zx.o(*arg1), zx.q(*(arg1 + arg2)))
        zmm1 = zx.o(*r10)
        zmm3 = zx.o(*(r10 + arg6))
        zmm0 = _mm_avg_epu8(zmm0, zx.o(*rax))
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm0 = _mm_unpacklo_epi8(zmm0, 0)
        zmm2.q = zmm0 u>> 0x40
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2 << 1
        r10 += arg6 << 1
        rax += rdi_1
        i_2 = i_9
        i_9 -= 1
    while (i_2 s> 1)
    uint16_t temp0_14[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
    zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
    zmm6 = _mm_add_epi16(zmm6, temp0_14)
    int32_t temp0_17[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_19[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
    *arg10 = temp0_17[0]
    return zx.q(_mm_add_epi32(temp0_19, _mm_shufflelo_epi16(temp0_19, 0xe))[0])

if (arg3 == 4)
    if (arg4 != 0)
        if (arg4 == 4)
            void* rcx = arg1 + arg2
            zmm0 = _mm_avg_epu8(zx.o(*arg1), zx.o(*(arg1 + 1)))
            int32_t i_3
            
            do
                zmm2 = _mm_avg_epu8(_mm_unpacklo_epi32(zx.o(*rcx), zx.q(*(rcx + arg2))), 
                    _mm_unpacklo_epi32(zx.o(*(rcx + 1)), zx.q(*(rcx + arg2 + 1))))
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm2.q)
                uint16_t temp0_102[0x8] = _mm_shufflelo_epi16(zmm2, 0xe)
                zmm1 = zx.o(*r10)
                zmm0 = _mm_avg_epu8(zmm0, zmm2)
                zmm3 = zx.o(*(r10 + arg6))
                zmm0 = _mm_avg_epu8(zmm0, zx.o(*rax))
                zmm3 = _mm_unpacklo_epi8(zmm3, 0)
                zmm1 = _mm_unpacklo_epi8(zmm1, 0)
                zmm0 = _mm_unpacklo_epi8(zmm0, 0)
                zmm2.q = zmm0 u>> 0x40
                zmm2 = _mm_sub_epi16(zmm2, zmm3)
                zmm0 = _mm_sub_epi16(zmm0, zmm1)
                zmm6 = _mm_add_epi16(zmm6, zmm2)
                zmm2 = _mm_madd_epi16(zmm2, zmm2)
                zmm6 = _mm_add_epi16(zmm6, zmm0)
                zmm0 = _mm_madd_epi16(zmm0, zmm0)
                zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
                zmm0 = temp0_102
                rcx += arg2 << 1
                r10 += arg6 << 1
                rax += rdi_1
                i_3 = i_9
                i_9 -= 1
            while (i_3 s> 1)
            uint16_t temp0_116[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
            zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
            zmm6 = _mm_add_epi16(zmm6, temp0_116)
            int32_t temp0_119[0x4] = _mm_add_epi32(zmm7, zmm3)
            int32_t temp0_121[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
            *arg10 = temp0_119[0]
            return zx.q(_mm_add_epi32(temp0_121, _mm_shufflelo_epi16(temp0_121, 0xe))[0])
        
        void* rcx_1 = arg1 + arg2
        zmm0 = _mm_avg_epu8(zx.o(*arg1), zx.o(*(arg1 + 1)))
        int32_t i_4
        
        do
            zmm4 = zx.o(*(rcx_1 + arg2))
            zmm3 = zx.o(*(rcx_1 + arg2 + 1))
            zmm2 = _mm_avg_epu8(zx.o(*rcx_1), zx.o(*(rcx_1 + 1)))
            zmm4 = _mm_avg_epu8(zmm4, zmm3)
            zmm3 = zx.o(*(r10 + arg6))
            zmm1 = zx.o(*r10)
            zmm0 = _mm_unpacklo_epi8(zmm0, zmm2.q)
            zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
            zmm0 = __pmaddubsw_xmmdq_memdq(zmm0, *(zx.q(arg4 << 4) + &data_14427eef0))
            zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg4 << 4) + &data_14427eef0))
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm0 = __paddw_xmmdq_memdq(zmm0, data_14427ede0)
            zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
            zmm0 = _mm_srai_epi16(zmm0, 4)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            zmm0 = _mm_unpacklo_epi8(
                _mm_avg_epu8(_mm_packus_epi16(zmm0.q | zmm2.q << 0x40, zmm2), zx.o(*rax)), 0)
            zmm2.q = zmm0 u>> 0x40
            zmm1 = _mm_unpacklo_epi8(zmm1, 0)
            zmm2 = _mm_sub_epi16(zmm2, zmm3)
            zmm0 = _mm_sub_epi16(zmm0, zmm1)
            zmm6 = _mm_add_epi16(zmm6, zmm2)
            zmm2 = _mm_madd_epi16(zmm2, zmm2)
            zmm6 = _mm_add_epi16(zmm6, zmm0)
            zmm0 = _mm_madd_epi16(zmm0, zmm0)
            zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
            zmm0 = zmm4
            rcx_1 += arg2 << 1
            r10 += arg6 << 1
            rax += rdi_1
            i_4 = i_9
            i_9 -= 1
        while (i_4 s> 1)
        uint16_t temp0_148[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
        zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
        zmm6 = _mm_add_epi16(zmm6, temp0_148)
        int32_t temp0_151[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_153[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
        *arg10 = temp0_151[0]
        return zx.q(_mm_add_epi32(temp0_153, _mm_shufflelo_epi16(temp0_153, 0xe))[0])
    
    int32_t i_5
    
    do
        zmm4 = zx.o(*(arg1 + 1))
        zmm0 = _mm_unpacklo_epi32(zx.o(*arg1), zx.q(*(arg1 + arg2)))
        zmm4 = _mm_unpacklo_epi32(zmm4, zx.q(*(arg1 + arg2 + 1)))
        zmm1 = zx.o(*r10)
        zmm3 = zx.o(*(r10 + arg6))
        zmm0 = _mm_avg_epu8(zmm0, zmm4)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm0 = _mm_avg_epu8(zmm0, zx.o(*rax))
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm0 = _mm_unpacklo_epi8(zmm0, 0)
        zmm2.q = zmm0 u>> 0x40
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2 << 1
        r10 += arg6 << 1
        rax += rdi_1
        i_5 = i_9
        i_9 -= 1
    while (i_5 s> 1)
    uint16_t temp0_89[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
    zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
    zmm6 = _mm_add_epi16(zmm6, temp0_89)
    int32_t temp0_92[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_94[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
    *arg10 = temp0_92[0]
    return zx.q(_mm_add_epi32(temp0_94, _mm_shufflelo_epi16(temp0_94, 0xe))[0])

if (arg4 == 0)
    int32_t i_6
    
    do
        zmm2 = zx.o(*(arg1 + arg2))
        zmm4 = zx.o(*(arg1 + arg2 + 1))
        zmm3 = zx.o(*(r10 + arg6))
        zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), zx.q(*(arg1 + 1)))
        zmm1 = zx.o(*r10)
        zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
        zmm0 = __pmaddubsw_xmmdq_memdq(zmm0, *(zx.q(arg3 << 4) + &data_14427eef0))
        zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg3 << 4) + &data_14427eef0))
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm0 = __paddw_xmmdq_memdq(zmm0, data_14427ede0)
        zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
        zmm0 = _mm_srai_epi16(zmm0, 4)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        zmm0 = _mm_unpacklo_epi8(
            _mm_avg_epu8(_mm_packus_epi16(zmm0.q | zmm2.q << 0x40, zmm2), zx.o(*rax)), 0)
        zmm2.q = zmm0 u>> 0x40
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2 << 1
        r10 += arg6 << 1
        rax += rdi_1
        i_6 = i_9
        i_9 -= 1
    while (i_6 s> 1)
    uint16_t temp0_177[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
    zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
    zmm6 = _mm_add_epi16(zmm6, temp0_177)
    int32_t temp0_180[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_182[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
    *arg10 = temp0_180[0]
    return zx.q(_mm_add_epi32(temp0_182, _mm_shufflelo_epi16(temp0_182, 0xe))[0])

if (arg4 == 4)
    void* rcx_2 = arg1 + arg2
    zmm0 = _mm_srai_epi16(
        __paddw_xmmdq_memdq(
            __pmaddubsw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(*arg1), zx.q(*(arg1 + 1))), 
                *(zx.q(arg3 << 4) + &data_14427eef0)), 
            data_14427ede0), 
        4)
    int32_t i_7
    
    do
        zmm4 = zx.o(*(rcx_2 + arg2))
        zmm3 = zx.o(*(rcx_2 + arg2 + 1))
        zmm2 = _mm_unpacklo_epi8(zx.o(*rcx_2), zx.q(*(rcx_2 + 1)))
        zmm4 = _mm_unpacklo_epi8(zmm4, zmm3.q)
        zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg3 << 4) + &data_14427eef0))
        zmm4 = __pmaddubsw_xmmdq_memdq(zmm4, *(zx.q(arg3 << 4) + &data_14427eef0))
        zmm1 = zx.o(*r10)
        zmm3 = zx.o(*(r10 + arg6))
        zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
        zmm4 = __paddw_xmmdq_memdq(zmm4, data_14427ede0)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        zmm4 = _mm_srai_epi16(zmm4, 4)
        zmm0 = _mm_avg_epu16(zmm0, zmm2)
        zmm2 = _mm_avg_epu16(zmm2, zmm4)
        zmm0 = _mm_unpacklo_epi8(
            _mm_avg_epu8(_mm_packus_epi16(zmm0.q | zmm2.q << 0x40, zmm2), zx.o(*rax)), 0)
        zmm2.q = zmm0 u>> 0x40
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        zmm0 = zmm4
        rcx_2 += arg2 << 1
        r10 += arg6 << 1
        rax += rdi_1
        i_7 = i_9
        i_9 -= 1
    while (i_7 s> 1)
    uint16_t temp0_212[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
    zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
    zmm6 = _mm_add_epi16(zmm6, temp0_212)
    int32_t temp0_215[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_217[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
    *arg10 = temp0_215[0]
    return zx.q(_mm_add_epi32(temp0_217, _mm_shufflelo_epi16(temp0_217, 0xe))[0])

zmm0 = _mm_srai_epi16(
    __paddw_xmmdq_memdq(
        __pmaddubsw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(*arg1), zx.q(*(arg1 + 1))), 
            *(zx.q(arg3 << 4) + &data_14427eef0)), 
        data_14427ede0), 
    4)
zmm0 = _mm_packus_epi16(zmm0, zmm0)
void* rcx_3 = arg1 + arg2
int32_t i_8

do
    int32_t* rcx_4 = rcx_3 + arg2
    zmm4 = zx.o(*rcx_4)
    zmm3 = zx.o(*(rcx_4 + 1))
    zmm2 = _mm_unpacklo_epi8(zx.o(*rcx_3), zx.q(*(rcx_3 + 1)))
    zmm4 = _mm_unpacklo_epi8(zmm4, zmm3.q)
    zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg3 << 4) + &data_14427eef0))
    zmm4 = __pmaddubsw_xmmdq_memdq(zmm4, *(zx.q(arg3 << 4) + &data_14427eef0))
    zmm3 = zx.o(*(r10 + arg6))
    zmm1 = zx.o(*r10)
    zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
    zmm4 = __paddw_xmmdq_memdq(zmm4, data_14427ede0)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm4 = _mm_srai_epi16(zmm4, 4)
    zmm2 = _mm_packus_epi16(zmm2, zmm2)
    zmm4 = _mm_packus_epi16(zmm4, zmm4)
    zmm0 = _mm_unpacklo_epi8(zmm0, zmm2.q)
    zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
    zmm0 = __pmaddubsw_xmmdq_memdq(zmm0, *(zx.q(arg4 << 4) + &data_14427eef0))
    zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg4 << 4) + &data_14427eef0))
    zmm3 = _mm_unpacklo_epi8(zmm3, 0)
    zmm0 = __paddw_xmmdq_memdq(zmm0, data_14427ede0)
    zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
    zmm0 = _mm_srai_epi16(zmm0, 4)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm1 = _mm_unpacklo_epi8(zmm1, 0)
    zmm0 = _mm_unpacklo_epi8(
        _mm_avg_epu8(_mm_packus_epi16(zmm0.q | zmm2.q << 0x40, zmm2), zx.o(*rax)), 0)
    zmm2.q = zmm0 u>> 0x40
    zmm2 = _mm_sub_epi16(zmm2, zmm3)
    zmm0 = _mm_sub_epi16(zmm0, zmm1)
    zmm6 = _mm_add_epi16(zmm6, zmm2)
    zmm2 = _mm_madd_epi16(zmm2, zmm2)
    zmm6 = _mm_add_epi16(zmm6, zmm0)
    zmm0 = _mm_madd_epi16(zmm0, zmm0)
    zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
    zmm0 = zmm4
    rcx_3 = rcx_4 + arg2
    r10 += arg6 << 1
    rax += rdi_1
    i_8 = i_9
    i_9 -= 1
while (i_8 s> 1)
uint16_t temp0_256[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
zmm6 = _mm_add_epi16(zmm6, temp0_256)
int32_t temp0_259[0x4] = _mm_add_epi32(zmm7, zmm3)
int32_t temp0_261[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
*arg10 = temp0_259[0]
return zx.q(_mm_add_epi32(temp0_261, _mm_shufflelo_epi16(temp0_261, 0xe))[0])
