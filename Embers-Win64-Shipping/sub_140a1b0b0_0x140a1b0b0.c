// 函数: sub_140a1b0b0
// 地址: 0x140a1b0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg1[2]
void** rdi = nullptr
int32_t* rbp = arg1[3]
int32_t rsi = arg1[4].d
uint128_t zmm6 = zx.o(&arg1[2])
zmm6 = _mm_unpacklo_epi64(zmm6, zmm6.q)

if (rsi s> 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    *rbx += 1
    int32_t rbx_1 = 0
    int32_t i = 0
    
    if (rsi u>= 4 && data_143ccb970 s>= 2)
        int128_t zmm11 = data_142e11d00
        int32_t rax_2 = rsi & 0x80000003
        
        if (rax_2 s< 0)
            rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1
        
        int128_t zmm12 = data_142e51f40
        uint128_t zmm10 = 0
        int128_t var_e8
        __builtin_memset(&var_e8, 0, 0x20)
        uint128_t zmm9 = 0
        uint128_t zmm13 = 3
        uint128_t zmm14 = 4
        uint128_t zmm8 = 0xd
        int32_t temp0_1[0x4] = _mm_srl_epi32(zx.o(0), zmm8)
        uint128_t zmm15 = 8
        int32_t zmm2[0x4]
        
        do
            int32_t zmm0[0x4] = 0
            uint32_t zmm4_1[0x4] = _mm_sub_epi32(
                _mm_shuffle_epi32(
                    _mm_srl_epi64(
                        _mm_add_epi64(
                            _mm_sll_epi64(
                                _mm_cvtepi32_epi64(_mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), 
                                    zx.o(zmm11.q))[0].q), 
                                zmm13), 
                            zmm6), 
                        zmm14), 
                    0xd8), 
                zmm0) ^ zx.o(temp0_1[0].q)
            uint128_t zmm3 = _mm_sub_epi32(_mm_sub_epi32(zx.o(zmm12.q), zmm4_1), zmm0)
                ^ _mm_sll_epi32(zmm4_1, zx.o(zmm15.q))
            int32_t temp0_13[0x4] = _mm_sub_epi32(0, zmm3)
            int32_t temp0_14[0x4] = _mm_srl_epi32(zmm3, zx.o(zmm8.q))
            zmm2 = _mm_sub_epi32(temp0_13, zmm4_1) ^ temp0_14
            zmm4_1 = _mm_sub_epi32(_mm_sub_epi32(zmm4_1, zmm3), zmm2) ^ _mm_srl_epi32(zmm2, 0xc)
            zmm3 = _mm_sub_epi32(zmm3, zmm4_1)
            int32_t temp0_20[0x4] = _mm_sll_epi32(zmm4_1, 0x10)
            zmm3 = _mm_sub_epi32(zmm3, zmm2) ^ temp0_20
            int32_t temp0_22[0x4] = _mm_sub_epi32(zmm2, zmm3)
            int32_t temp0_23[0x4] = _mm_srl_epi32(zmm3, 5)
            zmm2 = _mm_sub_epi32(temp0_22, zmm4_1) ^ temp0_23
            zmm4_1 = _mm_sub_epi32(_mm_sub_epi32(zmm4_1, zmm3), zmm2) ^ _mm_srl_epi32(zmm2, 3)
            zmm3 = _mm_sub_epi32(_mm_sub_epi32(zmm3, zmm4_1), zmm2) ^ _mm_sll_epi32(zmm4_1, 0xa)
            int32_t temp0_31[0x4] = _mm_sub_epi32(zmm2, zmm3)
            int32_t zmm1[0x4] = _mm_shuffle_epi32(zx.o(i + 2), 0)
            zmm2 = _mm_sub_epi32(temp0_31, zmm4_1) ^ _mm_srl_epi32(zmm3, 0xf)
            int32_t temp0_35[0x4] = _mm_add_epi32(zmm1, zx.o(zmm11.q))
            zmm0 = 0
            zmm10 = _mm_add_epi32(zx.o(zmm10.q), zmm2)
            zmm4_1 = _mm_sub_epi32(
                _mm_shuffle_epi32(
                    _mm_srl_epi64(
                        _mm_add_epi64(_mm_sll_epi64(_mm_cvtepi32_epi64(temp0_35[0].q), zmm13), 
                            zmm6), 
                        zmm14), 
                    0xd8), 
                zmm0) ^ zx.o(temp0_1[0].q)
            i += 4
            zmm3 = _mm_sub_epi32(_mm_sub_epi32(zx.o(zmm12.q), zmm4_1), zmm0)
                ^ _mm_sll_epi32(zmm4_1, zx.o(zmm15.q))
            int32_t temp0_47[0x4] = _mm_sub_epi32(_mm_sub_epi32(0, zmm3), zmm4_1)
            zmm4_1 = _mm_sub_epi32(zmm4_1, zmm3)
            zmm2 = temp0_47 ^ _mm_srl_epi32(zmm3, zx.o(zmm8.q))
            zmm4_1 = _mm_sub_epi32(zmm4_1, zmm2) ^ _mm_srl_epi32(zmm2, 0xc)
            zmm3 = _mm_sub_epi32(_mm_sub_epi32(zmm3, zmm4_1), zmm2) ^ _mm_sll_epi32(zmm4_1, 0x10)
            int32_t temp0_56[0x4] = _mm_sub_epi32(_mm_sub_epi32(zmm2, zmm3), zmm4_1)
            zmm4_1 = _mm_sub_epi32(zmm4_1, zmm3)
            zmm2 = temp0_56 ^ _mm_srl_epi32(zmm3, 5)
            zmm4_1 = _mm_sub_epi32(zmm4_1, zmm2) ^ _mm_srl_epi32(zmm2, 3)
            zmm3 = _mm_sub_epi32(_mm_sub_epi32(zmm3, zmm4_1), zmm2) ^ _mm_sll_epi32(zmm4_1, 0xa)
            zmm9 = _mm_add_epi32(zx.o(zmm9.q), 
                _mm_sub_epi32(_mm_sub_epi32(zmm2, zmm3), zmm4_1) ^ _mm_srl_epi32(zmm3, 0xf))
        while (i s< rsi - rax_2)
        
        zmm2 = zx.o(_mm_add_epi32(zx.o(zmm9.q), zx.o(zmm10.q))[0].q)
        int32_t temp0_70[0x4] = _mm_add_epi32(zmm2, _mm_bsrli_si128(zmm2, 8))
        rbx_1 = _mm_add_epi32(temp0_70, _mm_bsrli_si128(temp0_70, 4))[0]
    
    if (i s< rsi)
        uint64_t i_2 = zx.q(rsi - i)
        void* r9_1 = &arg1[2 + sx.q(i)]
        uint64_t i_1
        
        do
            uint32_t rdx_4 = (r9_1 u>> 4).d
            r9_1 += 8
            int32_t r8_2 = (0x9e3779b9 - rdx_4) ^ rdx_4 << 8
            int32_t rcx_3 = neg.d(r8_2 + rdx_4) ^ r8_2 u>> 0xd
            int32_t rdx_7 = (rdx_4 - r8_2 - rcx_3) ^ rcx_3 u>> 0xc
            int32_t r8_5 = (r8_2 - rdx_7 - rcx_3) ^ rdx_7 << 0x10
            int32_t rcx_6 = (rcx_3 - r8_5 - rdx_7) ^ r8_5 u>> 5
            int32_t rdx_10 = (rdx_7 - r8_5 - rcx_6) ^ rcx_6 u>> 3
            int32_t r8_8 = (r8_5 - rdx_10 - rcx_6) ^ rdx_10 << 0xa
            rbx_1 += (rcx_6 - r8_8 - rdx_10) ^ r8_8 u>> 0xf
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    *rbp
    *rbp += (rbx_1 & 1) - performanceCount.d + performanceCount_1
else if (rsi == 0)
    *rbx += 1

*arg1 = &data_142e50880
arg1[5].b = 0
int64_t* rcx_11 = arg1[6]

if (rcx_11 != 0)
    sub_140a2f7d0(rcx_11)

*arg1 = &data_142d40498
void** result = TlsGetValue(data_143cf0950)
void** lpTlsValue = result

if (result == 0)
    void** lpTlsValue_1 = j_sub_140a82f30(zx.q((&result[3]).d))
    lpTlsValue = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        lpTlsValue = nullptr
    else
        __builtin_memset(lpTlsValue_1, 0, 0x14)
    
    result = TlsSetValue(data_143cf0950, lpTlsValue)

if (lpTlsValue[2].d s< 0x20)
    rdi = lpTlsValue[1]
else
    void* rdx_12 = *lpTlsValue
    
    if (rdx_12 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_12)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
