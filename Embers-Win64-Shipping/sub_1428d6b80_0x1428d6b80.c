// 函数: sub_1428d6b80
// 地址: 0x1428d6b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int64_t* r11 = arg2

if (arg2 == 0)
    r11 = *(arg3 + 8)
    
    if (r11 == 0)
        sub_1428a5670(3, 0x65, 0x6b, "crypto\bn\bn_blind.c", 0xaf)
        return 0

if (*(arg3 + 0x30) == 0)
    return sub_1429082e0(arg1, arg1, r11, *(arg3 + 0x18), arg4)

int64_t rdi = sx.q(r11[1].d)

if (*(arg1 + 0xc) s>= rdi.d)
    int64_t i = 0
    int64_t r15_1 = sx.q(arg1[1].d)
    uint128_t zmm2 = zx.o(r15_1)
    zmm2 = _mm_unpacklo_epi64(zmm2, zmm2.q)
    
    if (rdi.d != 0)
        if (rdi u>= 8)
            int64_t rdx = *arg1
            int32_t zmm4[0x4] = data_142e1c950
            
            if (rdx u> arg1 || rdx - 8 + (rdi << 3) u< arg1)
                uint128_t zmm3 = 0x3f
                int64_t i_3 = 4
                int64_t r14_1 = 0x20
                
                do
                    int32_t i_1[0x4] = zx.o(i)
                    r14_1 += 0x40
                    i += 8
                    int32_t zmm1[0x4] = _mm_sub_epi64(zx.o(0), 
                        _mm_srl_epi64(
                            _mm_sub_epi64(_mm_add_epi64(_mm_unpacklo_epi64(i_1, i_1[0].q), zmm4), 
                                zmm2), 
                            zmm3)) & *(rdx + r14_1 - 0x60)
                    i_1 = zx.o(i_3 - 2)
                    int32_t temp0_7[0x4] = _mm_unpacklo_epi64(i_1, i_1[0].q)
                    int64_t i_2 = i_3 + 2
                    *(rdx + r14_1 - 0x60) = zmm1
                    i_1 = zx.o(i_3)
                    *(rdx + r14_1 - 0x50) &= _mm_sub_epi64(zx.o(0), 
                        _mm_srl_epi64(_mm_sub_epi64(_mm_add_epi64(temp0_7, zmm4), zmm2), zmm3))
                    i_3 += 8
                    zmm1 = _mm_sub_epi64(zx.o(0), 
                        _mm_srl_epi64(
                            _mm_sub_epi64(_mm_add_epi64(_mm_unpacklo_epi64(i_1, i_1[0].q), zmm4), 
                                zmm2), 
                            zmm3)) & *(r14_1 + rdx - 0x40)
                    i_1 = zx.o(i_2)
                    int32_t temp0_19[0x4] =
                        _mm_sub_epi64(_mm_add_epi64(_mm_unpacklo_epi64(i_1, i_1[0].q), zmm4), zmm2)
                    *(r14_1 + rdx - 0x40) = zmm1
                    *(rdx + r14_1 - 0x30) &= _mm_sub_epi64(zx.o(0), _mm_srl_epi64(temp0_19, zmm3))
                while (i u< (rdi & 0xfffffffffffffff8))
        
        while (i u< rdi)
            int64_t* rdx_1 = *arg1 + (i << 3)
            int64_t rcx_5 = i - r15_1
            i += 1
            *rdx_1 &= neg.q(rcx_5 u>> 0x3f)
    
    int32_t r8_3 = neg.d(((rdi - r15_1) u>> 0x3f).d)
    arg1[1].d = (not.d(r8_3) & rdi.d) | (r8_3 & r15_1.d)

return sub_1428ccb60(arg1, arg1, r11, *(arg3 + 0x30), arg4)
