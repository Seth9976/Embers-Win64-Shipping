// 函数: sub_14142f980
// 地址: 0x14142f980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = *(arg3 + 0x340)
void* rbx = arg2
float zmm4[0x4] = *(arg3 + 0x2d0)
float zmm3[0x4] = *(arg3 + 0x2c0)
float zmm5[0x4] = *(arg3 + 0x2e0)
uint128_t zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
uint128_t zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm0 = _mm_mul_ps(zmm0, zmm4)
zmm1 = _mm_mul_ps(zmm1, zmm5)
float zmm6[0x4] = *(arg3 + 0x2f0)
uint128_t zmm7 = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
int32_t var_1a8 = 0
int32_t var_1f4 = 0
zmm7 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7, zmm3), zmm0), zmm1), temp0_6)
zmm2 = *(arg3 + 0x350)
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
uint128_t zmm8 = _mm_shuffle_ps(zmm2, zmm2, 0)
zmm0 = _mm_mul_ps(zmm0, zmm4)
zmm1 = _mm_mul_ps(zmm1, zmm5)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
uint128_t var_108 = zmm7
zmm8 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm8, zmm3), zmm0), zmm1), temp0_17)
zmm2 = *(arg3 + 0x360)
uint128_t zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0)
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm0 = _mm_mul_ps(zmm0, zmm4)
zmm1 = _mm_mul_ps(zmm1, zmm5)
zmm9 = _mm_mul_ps(zmm9, zmm3)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
uint128_t var_f8 = zmm8
zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm9, zmm0), zmm1), temp0_29)
zmm2 = *(arg3 + 0x370)
uint128_t zmm10 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm4)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm5)
uint128_t var_e8 = zmm9
zmm10 = _mm_add_ps(_mm_add_ps(zmm10, zmm0), zmm1)
zmm0 = zx.o(*(arg3 + 0x60c))
int128_t zmm13 = data_1439b6cfc
int32_t rax = *(arg3 + 0x614)
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
uint64_t var_1e0 = zmm0.q
zmm13.d = zmm13.d f* zmm13.d
zmm10 = _mm_add_ps(zmm10, temp0_42)
uint128_t var_d8 = zmm10
uint64_t rax_1 = j_sub_140a82f30(0x80)
uint64_t var_1a0 = rax_1
uint64_t r13 = rax_1

if (rax_1 == 0)
    r13 = 0
    var_1a0 = 0
else
    __builtin_memset(r13 + 0x40, 0, 0x40)

*r13 = zmm7
*(r13 + 0x10) = zmm8
*(r13 + 0x20) = zmm9
*(r13 + 0x30) = zmm10

if (*(r13 + 0x5c) s< 0x400)
    sub_1405dadb0(r13 + 0x50, 0x400)

if (*(r13 + 0x4c) s< 0x800)
    sub_140638cc0(r13 + 0x40, 0x800)

int32_t rdx = data_1439b6d00

if (rdx s> *(r13 + 0x6c))
    sub_1408e7380(r13 + 0x60, rdx)

uint64_t var_158 = r13
void** const var_160 = &data_142f7e838
int32_t r14 = 0
int32_t var_150 = 0
*(r13 + 0x70) = 0
int32_t rdx_1 = data_1439b6d00
int64_t* var_1f0 = nullptr
int64_t var_1e8 = 0

if (rdx_1 s> 0)
    sub_1405a5410(&var_1f0, rdx_1)
    r14 = var_1e8.d

int32_t var_1c8 = 0
void* r10 = arg3 + 0x15b8
int32_t var_1b4 = 0
int32_t rdi_1 = *(r10 + 0x18)
int32_t r8 = 0
void* var_1c0 = r10
int32_t r12 = 1
int32_t var_1c4 = 1
int32_t r15 = -1
int32_t var_1b8 = 0xffffffff
int32_t rcx_4 = 0
int32_t r9 = 0

if (rdi_1 != 0)
    void* rax_2 = *(r10 + 0x10)
    rcx_4 = rdi_1
    
    if (rax_2 != 0)
        r10 = rax_2
    
    int32_t temp0_44
    int32_t temp1_1
    temp0_44:temp1_1 = sx.q(rdi_1 - 1)
    int32_t rdx_4 = *r10
    
    if (rdx_4 != 0)
    label_14142fcb2:
        r12 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_45
        temp0_45, rflags_1 = _bit_scan_reverse(r12)
        var_1c4 = r12
        int32_t var_168_1 = temp0_45
        int32_t rax_7
        
        if (r12 == 0)
            rax_7 = 0x20
        else
            rax_7 = 0x1f - temp0_45
        
        int32_t rax_8 = r9 - rax_7 + 0x1f
        
        if (rax_8 s> rcx_4)
            rax_8 = rcx_4
        
        rcx_4 = rax_8
        var_1b4 = rax_8
    else
        while (true)
            int64_t rdx_5 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_1b4 = r9
            var_1c8 = r8
            
            if (rdx_5.d s>= (temp1_1 + (temp0_44 & 0x1f)) s>> 5)
                var_1b4 = rcx_4
                break
            
            rdx_4 = *(r10 + (rdx_5 << 2) + 4)
            r15 = -1
            int32_t var_1b8_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_14142fcb2

int32_t var_1d8
int32_t var_190
char var_188

if (rcx_4 s< rdi_1)
    int128_t zmm11 = var_1e0:4.d
    int128_t zmm12 = var_1e0.d
    
    while (true)
        zmm7 = zx.o(0)
        int64_t rcx_5 = sx.q(rcx_4)
        void* rdx_7 = *(*(rbx + 0xdb8) + (rcx_5 << 3))
        float (* rdi_3)[0x4] = rcx_5 * 0x1c + *(rbx + 0xe28)
        int32_t rbx_1 = *(rdx_7 + 0x10)
        zmm2 = (*rdi_3)[6]
        char rax_11 = *(rcx_5 + *(rbx + 0xe18))
        rcx_5.b = zmm2.d f> 524288f
        
        if (rcx_5.b == 0)
            uint128_t zmm0_1
            float zmm4_1[0x4]
            uint128_t zmm5_1
            
            if ((*(*(rdx_7 + 8) + 0x3c) & 1) != 0)
                zmm3 = *rdi_3
                zmm4_1 = (*rdi_3)[1]
                zmm5_1 = (*rdi_3)[2]
                zmm1.d = zmm3.d f- zmm12.d
                zmm4_1[0] = zmm4_1[0] f- zmm11.d
                zmm0_1.d = zmm5_1.d f- rax.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                zmm4_1[0] = zmm4_1[0] f+ zmm1.d
                zmm4_1[0] = zmm4_1[0] f+ zmm0_1.d
                zmm0_1.d = zmm2.d f* zmm2.d
                zmm4_1[0] = zmm4_1[0] f- zmm0_1.d
                zmm6 = _mm_max_ss(zmm4_1[0], 0x461c4000)
                
                if (not(zmm6[0] f>= zmm13.d))
                    float var_178 = zmm3[0]
                    float var_174_1 = zmm4_1[0]
                    int32_t var_170_1 = zmm5_1.d
                    int32_t var_16c_1 = 0x3f800000
                    zmm0_1, zmm6 = sub_1422dffa0(&var_178, zmm2.d, arg3)
                    zmm7 = zmm0_1
                
                void* rax_12
                rax_12.b = zmm7.d f> data_1439b6cf8
                
                if (rax_12.b != 0)
                    r14 += 1
                    var_1e8.d = r14
                    
                    if (r14 s> var_1e8:4.d)
                        sub_1405a4f90(&var_1f0)
                        r14 = var_1e8.d
                    
                    zmm0_1.d = 10000f / zmm6[0]
                    int64_t* rcx_10 = &var_1f0[sx.q(r14 - 1) * 2]
                    *rcx_10 = rdx_7
                    zmm0_1.d = zmm0_1.d f+ zmm7.d
                    rcx_10[1].d = zmm0_1.d
                
                goto label_14142fe61
            
            if (rcx_5.b == 0)
            label_14142fe61:
                
                if ((rax_11 & 1) != 0)
                    zmm5_1 = (*rdi_3)[3]
                    zmm6 = *rdi_3
                    zmm3 = rdi_3[1][0]
                    zmm0_1.d = zmm5_1.d f+ zmm6[0]
                    zmm4_1 = (*rdi_3)[1]
                    zmm6[0] = zmm6[0] f- zmm5_1.d
                    zmm1 = (*rdi_3)[5]
                    zmm2 = (*rdi_3)[2]
                    int64_t rdi_4 = sx.q(*(r13 + 0x48))
                    var_190 = zmm0_1.d
                    zmm0_1.d = zmm3.d f+ zmm4_1[0]
                    var_1e0.d = zmm6[0]
                    zmm4_1[0] = zmm4_1[0] - zmm3[0]
                    int32_t rax_15 = (rdi_4 + 1).d
                    *(r13 + 0x48) = rax_15
                    int32_t var_18c_1 = zmm0_1.d
                    zmm0_1.d = zmm1.d f+ zmm2.d
                    var_1e0:4.d = zmm4_1[0]
                    zmm2.d = zmm2.d f- zmm1.d
                    var_188.d = zmm0_1.d
                    var_1d8 = zmm2.d
                    
                    if (rax_15 s> *(r13 + 0x4c))
                        sub_140638a00(r13 + 0x40)
                    
                    int64_t rcx_12 = *(r13 + 0x40)
                    int64_t rdx_10 = rdi_4 * 3
                    *(rcx_12 + (rdx_10 << 2)) = var_1e0
                    *(rcx_12 + (rdx_10 << 2) + 8) = var_1d8
                    int64_t rdi_5 = sx.q(*(r13 + 0x48))
                    int32_t rax_17 = (rdi_5 + 1).d
                    *(r13 + 0x48) = rax_17
                    
                    if (rax_17 s> *(r13 + 0x4c))
                        sub_140638a00(r13 + 0x40)
                    
                    int64_t rcx_14 = *(r13 + 0x40)
                    int64_t rdx_12 = rdi_5 * 3
                    *(rcx_14 + (rdx_12 << 2)) = var_190.q
                    *(rcx_14 + (rdx_12 << 2) + 8) = var_188.d
                    int64_t rdi_6 = sx.q(*(r13 + 0x58))
                    int32_t rax_19 = (rdi_6 + 1).d
                    *(r13 + 0x58) = rax_19
                    
                    if (rax_19 s> *(r13 + 0x5c))
                        sub_1405a4cf0(r13 + 0x50)
                    
                    var_1f4 += 1
                    *(*(r13 + 0x50) + (rdi_6 << 2)) = rbx_1
        
        sub_14059bdd0(&var_1c8)
        rcx_4 = var_1b4
        
        if (rcx_4 s>= *(var_1c0 + 0x18))
            break
        
        r15 &= not.d(r12)
        r12 = var_1c4
        rbx = arg2
    
    r13 = var_1a0

int64_t* r15_2 = var_1f0
char var_1f8_2 = 0
sub_14140fa50(r15_2, r14, arg3.b)
int64_t* rsi_1 = r15_2
void* r14_3 = &r15_2[sx.q(r14) * 2]

if (r15_2 != r14_3)
    int32_t r12_4 = var_1a8
    
    do
        void* rax_22 = *rsi_1
        int64_t* rdi_7 = *(rax_22 + 8)
        int32_t rbx_2 = *(rax_22 + 0x10)
        (*(*rdi_7 + 0x70))(rdi_7, &var_190, arg3)
        char var_18e
        char rcx_19
        
        if ((var_18e & 2) != 0 || (var_18e & 0x10) != 0 || (var_18e & 0x40) != 0
                || (var_18e & 0x20) != 0)
            rcx_19 = 1
        else
            rcx_19 = 0
        
        if ((var_188 & 4) != 0 && (var_18e & 1) != 0 && rcx_19 == 0)
            int32_t var_150_1 = rbx_2
            r12_4 += (*(*rdi_7 + 0x50))(rdi_7, &var_160)
        
        if (r12_4 s>= data_1439b6d00)
            break
        
        rsi_1 = &rsi_1[2]
    while (rsi_1 != r14_3)
    
    r13 = var_1a0

if (r15_2 != 0)
    sub_140a74f90(r15_2)

if (var_1f4 s> *(arg4 + 0x3008) - *(arg4 + 0x3034))
    sub_1412950a0(arg4 + 0x3000, var_1f4)
    int32_t rax_31
    
    if (var_1f4 u< 4)
        rax_31 = 1
    else
        uint32_t rbx_4 = var_1f4 u>> 1
        uint64_t rflags_2
        int32_t temp0_47
        temp0_47, rflags_2 = _bit_scan_reverse(rbx_4 + 8)
        void* arg_18
        arg_18.d = temp0_47
        int32_t rcx_23
        
        if (rbx_4 == 0xfffffff8)
            rcx_23 = 0x20
        else
            rcx_23 = 0x1f - temp0_47
        
        int32_t rcx_25 = rcx_23 << 0x1a s>> 0x1f
        uint64_t rflags_3
        int32_t temp0_48
        temp0_48, rflags_3 = _bit_scan_reverse(rbx_4 + 7)
        void* arg_20
        arg_20.d = temp0_48
        
        if (rcx_25 == 0)
            rax_31 = 1
        else
            rax_31 = 1 << ((not.d(rcx_25)).b & (0x20 - (0x1f - temp0_48.b)))
    
    int32_t rcx_28 = *(arg4 + 0x3048)
    
    if (rcx_28 == 0 || rcx_28 s< rax_31)
        *(arg4 + 0x3048) = rax_31
        sub_140908c40(arg4 + 0x3000)

int32_t rcx_30 = data_1439b6ca0
int32_t rax_32

if (rcx_30 s>= 0)
    rax_32 = 5
    
    if (rcx_30 s< 5)
        rax_32 = rcx_30
else
    rax_32 = 0

var_1e0 = r13
var_1d8.q = arg4
int128_t zmm0_2 = var_1e0.o
int32_t rbx_6 = *(&data_142f7e848 + (sx.q(rax_32) << 2))
void** const var_128 = &data_142d5ecb0
void*** var_138 = nullptr
int64_t (* var_148)(int64_t* arg1) = sub_141419550
int128_t var_120 = zmm0_2
int64_t* rax_34 = sub_140958c20(&var_1e0, nullptr, 0xff)
void* rdx_19 = *rax_34
*(rdx_19 + 0x10) = var_148
*(rdx_19 + 0x20) = var_138
*(rdx_19 + 0x30) = var_128.o
int128_t var_118
*(rdx_19 + 0x40) = var_118
int64_t (* rcx_34)(int64_t* arg1) = var_148

if (*(rdx_19 + 0x10) != 0)
    rcx_34 = nullptr

*(rdx_19 + 0x50) = rbx_6
void* rcx_35 = *rax_34
int32_t r8_5 = rax_34[2].d
int64_t* rdx_20 = rax_34[1]
void* rax_35 = *(rcx_35 + 0x68)
*arg1 = rax_35

if (rax_35 != 0)
    *(rax_35 + 0x48) += 1

sub_1409787e0(rcx_35, rdx_20, r8_5, 1)

if (rcx_34 != 0)
    void** const* rcx_36 = &var_128
    
    if (var_138 != 0)
        rcx_36 = var_138
    
    (*rcx_36)[2](rcx_36)

return arg1
