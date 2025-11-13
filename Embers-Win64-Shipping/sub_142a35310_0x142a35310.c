// 函数: sub_142a35310
// 地址: 0x142a35310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x3d38)
void var_3d78
int64_t rax_1 = __security_cookie ^ &var_3d78
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg5)
int64_t rsi = sx.q((temp1 - temp0) s>> 1)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg6)
int32_t var_3d28 = rsi.d
int32_t i_2 = (temp3 - temp2) s>> 1
void var_3c78
void* var_3d40 = &var_3c78
void* r14 = &var_3c78 + sx.q((rsi * 2).d)
void* r10 = arg2 * 3
void* r15 = &var_3c78 + sx.q((rsi * 3).d)
void* var_3d10 = r14
void* var_3d08 = r15
void* r13 = &var_3c78 + sx.q((rsi * 5).d)
void* var_3cf8 = r13
void* r12 = &var_3c78 + sx.q((rsi << 2).d)
void* rbx = &var_3c78 + sx.q((rsi * 3).d * 2)
void* var_3d00 = r12
void* rbp = &var_3c78 + rsi
void* var_3d38 = rbx
void* var_3d18 = rbp
void* rdi = &var_3c78 + sx.q(rsi.d * 7)
int32_t rax_15 = rsi.d & 0xfffffff8
void* var_3cf0 = rdi
sub_142a35250(arg1 - r10 - 3, &var_3c78, rsi.d)
sub_142a35250(arg1 - arg2 * 2 - 3, rbp, rsi.d)
sub_142a35250(arg1 - arg2 - 3, r14, rsi.d)
sub_142a35250(arg1 - 3, r15, rsi.d)
sub_142a35250(arg1 - 3 + arg2, r12, rsi.d)
sub_142a35250(arg1 - 3 + (arg2 << 1), r13, rsi.d)
int64_t result
char zmm6[0x10]
result, zmm6 = sub_142a35250(arg1 - 3 + r10, rbx, rsi.d)

if (i_2 s> 0)
    int64_t r8_8 = arg2 << 2
    int64_t r9 = arg2 * 2
    char var_58_1[0x10] = zmm6
    void* r10_2 = r9 - arg1
    int32_t zmm7[0x4]
    int32_t var_68_1[0x4] = zmm7
    void* rbx_1 = r8_8 + arg1
    void* var_3d58_1 = arg3 + arg4
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        sub_142a35250(rbx_1 - 3, rdi, rsi.d)
        
        if (rax_15 s> 0)
            void* rcx_28 = neg.q(r8_8 + r9) + rbx_1
            char zmm5_1[0x10] = data_14360a7a0
            char zmm6_1[0x10] = data_14360a7b0
            zmm7 = *u"@@@@@@@"
            int32_t var_3d50
            var_3d50.q = r10_2 + r15
            int64_t* r15_1 = var_3d50.q
            uint64_t j_1 = zx.q(((rax_15 - 1) u>> 3) + 1)
            void* rax_41 = var_3d58_1
            uint64_t j
            
            do
                int64_t zmm3_1 = *(r15_1 + rcx_28)
                void* r15_2 = arg2 * 2
                rax_41 += 0x10
                uint128_t zmm0_1 = _mm_unpacklo_epi8(zx.o(*(r15_2 + rcx_28)), zmm3_1)
                rcx_28 += 8
                *(neg.q(arg4) + rax_41 - 0x10) = zmm0_1
                uint128_t zmm1_1 = zx.o(*(rbx_1 + r10_2 + rcx_28 - 8))
                int32_t zmm2_1[0x4] = zx.o(*(neg.q(arg2) + rcx_28 - 8))
                int32_t zmm4_1[0x4] = _mm_unpacklo_epi8(zx.o(*(rcx_28 + (arg2 << 2) - 8)), 
                    *(rcx_28 + arg2 - r8_8 + rbx_1 + r10_2 - 8))
                zmm1_1 = _mm_unpacklo_epi8(zmm1_1, *(arg2 * 5 + rcx_28 - 8))
                zmm2_1 = _mm_unpacklo_epi8(zmm2_1, *(rcx_28 - 8))
                zmm0_1 = zx.o(*(r15_2 + rcx_28 - 8))
                zmm1_1 = _mm_maddubs_epi16(zmm1_1, zmm5_1)
                zmm2_1 = _mm_maddubs_epi16(zmm2_1, zmm5_1)
                zmm4_1 = _mm_add_epi16(_mm_maddubs_epi16(zmm4_1, zmm6_1), zmm1_1)
                zmm1_1 = _mm_unpacklo_epi8(zx.o(*(rcx_28 + arg2 - 8)), zmm0_1.q)
                zmm0_1 = zx.o(*(r10_2 + r12 + rcx_28 - 8))
                zmm2_1 = _mm_add_epi16(zmm2_1, _mm_maddubs_epi16(zmm1_1, zmm6_1))
                zmm1_1 = zx.o(*(r10_2 + rdi + rcx_28 - 8))
                zmm4_1 = _mm_adds_epi16(zmm4_1, zmm2_1)
                zmm2_1 = _mm_unpacklo_epi8(zx.o(*(rcx_28 + r10_2 + r13 - 8)), zmm0_1.q)
                zmm4_1 = _mm_adds_epi16(zmm4_1, zmm7)
                zmm1_1 = _mm_maddubs_epi16(
                    _mm_unpacklo_epi8(zmm1_1, *(var_3d38 + r10_2 + rcx_28 - 8)), zmm5_1)
                zmm2_1 = _mm_maddubs_epi16(zmm2_1, zmm6_1)
                zmm4_1 = _mm_srai_epi16(zmm4_1, 7)
                zmm4_1 = _mm_packus_epi16(zmm4_1, zmm4_1)
                r15_1 = var_3d50.q
                zmm2_1 = _mm_srai_epi16(
                    _mm_adds_epi16(
                        _mm_adds_epi16(_mm_add_epi16(zmm2_1, zmm1_1), 
                            _mm_add_epi16(
                                _mm_maddubs_epi16(
                                    _mm_unpacklo_epi8(zx.o(*(var_3d40 + r10_2 + rcx_28 - 8)), 
                                        *(r10_2 + rbp + rcx_28 - 8)), 
                                    zmm5_1), 
                                _mm_maddubs_epi16(
                                _mm_unpacklo_epi8(zx.o(*(r10_2 + r14 + rcx_28 - 8)), zmm3_1), 
                                zmm6_1))), 
                        zmm7), 
                    7)
                *(rax_41 - 0x10) = _mm_unpacklo_epi8(zmm4_1, _mm_packus_epi16(zmm2_1, zmm2_1)[0].q)
                j = j_1
                j_1 -= 1
            while (j != 1)
            rdi = var_3cf0
            rsi = zx.q(var_3d28)
            rbp = var_3d18
            r14 = var_3d10
            r15 = var_3d08
            r12 = var_3d00
            r13 = var_3cf8
        
        void* r9_2 = var_3d40
        rbx_1 += arg2
        void* r8_13 = var_3d38
        result = arg4 * 2
        r10_2 += neg.q(arg2)
        var_3d58_1 += result
        i = i_1
        i_1 -= 1
        var_3d40 = rbp
        rbp = r14
        var_3d18 = r14
        r14 = r15
        var_3d10 = r15
        r15 = r12
        var_3d08 = r12
        r12 = r13
        var_3d00 = r13
        r13 = r8_13
        var_3d38 = rdi
        rdi = r9_2
        var_3cf8 = r8_13
        var_3cf0 = r9_2
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_3d78)
return result
