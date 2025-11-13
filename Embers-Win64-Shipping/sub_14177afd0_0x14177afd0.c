// 函数: sub_14177afd0
// 地址: 0x14177afd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
void* rdx = nullptr
void* r9 = nullptr
int32_t r12 = 0
int32_t r13 = 0
int64_t* rdi = *arg5
int32_t i_5 = arg5[1].d
int32_t r15 = 0
void* rax = arg3
uint64_t i_4 = 0
int64_t* r8 = nullptr
int64_t result_1 = 0
int32_t i_8 = 0
int32_t var_134 = 0
void* var_150 = nullptr
int32_t var_144 = 0
int64_t* var_f8 = nullptr
int32_t var_154 = 0
int32_t var_ec = 0
void* var_b0 = nullptr
int32_t i_6 = i_5

if (i_5 != 0)
    sub_1407c3650(&var_b0, i_5, 0)
    rdx = var_b0
    void* rcx_3 = rdx - rdi
    int32_t i
    
    do
        *(rdi + rcx_3) = *rdi
        *(rdi + rcx_3 + 8) = rdi[1].d
        rdi += 0xc
        i = i_5
        i_5 -= 1
    while (i != 1)
    r9 = var_150
    r8 = var_f8
    i_5 = arg5[1].d
    rax = arg3

int32_t var_100 = 0
uint64_t var_188
uint64_t var_178
uint64_t var_130

if (i_5 s> 0)
    int32_t i_7 = i_8
    int64_t rdi_1 = 0
    bool cond:0_1
    
    do
        uint64_t r8_1 = *(rax + 0x28)
        int32_t rcx_4 = *(rdx + rdi_1 + 8)
        int64_t i_9 = sx.q(i_7)
        var_188 = *(rdx + rdi_1)
        var_130 = r8_1
        int32_t rax_3 = (i_9 + 1).d
        int32_t var_e8_1 = i_9.d
        int32_t r14 = rax_3
        
        if (rax_3 s> r12)
            sub_14083a7e0(&result_1)
            r8_1 = var_130
            r12 = var_134
            r14 = rax_3
        
        int64_t rcx_6 = i_9 * 3
        int64_t result_2 = result_1
        int32_t rsi = r14 + 1
        int64_t rdx_3 = sx.q(var_188.d) * 3
        *(result_2 + (rcx_6 << 2)) = *(r8_1 + (rdx_3 << 2))
        *(result_2 + (rcx_6 << 2) + 8) = *(r8_1 + (rdx_3 << 2) + 8)
        int64_t rbx_2 = *(arg3 + 0x28)
        
        if (rsi s> r12)
            sub_14083a7e0(&result_1)
            result_2 = result_1
            r12 = var_134
        
        int64_t rdx_5 = sx.q(var_188:4.d) * 3
        int64_t rcx_8 = sx.q(r14) * 3
        *(result_2 + (rcx_8 << 2)) = *(rbx_2 + (rdx_5 << 2))
        i_7 = rsi + 1
        *(result_2 + (rcx_8 << 2) + 8) = *(rbx_2 + (rdx_5 << 2) + 8)
        int64_t r14_1 = *(arg3 + 0x28)
        
        if (i_7 s> r12)
            sub_14083a7e0(&result_1)
            result_2 = result_1
            r12 = var_134
        
        int64_t rdx_7 = sx.q(rcx_4) * 3
        int64_t rcx_10 = sx.q(rsi) * 3
        *(result_2 + (rcx_10 << 2)) = *(r14_1 + (rdx_7 << 2))
        int32_t r14_2 = r15 + 1
        *(result_2 + (rcx_10 << 2) + 8) = *(r14_1 + (rdx_7 << 2) + 8)
        void* rsi_2 = *arg4
        
        if (r14_2 s> r13)
            sub_14083a7e0(&var_150)
            r13 = var_144
        
        r9 = var_150
        int64_t rcx_12 = sx.q(r15) * 3
        *(r9 + (rcx_12 << 2)) = *(rsi_2 + rdi_1)
        int32_t rsi_3 = r14_2 + 1
        *(r9 + (rcx_12 << 2) + 8) = *(rsi_2 + rdi_1 + 8)
        void* r15_1 = *arg4
        
        if (rsi_3 s> r13)
            sub_14083a7e0(&var_150)
            r9 = var_150
            r13 = var_144
        
        int64_t rcx_14 = sx.q(r14_2) * 3
        *(r9 + (rcx_14 << 2)) = *(r15_1 + rdi_1)
        r15 = rsi_3 + 1
        *(r9 + (rcx_14 << 2) + 8) = *(r15_1 + rdi_1 + 8)
        void* r14_3 = *arg4
        
        if (r15 s> r13)
            sub_14083a7e0(&var_150)
            r9 = var_150
            r13 = var_144
        
        int64_t rsi_4 = sx.q(var_154)
        int64_t rcx_16 = sx.q(rsi_3) * 3
        *(r9 + (rcx_16 << 2)) = *(r14_3 + rdi_1)
        int32_t rdx_11 = (rsi_4 + 1).d
        *(r9 + (rcx_16 << 2) + 8) = *(r14_3 + rdi_1 + 8)
        var_178.d = var_e8_1
        var_154 = rdx_11
        var_178:4.d = var_e8_1 + 1
        
        if (rdx_11 s> var_ec)
            sub_14083a7e0(&var_f8)
            r9 = var_150
            var_154 = rdx_11
        
        r8 = var_f8
        int64_t rcx_19 = rsi_4 * 3
        rdi_1 += 0xc
        rdx = var_b0
        *(r8 + (rcx_19 << 2)) = var_178
        *(r8 + (rcx_19 << 2) + 8) = var_e8_1 + 2
        cond:0_1 = var_100 + 1 s< arg5[1].d
        rax = arg3
        var_100 += 1
    while (cond:0_1)
    rbx = arg1
    i_4 = zx.q(i_7)

int64_t var_e0 = 0
int64_t var_d8 = 0
float var_1a8[0x2]
int64_t var_198
uint64_t var_168
int32_t var_160
uint128_t zmm1
float zmm4[0x2]
double zmm5[0x2]

if (i_4.d s> 0)
    void* rdi_2 = r9 + 4
    double* r14_6 = result_1 - r9
    uint64_t i_1
    
    do
        zmm1 = *rdi_2
        zmm4 = *(rdi_2 - 4)
        double zmm3 = *(r14_6 + rdi_2)
        float zmm2[0x2] = *(r14_6 + rdi_2 - 4)
        zmm5 = *(r14_6 + rdi_2 + 4)
        uint64_t var_190_1 = (_mm_cvtps_pd((*(rdi_2 + 4)).q)).q
        var_198 = (_mm_cvtps_pd(zmm1.q)).q
        zmm4 = _mm_cvtps_pd(zmm4).q
        _mm_cvtps_pd(zmm3)
        zmm2 = _mm_cvtps_pd(zmm2).q
        float var_1a0_1[0x2] = zmm4
        var_1a8 = (_mm_cvtps_pd(zmm5[0])).q
        sub_140a2e390(&var_168, u"v %f %f %f %f %f %f\n", zmm2)
        int32_t r8_4
        
        if (var_160 == 0)
            r8_4 = 0
        else
            r8_4 = var_160 - 1
        
        sub_140a20ba0(&var_e0, var_168, r8_4)
        uint64_t rcx_24 = var_168
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        rdi_2 += 0xc
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    r8 = var_f8

int64_t* rdi_3 = r8
void* rsi_5 = r8 + sx.q(var_154) * 0xc

if (r8 != rsi_5)
    do
        int32_t rax_24 = rdi_3[1].d
        var_178 = *rdi_3
        int32_t r8_5 = var_178.d
        var_1a8[0] = rax_24 + 1
        sub_140a2e390(&var_168, u"f %d %d %d\n", zx.q(r8_5 + 1))
        int32_t r8_8
        
        if (var_160 == 0)
            r8_8 = 0
        else
            r8_8 = var_160 - 1
        
        sub_140a20ba0(&var_e0, var_168, r8_8)
        uint64_t rcx_28 = var_168
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        rdi_3 += 0xc
    while (rdi_3 != rsi_5)

int32_t rax_32 = *(rbx + 0x28)
int32_t r14_7 = 0
uint128_t zmm6
uint128_t var_58 = zmm6
uint128_t zmm7
uint128_t var_68 = zmm7
int64_t var_d0
__builtin_memset(&var_d0, 0, 0x20)
int64_t var_c0
uint128_t zmm0

if (rax_32 s> 0)
    do
        int32_t i_2 = 0
        
        if (*(rbx + 0x2c) s> 0)
            do
                int32_t j = 0
                
                if (*(rbx + 0x30) s> 0)
                    zmm6.d = _mm_cvtepi32_ps(zx.o(i_2)).d f+ 0.5f
                    zmm7.d = _mm_cvtepi32_ps(zx.o(r14_7)).d f+ 0.5f
                    
                    do
                        int32_t rax_27 = *(rbx + 0x44) * r14_7
                        zmm1.d = zmm7.d f* *(rbx + 0x34)
                        zmm0 = _mm_cvtepi32_ps(zx.o(j))
                        zmm1.d = zmm1.d f+ *(rbx + 0x10)
                        zmm0.d = zmm0.d f+ 0.5f
                        zmm0.d = zmm0.d f* *(rbx + 0x3c)
                        zmm0.d = zmm0.d f+ *(rbx + 0x18)
                        zmm5 = _mm_cvtps_pd((
                            *(*(rbx + 0x50) + (sx.q((rax_27 + i_2) * *(rbx + 0x48) + j) << 2)))[0])
                        zmm4 = _mm_cvtps_pd(zmm0.q).q
                        zmm5 = _mm_unpacklo_pd(zmm5, zmm5[0])
                        zmm0.d = zmm6.d f* *(rbx + 0x38)
                        var_198.o = zmm5
                        zmm0.d = zmm0.d f+ *(rbx + 0x14)
                        int64_t var_1a0_2 = zmm5.q
                        var_1a8 = zmm4
                        sub_140a2e390(&var_168, u"v %f %f %f %f %f %f\n", fconvert.d(zmm1.d))
                        int32_t r8_11
                        
                        if (var_160 == 0)
                            r8_11 = 0
                        else
                            r8_11 = var_160 - 1
                        
                        sub_140a20ba0(&var_c0, var_168, r8_11)
                        uint64_t rcx_32 = var_168
                        
                        if (rcx_32 != 0)
                            sub_140a74f90(rcx_32)
                        
                        j += 1
                    while (j s< *(rbx + 0x30))
                
                i_2 += 1
            while (i_2 s< *(rbx + 0x2c))
        
        rax_32 = *(rbx + 0x28)
        r14_7 += 1
    while (r14_7 s< rax_32)

int32_t i_3 = 0

if (rax_32 s> 0)
    uint128_t zmm8
    uint128_t var_78_1 = zmm8
    uint128_t zmm9
    uint128_t var_88_1 = zmm9
    
    do
        int32_t j_1 = 0
        
        if (*(rbx + 0x2c) s> 0)
            do
                int32_t k = 0
                
                if (*(rbx + 0x30) s> 0)
                    zmm8.d = _mm_cvtepi32_ps(zx.o(j_1)).d f+ 0.5f
                    zmm9.d = _mm_cvtepi32_ps(zx.o(i_3)).d f+ 0.5f
                    
                    do
                        zmm5 = zx.o(0)
                        int64_t rcx_33 = sx.q((i_3 * *(rbx + 0x64) + j_1) * *(rbx + 0x68) + k) * 3
                        int64_t rax_39 = *(rbx + 0x70)
                        zmm1 = zx.o(*(rax_39 + (rcx_33 << 2)))
                        int32_t rax_40 = *(rax_39 + (rcx_33 << 2) + 8)
                        zmm6.q = fconvert.d(_mm_shuffle_ps(zmm1, zmm1, 0x55).d)
                        zmm5[0] = fconvert.d(zmm1.d)
                        var_178 = zmm1.q
                        zmm1.d = zmm9.d f* *(rbx + 0x34)
                        zmm0 = _mm_cvtepi32_ps(zx.o(k))
                        zmm1.d = zmm1.d f+ *(rbx + 0x10)
                        zmm0.d = zmm0.d f+ 0.5f
                        zmm7 = _mm_cvtps_pd(rax_40.q)
                        zmm0.d = zmm0.d f* *(rbx + 0x3c)
                        uint64_t var_190_2 = zmm7.q
                        zmm0.d = zmm0.d f+ *(rbx + 0x18)
                        uint64_t var_198_1 = zmm6.q
                        int64_t var_1a0_3 = zmm5.q
                        zmm4 = _mm_cvtps_pd(zmm0.q).q
                        zmm0.d = zmm8.d f* *(rbx + 0x38)
                        var_1a8 = zmm4
                        zmm0.d = zmm0.d f+ *(rbx + 0x14)
                        sub_140a2e390(&var_168, u"v %f %f %f %f %f %f\n", fconvert.d(zmm1.d))
                        int32_t r8_14
                        
                        if (var_160 == 0)
                            r8_14 = 0
                        else
                            r8_14 = var_160 - 1
                        
                        sub_140a20ba0(&var_d0, var_168, r8_14)
                        uint64_t rcx_36 = var_168
                        
                        if (rcx_36 != 0)
                            sub_140a74f90(rcx_36)
                        
                        k += 1
                    while (k s< *(rbx + 0x30))
                
                j_1 += 1
            while (j_1 s< *(rbx + 0x2c))
        
        i_3 += 1
    while (i_3 s< *(rbx + 0x28))

var_178 = 0
int32_t var_170_1 = 0
sub_1405947f0(&var_178, 0xf)
int32_t rdi_4 = var_170_1 + 0xf

if (rdi_4 s> 0)
    sub_140594770(&var_178)

uint64_t rsi_6 = var_178
var_1a8[0].w = 0x3f
sub_1405a7220(rsi_6, 0xf, "/DebugLevelSet", 0xf, 0x3f)
int64_t* rax_41 = sub_140b257f0()
int32_t rbx_3 = rax_41[1].d

if (rbx_3 s> 1)
    int32_t rdi_5
    
    if (rdi_4 == 0)
        rdi_5 = 0
    else
        rdi_5 = rdi_4 - 1
    
    int32_t rax_42
    
    if (rbx_3 == 0)
        rax_42 = 1
    
    if (rbx_3 != 0 || rdi_5 == 0)
        rax_42 = 0
    
    int64_t r14_8 = *rax_41
    int32_t rcx_40 = rdi_5 + rax_42
    var_178 = 0
    var_170_1 = rbx_3
    
    if (rbx_3 != 0 || rcx_40 != 0)
        sub_1405a4c70(&var_178, rbx_3 + rcx_40, 0)
        memcpy(var_178, r14_8, rbx_3 * 2)
    else
        var_170_1 = 0
    
    sub_140a20ba0(&var_178, rsi_6, rdi_5)
    rdi_4 = var_170_1
    arg5 = var_178
    
    if (rsi_6 != 0)
        sub_140a74f90(rsi_6)
else
    arg5 = rsi_6

uint64_t r12_1 = 0
uint64_t var_120 = 0
int32_t rsi_7 = arg6[1].d
int64_t rbx_4 = *arg6

if (rsi_7 != 0)
    sub_1405a4c70(&var_120, rsi_7, 0)
    r12_1 = var_120
    memcpy(r12_1, rbx_4, rsi_7 * 2)

var_188 = 0
int64_t var_180 = 0
sub_1405947f0(&var_188, 9)
int32_t r15_2 = var_180:4.d
int32_t rbx_5 = var_180.d + 9
var_180.d = rbx_5

if (rbx_5 s> r15_2)
    sub_140594770(&var_188)
    r15_2 = var_180:4.d
    rbx_5 = var_180.d

var_1a8[0].w = 0x3f
uint64_t r14_9 = var_188
sub_1405a7220(r14_9, 9, "Mesh.obj", 9, 0x3f)
uint64_t r15_3

if (rsi_7 s> 1)
    int32_t rbx_6
    
    if (rbx_5 == 0)
        r15_3 = 0
        rbx_6 = 0
    else
        rbx_6 = rbx_5 - 1
        r15_3 = 0
    
    int32_t rax_45
    
    if (rsi_7 == 0)
        rax_45 = 1
    
    if (rsi_7 != 0 || rbx_6 == 0)
        rax_45 = 0
    
    var_188 = 0
    int32_t rcx_50 = rax_45 + rbx_6
    var_180.d = rsi_7
    
    if (rsi_7 != 0 || rcx_50 != 0)
        sub_1405a4c70(&var_188, rsi_7 + rcx_50, 0)
        memcpy(var_188, r12_1, rsi_7 * 2)
    else
        var_180:4.d = 0
    
    sub_140a20ba0(&var_188, r14_9, rbx_6)
    var_178 = var_188
    var_170_1 = var_180.d
    var_170_1 = var_180:4.d
    
    if (r14_9 != 0)
        sub_140a74f90(r14_9)
else
    var_170_1 = r15_2
    r15_3 = 0
    var_178 = r14_9
    var_170_1 = rbx_5

uint64_t var_110
int64_t* rax_49 = sub_140b20ee0(&var_110, &var_178, 0)

if (&var_178 != rax_49)
    uint64_t rcx_56 = var_178
    
    if (rcx_56 != 0)
        sub_140a74f90(rcx_56)
    
    var_178 = *rax_49
    *rax_49 = 0
    var_170_1 = rax_49[1].d
    var_170_1 = *(rax_49 + 0xc)
    rax_49[1] = 0

uint64_t rcx_58 = var_110

if (rcx_58 != 0)
    sub_140a74f90(rcx_58)

var_188 = 0
int64_t var_180_1 = 0
sub_1405947f0(&var_188, 2)
int32_t r14_10 = var_180_1:4.d
int32_t rbx_8 = var_180_1.d + 2
var_180_1.d = rbx_8

if (rbx_8 s> r14_10)
    sub_140594770(&var_188)
    r14_10 = var_180_1:4.d
    rbx_8 = var_180_1.d

uint64_t r12_2 = var_188
var_1a8[0].w = 0x3f
sub_1405a7220(r12_2, 2, &data_142d63b88, 2, 0x3f)
uint64_t r13_1

if (rdi_4 s> 1)
    int32_t rbx_9
    
    if (rbx_8 == 0)
        rbx_9 = 0
    else
        rbx_9 = rbx_8 - 1
    
    int32_t rax_52
    
    if (rdi_4 == 0)
        rax_52 = 1
    
    if (rdi_4 != 0 || rbx_9 == 0)
        rax_52 = 0
    
    var_188 = 0
    int32_t rcx_62 = rax_52 + rbx_9
    var_180_1.d = rdi_4
    
    if (rdi_4 != 0 || rcx_62 != 0)
        sub_1405a4c70(&var_188, rdi_4 + rcx_62, 0)
        memcpy(var_188, arg5, rdi_4 * 2)
    else
        var_180_1:4.d = 0
    
    sub_140a20ba0(&var_188, r12_2, rbx_9)
    r13_1 = var_188
    rbx_8 = var_180_1.d
    r14_10 = var_180_1:4.d
    var_188 = 0
    int64_t var_180_2 = 0
else
    r13_1 = r12_2
    r12_2 = 0

int32_t r14_11

if (rbx_8 s> 1)
    int32_t r15_5
    
    if (var_170_1 == 0)
        r15_5 = 0
    else
        r15_5 = var_170_1 - 1
    
    int32_t rax_53
    
    if (rbx_8 != 0 || r15_5 == 0)
        rax_53 = 0
    else
        rax_53 = rbx_8 + 1
    
    var_130 = r13_1
    int32_t rdx_37 = rbx_8 + rax_53 + r15_5
    int32_t var_124_1 = r14_10
    
    if (rdx_37 s> r14_10)
        sub_1405947f0(&var_130, rdx_37)
    
    sub_140a20ba0(&var_130, var_178, r15_5)
    r14_11 = rbx_8
    r15_3 = var_130
else
    r14_11 = var_170_1
    uint64_t rbx_10 = var_178
    var_168 = 0
    
    if (r14_11 != 0)
        sub_1405a4c70(&var_168, r14_11, 0)
        r15_3 = var_168
        memcpy(r15_3, rbx_10, r14_11 * 2)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)

if (r12_2 != 0)
    sub_140a74f90(r12_2)

uint64_t rbx_11 = &data_142d40450

if (r14_11 != 0)
    rbx_11 = r15_3

sub_140a464c0()
var_1a8[0] = 0

if (sub_140b27210(&var_e0, rbx_11, 0, &data_14399ea08, 0) == 0)
    int16_t* rcx_73
    
    if (*(arg2 + 0x10) == 0)
        rcx_73 = &data_142d40450
    else
        rcx_73 = *(arg2 + 8)
    
    sub_140a54570(rcx_73, &data_1437020ab)
    *arg2 = 0x101

if (r15_3 != 0)
    sub_140a74f90(r15_3)

uint64_t rcx_75 = var_178

if (rcx_75 != 0)
    sub_140a74f90(rcx_75)

uint64_t r12_3 = 0
var_188 = 0
int64_t var_180_3 = 0
sub_1405947f0(&var_188, 0xb)
int32_t r15_6 = var_180_3:4.d
int32_t rbx_13 = var_180_3.d + 0xb
var_180_3.d = rbx_13

if (rbx_13 s> r15_6)
    sub_140594770(&var_188)
    r15_6 = var_180_3:4.d
    rbx_13 = var_180_3.d

uint64_t r14_12 = var_188
var_1a8[0].w = 0x3f
sub_1405a7220(r14_12, 0xb, "Volume.obj", 0xb, 0x3f)

if (rsi_7 s> 1)
    int32_t rbx_14
    
    if (rbx_13 == 0)
        rbx_14 = 0
    else
        rbx_14 = rbx_13 - 1
    
    int32_t rax_55
    
    if (rsi_7 == 0)
        rax_55 = rsi_7 + 1
    
    if (rsi_7 != 0 || rbx_14 == 0)
        rax_55 = 0
    
    var_188 = 0
    int32_t rcx_79 = rax_55 + rbx_14
    var_180_3.d = rsi_7
    
    if (rsi_7 != 0 || rcx_79 != 0)
        sub_1405a4c70(&var_188, rcx_79 + rsi_7, 0)
        memcpy(var_188, var_120, rsi_7 * 2)
    else
        var_180_3:4.d = 0
    
    sub_140a20ba0(&var_188, r14_12, rbx_14)
    var_178 = var_188
    var_170_1 = var_180_3.d
    var_170_1 = var_180_3:4.d
    
    if (r14_12 != 0)
        sub_140a74f90(r14_12)
else
    var_178 = r14_12
    var_170_1 = rbx_13
    var_170_1 = r15_6

int64_t* rax_59 = sub_140b20ee0(&var_110, &var_178, 0)

if (&var_178 != rax_59)
    uint64_t rcx_85 = var_178
    
    if (rcx_85 != 0)
        sub_140a74f90(rcx_85)
    
    var_178 = *rax_59
    *rax_59 = 0
    var_170_1 = rax_59[1].d
    var_170_1 = *(rax_59 + 0xc)
    rax_59[1] = 0

uint64_t rcx_87 = var_110

if (rcx_87 != 0)
    sub_140a74f90(rcx_87)

var_188 = 0
int64_t var_180_4 = 0
sub_1405947f0(&var_188, 2)
int32_t r14_13 = var_180_4:4.d
int32_t rbx_16 = var_180_4.d + 2
var_180_4.d = rbx_16

if (rbx_16 s> r14_13)
    sub_140594770(&var_188)
    r14_13 = var_180_4:4.d
    rbx_16 = var_180_4.d

var_1a8[0].w = 0x3f
uint64_t r13_2 = var_188
sub_1405a7220(r13_2, 2, &data_142d63b88, 2, 0x3f)
uint64_t r15_7

if (rdi_4 s> 1)
    int32_t rbx_17
    
    if (rbx_16 == 0)
        rbx_17 = 0
    else
        rbx_17 = rbx_16 - 1
    
    int32_t rax_62
    
    if (rdi_4 == 0)
        rax_62 = rdi_4 + 1
    
    if (rdi_4 != 0 || rbx_17 == 0)
        rax_62 = 0
    
    var_188 = 0
    int32_t rcx_91 = rbx_17 + rax_62
    var_180_4.d = rdi_4
    
    if (rdi_4 != 0 || rcx_91 != 0)
        sub_1405a4c70(&var_188, rcx_91 + rdi_4, 0)
        memcpy(var_188, arg5, rdi_4 * 2)
    else
        var_180_4:4.d = 0
    
    sub_140a20ba0(&var_188, r13_2, rbx_17)
    r15_7 = var_188
    rbx_16 = var_180_4.d
    var_130 = r15_7
    int32_t var_124_3 = var_180_4:4.d
    int64_t var_180_5 = 0
    var_188 = 0
else
    r15_7 = r13_2
    var_130 = r13_2
    r13_2 = 0
    int32_t var_124_2 = r14_13

int32_t var_128_2 = rbx_16
int32_t var_108
int32_t r14_14

if (rbx_16 s> 1)
    int32_t r14_16
    
    if (var_170_1 == 0)
        r14_16 = 0
    else
        r14_16 = var_170_1 - 1
    
    int32_t rax_64
    
    if (rbx_16 == 0)
        rax_64 = rbx_16 + 1
    
    if (rbx_16 != 0 || r14_16 == 0)
        rax_64 = 0
    
    sub_140596690(&var_110, &var_130, r14_16 + rax_64)
    sub_140a20ba0(&var_110, var_178, r14_16)
    r14_14 = var_108
    r12_3 = var_110
    r15_7 = var_130
else
    r14_14 = var_170_1
    uint64_t rbx_18 = var_178
    var_168 = 0
    
    if (r14_14 != 0)
        sub_1405a4c70(&var_168, r14_14, 0)
        r12_3 = var_168
        memcpy(r12_3, rbx_18, r14_14 * 2)

if (r15_7 != 0)
    sub_140a74f90(r15_7)

if (r13_2 != 0)
    sub_140a74f90(r13_2)

int16_t* const r13_3 = &data_142d40450
uint64_t rbx_19 = &data_142d40450

if (r14_14 != 0)
    rbx_19 = r12_3

sub_140a464c0()
var_1a8[0] = 0

if (sub_140b27210(&var_c0, rbx_19, 0, &data_14399ea08, 0) == 0)
    int16_t* rcx_102
    
    if (*(arg2 + 0x10) == 0)
        rcx_102 = &data_142d40450
    else
        rcx_102 = *(arg2 + 8)
    
    sub_140a54570(rcx_102, &data_1437020ab)
    *arg2 = 0x101

if (r12_3 != 0)
    sub_140a74f90(r12_3)

uint64_t rcx_104 = var_178

if (rcx_104 != 0)
    sub_140a74f90(rcx_104)

var_188 = 0
int64_t var_180_6 = 0
sub_1405947f0(&var_188, 0xc)
int32_t r15_8 = var_180_6:4.d
int32_t rbx_21 = var_180_6.d + 0xc
var_180_6.d = rbx_21

if (rbx_21 s> r15_8)
    sub_140594770(&var_188)
    r15_8 = var_180_6:4.d
    rbx_21 = var_180_6.d

uint64_t r14_17 = var_188
var_1a8[0].w = 0x3f
sub_1405a7220(r14_17, 0xc, "Volume2.obj", 0xc, 0x3f)
uint64_t r12_4

if (rsi_7 s> 1)
    int32_t rbx_22
    
    if (rbx_21 == 0)
        rbx_22 = 0
    else
        rbx_22 = rbx_21 - 1
    
    int32_t rax_66
    
    if (rsi_7 == 0)
        rax_66 = rsi_7 + 1
    
    if (rsi_7 != 0 || rbx_22 == 0)
        rax_66 = 0
    
    r12_4 = var_120
    var_188 = 0
    var_1a8[0] = rax_66 + rbx_22
    sub_140596860(&var_188, r12_4, rsi_7, 0, 0x3f)
    sub_140a20ba0(&var_188, r14_17, rbx_22)
    var_178 = var_188
    var_170_1 = var_180_6.d
    var_170_1 = var_180_6:4.d
    
    if (r14_17 != 0)
        sub_140a74f90(r14_17)
else
    r12_4 = var_120
    var_170_1 = r15_8
    var_178 = r14_17
    var_170_1 = rbx_21

int64_t* rax_71 = sub_140b20ee0(&var_110, &var_178, 0)

if (&var_178 != rax_71)
    uint64_t rcx_112 = var_178
    
    if (rcx_112 != 0)
        sub_140a74f90(rcx_112)
    
    var_178 = *rax_71
    *rax_71 = 0
    var_170_1 = rax_71[1].d
    var_170_1 = *(rax_71 + 0xc)
    rax_71[1] = 0

uint64_t rcx_114 = var_110

if (rcx_114 != 0)
    sub_140a74f90(rcx_114)

var_188 = 0
int64_t var_180_7 = 0
sub_1405947f0(&var_188, 2)
int32_t rsi_8 = var_180_7:4.d
int32_t rbx_24 = var_180_7.d + 2
var_180_7.d = rbx_24

if (rbx_24 s> rsi_8)
    sub_140594770(&var_188)
    rsi_8 = var_180_7:4.d
    rbx_24 = var_180_7.d

uint64_t r15_9 = var_188
var_1a8[0].w = 0x3f
sub_1405a7220(r15_9, 2, &data_142d63b88, 2, 0x3f)
uint64_t rsi_9
uint64_t r14_18

if (rdi_4 s> 1)
    int32_t rbx_25
    
    if (rbx_24 == 0)
        rsi_9 = 0
        rbx_25 = 0
    else
        rbx_25 = rbx_24 - 1
        rsi_9 = 0
    
    int32_t rax_74
    
    if (rdi_4 == 0)
        rax_74 = rdi_4 + 1
    
    if (rdi_4 != 0 || rbx_25 == 0)
        rax_74 = 0
    
    var_188 = 0
    var_1a8[0] = rax_74 + rbx_25
    sub_140596860(&var_188, arg5, rdi_4, 0, 0x3f)
    sub_140a20ba0(&var_188, r15_9, rbx_25)
    r14_18 = var_188
    rbx_24 = var_180_7.d
    var_120 = r14_18
    int32_t var_114_1 = var_180_7:4.d
    int64_t var_180_8 = 0
    var_188 = 0
else
    r14_18 = r15_9
    var_120 = r15_9
    r15_9 = 0
    int32_t var_114 = rsi_8
    rsi_9 = 0

int32_t var_118_1 = rbx_24
int32_t rdi_6

if (rbx_24 s> 1)
    int32_t rdi_8
    
    if (var_170_1 == 0)
        rdi_8 = 0
    else
        rdi_8 = var_170_1 - 1
    
    int32_t rax_77
    
    if (rbx_24 == 0)
        rax_77 = rbx_24 + 1
    
    if (rbx_24 != 0 || rdi_8 == 0)
        rax_77 = 0
    
    sub_140596690(&var_110, &var_120, rdi_8 + rax_77)
    sub_140a20ba0(&var_110, var_178, rdi_8)
    rdi_6 = var_108
    rsi_9 = var_110
    r14_18 = var_120
else
    rdi_6 = var_170_1
    uint64_t rbx_26 = var_178
    var_168 = 0
    
    if (rdi_6 != 0)
        sub_1405a4c70(&var_168, rdi_6, 0)
        rsi_9 = var_168
        memcpy(rsi_9, rbx_26, rdi_6 * 2)

if (r14_18 != 0)
    sub_140a74f90(r14_18)

if (r15_9 != 0)
    sub_140a74f90(r15_9)

uint64_t rbx_27 = &data_142d40450

if (rdi_6 != 0)
    rbx_27 = rsi_9

sub_140a464c0()

if (sub_140b27210(&var_d0, rbx_27, 0, &data_14399ea08, 0) == 0)
    if (*(arg2 + 0x10) != 0)
        r13_3 = *(arg2 + 8)
    
    sub_140a54570(r13_3, &data_1437020ab)
    *arg2 = 0x101

if (rsi_9 != 0)
    sub_140a74f90(rsi_9)

uint64_t rcx_129 = var_178

if (rcx_129 != 0)
    sub_140a74f90(rcx_129)

if (r12_4 != 0)
    sub_140a74f90(r12_4)

if (arg5 != 0)
    sub_140a74f90(arg5)

int64_t rcx_132 = var_d0

if (rcx_132 != 0)
    sub_140a74f90(rcx_132)

int64_t rcx_133 = var_c0

if (rcx_133 != 0)
    sub_140a74f90(rcx_133)

int64_t rcx_134 = var_e0

if (rcx_134 != 0)
    sub_140a74f90(rcx_134)

void* rcx_135 = var_b0

if (rcx_135 != 0)
    sub_140a74f90(rcx_135)

int64_t* rcx_136 = var_f8

if (rcx_136 != 0)
    sub_140a74f90(rcx_136)

void* rcx_137 = var_150

if (rcx_137 != 0)
    sub_140a74f90(rcx_137)

int64_t result = result_1

if (result != 0)
    result = sub_140a74f90(result)

int64_t rcx_140 = *arg6

if (rcx_140 == 0)
    return result

return sub_140a74f90(rcx_140)
