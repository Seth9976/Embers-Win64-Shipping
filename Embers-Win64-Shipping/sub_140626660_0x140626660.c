// 函数: sub_140626660
// 地址: 0x140626660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

log2f(0x4f800000.d)
float zmm1[0x4] = 0x41c00000
zmm1[0] = 24f / 4.2949673e+09f
int32_t rcx = int.d(zmm1[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1[0]))
    zmm1 =
        _mm_cvtepi32_ps(zx.o(rcx + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1) ^ 1)))

float zmm2 = 1f
int32_t rcx_2 = 1
int32_t i_2 = int.d(zmm1[0])
uint128_t result = zx.o(0)

if (i_2 s< 1)
    i_2 = 1

if (i_2 s> 0)
    int32_t j_6 = *arg1
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        if (j_6 == 0x270)
            void* r8_1 = &arg1[2]
            uint64_t j_3 = zx.q(j_6)
            uint64_t j
            
            do
                int32_t rdx_2 = *(r8_1 - 4) ^ *r8_1
                r8_1 += 4
                int32_t rdx_4 = (rdx_2 & 0x7fffffff) ^ *(r8_1 - 8)
                rcx_2 = (sbb.d(rcx_2, rcx_2, (rdx_4.b & 1) != 0) & 0x9908b0df) ^ *(r8_1 + 0x62c)
                    ^ rdx_4 u>> 1
                *(r8_1 + 0x9b8) = rcx_2
                j = j_3
                j_3 -= 1
            while (j != 1)
            j_6 = *arg1
        else if (j_6 u>= 0x4e0)
            void* r10_1 = &arg1[0x271]
            int64_t j_4 = 0xe3
            int32_t rax_5 = *r10_1
            int64_t j_1
            
            do
                int32_t rdx_9 = ((*(r10_1 + 4) ^ rax_5) & 0x7fffffff) ^ rax_5
                rax_5 = *(r10_1 + 4)
                rcx_2 = (sbb.d(rcx_2, rcx_2, (rdx_9.b & 1) != 0) & 0x9908b0df) ^ *(r10_1 + 0x634)
                    ^ rdx_9 u>> 1
                *(r10_1 - 0x9c0) = rcx_2
                r10_1 += 4
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
            void* r10_2 = &arg1[0x354]
            int64_t j_5 = 0x18c
            int32_t rax_7 = *r10_2
            int64_t j_2
            
            do
                int32_t rdx_14 = ((rax_7 ^ *(r10_2 + 4)) & 0x7fffffff) ^ rax_7
                rax_7 = *(r10_2 + 4)
                rcx_2 = (sbb.d(rcx_2, rcx_2, (rdx_14.b & 1) != 0) & 0x9908b0df) ^ *(r10_2 - 0xd4c)
                    ^ rdx_14 u>> 1
                *(r10_2 - 0x9c0) = rcx_2
                r10_2 += 4
                j_2 = j_5
                j_5 -= 1
            while (j_2 != 1)
            int32_t rdx_19 = ((arg1[0x4e0] ^ arg1[1]) & 0x7fffffff) ^ arg1[0x4e0]
            j_6 = 0
            arg1[0x270] =
                (sbb.d(rcx_2, rcx_2, (rdx_19.b & 1) != 0) & 0x9908b0df) ^ arg1[0x18d] ^ rdx_19 u>> 1
            *arg1 = 0
        
        uint64_t j_7 = zx.q(j_6)
        zmm1 = zx.o(0)
        j_6 += 1
        int32_t rcx_16 = arg1[j_7 + 1]
        int32_t rcx_17 = rcx_16 ^ (rcx_16 u>> 0xb & arg1[0x4e1])
        *arg1 = j_6
        int32_t rcx_18 = rcx_17 ^ (rcx_17 & 0xff3a58ad) << 7
        rcx_2 = rcx_18 ^ (rcx_18 & 0xffffdf8c) << 0xf
        zmm1[0] = float.s(zx.q(rcx_2 u>> 0x12) ^ zx.q(rcx_2))
        zmm1[0] = zmm1[0] * zmm2
        zmm2 = zmm2 * 4.2949673e+09f
        result.d = result.d f+ zmm1[0]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.d = result.d f/ zmm2
return result
