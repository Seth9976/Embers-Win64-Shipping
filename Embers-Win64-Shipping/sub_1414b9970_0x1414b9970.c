// 函数: sub_1414b9970
// 地址: 0x1414b9970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
void* const r15 = arg7
int64_t var_2f0 = arg3
float var_2c8[0x4]
int128_t zmm7

if (arg9 != 0)
    var_2c8 = data_142d3f660
    float var_228[0x4][0x4]
    zmm7 = sub_14148d370(r15, &var_228, &var_2c8, nullptr)
    sub_1405eb5d0(arg2, &var_2f0, arg1, &var_228, 0)
    sub_1405d0e10(arg2, &var_2f0, &arg1[3], &var_2c8, 0)

data_142f8e7f0
int128_t var_2a8
__builtin_memcpy(&var_2a8, 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
        bf", 
    0x30)
float var_2e8
float var_298[0x4]
uint128_t zmm2

if (arg8 != 0xffffffff)
    int64_t* rax_3 = *(arg6 + 0x20)
    int128_t var_1e8
    __builtin_memcpy(&var_1e8, 
        "\x00\x00\x00\x00\x00\x00\x00\x4a\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x4a", 0x14)
    int32_t var_1d4_1 = 0
    int64_t var_168_1 = 0
    int32_t var_158_1 = 0
    int32_t var_154_1 = 6
    int64_t var_c8_1 = 0
    int32_t var_b8_1 = 0
    int32_t var_b4_1 = 8
    char var_88_1 = 0
    int32_t var_84_1 = 0xffffffff
    int32_t var_80_1 = 0x3f800000
    int64_t rbx_1 = *rax_3
    int128_t var_68_1 = zmm7
    zmm7 = zx.o(0)
    int32_t var_300
    var_300.q = &var_1e8
    int32_t var_308
    var_308.b = sub_14122cc00(arg6)
    (*(rbx_1 + 0xc0))(*(arg6 + 0x20), &var_2c8, arg4, zx.q(arg8), var_308, var_300)
    float zmm1[0x4] = var_1e8:8.d
    float zmm0[0x4]
    
    if (not(zmm1[0] f== zmm7.d))
        zmm0 = 0x3f800000
        zmm0[0] = 1f / zmm1[0]
        var_2a8.d = zmm0[0]
    
    int32_t var_a8
    float zmm3[0x4] = var_a8
    int32_t var_9c
    zmm2 = var_9c ^ data_142d3f780
    int64_t* rax_5 = *(arg6 + 0x20)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    int32_t var_a4
    temp0_1[0] = var_a4[0]
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    int32_t var_a0
    temp0_2[0] = var_a0[0]
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
    temp0_3[0] = zmm2.d
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
    var_298 = temp0_4
    int64_t rbx_2 = *rax_5
    var_2c8 = temp0_4
    char rax_6 = sub_14122cc00(arg6)
    
    if (arg8 != (*(rbx_2 + 0xa0))(*(arg6 + 0x20), arg4, zx.q(rax_6)) - 1)
        zmm1 = var_1e8:0xc.d
        
        if (not(zmm1[0] f!= zmm7.d))
            zmm1 = 0x38d1b717
        
        int32_t var_98
        zmm3 = var_98
        zmm0 = 0x3f800000
        int32_t var_8c
        zmm2 = var_8c ^ data_142d3f780
        float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        zmm0[0] = 1f / zmm1[0]
        int32_t var_94
        temp0_5[0] = var_94[0]
        var_2a8:4.d = zmm0[0]
        float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
        int32_t var_90
        temp0_6[0] = var_90[0]
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
        temp0_7[0] = zmm2.d
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
        var_2c8 = temp0_8
        float var_288_1[0x4] = temp0_8
    
    int32_t rbx_3 = *(arg4 + 0x1548)
    int64_t rdi_1 = **(arg6 + 0x20)
    char rax_10 = sub_14122cc00(arg6)
    (*(rdi_1 + 0x70))(*(arg6 + 0x20), &var_2e8, zx.q(rbx_3), zx.q(rax_10), *(arg4 + 0x278))
    int32_t var_2e4
    zmm0 = var_2e4
    zmm1 = var_2e8
    zmm1[0] = zmm1[0] * zmm0[0]
    var_2a8:8.d = zmm0[0]
    var_2a8:0xc.d = (zmm1 ^ data_142d3f780)[0]
    
    if (var_c8_1 != 0)
        sub_140a74f90(var_c8_1)
    
    if (var_168_1 != 0)
        sub_140a74f90(var_168_1)

sub_1405d0e10(arg2, &var_2f0, &arg1[9], &var_2a8, 0)
int128_t zmm6 = sub_141083230(arg2, &var_2f0, &arg1[0xc], &var_298, 2, 0)
char rbx_4 = *(*(arg6 + 0x20) + 0x13c)
int64_t rbx_5

if (arg9 == 0)
    rbx_5 = arg3
    r15 = nullptr
else
    float zmm1_1 = *(r15 + 0x8f8)
    var_2e8 = *(r15 + 0x8f4)
    float var_2e4_1 = zmm1_1
    float var_2e0_1 = *(r15 + 0x8fc)
    float var_2dc_1 = zmm6.d / (*(r15 + 0x164) f- *(r15 + 0x168))
    zmm6 = sub_1405d0e10(arg2, &var_2f0, &arg1[6], &var_2e8, 0)
    int64_t rdi_2 = 0
    
    if (((rbx_4 - 1) & 0xfd) == 0)
        void* rcx_14 = data_143f10e68
        
        if (rcx_14 != 0)
            int64_t* rcx_15 = *(rcx_14 + 0x10)
            
            if (rcx_15 != 0)
                rdi_2 = (*(*rcx_15 + 8))(rcx_15)
    else
        rdi_2 = *(*(r15 + 0x38) + 0x10)
    
    int64_t* r12_1 = data_14395fa10
    
    if (arg1[0x10] u<= 0)
        rbx_5 = arg3
    else
        int64_t rcx_17 = *(arg2 + 0x30) + 7
        var_2e8 = zx.d(arg1[0xf])
        void*** rcx_18 = rcx_17 & 0xfffffffffffffff8
        void* rax_18 = &rcx_18[5]
        
        if (rax_18 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_18 = &rcx_18[5]
        
        rbx_5 = arg3
        *(arg2 + 0x30) = rax_18
        void**** rax_19 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_19 = rcx_18
        *(arg2 + 8) = &rcx_18[1]
        rcx_18[1] = 0
        *rcx_18 = &data_142d5a070
        rcx_18[3].d = var_2e8
        rcx_18[2] = rbx_5
        rcx_18[4] = rdi_2
    
    if (arg1[0x12] u> 0)
        uint32_t rdi_3 = zx.d(arg1[0x11])
        
        if ((*(*r12_1 + 8))(r12_1) == 0)
            void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_24 = &rcx_25[5]
            
            if (rax_24 u> *(arg2 + 0x38))
                zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_24 = &rcx_25[5]
            
            rbx_5 = arg3
            *(arg2 + 0x30) = rax_24
            void**** rax_25 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_25 = rcx_25
            *(arg2 + 8) = &rcx_25[1]
            rcx_25[1] = 0
            *rcx_25 = &data_142d5a080
            rcx_25[2] = rbx_5
            rcx_25[3].d = rdi_3
            rcx_25[4] = r12_1
    
    if (rbx_4 != 1 && rbx_4 != 3)
        r15 = nullptr

int128_t zmm6_1 = sub_141472f80(&arg1[0x13], arg2, rbx_5, r15, zmm6)
void* rbx_6 = *(*(arg6 + 0x20) + 0x108)
char rax_29 = sub_14122cc00(arg6)
void* rax_30

if (rax_29 != 0 && rbx_6 != 0 && *(rbx_6 + 0x48) != 0)
    rax_30 = rbx_6 + 0x10

int32_t rcx_31

if (rax_29 == 0 || rbx_6 == 0 || *(rbx_6 + 0x48) == 0 || *(rbx_6 + 0x10) == 0)
    rcx_31 = 0
    rax_30 = data_143f10dc8 + 0x10
else
    rcx_31 = 1

int32_t var_2b8 = rcx_31
int64_t r12_2 = *rax_30
int128_t* rax_32

if (rcx_31 == 0)
    rax_32 = &data_14399f6e0
else
    rax_32 = *(rbx_6 + 0x48)

int128_t var_268 = *rax_32
uint128_t var_258 = rax_32[1]
int128_t var_248 = rax_32[2]
uint128_t var_238 = rax_32[3]
float* rax_34

if (rcx_31 == 0)
    rax_34 = &var_2c8
    var_2c8 = zx.o(0)
else
    void* rax_33 = *(rbx_6 + 0x48)
    zmm2 = zx.o(*(rax_33 + 0x44))
    rax_34 = &var_2e8
    uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(*(rax_33 + 0x40)))
    zmm2 = _mm_cvtepi32_ps(zmm2)
    int128_t zmm0_2
    zmm0_2.d = zmm6_1.d f/ zmm1_2.d
    zmm6_1.d = zmm6_1.d f/ zmm2.d
    int32_t var_2e0_2 = zmm0_2.d
    int32_t var_2dc_2 = zmm6_1.d
    var_2e8 = zmm1_2.d
    int32_t var_2e4_2 = zmm2.d

int128_t var_278 = *rax_34
sub_1405eb490(arg2, &var_2f0, &arg1[0x22], &var_2b8, 0)
int64_t* rdi_4 = data_14395f4d0
int512_t zmm6_2
zmm6_2.o = arg5
int64_t r13_1

if (arg1[0x26] u<= 0)
    r13_1 = arg3
else
    uint32_t r15_1 = zx.d(arg1[0x25])
    void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_35 = &rcx_35[5]
    
    if (rax_35 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_35 = &rcx_35[5]
    
    r13_1 = arg3
    *(arg2 + 0x30) = rax_35
    void**** rax_36 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_36 = rcx_35
    *(arg2 + 8) = &rcx_35[1]
    rcx_35[1] = 0
    *rcx_35 = &data_142d5a070
    rcx_35[2] = r13_1
    rcx_35[3].d = r15_1
    rcx_35[4] = r12_2

if (arg1[0x28] u> 0)
    uint32_t r15_2 = zx.d(arg1[0x27])
    
    if ((*(*rdi_4 + 8))(rdi_4) == 0)
        void*** rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_40 = &rcx_42[5]
        
        if (rax_40 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_40 = &rcx_42[5]
        
        *(arg2 + 0x30) = rax_40
        void**** rax_41 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_41 = rcx_42
        *(arg2 + 8) = &rcx_42[1]
        rcx_42[1] = 0
        *rcx_42 = &data_142d5a080
        rcx_42[2] = r13_1
        rcx_42[3].d = r15_2
        rcx_42[4] = rdi_4

sub_1405eb5d0(arg2, &var_2f0, &arg1[0x29], &var_268, 0)
uint64_t result = sub_1405d0e10(arg2, &var_2f0, &arg1[0x2c], &var_278, 0)
__security_check_cookie(rax_1 ^ &var_328)
return result
