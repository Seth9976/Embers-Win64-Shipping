// 函数: sub_1421ca100
// 地址: 0x1421ca100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = arg3
arg1[0x48].d = 0
int128_t zmm9 = arg2
void* rax

if (*(arg1 + 0x244) s<= 0xffffffff)
    rax, arg4 = sub_140775c70(&arg1[0x47], 0)

if (data_143f4d2c4 != 0 || data_143f4d2c8 != 0 || data_143a2ecfc == 0 || data_1439c7a6a == 0
        || data_1439c7a18 == 0 || data_1439c88a8 == 0 || data_1439c7a17 == 0
        || data_1439c7a0c == 0)
    return 

int64_t r13_1 = arg1[5]
(*(*arg1 + 0x28))(arg1, zmm9, r13_1)
int128_t zmm10 = arg4
*(arg1[0x3c] + 0x213) = arg1[0x1c].b & 1

if ((arg1[0x1c].b & 1) == 0)
    zmm10.d = zmm10.d f+ *(arg1 + 0x12c)
    *(arg1 + 0x12c) = zmm10.d
    sub_1421b34f0(arg1)
    return 

void* rax_3 = arg1[3]
int128_t zmm6
int128_t var_48_1 = zmm6

if (rax_3 != 0 && (*(rax_3 + 0x432) & 2) != 0)
    arg4.d = (*(rax_3 + 0x4ac)).d f- arg1[0x25].d
    
    if (arg4.d f> *(arg1[0x3b] + 0x160))
        rbx = 1

int32_t r11_1 = 0
int32_t r10_1 = 0
int32_t r9_1 = 1
int32_t i = 0

if (arg1[0x42].d s> 0)
    do
        if (arg1[0x25].d.d f< *(arg1[0x43] + (sx.q(i) << 2)))
            r11_1 += 1
        else
            void* rdx_1 = &arg1[0x3f]
            int64_t rcx_4 = sx.q(r10_1)
            void* rax_6 = *(rdx_1 + 0x10)
            
            if (rax_6 != 0)
                rdx_1 = rax_6
            
            *(rdx_1 + (rcx_4 << 2)) &= not.d(r9_1)
            
            if (arg1[0x50].d == i)
                arg1[0x50].d = 0xffffffff
                *(arg1 + 0x284) = 0
        
        int32_t rcx_5 = r9_1 * 2
        i += 1
        int32_t rax_9 = r10_1 + 1
        r9_1 = 1
        
        if (rcx_5 != 0)
            rax_9 = r10_1
        
        if (rcx_5 != 0)
            r9_1 = rcx_5
        
        r10_1 = rax_9
    while (i s< arg1[0x42].d)

int64_t rax_10 = *arg1
int32_t arg_20 = r11_1
(*(rax_10 + 0x38))(arg1, zmm9, r13_1, r9_1)
int32_t rdx_2 = arg1[0x1c].d
char rax_11

if ((rdx_2.b & 0x30) != 0 || rbx != 0)
    rax_11 = 1
else
    rax_11 = 0

int32_t rcx_7 = arg1[0x52].d
int128_t zmm8 = zx.o(0)

if (rcx_7 == 0 || arg1[0x2e].d s< rcx_7)
    rcx_7 = 1
else
    rcx_7.b = 0

if (rax_11 == 0 && 0f f<= *(arg1 + 0x12c) != 0 && rcx_7.b != 0)
    int64_t rax_12 = *arg1
    int32_t arg_8 = zmm9.d
    int32_t r14_1 = 0
    int64_t var_c0 = 0
    int32_t var_b8_1 = 0
    (*(rax_12 + 0x98))(arg1, &arg_8, &var_c0)
    int32_t rdx_5 = arg1[0x4c].d + var_c0.d
    int32_t rax_13 = data_143a2ecf0
    var_c0.d = rdx_5
    
    if (rdx_5 s> rax_13)
        var_c0.d = rax_13
        r14_1 = rdx_5 - rax_13
    
    float zmm0
    int512_t zmm1
    zmm0, zmm1 = sub_141fe5610(*(arg1[5] + 0x50) + 0x68, *(arg1 + 0x12c), arg1[3], nullptr)
    sub_1421f1540(*(arg1[5] + 0x50))
    zmm1.o = *(arg1 + 0x12c)
    uint128_t zmm0_2
    int32_t zmm6_2
    zmm0_2, zmm6_2 = sub_141fe5610(*(arg1[5] + 0x50) + 0x38, zmm1, arg1[3], nullptr)
    uint128_t zmm7_1
    zmm7_1.d = zmm0_2.d f* zmm6_2
    int64_t* rcx_15 = *(arg1[0x3b] + 0x10)
    zmm7_1 = _mm_max_ss(zmm7_1.d, 0)
    
    if (rcx_15 != 0)
        int32_t var_c8 = 0
        arg_8 = 0
        
        if ((*(*rcx_15 + 0x348))(rcx_15, arg1, 0, (zx.o(0)).d, zmm9.d, &var_c8, &arg_8) != 0)
            zmm7_1.d = zmm7_1.d f+ arg_8
        else
            zmm7_1 = arg_8
    
    int32_t r15_1 = data_143a2ecf0
    float zmm3_1 = *(arg1 + 0x124)
    uint128_t zmm2_1
    zmm2_1.d = zmm7_1.d f* zmm9.d
    zmm2_1.d = zmm2_1.d f+ zmm3_1
    int32_t rax_19 = int.d(zmm2_1.d)
    
    if (rax_19 s<= r15_1)
        r15_1 = rax_19
    
    uint128_t zmm1_1
    
    if (zmm7_1.d f<= 0f)
        zmm1_1 = zx.o(0)
    else
        zmm1_1.d = 1f f/ zmm7_1.d
    
    void* rcx_16 = arg1[2]
    int32_t rbx_1 = arg1[0x4a].d
    zmm0_2.d = zmm1_1.d f* zmm3_1
    int32_t var_a8_1 = zmm1_1.d
    zmm0_2.d = zmm0_2.d f+ zmm9.d
    zmm0_2.d = zmm0_2.d f- zmm1_1.d
    int32_t var_ac_1 = zmm0_2.d
    zmm2_1.d = zmm2_1.d f- _mm_cvtepi32_ps(zx.o(r15_1)).d
    *(arg1 + 0x124) = zmm2_1.d
    float zmm0_3 = sub_142193350(rcx_16)
    zmm2_1 = zx.o(var_c0.d)
    int64_t r15_2 = sx.q(arg1[0x48].d)
    uint128_t zmm1_2
    zmm1_2.d = _mm_cvtepi32_ps(zx.o(r15_1 + rbx_1)).d f* zmm0_3
    zmm2_1.d = _mm_cvtepi32_ps(zmm2_1).d f* zmm0_3
    int32_t rbx_2 = int.d(zmm1_2.d)
    int32_t rax_21 = int.d(zmm2_1.d)
    var_c0.d = rax_21
    sub_1421bf280(arg1, rbx_2 + rax_21 + r15_2.d)
    int32_t rax_22 = sub_1421ada50(arg1, &arg1[0x47], var_c0.d, &arg_20)
    int64_t r12_1 = sx.q(arg1[0x48].d)
    var_c0.d = rax_22
    int32_t rax_23 = sub_1421ada50(arg1, &arg1[0x47], rbx_2, &arg_20)
    bool cond:4_1 = var_c0.d s<= 0
    uint128_t zmm0_4
    zmm0_4.d = _mm_cvtepi32_ps(zx.o(r14_1)).d f+ *(arg1 + 0x124)
    *(arg1 + 0x124) = zmm0_4.d
    uint64_t var_98
    
    if (not(cond:4_1))
        int64_t rax_24 = arg1[0x47]
        int32_t var_90_1 = var_b8_1
        var_98 = var_c0
        zmm8, zmm9, zmm10 = sub_1421ae350(arg1, rax_24 + r15_2 * 0x48, &var_98, &arg1[0x4b])
    
    if (rax_23 s> 0)
        int32_t var_90_2 = var_a8_1
        int64_t rax_26 = arg1[0x47]
        var_98 = rax_23.q
        zmm8, zmm9, zmm10 = sub_1421ae350(arg1, rax_26 + r12_1 * 0x48, &var_98, &arg1[0x49])
    
    int32_t rax_27 = *(arg1 + 0x254)
    arg1[0x4a].d = 0
    
    if (rax_27 s< 0 && rax_27 != 0)
        sub_140775c70(&arg1[0x49], 0)
    
    int32_t rax_28 = *(arg1 + 0x264)
    arg1[0x4c].d = 0
    
    if (rax_28 s< 0 && rax_28 != 0)
        sub_140775c70(&arg1[0x4b], 0)
    
    void* rax_29 = arg1[3]
    int32_t r8_11 = var_c0.d + rax_23
    
    if (rax_29 != 0 && (*(rax_29 + 0x432) & 2) != 0)
        zmm8, zmm9, zmm10 = sub_1421c6120(arg1, arg1[0x47] + sx.q(arg1[0x48].d - r8_11) * 0x48, 
            r8_11, *(rax_29 + 0x4ac) f- arg1[0x25].d)
else if (test_bit(rdx_2, 0xa))
    sub_1421b34f0(arg1)

sub_1421b5000(arg1)
int64_t* rdx_15 = arg1[0x3b]
int64_t rcx_30 = *(*rdx_15 + 0x30)

if (rcx_30 != 0)
    arg1[0x34] = rcx_30

float zmm2 = rdx_15[0x12].d f* zmm9.d f+ arg1[0x4e].d
arg1[0x4d].d = zmm9.d f* rdx_15[0x11].d f+ arg1[0x4d].d
*(arg1 + 0x26c) = *(rdx_15 + 0x8c) f* zmm9.d f+ *(arg1 + 0x26c)
arg1[0x4e].d = zmm2
void* rbx_4 = arg1[0x3b]
zmm6.d = (*(arg1 + 0x12c)).d f- *(rbx_4 + 0xe4)
zmm6.d = zmm6.d f* *(rbx_4 + 0xe0)
zmm6 = _mm_max_ss(zmm6.d, zmm8.d)
float _X = zmm6.d
truncf(_X)
uint32_t r8_12 = zx.d(*(rbx_4 + 0xfa))
int64_t r9_6 = *(rbx_4 + 0xe8)
int32_t rcx_31 = int.d(zmm6.d)
int32_t r10_3 = zx.d(*(rbx_4 + 0xf9)) - 1
int32_t rax_35 = r10_3

if (rcx_31 u<= r10_3)
    rax_35 = rcx_31

if (rcx_31 + 1 u<= r10_3)
    r10_3 = rcx_31 + 1

float zmm1_3 = *(r9_6 + (sx.q(rax_35 * r8_12) << 2))
int32_t rax_40 = arg_20 << 4
_X = (*(r9_6 + (sx.q(r10_3 * r8_12) << 2)) - zmm1_3) * (zmm6.d - _X) + zmm1_3
*(arg1 + 0x274) = _X
zmm10.d = zmm10.d f+ *(arg1 + 0x12c)
arg1[0x23].d = rax_40
int64_t rax_41 = *arg1
arg1[0x4f].d = zmm9.d
*(arg1 + 0x12c) = zmm10.d
(*(rax_41 + 0x68))(arg1, zmm9.d)
(*(*arg1 + 0x48))(arg1, zmm9.d, r13_1)
void* rcx_34 = arg1[0x3c]

if (*(rcx_34 + 0x210) != 0)
    _X = sub_1421ba9d0(rcx_34, &arg1[0x3d], *(arg1[0x3b] + 0x270))

sub_1421af530(arg1, _X)
