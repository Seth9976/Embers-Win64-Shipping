// 函数: sub_14189fd00
// 地址: 0x14189fd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t* rcx = *(arg1 + 0x10)
int32_t r15 = -1
int32_t var_68 = 0xffffffff
int64_t var_98 = 0
int32_t var_90 = 0
int32_t var_6c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
(*(*rcx + 0x48))(rcx, &var_98)
int64_t* rcx_1 = *(arg1 + 0x90)
int512_t zmm0
zmm0.o = zx.o(0)
int32_t var_150 = 6
int32_t var_154 = 0
(*(*rcx_1 + 0x18))(zmm0, &var_150, &var_154)
char var_158
char* var_110 = &var_158

if (var_90 - var_64 s> 0)
    sub_140a6c1e0(&var_98)
    char** var_108_1 = &var_110
    sub_14181b5f0(var_98, var_90 - var_64, var_158)

sub_1405a4480(&var_98)
int64_t* var_130 = &var_88
int32_t rcx_5 = 0
int32_t var_138 = 0
int32_t var_128 = 0xffffffff
int32_t r8_2 = 0
int32_t var_134 = 1
int64_t var_124 = 0
int64_t* var_78
int32_t var_70

if (var_70 != 0)
    int64_t* r10_1 = &var_88
    
    if (var_78 != 0)
        r10_1 = var_78
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_70 - 1)
    int32_t rdx_6 = *r10_1
    
    if (rdx_6 != 0)
    label_14189fe78:
        int32_t rax_13 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
        int32_t var_134_1 = rax_13
        int32_t var_118_1 = temp0_2
        int32_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0x20
        else
            rax_14 = 0x1f - temp0_2
        
        int32_t rax_15 = r8_2 - rax_14 + 0x1f
        
        if (rax_15 s> var_70)
            rax_15 = var_70
        
        var_124.d = rax_15
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_5)
            r8_2 += 0x20
            rcx_5 += 1
            var_124:4.d = r8_2
            var_138 = rcx_5
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_124.d = var_70
                break
            
            rdx_6 = *(r10_1 + (rdx_7 << 2) + 4)
            int32_t var_128_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_14189fe78

uint128_t zmm6 = 0x3f000000
int128_t var_c0 = 0xffffffff
uint128_t var_d0
var_d0:8.d = 0xffffffff << (var_70.b & 0x1f)
var_d0:0xc.d = var_70
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
uint128_t var_100 = (&var_98).o
uint128_t var_f0 = var_138.o
int64_t var_e0 = temp0_3

while (true)
    int64_t rax_16 = sx.q(var_f0:0xc.d)
    int64_t* rdx_8 = var_100.q
    
    if (rax_16.d == (var_d0:8.q u>> 0x20).d && var_f0.q == &var_88 && rdx_8 == &var_98)
        break
    
    r15 += 1
    int64_t* rdi_1 = *rdx_8 + rax_16 * 0x18
    bool z_1
    
    if (0 == *(arg1 + 0x9c))
        *(arg1 + 0x9c) = 0
        z_1 = true
    else
        *(arg1 + 0x9c)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx_10 = *(arg1 + 0x10)
    void* rax_20 = (*(*rcx_10 + 0x68))(rcx_10, rdi_1)
    int64_t* rcx_11 = *(arg1 + 0x10)
    int64_t r8_4 = *rcx_11
    (*(r8_4 + 0x60))(rcx_11, rdi_1, r8_4)
    int64_t* rcx_12 = *(arg1 + 0x10)
    int64_t r8_5 = *rcx_12
    char rax_21 = (*(r8_5 + 0x90))(rcx_12, rdi_1, r8_5)
    int32_t* rax_22
    void var_114
    
    if (rax_21 == 0)
        rax_22 = sub_140960120(arg1 + 0x18, &var_114, rdi_1)
    char rcx_13
    
    if (rax_21 != 0 || *rax_22 != 0xffffffff)
        rcx_13 = 1
    else
        rcx_13 = 0
    
    if (rax_20 != 0 && rcx_13 != 0)
        int16_t* var_b0
        sub_1418acd40(arg1, sub_1418abb80(arg1, &var_b0, rdi_1), rax_20, rax_21)
        int16_t* rcx_17 = var_b0
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
    
    int64_t* rcx_18 = *(arg1 + 0x90)
    uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(r15))
    int32_t var_148 = 6
    zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o(var_90 - var_64)).d
    int32_t var_14c = zmm1.d
    (*(*rcx_18 + 0x18))(rcx_18, &var_148, &var_14c)
    bool z_2
    
    if (0 == *(arg1 + 0x98))
        *(arg1 + 0x98) = 0
        z_2 = true
    else
        *(arg1 + 0x98)
        z_2 = false
    
    if (not(z_2))
        bool z_4
        
        do
            bool z_3
            
            if (0 == *(arg1 + 0x9c))
                *(arg1 + 0x9c) = 0
                z_3 = true
            else
                *(arg1 + 0x9c)
                z_3 = false
            
            if (not(z_3))
                break
            
            zmm6 = sub_140b73230(zmm6)
            
            if (0 == *(arg1 + 0x98))
                *(arg1 + 0x98) = 0
                z_4 = true
            else
                *(arg1 + 0x98)
                z_4 = false
        while (not(z_4))
    
    var_f0:8.d &= not.d(var_100:0xc.d)
    sub_14059bdd0(&var_100:8)

int64_t* rcx_20 = *(arg1 + 0x90)
int32_t var_144 = 0x3f800000
int32_t var_140 = 6
(*(*rcx_20 + 0x18))(0x3f800000, &var_140, &var_144)
int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_14059ad90(&var_98, 0)

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_24 = var_98

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_178)
return result
