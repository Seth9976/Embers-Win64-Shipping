// 函数: sub_14121a180
// 地址: 0x14121a180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t r15

if (*(data_143e83180 + 4) == 0 || (**arg1 & 3) == 0)
    r15.b = 0
else
    r15.b = 1

int128_t zmm1 = data_142d3f5a0
int64_t rcx = *(*arg2 + 8)
int64_t var_1a8 = rcx
int32_t var_d0 = 0
int32_t var_cc
__builtin_memset(&var_cc, 0xff, 0x14)
int128_t var_b8 = zmm1
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x19)
int64_t var_1a0 = 0
int32_t var_198 = 0xffffffff
int16_t var_194 = 0x500
int64_t var_e0 = 0
bool var_8f = *(rcx + 0x38) u> 1
void var_190
memset(&var_190, 0, 0xa8)
char var_d8 = 0x45
int64_t var_e8 = *(*(arg1[1] + 0x40) + 8)
char rax_7 = var_194:1.b

if (r15.b == 0)
    rax_7 = 9

int32_t var_d4 = 0x21
var_194:1.b = rax_7
uint128_t zmm6 = sub_1410e0180(arg1[2], &var_1a8)
void* r14 = arg1[2]
int64_t rdi_2 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_8 = rdi_2 + 0x2c

if (rax_8 u> *(r14 + 0x38))
    zmm6 = sub_140b0e3d0(r14 + 0x30, 0x2e)
    rdi_2 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
    rax_8 = rdi_2 + 0x2c

wchar16 const* const rcx_5 = u"ClearScreenShadowMask"
*(r14 + 0x30) = rax_8
wchar16 const i

do
    i = *rcx_5
    *(rcx_5 + rdi_2 - u"ClearScreenShadowMask") = i
    rcx_5 = &rcx_5[1]
while (i != 0)
void*** rcx_8 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_8[0x27]

if (rax_9 u> *(r14 + 0x38))
    zmm6 = sub_140b0e3d0(r14 + 0x30, 0x140)
    rcx_8 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_8[0x27]

*(r14 + 0x30) = rax_9
void**** rax_10 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_10 = rcx_8
*(r14 + 8) = &rcx_8[1]
sub_1405d11b0(rcx_8, &var_1a8, rdi_2)
*(r14 + 0x1c4) = 1
sub_1405d19b0(r14, &var_1a8)
int64_t var_98
*(r14 + 0x178) = var_98:7.b
*(r14 + 0x179) = 0
*(r14 + 0x1c4) = 1

if (r15.b != 0)
    void* rax_13 = arg1[3]
    int32_t i_1 = 0
    
    if (*(rax_13 + 0xa8) s> 0)
        int64_t r14_1 = 0
        uint128_t var_38_1 = zmm6
        uint128_t zmm7
        uint128_t var_48_1 = zmm7
        uint128_t zmm8
        uint128_t var_58_1 = zmm8
        uint128_t zmm9
        uint128_t var_68_1 = zmm9
        
        do
            void* r15_1 = *(rax_13 + 0xa0)
            void* rax_14 = arg1[4]
            int128_t var_1c8 = zx.o(0)
            void* r15_2 = r15_1 + r14_1
            int64_t* rcx_13 = *(rax_14 + 0x20)
            char var_1e8
            int32_t var_1e0
            char var_1d8
            int32_t var_1d0
            int32_t rax_17
            int32_t rcx_14
            int32_t rdx_6
            int32_t r8_2
            
            if ((*(*rcx_13 + 0xd0))(rcx_13, &var_1c8, r15_2, r15_2 + 0x1598, var_1e8, var_1e0, 
                    var_1d8, var_1d0, var_1c8) != 0)
                r8_2 = var_1c8:0xc.d
                rdx_6 = var_1c8:8.d
                rcx_14 = var_1c8:4.d
                rax_17 = var_1c8.d
            else
                rax_17 = *(r15_2 + 0x1598)
                var_1c8.d = rax_17
                rcx_14 = *(r15_2 + 0x159c)
                var_1c8:4.d = rcx_14
                rdx_6 = *(r15_2 + 0x15a0)
                var_1c8:8.d = rdx_6
                r8_2 = *(r15_2 + 0x15a4)
                var_1c8:0xc.d = r8_2
            
            if (rax_17 s>= rdx_6 || rcx_14 s>= r8_2)
                int64_t* rcx_22 = *(arg1[4] + 0x20)
                (*(*rcx_22 + 0xd0))(rcx_22, &var_1c8, r15_2, r15_2 + 0x1598)
            else
                void* r15_3 = arg1[2]
                void*** rcx_17 = (*(r15_3 + 0x30) + 7) & 0xfffffffffffffff8
                zmm6 = _mm_cvtepi32_ps(zx.o(r8_2))
                void* rax_18 = &rcx_17[5]
                zmm7 = _mm_cvtepi32_ps(zx.o(rdx_6))
                zmm8 = _mm_cvtepi32_ps(zx.o(rcx_14))
                zmm9 = _mm_cvtepi32_ps(zx.o(rax_17))
                
                if (rax_18 u> *(r15_3 + 0x38))
                    zmm6 = sub_140b0e3d0(r15_3 + 0x30, 0x30)
                    rcx_17 = (*(r15_3 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_18 = &rcx_17[5]
                
                *(r15_3 + 0x30) = rax_18
                void** rax_19 = *(r15_3 + 8)
                *(r15_3 + 0x14) += 1
                int128_t zmm0_1 = data_142d3f670
                var_1d0 = 0
                *rax_19 = rcx_17
                *(r15_3 + 8) = &rcx_17[1]
                rcx_17[2].d = zmm9.d
                *(rcx_17 + 0x14) = zmm8.d
                *(rcx_17 + 0x1c) = zmm7.d
                rcx_17[4].d = zmm6.d
                rcx_17[1] = 0
                *rcx_17 = &data_142d54998
                rcx_17[3].d = 0
                *(rcx_17 + 0x24) = 0x3f800000
                void* rcx_21 = arg1[2]
                var_1d8 = 0
                var_1e0 = 0
                int128_t var_1b8 = zmm0_1
                var_1e8 = 0
                sub_14199cb60(rcx_21, 1, 1, &var_1b8, var_1e8, var_1e0, var_1d8, var_1d0)
            
            rax_13 = arg1[3]
            i_1 += 1
            r14_1 += 0x5240
        while (i_1 s< *(rax_13 + 0xa8))

sub_141096650(arg1[2])
int64_t var_a0
int64_t result = sub_1405d1550(&var_a0)
__security_check_cookie(rax_1 ^ &var_208)
return result
