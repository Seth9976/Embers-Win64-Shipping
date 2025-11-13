// 函数: sub_14036f140
// 地址: 0x14036f140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(*(arg1 + 0x44))
uint64_t result = zx.q(*(arg1 + 0x9c))
uint64_t rcx_1 = zx.q((rdi - 1).d)
uint32_t temp0[0x4] = _mm_shuffle_epi32(zx.o(rdi.d), 0)
uint64_t rbp_1 = zx.q(rdi.d) & 7
int64_t rdx_1 = rcx_1 + 1 - rbp_1
int128_t zmm9 = data_142d3f780
uint32_t zmm7[0x4] = temp0 ^ zmm9
int32_t rcx_2 = rdi.d

while (true)
    int32_t r15_2 = arg1[0xb].d - result.d
    result = zx.q(*(arg1 + 0x94))
    int32_t r15_3 = r15_2 - result.d
    
    if (result.d u>= rcx_2 + (rdi - 0x106).d)
        int64_t rcx_4 = arg1[0xa]
        memcpy(rcx_4, rcx_4 + rdi, rdi.d)
        arg1[0x13].d -= rdi.d
        *(arg1 + 0x94) -= rdi.d
        *(arg1 + 0x84) -= rdi.d
        uint64_t rax = zx.q(*(arg1 + 0x74))
        int64_t rdx_5 = rax * 2 + arg1[0xd]
        uint64_t rbp_2 = zx.q((rax - 1).d)
        uint16_t zmm0_1[0x8]
        uint16_t zmm1[0x8]
        uint32_t zmm2[0x4]
        int64_t rcx_5
        
        if (rbp_2 + 1 u>= 8)
            uint64_t r8_3 = zx.q(rax.d) & 7
            int64_t rbx_3 = rbp_2 + 1 - r8_3
            rcx_5 = rdx_5 - rbx_3 * 2
            rax = zx.q(rax.d - rbx_3.d)
            int64_t i = 0
            
            do
                uint16_t temp0_2[0x8] =
                    _mm_shufflelo_epi16(_mm_shuffle_epi32(*(rdx_5 - 0x10 + (i << 1)), 0x4e), 0x1b)
                zmm1 = _mm_unpackhi_epi16(_mm_shufflehi_epi16(temp0_2, 0x1b), 0)
                zmm0_1 = _mm_unpacklo_epi16(temp0_2, 0)
                int32_t temp0_6[0x4] = _mm_cmpgt_epi32(zmm7, zmm0_1 | zmm9)
                zmm2 = _mm_cmpgt_epi32(zmm7, zmm1 | zmm9)
                zmm2 = _mm_sub_epi32((zmm2 & not.o(zmm1)) | (temp0 & zmm2), temp0)
                int32_t temp0_11[0x4] = _mm_srai_epi32(
                    _mm_slli_epi32(
                        _mm_sub_epi32((temp0_6 & not.o(zmm0_1)) | (temp0 & temp0_6), temp0), 0x10), 
                    0x10)
                *(rdx_5 - 0x10 + (i << 1)) = _mm_shufflehi_epi16(
                    _mm_shufflelo_epi16(
                        _mm_packs_epi32(_mm_srai_epi32(_mm_slli_epi32(zmm2, 0x10), 0x10), 
                            temp0_11), 
                        0x1b), 
                    0x1b)
                i -= 8
            while (r8_3 + neg.q(rbp_2) - 1 != i)
            
            if (r8_3.d != 0)
                goto label_14036f323
        else
            rcx_5 = rdx_5
        label_14036f323:
            int64_t rdx_7 = 0
            
            do
                uint32_t rbx_6 = zx.d(*(rcx_5 + (rdx_7 << 1) - 2))
                int16_t rbp_4 = rdi.w
                
                if (rdi.d u<= rbx_6)
                    rbp_4 = rbx_6.w
                
                *(rcx_5 + (rdx_7 << 1) - 2) = rbp_4 - rdi.w
                rdx_7 -= 1
            while (neg.d(rax.d) != rdx_7.d)
        uint64_t result_1 = rdi * 2 + arg1[0xc]
        int32_t rcx_8
        
        if (rcx_1 + 1 u>= 8)
            result = result_1 + (neg.q(rdx_1) << 1)
            int64_t i_1 = 0
            
            do
                uint16_t temp0_18[0x8] = _mm_shufflelo_epi16(
                    _mm_shuffle_epi32(*(result_1 - 0x10 + (i_1 << 1)), 0x4e), 0x1b)
                zmm1 = _mm_unpackhi_epi16(_mm_shufflehi_epi16(temp0_18, 0x1b), 0)
                zmm0_1 = _mm_unpacklo_epi16(temp0_18, 0)
                int32_t temp0_22[0x4] = _mm_cmpgt_epi32(zmm7, zmm0_1 | zmm9)
                zmm2 = _mm_cmpgt_epi32(zmm7, zmm1 | zmm9)
                zmm2 = _mm_sub_epi32((zmm2 & not.o(zmm1)) | (temp0 & zmm2), temp0)
                int32_t temp0_27[0x4] = _mm_srai_epi32(
                    _mm_slli_epi32(
                        _mm_sub_epi32((temp0_22 & not.o(zmm0_1)) | (temp0 & temp0_22), temp0), 
                        0x10), 
                    0x10)
                *(result_1 - 0x10 + (i_1 << 1)) = _mm_shufflehi_epi16(
                    _mm_shufflelo_epi16(
                        _mm_packs_epi32(_mm_srai_epi32(_mm_slli_epi32(zmm2, 0x10), 0x10), 
                            temp0_27), 
                        0x1b), 
                    0x1b)
                i_1 -= 8
            while (rbp_1 - 1 - rcx_1 != i_1)
            
            rcx_8 = rdi.d - rdx_1.d
            
            if (rbp_1.d != 0)
                goto label_14036f429
        else
            result = result_1
            rcx_8 = rdi.d
        label_14036f429:
            int64_t rdx_8 = 0
            
            do
                uint32_t rbx_7 = zx.d(*(result + (rdx_8 << 1) - 2))
                int16_t rbp_6 = rdi.w
                
                if (rdi.d u<= rbx_7)
                    rbp_6 = rbx_7.w
                
                *(result + (rdx_8 << 1) - 2) = rbp_6 - rdi.w
                rdx_8 -= 1
            while (neg.d(rcx_8) != rdx_8.d)
        r15_3 += rdi.d
    
    int64_t* r12_1 = *arg1
    int32_t rcx_11 = r12_1[1].d
    
    if (rcx_11 == 0)
        break
    
    uint64_t rax_3 = zx.q(*(arg1 + 0x9c))
    
    if (rcx_11 u<= r15_3)
        r15_3 = rcx_11
    
    if (r15_3 != 0)
        char* rbx_10 = zx.q(*(arg1 + 0x94)) + arg1[0xa] + rax_3
        r12_1[1].d = rcx_11 - r15_3
        uint64_t r14_3 = zx.q(r15_3)
        memcpy(rbx_10, *r12_1, r14_3.d)
        int32_t rax_5 = *(r12_1[5] + 0x2c)
        
        if (rax_5 == 2)
            *(r12_1 + 0x4c) = sub_140374810(*(r12_1 + 0x4c), rbx_10, r15_3)
        else if (rax_5 == 1)
            *(r12_1 + 0x4c) = sub_140374410(*(r12_1 + 0x4c), rbx_10, r15_3)
        
        *r12_1 += r14_3
        *(r12_1 + 0xc) += r15_3
        rax_3 = zx.q(*(arg1 + 0x9c))
    
    result = zx.q(rax_3.d + r15_3)
    *(arg1 + 0x9c) = result.d
    int32_t r9_2 = *(arg1 + 0x170c)
    
    if (r9_2 + result.d u>= 3)
        int32_t rdx_12 = *(arg1 + 0x94)
        uint64_t rbp_9 = zx.q(rdx_12 - r9_2)
        int64_t r8_7 = arg1[0xa]
        uint32_t rbx_11 = zx.d(*(r8_7 + rbp_9))
        arg1[0xe].d = rbx_11
        int32_t rcx_16
        rcx_16.b = arg1[0x10].b
        arg1[0xe].d = (zx.d(*(r8_7 + zx.q((rbp_9 + 1).d))) ^ rbx_11 << rcx_16.b) & *(arg1 + 0x7c)
        
        if (r9_2 != 0)
            int32_t rdx_14 = rdx_12 + 2 - r9_2
            int32_t i_2
            
            do
                uint64_t rbx_16 = (zx.q(*(arg1[0xa] + zx.q(rdx_14)))
                    ^ zx.q(arg1[0xe].d << arg1[0x10].b)) & zx.q(*(arg1 + 0x7c))
                arg1[0xe].d = rbx_16.d
                *(arg1[0xc] + ((zx.q(rdx_14 - 2) & zx.q(*(arg1 + 0x4c))) << 1)) =
                    *(arg1[0xd] + (rbx_16 << 1))
                *(arg1[0xd] + (zx.q(arg1[0xe].d) << 1)) = rbp_9.w
                i_2 = *(arg1 + 0x170c)
                *(arg1 + 0x170c) = i_2 - 1
                result = zx.q(*(arg1 + 0x9c))
                
                if (result.d + i_2 - 1 u<= 2)
                    break
                
                rbp_9 = zx.q(rbp_9.d + 1)
                rdx_14 += 1
            while (i_2 != 1)
    
    if (result.d u> 0x105)
        break
    
    if (*(*arg1 + 8) == 0)
        break
    
    rcx_2 = *(arg1 + 0x44)

uint64_t rcx_27 = zx.q(arg1[0x2e3].d)
int32_t rdi_1 = arg1[0xb].d

if (rdi_1 u> rcx_27.d)
    int32_t rbp_11 = *(arg1 + 0x9c) + *(arg1 + 0x94)
    
    if (rcx_27.d u< rbp_11)
        int32_t count_3 = rdi_1 - rbp_11
        uint64_t count = 0x102
        
        if (count_3 u< 0x102)
            count = zx.q(count_3)
        
        result = memset(zx.q(rbp_11) + arg1[0xa], 0, count)
        arg1[0x2e3].d = count.d + rbp_11
    else if (rbp_11 + 0x102 u> rcx_27.d)
        int32_t count_2 = rbp_11 + 0x102 - rcx_27.d
        uint64_t count_1 = zx.q(rdi_1 - rcx_27.d)
        
        if (count_2 u<= count_1.d)
            count_1 = zx.q(count_2)
        
        result = memset(rcx_27 + arg1[0xa], 0, count_1)
        arg1[0x2e3].d += count_1.d

return result
