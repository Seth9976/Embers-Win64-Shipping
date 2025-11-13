// 函数: sub_1414c97a0
// 地址: 0x1414c97a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a88
int64_t rax_1 = __security_cookie ^ &var_a88
int32_t var_a48 = arg6
void var_a28
sub_14108c130(&var_a28)
void var_228
sub_1410ead70(&var_228)
int512_t zmm1
zmm1.o = data_142d3f660
int128_t var_108_1
__builtin_memcpy(&var_108_1, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f", 
    0x20)
void* r14 = nullptr
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x60)
sub_1410b8fb0(arg1, arg2, &data_143ec4c60, &var_a28)
sub_1413aab70(&data_143ec4c60, arg2[0x2a9].d, arg4, &var_228)
void* rax_3 = sub_141096d10(arg2)
float zmm6 = 1f f/ *(arg2 + 0x4fd4)
void* rax_4 = arg2[0xa06]
int64_t var_120 = *rax_3
void* var_a58
int128_t var_c8
int64_t r9_2
int32_t r12
uint128_t zmm0_1
uint128_t zmm1_1
uint128_t zmm3_1
int128_t var_d8

if (rax_4 == 0)
    void* rcx_8 = data_143f10e68
    r9_2 = data_14395f4d0
    r12 = *(arg2 + 0x15a4)
    int64_t var_e0_2 = *(rcx_8 + 0x10)
    var_d8.q = data_14395fa10
    var_d8:8.q = *(rcx_8 + 0x10)
    var_c8.q = r9_2
else
    int64_t var_e0_1 = *(rax_4 + 0x10)
    var_d8.q = data_14395fa10
    int64_t* rax_7 = &data_1439b70c8
    
    if (arg2[0x9c2] != 0)
        rax_7 = &arg2[0x9c2]
        zmm6 = 1f f/ arg2[0x9a8].d
    else if (arg2[0x9b2] != 0)
        rax_7 = &arg2[0x9b2]
        zmm6 = 1f f/ arg2[0x9a8].d
    
    r12 = *(arg2 + 0x15a4)
    r9_2 = data_14395f4d0
    var_d8:8.q = *(*rax_7 + 0x10)
    var_c8.q = r9_2
    int32_t rax_11 = arg2[0xa11].d
    zmm3_1 = _mm_cvtepi32_ps(zx.o(arg2[0x2b4].d - arg2[0x2b3].d))
    int32_t rax_14 = r12 - *(arg2 + 0x159c)
    zmm3_1.d = zmm3_1.d f/ _mm_cvtepi32_ps(zx.o(rax_11 * 2)).d
    zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x508c) * 2))
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(rax_14)).d f/ zmm0_1.d
    zmm0_1.d = 1f f/ zmm3_1.d
    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
    zmm3_1.d = zmm1_1.d
    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
    zmm3_1.d = zmm0_1.d
    _mm_shuffle_ps(zmm3_1, zmm3_1, 0x27)
    zmm3_1.d = 1f f/ zmm1_1.d
    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x39)
    var_a58.o = zmm3_1
    uint128_t var_108_2 = zmm3_1
void* rax_20 = data_143ec4fdc
int32_t r10 = 1
uint64_t r8_1 = arg2[0x2b3]
int32_t r11 = 1
int32_t r13 = arg2[0x2b4].d
int64_t* rcx_9 = arg2[0x9b2]
uint64_t rdx_3 = r8_1 u>> 0x20
var_a58 = rax_20

if (rax_20.d s>= 1)
    r10 = rax_20.d

if (var_a58:4.d s>= 1)
    r11 = var_a58:4.d

int32_t r13_1 = r13 - r8_1.d
int32_t r12_1 = r12 - rdx_3.d

if (rcx_9 != 0)
    int32_t rdi_1 = arg2[0x9b5].d
    int32_t rbx_1 = *(arg2 + 0x4dac)
    int32_t r13_2 = arg2[0x9b6].d
    int32_t r12_2 = *(arg2 + 0x4db4)
    void* rax_22
    rax_22, rcx_9 = (*(*rcx_9 + 0x10))(rcx_9, rdx_3)
    r9_2 = data_14395f4d0
    r13_1 = r13_2 - rdi_1
    r12_1 = r12_2 - rbx_1
    rdx_3 = zx.q(rbx_1)
    r8_1 = zx.q(rdi_1)
    r10 = *(rax_22 + 0x14)
    r11 = *(rax_22 + 0x18)

float var_e8 = zmm6
zmm0_1.d = float.s(r10)
float zmm4 = 1f f/ zmm0_1.d
zmm0_1.d = float.s(r13_1)
zmm1_1.d = float.s(r11)
zmm3_1.d = float.s(r8_1.d)
float zmm7 = 1f f/ zmm1_1.d
zmm0_1.d = zmm0_1.d f* 0.5f
zmm3_1.d = zmm3_1.d f+ zmm0_1.d
uint128_t zmm5
zmm5.d = zmm0_1.d f* zmm4
zmm3_1.d = zmm3_1.d f* zmm4
_mm_shuffle_ps(zmm5, zmm5, 0xe1)
zmm0_1.d = float.s(rdx_3.d)
zmm5.d = float.s(neg.d(r12_1)) * 0.5f * zmm7
_mm_shuffle_ps(zmm5, zmm5, 0xc6)
zmm5.d = zmm3_1.d
_mm_shuffle_ps(zmm5, zmm5, 0x27)
zmm5.d = (float.s(r12_1) * 0.5f f+ zmm0_1.d) * zmm7
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x39)
uint128_t var_f8 = zmm5
var_a58.o = zmm5
uint64_t rcx_11
int32_t r10_1

if (data_143ec4dc8 != 0)
    r10_1 = data_1439b7098
    r8_1 = &data_143ec4da8
    rdx_3 = &data_143ec4da8
    uint64_t rax_26 = data_143ec4dc0
    rcx_11 = zx.q((sbb.q(rcx_9, rcx_9, r10_1 != 0)).d) & 0x10
    
    if (rax_26 != 0)
        rdx_3 = rax_26

int128_t var_b8
int128_t var_a8
int128_t var_98

if (data_143ec4dc8 == 0 || *(rcx_11 + rdx_3) == 0)
    void* rax_43 = *(data_1439b70c8 + 0x10)
    var_a48.q = rax_43
    
    if (rax_43 != 0)
        *(rax_43 + 8) += 1
        rax_43 = var_a48.q
    
    var_c8:8.q = rax_43
    var_b8:8.q = rax_43
    var_a8:8.q = rax_43
    var_98:8.q = rax_43
    sub_1405d1550(&var_a48, rdx_3, r8_1)
    r9_2 = data_14395f4d0
else
    uint32_t r11_1 = var_a48 * 3
    int64_t rcx_15 =
        *(*(rdx_3 + (sx.q((sbb.d(rcx_11.d, rcx_11.d, r10_1 != 0) & 2) + r11_1) << 3)) + 0x10)
    var_c8:8.q = rcx_15
    void* const rax_33
    
    if (data_143ec4dc8 == 0)
        rax_33 = nullptr
    else
        uint64_t rdx_4 = data_143ec4dc0
        int32_t rax_31
        rax_31.b = r10_1 == 0
        rcx_15 = sx.q(rax_31 + r11_1)
        
        if (rdx_4 != 0)
            r8_1 = rdx_4
        
        rax_33 = *(r8_1 + (rcx_15 << 3))
    
    var_b8:8.q = *(rax_33 + 0x10)
    void* const rax_38
    
    if (data_143ec4df0 == 0)
        rax_38 = nullptr
    else
        void* r8_2 = &data_143ec4dd0
        void* rdx_5 = data_143ec4de8
        
        if (rdx_5 != 0)
            r8_2 = rdx_5
        
        rax_38 = *(r8_2 + (sx.q((sbb.d(rcx_15.d, rcx_15.d, r10_1 != 0) & 2) + r11_1) << 3))
    
    var_a8:8.q = *(rax_38 + 0x10)
    
    if (data_143ec4df0 != 0)
        void* r8_3 = &data_143ec4dd0
        void* rdx_6 = data_143ec4de8
        r14.b = r10_1 == 0
        
        if (rdx_6 != 0)
            r8_3 = rdx_6
        
        r14 = *(r8_3 + (sx.q(r14.d + r11_1) << 3))
    
    var_98:8.q = *(r14 + 0x10)

void* rax_44 = arg3
var_b8.q = r9_2
var_a8.q = r9_2
var_98.q = r9_2
int64_t var_88 = r9_2

if (rax_44 == 0)
    rax_44 = data_143f10e68

int64_t var_118 = *(rax_44 + 0x10)
int64_t* rcx_21 = *(*arg2 + 0x20)
void* rax_49

if (rcx_21 != 0)
    rax_49 = (*(*rcx_21 + 0x248))(rcx_21)

int64_t* result

if (rcx_21 == 0 || rax_49 == 0)
    int64_t* rcx_24 = data_143f0f180
    void* var_a40
    (*(*rcx_24 + 0xf8))(rcx_24, &var_a40, &var_a28, &data_143e2d800, 1, 1)
    void* rax_51 = var_a40
    var_a58 = rax_51
    
    if (rax_51 != 0)
        *(rax_51 + 8) += 1
    
    sub_1405d1550(&var_a40)
    sub_1405d1600(arg5, &var_a58)
    result = sub_1405d1550(&var_a58)
else
    int64_t* rcx_22 = data_143f0f180
    int64_t r9_3 = *rcx_22
    (*(r9_3 + 0x100))(rcx_22, *(rax_49 + 0x40), &var_a28, r9_3)
    result = sub_1405d16e0(arg5, *(rax_49 + 0x40))

__security_check_cookie(rax_1 ^ &var_a88)
return result
