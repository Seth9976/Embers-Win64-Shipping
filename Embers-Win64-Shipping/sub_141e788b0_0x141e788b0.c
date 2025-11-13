// 函数: sub_141e788b0
// 地址: 0x141e788b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1 + 0x48
int32_t r14 = 0
int32_t r12 = 0
int32_t var_17c = 0
EnterCriticalSection(lpCriticalSection)
int32_t rax = arg5
*(arg1 + 0x10)
int128_t var_100
__builtin_memcpy(&var_100, 
    "\x00\x00\x3c\x3e\x00\x00\x30\x3e\x00\x00\x4f\x3f\x00\x00\x80\x3f\x00\x00\x4c\x3f\x00\x00\xfc\x3e\x"
"00\x00\x2c\x3e\x00\x00\x80\x3f\x00\x00\x30\x3e\x00\x00\x4f\x3f\x00\x00\x3c\x3e\x00\x00\x80\x3f\x00"
"00\x0f\x3f\x00\x00\x92\x3e\x00\x00\x8c\x3e\x00\x00\x80\x3f", 
    0x40)
int16_t* var_140
sub_140a2e390(&var_140, u"Number of chunks loaded: %d of %d", zx.q(*(arg1 + 0x28)))
int16_t* const rdi = &data_142d40450
int16_t* rcx_2 = var_140
int16_t* const rsi = &data_142d40450
int32_t var_138

if (var_138 != 0)
    rsi = rcx_2

int16_t* var_178 = nullptr
int32_t rax_1 = 0
int64_t var_170 = 0
int16_t* r15 = nullptr

if (rsi != 0 && *rsi != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (rsi[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_178, rdi_1.d + 1)
        rax_1 = var_170:4.d
        r14 = var_170.d
        r15 = var_178
    
    r14 += rdi_1.d + 1
    var_170.d = r14
    
    if (r14 s> rax_1)
        sub_140594770(&var_178)
        r14 = var_170.d
        r15 = var_178
    
    UnDecorator::getReferenceType(r15, rsi, (rdi_1.d + 1) * 2)
    rcx_2 = var_140
    rdi = &data_142d40450

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t var_194 = 0
int32_t var_158 = 0
int128_t zmm8
int128_t zmm9
uint128_t zmm10
int128_t zmm11
zmm8, zmm9, zmm10, zmm11 = sub_142006cf0(sub_1423de050(), u"Cache XX ", &var_158, &var_194)

if (r14 != 0)
    rdi = r15

void* rax_3 = sub_1423de050()
sub_142409910(arg3, _mm_cvtepi32_ps(zx.o(arg4 + var_194)), _mm_cvtepi32_ps(zx.o(arg5 - 0xc)), rdi, 
    rax_3, &data_14399f600, &data_14399f5e0)
void* i = *(arg1 + 0x18)
int32_t rsi_2 = arg5 + 0xa
int32_t rcx_9 = 0

for (; i != 0; i = *(i + 0x38))
    rcx_9 += *(i + 0x20)

double zmm1_1 = 9.5367431640625e-07
uint128_t zmm2_1
zmm2_1.q = float.d(zx.q(rcx_9))
int64_t rax_5 = *(arg1 + 0x38)
int64_t zmm0 = float.d(rax_5)
zmm2_1.q = zmm2_1.q f* zmm1_1

if (rax_5 s< 0)
    zmm0 = zmm0 f+ 1.8446744073709552e+19

if (0 == *(arg1 + 0x30))
    *(arg1 + 0x30) = 0
else
    *(arg1 + 0x30)

int64_t var_1e8_1 = zmm0 f* zmm1_1
int16_t* var_130
sub_140a2e390(&var_130, Using: %.4f Megabytes (%lu bytes). Max Potential Usage: %.4f Megabytes.", 
    zmm2_1.q)
int16_t* const rsi_3 = &data_142d40450
int16_t* rcx_11 = var_130
int32_t rax_7 = 0
int32_t var_128

if (var_128 != 0)
    rsi_3 = rcx_11

int16_t* var_190 = nullptr
int32_t var_188 = 0
int16_t* r15_1 = nullptr
int32_t var_184 = 0
int32_t r14_1 = 0

if (rsi_3 != 0 && *rsi_3 != 0)
    int64_t rdi_3 = -1
    
    do
        rdi_3 += 1
    while (rsi_3[rdi_3] != 0)
    
    if (rdi_3.d + 1 s> 0)
        sub_1405947f0(&var_190, rdi_3.d + 1)
        rax_7 = var_184
        r14_1 = var_188
        r15_1 = var_190
    
    r14_1 += rdi_3.d + 1
    var_188 = r14_1
    
    if (r14_1 s> rax_7)
        sub_140594770(&var_190)
        r14_1 = var_188
        r15_1 = var_190
    
    UnDecorator::getReferenceType(r15_1, rsi_3, (rdi_3.d + 1) * 2)
    rcx_11 = var_130

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int16_t* rdi_5 = &data_142d40450

if (r14_1 != 0)
    rdi_5 = r15_1

void* rax_8 = sub_1423de050()
int128_t zmm7 = sub_142409910(arg3, _mm_cvtepi32_ps(zx.o(arg4 + var_194)), 
    _mm_cvtepi32_ps(zx.o(rsi_2)), rdi_5, rax_8, &data_14399f600, &data_14399f5e0)
int32_t i_1 = 0
void* rsi_4 = *(arg1 + 0x18)
int32_t rdi_7 = rsi_2 + 0xc
arg5 = rdi_7
int64_t zmm6 = (zx.o(0)).q
int32_t i_2 = 0

if (rsi_4 != 0)
    int128_t var_58_1 = zmm7
    zmm7 = 0x3f800000
    int128_t var_68_1 = zmm8
    int128_t var_78_1 = zmm9
    zmm9 = 0x3d23d70a
    uint128_t var_88_1 = zmm10
    zmm10 = -0x4010000000000000
    int128_t var_98_1 = zmm11
    
    while (i_1 s<= data_143a2d464)
        int32_t r15_2 = *(rsi_4 + 0x20)
        int64_t var_110
        wchar16 const* const rcx_16
        
        if (r15_2 != 0)
            r12 |= 1
            int64_t* rax_9
            rax_9, zmm6 = sub_140b63b70(rsi_4 + 8, &var_110)
            
            if (rax_9[1].d == 0)
                rcx_16 = &data_142d40450
            else
                rcx_16 = *rax_9
        else
            rcx_16 = u"TRIMMED CHUNK"
        
        int32_t rax_10 = 0
        
        if (0 == *(rsi_4 + 0x48))
            *(rsi_4 + 0x48) = 0
        else
            rax_10 = *(rsi_4 + 0x48)
        
        int16_t* const var_1a8_1 = &data_142d40450
        int16_t* const var_1b0_1 = &data_142d40450
        wchar16 const* const var_1b8_1 = rcx_16
        uint64_t var_1c0_1 = zmm10.q
        int32_t var_1c8_1 = rax_10
        int32_t rax_11 = *(rsi_4 + 0x10)
        uint64_t var_1d0_1 = zmm10.q
        uint128_t zmm0_1
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(rsi_4 + 0x20))).d f* 0.0009765625f
        void* var_1e8_2
        var_1e8_2.d = rax_11
        _mm_cvtps_pd(zmm0_1.q)
        int16_t* var_120
        sub_140a2e390(&var_120, 
            %4i. Size: %6.2f KB   Chunk: %d of %d   Request Count: %d    Average Index: %6.2f  Number of "
        "Handles Retaining ", zx.q(i_2))
        int16_t* const r14_2 = &data_142d40450
        int16_t* rcx_19 = var_120
        int32_t rdx_11 = 0
        int32_t var_118
        
        if (var_118 != 0)
            r14_2 = rcx_19
        
        int16_t* var_168 = nullptr
        int32_t var_160_1 = 0
        int32_t r8_8 = 0
        int32_t var_15c_1 = 0
        
        if (r14_2 != 0 && *r14_2 != 0)
            int64_t rdi_8 = -1
            
            do
                rdi_8 += 1
            while (r14_2[rdi_8] != 0)
            
            if (rdi_8.d + 1 s> 0)
                sub_1405947f0(&var_168, rdi_8.d + 1)
                r8_8 = var_15c_1
                rdx_11 = var_160_1
            
            int32_t rax_12 = rdi_8.d + 1 + rdx_11
            var_160_1 = rax_12
            
            if (rax_12 s> r8_8)
                sub_140594770(&var_168)
            
            UnDecorator::getReferenceType(var_168, r14_2, (rdi_8.d + 1) * 2)
            rcx_19 = var_120
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        if ((r12.b & 1) != 0)
            int64_t rcx_23 = var_110
            r12 &= 0xfffffffe
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
        
        zmm6.d = zmm6.d f+ zmm9.d
        _mm_min_ss(zmm6.d, zmm7.d)
        void var_c0
        int32_t* rax_13
        int512_t zmm3_2
        int32_t zmm7_1
        rax_13, zmm3_2, zmm7_1, zmm8, zmm9 = sub_140ad9660(&var_c0, &var_100, &data_14399f5d0)
        uint128_t var_150 = *rax_13
        bool z_1
        
        if (0 == *(rsi_4 + 0x44))
            *(rsi_4 + 0x44) = 0
            z_1 = true
        else
            *(rsi_4 + 0x44)
            z_1 = false
        
        if (not(z_1))
            int32_t rax_15 = 0
            
            if (0 == *(rsi_4 + 0x48))
                *(rsi_4 + 0x48) = 0
            else
                rax_15 = *(rsi_4 + 0x48)
            
            if (rax_15 s> 0)
                int32_t rax_16 = 0
                
                if (0 == *(rsi_4 + 0x48))
                    *(rsi_4 + 0x48) = 0
                else
                    rax_16 = *(rsi_4 + 0x48)
                
                uint128_t zmm6_1
                zmm6_1.d = _mm_cvtepi32_ps(zx.o(rax_16)).d f* zmm8.d
                zmm3_2.o = _mm_min_ss(zmm6_1.d, zmm7_1)
                int128_t var_f0
                int128_t var_e0
                void var_b0
                uint128_t* rax_17
                rax_17, zmm9 = sub_140ad9660(&var_b0, &var_e0, &var_f0)
                var_150 = *rax_17
            else if (r15_2 == 0)
                var_150 = data_1432519e0
        else
            var_150 = data_14399f620
        
        int16_t* rdi_10 = &data_142d40450
        int16_t* r14_3 = var_168
        
        if (var_160_1 != 0)
            rdi_10 = r14_3
        
        void* rax_18 = sub_1423de050()
        uint128_t zmm2_2 = _mm_cvtepi32_ps(zx.o(arg5))
        zmm6, zmm7 = sub_142409910(arg3, _mm_cvtepi32_ps(zx.o(arg4)), zmm2_2, rdi_10, rax_18, 
            &var_150, &data_14399f5e0)
        i_1 = i_2 + 1
        rsi_4 = *(rsi_4 + 0x38)
        rdi_7 = arg5 + 0xc
        arg5 = rdi_7
        i_2 = i_1
        
        if (r14_3 != 0)
            sub_140a74f90(r14_3)
            i_1 = i_2
        
        if (rsi_4 == 0)
            break
    
    r14_1 = var_188
    lpCriticalSection = arg1 + 0x48
    r15_1 = var_190

int16_t* rsi_5 = &data_142d40450
int32_t var_180 = 0
int32_t var_154 = 0

if (r14_1 != 0)
    rsi_5 = r15_1

sub_142006cf0(sub_1423de050(), rsi_5, &var_180, &var_154)
int32_t rdx_18 = var_194 + var_180
arg2[1] = rdi_7 - rax
*arg2 = rdx_18

if (r15_1 != 0)
    sub_140a74f90(r15_1)

int16_t* rcx_30 = var_178

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return arg2
