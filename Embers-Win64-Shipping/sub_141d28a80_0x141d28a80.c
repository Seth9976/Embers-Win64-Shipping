// 函数: sub_141d28a80
// 地址: 0x141d28a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18
int64_t r15 = sx.q(sub_141d1f690(arg1, *sub_140b58170(&arg_18, "Geometry", 1)))
sub_141d1a2b0(arg1, r15.d, data_143f36fc0)
int64_t var_60
int32_t arg_8
sub_141d1a760(arg1, &var_60, *sub_140b58170(&arg_8, "Geometry", 1))
void* arg_20
int64_t var_120 = *sub_140b58170(&arg_20, "Geometry", 1)
void* var_100
int64_t var_128 = *sub_140b58170(&var_100, "Indices", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_128)
int64_t rax_5 = sx.q(arg_8)
void* r14 = nullptr
void* const rax_8

if (rax_5.d == 0xffffffff)
    rax_8 = nullptr
else
    rax_8 = rax_5 * 0x30 + arg1[1]

void* arg_10 = *(rax_8 + 0x20)
void* var_108
int64_t var_120_1 = *sub_140b58170(&var_108, "Geometry", 1)
void var_f8
var_128 = *sub_140b58170(&var_f8, "Visible", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_128)
int64_t rax_12 = sx.q(arg_8)
void* const rax_15

if (rax_12.d == 0xffffffff)
    rax_15 = nullptr
else
    rax_15 = rax_12 * 0x30 + arg1[1]

void* r12 = *(rax_15 + 0x20)
void var_f0
int64_t var_120_2 = *sub_140b58170(&var_f0, "Geometry", 1)
void var_e8
var_128 = *sub_140b58170(&var_e8, "MaterialIndex", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_128)
int64_t rax_18 = sx.q(arg_8)
void* const rax_21

if (rax_18.d == 0xffffffff)
    rax_21 = nullptr
else
    rax_21 = rax_18 * 0x30 + arg1[1]

void* r13 = *(rax_21 + 0x20)
void var_e0
int64_t var_120_3 = *sub_140b58170(&var_e0, "Geometry", 1)
void var_d8
var_128 = *sub_140b58170(&var_d8, "MaterialID", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_128)
int64_t rax_24 = sx.q(arg_8)
void* const rax_27

if (rax_24.d == 0xffffffff)
    rax_27 = nullptr
else
    rax_27 = rax_24 * 0x30 + arg1[1]

void* r10 = *(rax_27 + 0x20)
int32_t rax_28 = (r15 - 1).d
int64_t r8_6 = sx.q(rax_28)

if (rax_28 s>= 0)
    void* r11_1 = arg_10
    int64_t r9_2 = r8_6 * 0xc
    int64_t temp1_1
    
    do
        int64_t rdx_7 = *(r11_1 + 8)
        r9_2 -= 0xc
        int64_t rcx_21 = arg1[0x44]
        *(r9_2 + rcx_21 + 0xc) = *(r9_2 + rdx_7 + 0xc)
        *(r9_2 + rcx_21 + 0x10) = *(r9_2 + rdx_7 + 0x10)
        *(r9_2 + rcx_21 + 0x14) = *(r9_2 + rdx_7 + 0x14)
        *(r8_6 + arg1[0x47]) = *(r8_6 + *(r12 + 8))
        *(arg1[0x4a] + (r8_6 << 2)) = *(*(r13 + 8) + (r8_6 << 2))
        *(arg1[0x4d] + (r8_6 << 2)) = *(*(r10 + 8) + (r8_6 << 2))
        temp1_1 = r8_6
        r8_6 -= 1
    while (temp1_1 - 1 s>= 0)

int64_t* rax_38 = sub_140b58170(&arg_8, "Geometry", 1)
sub_141d20d80(arg1, *sub_140b58170(&arg_10, "Indices", 1), *rax_38)
int64_t* rax_40 = sub_140b58170(&arg_8, "Geometry", 1)
sub_141d20d80(arg1, *sub_140b58170(&arg_10, "Visible", 1), *rax_40)
int64_t* rax_42 = sub_140b58170(&arg_8, "Geometry", 1)
sub_141d20d80(arg1, *sub_140b58170(&arg_10, "MaterialIndex", 1), *rax_42)
int64_t* rax_44 = sub_140b58170(&arg_8, "Geometry", 1)
sub_141d20d80(arg1, *sub_140b58170(&arg_10, "MaterialID", 1), *rax_44)
int64_t var_118 = 0
int32_t rax_46 = 0
int32_t var_110 = 0
int32_t var_10c = 0
int32_t temp0 = r15.d

if (temp0 s> 0)
    int32_t var_110_1 = r15.d
    sub_1405a4cf0(&var_118)
else if (temp0 s< 0)
    int32_t rbx_9 = neg.d(r15.d)
    
    if (rbx_9 != 0)
        int32_t rdx_14 = neg.d(rbx_9 + r15.d)
        
        if (rdx_14 != 0)
            memmove(r15 << 2, nullptr, rdx_14 << 2)
            rax_46 = var_110
        
        int32_t var_110_2 = rax_46 - rbx_9
        sub_1405dac90(&var_118)

int32_t i = 0

if (r15.d s> 0 && r15.d u>= 0x10)
    int32_t zmm2_1[0x4] = data_142e11d00
    int32_t rax_49 = r15.d & 0x8000000f
    
    if (rax_49 s< 0)
        rax_49 = ((rax_49 - 1) | 0xfffffff0) + 1
    
    int64_t rdx_15 = 0x20
    int32_t r8_13 = 8
    
    do
        rdx_15 += 0x40
        uint128_t i_2 = zx.o(i)
        i += 0x10
        *(var_118 + rdx_15 - 0x60) = _mm_add_epi32(_mm_shuffle_epi32(i_2, 0), zmm2_1)
        int64_t rax_54 = var_118
        int32_t zmm1_1[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(r8_13 - 4), 0), zmm2_1)
        i_2 = _mm_add_epi32(_mm_shuffle_epi32(zx.o(r8_13), 0), zmm2_1)
        *(rax_54 + rdx_15 - 0x50) = zmm1_1
        *(var_118 + rdx_15 - 0x40) = i_2
        int32_t rax_56 = r8_13 + 4
        r8_13 += 0x10
        *(var_118 + rdx_15 - 0x30) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_56), 0), zmm2_1)
    while (i s< r15.d - rax_49)

for (int64_t i_1 = sx.q(i); i_1 s< r15; i_1 += 1)
    *(var_118 + (i_1 << 2)) = i
    i += 1

arg_8.w = 0
sub_140b58170(&arg_10, "Geometry", 1)
sub_141d227f0(arg1, &arg_10, &var_118, 0)
int64_t var_70
sub_141d1a760(arg1, &var_70, *sub_140b58170(&arg_8, "Structure", 1))
int32_t rax_61 = sub_141d1f690(arg1, *sub_140b58170(&arg_8, "Structure", 1))
arg_10.d = rax_61
sub_141d1a2b0(arg1, rax_61, data_143f36fc8)
int64_t var_120_4 = *sub_140b58170(&var_d8, "Structure", 1)
var_128 = *sub_140b58170(&var_e0, "TransformIndex", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_128)
int64_t rax_64 = sx.q(arg_8)
void* const rax_67

if (rax_64.d == 0xffffffff)
    rax_67 = nullptr
else
    rax_67 = rax_64 * 0x30 + arg1[1]

var_100 = *(rax_67 + 0x20)
int64_t var_120_5 = *sub_140b58170(&var_e8, "Structure", 1)
var_128 = *sub_140b58170(&var_f0, "BoundingBox", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_128)
int64_t rax_71 = sx.q(arg_8)
void* const rax_74

if (rax_71.d == 0xffffffff)
    rax_74 = nullptr
else
    rax_74 = rax_71 * 0x30 + arg1[1]

var_108 = *(rax_74 + 0x20)
int64_t var_120_6 = *sub_140b58170(&var_f8, "Structure", 1)
void var_c0
var_128 = *sub_140b58170(&var_c0, "InnerRadius", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_128)
int64_t rax_78 = sx.q(arg_8)
void* const rax_81

if (rax_78.d == 0xffffffff)
    rax_81 = nullptr
else
    rax_81 = rax_78 * 0x30 + arg1[1]

arg_20 = *(rax_81 + 0x20)
void var_b8
int64_t var_120_7 = *sub_140b58170(&var_b8, "Structure", 1)
void var_b0
var_128 = *sub_140b58170(&var_b0, "OuterRadius", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_128)
int64_t rax_85 = sx.q(arg_8)
void* const rax_88

if (rax_85.d == 0xffffffff)
    rax_88 = nullptr
else
    rax_88 = rax_85 * 0x30 + arg1[1]

arg_18 = *(rax_88 + 0x20)
void var_a8
int64_t var_120_8 = *sub_140b58170(&var_a8, "Structure", 1)
void var_a0
var_128 = *sub_140b58170(&var_a0, "VertexStart", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_128)
int64_t rax_92 = sx.q(arg_8)
void* const rax_95

if (rax_92.d == 0xffffffff)
    rax_95 = nullptr
else
    rax_95 = rax_92 * 0x30 + arg1[1]

void* r12_1 = *(rax_95 + 0x20)
void var_98
int64_t var_120_9 = *sub_140b58170(&var_98, "Structure", 1)
void var_90
var_128 = *sub_140b58170(&var_90, "VertexCount", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_128)
int64_t rax_98 = sx.q(arg_8)
void* const rax_101

if (rax_98.d == 0xffffffff)
    rax_101 = nullptr
else
    rax_101 = rax_98 * 0x30 + arg1[1]

void* r13_1 = *(rax_101 + 0x20)
void var_88
int64_t var_120_10 = *sub_140b58170(&var_88, "Structure", 1)
void var_80
var_128 = *sub_140b58170(&var_80, "FaceStart", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_128)
int64_t rax_104 = sx.q(arg_8)
void* const rax_107

if (rax_104.d == 0xffffffff)
    rax_107 = nullptr
else
    rax_107 = rax_104 * 0x30 + arg1[1]

void* r15_1 = *(rax_107 + 0x20)
void var_78
int64_t var_c8 = *sub_140b58170(&var_78, "Structure", 1)
int64_t var_d0 = *sub_140b58170(&var_128, "FaceCount", 1)
sub_141d1ca50(&arg1[1], &arg_8, &var_d0)
int64_t rax_110 = sx.q(arg_8)

if (rax_110.d != 0xffffffff)
    r14 = rax_110 * 0x30 + arg1[1]

int32_t rax_111 = arg_10.d
void* r11_2 = *(r14 + 0x20)
int64_t r9_5 = sx.q(rax_111 - 1)

if (rax_111 - 1 s>= 0)
    void* rbx_18 = arg_18
    void* rsi_1 = arg_20
    void* r14_3 = var_108
    void* rdx_28 = var_100
    int64_t r10_1 = r9_5 * 0x1c
    int64_t temp3_1
    
    do
        r10_1 -= 0x1c
        *(arg1[0x50] + (r9_5 << 2)) = *(*(rdx_28 + 8) + (r9_5 << 2))
        int64_t rax_115 = *(r14_3 + 8)
        int64_t rcx_80 = arg1[0x53]
        *(r10_1 + rcx_80 + 0x1c) = *(r10_1 + rax_115 + 0x1c)
        *(r10_1 + rcx_80 + 0x2c) = *(r10_1 + rax_115 + 0x2c)
        *(r10_1 + rcx_80 + 0x34) = *(r10_1 + rax_115 + 0x34)
        *(arg1[0x56] + (r9_5 << 2)) = *(*(rsi_1 + 8) + (r9_5 << 2))
        *(arg1[0x59] + (r9_5 << 2)) = *(*(rbx_18 + 8) + (r9_5 << 2))
        *(arg1[0x5c] + (r9_5 << 2)) = *(*(r12_1 + 8) + (r9_5 << 2))
        *(arg1[0x5f] + (r9_5 << 2)) = *(*(r13_1 + 8) + (r9_5 << 2))
        *(arg1[0x62] + (r9_5 << 2)) = *(*(r15_1 + 8) + (r9_5 << 2))
        *(arg1[0x65] + (r9_5 << 2)) = *(*(r11_2 + 8) + (r9_5 << 2))
        temp3_1 = r9_5
        r9_5 -= 1
    while (temp3_1 - 1 s>= 0)

uint64_t result = sub_141d23b30(arg1, *sub_140b58170(&arg_8, "Structure", 1))
int64_t rcx_89 = var_70

if (rcx_89 != 0)
    result = sub_140a74f90(rcx_89)

int64_t rcx_90 = var_118

if (rcx_90 != 0)
    result = sub_140a74f90(rcx_90)

int64_t rcx_91 = var_60

if (rcx_91 == 0)
    return result

return sub_140a74f90(rcx_91)
