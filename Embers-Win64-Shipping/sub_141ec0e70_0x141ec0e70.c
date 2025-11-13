// 函数: sub_141ec0e70
// 地址: 0x141ec0e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x10))()
void* rax_1 = arg1[1]
arg1[2] = arg2.q
int32_t rsi = *(rax_1 + 0x30)

if (&arg1[3] != arg3)
    int64_t rcx = arg1[3]
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    arg1[3] = *arg3
    *arg3 = 0
    arg1[4].d = arg3[1].d
    *(arg1 + 0x24) = *(arg3 + 0xc)
    arg3[1] = 0

if (&arg1[5] != arg4)
    int64_t rcx_1 = arg1[5]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    arg1[5] = *arg4
    *arg4 = 0
    arg1[6].d = arg4[1].d
    *(arg1 + 0x34) = *(arg4 + 0xc)
    arg4[1] = 0

void* rcx_2 = arg1[1]
int32_t zmm3[0x4] = 0x408f400000000000
uint128_t zmm2
zmm2.q = 0x3ff0000000000000 f/ _mm_cvtepi32_pd(zx.q(rsi)).q
arg2.q = zmm2.q f* *(rcx_2 + 0xf0)
arg2.q = arg2.q f* zmm3[0].q
arg1[7].d = _mm_cvtpd_ps(arg2).d
arg2.q = zmm2.q f* *(rcx_2 + 0xe0)
arg2.q = arg2.q f* zmm3[0].q
*(arg1 + 0x3c) = _mm_cvtpd_ps(arg2).d
zmm2.q = zmm2.q f* *(rcx_2 + 0xd8)
zmm2.q = zmm2.q f* zmm3[0].q
arg1[8].d = _mm_cvtpd_ps(zmm2).d
arg2.q = *(rcx_2 + 0xf8) f* zmm3[0].q
arg1[9] = arg2.q
int32_t rax_8 = *(rcx_2 + 0x100)
arg1[0xa].d = rax_8
uint128_t zmm0
zmm0.q = *(rcx_2 + 0x108) f* zmm3[0].q
arg1[0xb] = zmm0.q

if (rax_8 s<= 0)
    arg2 = zx.o(0)
else
    arg2.q = arg2.q f/ _mm_cvtepi32_pd(zx.q(rax_8)).q

arg1[0xc] = arg2.q
arg1[0xd].d = *(rcx_2 + 0x110)
uint64_t rax_10 = zx.q(*(rcx_2 + 0xa8))
zmm2.d = 1f f/ _mm_cvtepi32_ps(zx.o(rsi)).d
zmm0.d = float.s(rax_10)
zmm0.d = zmm0.d f* zmm2.d
zmm0.d = zmm0.d f* 100f
*(arg1 + 0x6c) = zmm0.d
zmm0.d = float.s(zx.q(*(rcx_2 + 0xac)))
zmm0.d = zmm0.d f* zmm2.d
zmm0.d = zmm0.d f* 100f
arg1[0xe].d = zmm0.d
arg2.d = float.s(zx.q(*(rcx_2 + 0xb4)))
int64_t rax_13 = *arg1
arg2.d = arg2.d f* zmm2.d
arg2.d = arg2.d f* 100f
*(arg1 + 0x74) = arg2.d
(*(rax_13 + 0x38))(arg1, arg2)
int32_t i = 0

if (data_143f3a4f8 s> 0)
    int32_t* rdi_1 = nullptr
    
    do
        int64_t r9 = *arg1
        int32_t rdx_1 = *(rdi_1 + data_143f3a4f0)
        void* rax_15 = arg1[1]
        zmm0.q = _mm_cvtepi32_pd(zx.q(rdx_1)).q f* *(rax_15 + 0x28)
        int64_t r8 = int.q(zmm0.q)
        int64_t rax_16 = 0
        
        if (r8 - *(rax_15 + 0x30) s>= 0)
            rax_16 = r8 - *(rax_15 + 0x30)
        
        zmm0.q = float.d(r8)
        arg2.q = float.d(rax_16)
        arg2.q = arg2.q f* 0x4059000000000000
        arg2.q = arg2.q f/ zmm0.q
        (*(r9 + 0x28))(arg1, rdx_1, _mm_cvtpd_ps(arg2), r9)
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< data_143f3a4f8)

int16_t* const r8_1

if (arg1[4].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = arg1[3]

int64_t var_58
sub_140a2e390(&var_58, u"--- Begin : Hitch chart dump for level '%s'", r8_1)
(*(*arg1 + 8))(arg1, &var_58)
int64_t rcx_9 = var_58

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

void* rcx_11 = arg1[1]
int32_t rdi_2 = 0
int32_t rsi_1 = *(rcx_11 + 0x50)

if (rsi_1 s> 0)
    do
        (*(*arg1 + 0x18))(arg1, arg1[1] + 0x48, zx.q(rdi_2))
        rdi_2 += 1
    while (rdi_2 s< rsi_1)
    
    rcx_11 = arg1[1]

(*(*arg1 + 0x20))(arg1, zx.q(*(rcx_11 + 0x60)), zx.o(*(rcx_11 + 0x58)))
var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 8)
int32_t rax_20 = var_50 + 8
var_50 = rax_20

if (rax_20 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"--- End", 0x10)
(*(*arg1 + 8))(arg1, &var_58)
int64_t rcx_17 = var_58

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

void* result = arg1[1]
int64_t r13 = sx.q(*(result + 0x80))

if (r13.d s> 0)
    int64_t i_4 = 0
    int64_t r14_1 = 0
    int32_t rbp_1 = r13.d
    
    do
        int32_t r11_1 = 0
        int64_t i_1 = i_4
        int32_t zmm0_1[0x4]
        
        if (i_4 s< r13 && rbp_1 u>= 8)
            int32_t zmm5_1[0x4] = zx.o(0)
            int32_t zmm4_1[0x4] = zx.o(0)
            int64_t r8_3 = *(arg1[1] + 0x78)
            int32_t rcx_19 = rbp_1 & 0x80000007
            
            if (rcx_19 s< 0)
                rcx_19 = ((rcx_19 - 1) | 0xfffffff8) + 1
            
            int64_t rax_25 = r14_1
            
            do
                uint128_t zmm1 = zx.o(*(rax_25 + r8_3 + 0x78))
                i_1 += 8
                zmm0_1 = zx.o(*(rax_25 + r8_3 + 0x58))
                zmm2 = zx.o(*(rax_25 + r8_3 + 0x38))
                zmm3 = zx.o(*(rax_25 + r8_3 + 0x18))
                rax_25 += 0x100
                zmm3 = _mm_unpacklo_epi32(zmm3, zmm0_1[0].q)
                zmm0_1 = zx.o(*(rax_25 + r8_3 - 0x28))
                zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                zmm1 = zx.o(*(rax_25 + r8_3 - 8))
                zmm3 = _mm_unpacklo_epi32(zmm3, zmm2.q)
                zmm2 = zx.o(*(rax_25 + r8_3 - 0x48))
                zmm3 = _mm_add_epi32(zmm3, zmm5_1)
                zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                zmm5_1 = zmm3
                zmm4_1 = _mm_add_epi32(
                    _mm_unpacklo_epi32(
                        _mm_unpacklo_epi32(zx.o(*(rax_25 + r8_3 - 0x68)), zmm0_1[0].q), zmm2.q), 
                    zmm4_1)
            while (i_1 s< sx.q(r13.d - rcx_19))
            
            zmm4_1 = _mm_add_epi32(zmm4_1, zmm5_1)
            zmm4_1 = _mm_add_epi32(zmm4_1, _mm_bsrli_si128(zmm4_1, 8))
            r11_1 = _mm_add_epi32(zmm4_1, _mm_bsrli_si128(zmm4_1, 4))[0]
        
        int32_t r8_4 = 0
        int32_t r9_1 = 0
        void* rcx_27
        
        if (i_1 s>= r13)
            rcx_27 = arg1[1]
        else
            if (r13 - i_1 s>= 2)
                int64_t r10_1 = *(arg1[1] + 0x78)
                int64_t rax_30 = i_1 << 5
                int64_t i_3 = ((r13 - i_1 - 2) u>> 1) + 1
                i_1 += i_3 << 1
                int64_t i_2
                
                do
                    r8_4 += *(rax_30 + r10_1 + 0x18)
                    r9_1 += *(rax_30 + r10_1 + 0x38)
                    rax_30 += 0x40
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
            
            rcx_27 = arg1[1]
            
            if (i_1 s< r13)
                r11_1 += *((i_1 << 5) + *(rcx_27 + 0x78) + 0x18)
            
            r11_1 += r9_1 + r8_4
        
        void* rax_33 = *(rcx_27 + 0x78)
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.s(*(rcx_27 + 0x90))
        int64_t r8_5 = *arg1
        uint64_t rdx_9 = zx.q(int.d(fconvert.t(*(rax_33 + r14_1))))
        zmm2.d = 100f f/ zmm0_1[0]
        zmm2.d = zmm2.d f* _mm_cvtepi32_ps(zx.o(r11_1)).d
        result = (*(r8_5 + 0x30))(arg1, rdx_9, zmm2, r9_1)
        rbp_1 -= 1
        i_4 += 1
        r14_1 += 0x20
    while (i_4 s< r13)

int64_t rcx_29 = *arg3

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

int64_t rcx_30 = *arg4

if (rcx_30 == 0)
    return result

return sub_140a74f90(rcx_30)
