// 函数: sub_141e78fc0
// 地址: 0x141e78fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* lpCriticalSection = arg1 + 0x48
int32_t rsi = 0
int32_t arg_18 = 0
int32_t r13 = 0
EnterCriticalSection(lpCriticalSection)
*arg2 = 0
arg2[1] = 0
*(arg1 + 0x10)
int16_t* var_f8
sub_140a2e390(&var_f8, u"Number of chunks loaded: %d of %d", zx.q(*(arg1 + 0x28)))
int16_t* const r14 = &data_142d40450
int16_t* rcx_2 = var_f8
int64_t r15 = 0
int32_t var_f0

if (var_f0 != 0)
    r14 = rcx_2

int64_t var_158 = 0
int32_t var_150 = 0
int32_t rax = 0
int32_t var_14c = 0

if (r14 != 0 && *r14 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (r14[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_158, rdi_1.d + 1)
        rax = var_14c
        rsi = var_150
        r15 = var_158
    
    rsi += rdi_1.d + 1
    
    if (rsi s> rax)
        sub_140594770(&var_158)
        r15 = var_158
    
    UnDecorator::getReferenceType(r15, r14, (rdi_1.d + 1) * 2)
    rcx_2 = var_f8

if (rcx_2 != 0)
    rcx_2 = sub_140a74f90(rcx_2)

int64_t r14_1 = 0
int64_t var_138 = 0
sub_1405a4c70(&var_138, sbb.d(rcx_2.d, rcx_2.d, rsi != 0) + 2 + rsi, 0)
memcpy(var_138, r15, rsi * 2)
sub_140a20ba0(&var_138, &data_142d576a0, 1)
int64_t rdi_3 = var_138
var_138 = 0
int32_t var_130
var_130.q = 0
int32_t r8_5 = rsi - 1

if (rsi == 0)
    r8_5 = 0

sub_140a20ba0(arg2, rdi_3, r8_5)

if (rdi_3 != 0)
    sub_140a74f90(rdi_3)

void* rdi_4 = arg1
uint64_t r8_6 = 0
int32_t rdx_7 = 0

for (void* i = *(rdi_4 + 0x18); i != 0; i = *(i + 0x38))
    r8_6 = zx.q(r8_6.d + *(i + 0x20))
    int32_t rax_4 = 0
    
    if (0 == *(i + 0x48))
        *(i + 0x48) = 0
    else
        rax_4 = *(i + 0x48)
    
    if (rax_4 s> 0)
        rdx_7 += *(i + 0x20)

int64_t zmm0 = 0x3eb0000000000000
int128_t zmm8
zmm8.q = float.d(zx.q(r8_6.d))
int128_t zmm7
zmm7.q = float.d(zx.q(rdx_7))
int64_t rax_7 = *(rdi_4 + 0x38)
zmm8.q = zmm8.q f* zmm0
zmm7.q = zmm7.q f* zmm0
uint128_t zmm6
zmm6.q = float.d(rax_7)

if (rax_7 s< 0)
    zmm6.q = zmm6.q f+ 1.8446744073709552e+19

zmm6.q = zmm6.q f* zmm0
int128_t zmm9
zmm9.q = zmm7.q f/ zmm6.q
int16_t* var_e8
sub_140a2e390(&var_e8, u"Retaining:\t, Loaded:\t, Max Potential Usage:\t, \n", r8_6)
int16_t* const rsi_1 = &data_142d40450
int16_t* rcx_13 = var_e8
int32_t rdx_8 = 0
int32_t var_e0

if (var_e0 != 0)
    rsi_1 = rcx_13

int64_t var_178 = 0
int32_t var_170 = 0
int32_t r8_7 = 0
int32_t var_16c = 0

if (rsi_1 != 0 && *rsi_1 != 0)
    int64_t rdi_5 = -1
    
    do
        rdi_5 += 1
    while (rsi_1[rdi_5] != 0)
    
    if (rdi_5.d + 1 s> 0)
        sub_1405947f0(&var_178, rdi_5.d + 1)
        r8_7 = var_16c
        rdx_8 = var_170
    
    int32_t rax_8 = rdx_8 + rdi_5.d + 1
    var_170 = rax_8
    
    if (rax_8 s> r8_7)
        sub_140594770(&var_178)
    
    UnDecorator::getReferenceType(var_178, rsi_1, (rdi_5.d + 1) * 2)
    rcx_13 = var_e8
    rdi_4 = arg1

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rax_9 = 0

if (0 == *(rdi_4 + 0x30))
    *(rdi_4 + 0x30) = 0
else
    rax_9 = *(rdi_4 + 0x30)

int64_t var_1c8 = zmm6.q
int64_t var_1d0 = rax_9
int64_t var_1d8 = zmm8.q
int16_t* var_d8
sub_140a2e390(&var_d8, 
    %.4f Megabytes (%.3f of total capacity)\t,  %.4f Megabytes (%lu bytes)\t, %.4f Megabytes\t, \n", 
    zmm7.q)
int16_t* const r15_1 = &data_142d40450
int16_t* rcx_18 = var_d8
int32_t var_d0

if (var_d0 != 0)
    r15_1 = rcx_18

int64_t var_168 = 0
int32_t rax_10 = 0
int64_t var_160 = 0
int32_t rsi_2 = 0

if (r15_1 != 0 && *r15_1 != 0)
    int64_t rdi_7 = -1
    
    do
        rdi_7 += 1
    while (r15_1[rdi_7] != 0)
    
    if (rdi_7.d + 1 s> 0)
        sub_1405947f0(&var_168, rdi_7.d + 1)
        rax_10 = var_160:4.d
        rsi_2 = var_160.d
        r14_1 = var_168
    
    rsi_2 += rdi_7.d + 1
    var_160.d = rsi_2
    
    if (rsi_2 s> rax_10)
        sub_140594770(&var_168)
        rsi_2 = var_160.d
        r14_1 = var_168
    
    UnDecorator::getReferenceType(r14_1, r15_1, (rdi_7.d + 1) * 2)
    rcx_18 = var_d8

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t r12_1 = var_178
int32_t rcx_22
uint64_t rdi_10
uint64_t var_128
int32_t var_11c_1

if (var_170 s> 1)
    int32_t rsi_3
    
    if (rsi_2 == 0)
        rsi_3 = 0
    else
        rsi_3 = rsi_2 - 1
    
    int32_t rax_11
    
    if (var_170 == 0)
        rax_11 = var_170 + 1
    
    if (var_170 != 0 || rsi_3 == 0)
        rax_11 = 0
    
    uint64_t var_188 = 0
    int32_t rcx_25 = rax_11 + rsi_3
    int32_t var_17c
    
    if (var_170 != 0 || rcx_25 != 0)
        sub_1405a4c70(&var_188, var_170 + rcx_25, 0)
        memcpy(var_188, r12_1, var_170 * 2)
    else
        var_17c = 0
    
    sub_140a20ba0(&var_188, r14_1, rsi_3)
    rdi_10 = var_188
    rsi_2 = var_170
    rcx_22 = var_17c
    var_128 = rdi_10
    int32_t var_180_1
    var_180_1.q = 0
    var_188 = 0
    int32_t var_120_1 = rsi_2
    var_11c_1 = rcx_22
else
    var_128 = 0
    rdi_10 = 0
    
    if (rsi_2 != 0)
        sub_1405a4c70(&var_128, rsi_2, 0)
        rdi_10 = var_128
        memcpy(rdi_10, r14_1, rsi_2 * 2)
        int32_t var_11c
        rcx_22 = var_11c
    else
        rcx_22 = 0
        var_11c_1 = rcx_22
uint64_t var_118 = rdi_10
int32_t rax_12
rax_12.b = rsi_2 == 0
int32_t var_10c = rcx_22
int32_t rdx_20 = rax_12 + 1 + rsi_2

if (rdx_20 s> rcx_22)
    sub_1405947f0(&var_118, rdx_20)

sub_140a20ba0(&var_118, &data_142d576a0, 1)
uint64_t rdi_11 = var_118
int64_t* result = arg2
var_118 = 0
int32_t r8_18 = rsi_2 - 1
int32_t var_110
var_110.q = 0

if (rsi_2 == 0)
    r8_18 = 0

sub_140a20ba0(result, rdi_11, r8_18)

if (rdi_11 != 0)
    sub_140a74f90(rdi_11)

void* i_1 = *(arg1 + 0x18)
sub_140a20ba0(result, 
    Index:\t, Size (KB):\t, Chunk:\t, Request Count:\t, Average Index:\t, Number of Handles Retaining "
"Chunk:\t, Chunk Load Time:\t, Name: \t, Notes:\t, \n", 0x8c)

if (i_1 != 0)
    zmm6 = -0x4010000000000000
    int32_t rbx = 0
    
    do
        int32_t rdi_14 = *(i_1 + 0x20)
        int16_t* var_b8
        wchar16 const* const r8_19
        int16_t* const r14_2
        
        if (rdi_14 != 0)
            r13 |= 1
            int64_t* rax_14
            rax_14, zmm6 = sub_140b63b70(i_1 + 8, &var_b8)
            r14_2 = &data_142d40450
            
            if (rax_14[1].d == 0)
                r8_19 = &data_142d40450
            else
                r8_19 = *rax_14
        else
            r8_19 = u"TRIMMED CHUNK"
            r14_2 = &data_142d40450
        
        int32_t rsi_4 = 0
        bool z_1
        
        if (0 == *(i_1 + 0x44))
            *(i_1 + 0x44) = 0
            z_1 = true
        else
            *(i_1 + 0x44)
            z_1 = false
        
        int32_t rax_16 = 0
        
        if (0 == *(i_1 + 0x48))
            *(i_1 + 0x48) = 0
        else
            rax_16 = *(i_1 + 0x48)
        
        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(*(i_1 + 0x20)))
        int16_t* const rcx_35 = &data_142d40450
        
        if (z_1 != 0)
            rcx_35 = u"(Loading In Progress)"
        
        int16_t* const var_190_1 = rcx_35
        int16_t* const var_198_1 = &data_142d40450
        int16_t* const var_1a0_1 = &data_142d40450
        wchar16 const* const var_1a8_1 = r8_19
        uint64_t var_1b0_1 = zmm6.q
        int32_t var_1b8_1 = rax_16
        uint64_t var_1c0_1 = zmm6.q
        zmm0_1.d = zmm0_1.d f* 0.0009765625f
        var_1c8.d = 0xffffffff
        var_1d0.d = 0xffffffff
        var_1d8.d = *(i_1 + 0x10)
        _mm_cvtps_pd(zmm0_1.q)
        int16_t* var_c8
        sub_140a2e390(&var_c8, 
            %4i.\t, %6.2f KB\t, %d of %d\t, %d\t, %6.2f\t, %d\t,  %6.4fms\t, %s\t, %s %s %s", zx.q(rbx))
        int64_t r12_2 = 0
        int16_t* rcx_37 = var_c8
        int32_t var_c0
        
        if (var_c0 != 0)
            r14_2 = rcx_37
        
        int64_t var_148 = 0
        int32_t rax_18 = 0
        int64_t var_140_1 = 0
        
        if (r14_2 != 0 && *r14_2 != 0)
            int64_t rdi_12 = -1
            
            do
                rdi_12 += 1
            while (r14_2[rdi_12] != 0)
            
            if (rdi_12.d + 1 s> 0)
                sub_1405947f0(&var_148, rdi_12.d + 1)
                rax_18 = var_140_1:4.d
                rsi_4 = var_140_1.d
                r12_2 = var_148
            
            rsi_4 += rdi_12.d + 1
            var_140_1.d = rsi_4
            
            if (rsi_4 s> rax_18)
                sub_140594770(&var_148)
                rsi_4 = var_140_1.d
                r12_2 = var_148
            
            UnDecorator::getReferenceType(r12_2, r14_2, (rdi_12.d + 1) * 2)
            rcx_37 = var_c8
        
        if (rcx_37 != 0)
            rcx_37 = sub_140a74f90(rcx_37)
        
        if ((r13.b & 1) != 0)
            rcx_37 = var_b8
            r13 &= 0xfffffffe
            
            if (rcx_37 != 0)
                rcx_37 = sub_140a74f90(rcx_37)
        
        if (rdi_14 == 0)
            result = arg2
        else
            int64_t var_108 = 0
            sub_1405a4c70(&var_108, sbb.d(rcx_37.d, rcx_37.d, rsi_4 != 0) + 2 + rsi_4, 0)
            memcpy(var_108, r12_2, rsi_4 * 2)
            sub_140a20ba0(&var_108, &data_142d576a0, 1)
            int64_t rdi_15 = var_108
            result = arg2
            int64_t var_98_1 = rdi_15
            int32_t r8_25 = rsi_4 - 1
            var_108 = 0
            
            if (rsi_4 == 0)
                r8_25 = 0
            
            int32_t var_100_1
            var_100_1.q = 0
            sub_140a20ba0(result, rdi_15, r8_25)
            
            if (rdi_15 != 0)
                sub_140a74f90(rdi_15)
        
        i_1 = *(i_1 + 0x38)
        rbx += 1
        
        if (r12_2 != 0)
            sub_140a74f90(r12_2)
    while (i_1 != 0)
    
    r12_1 = var_178
    r14_1 = var_168

sub_140a20ba0(result, u"Cache Miss Log:\n", 0x10)
int64_t var_a8
int64_t* rax_22 = sub_141e7bb70(arg1, &var_a8)
int32_t rcx_50 = rax_22[1].d
int32_t r8_26 = rcx_50 - 1

if (rcx_50 == 0)
    r8_26 = 0

sub_140a20ba0(result, *rax_22, r8_26)
int64_t rcx_52 = var_a8

if (rcx_52 != 0)
    sub_140a74f90(rcx_52)

if (r14_1 != 0)
    sub_140a74f90(r14_1)

if (r12_1 != 0)
    sub_140a74f90(r12_1)

int64_t rcx_55 = var_158

if (rcx_55 != 0)
    sub_140a74f90(rcx_55)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return result
