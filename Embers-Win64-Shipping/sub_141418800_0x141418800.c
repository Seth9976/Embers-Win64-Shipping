// 函数: sub_141418800
// 地址: 0x141418800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg3
int32_t rdi_1 = *(arg3 + 0x15a0) - *(arg3 + 0x1598)
int32_t rbx = data_143cda914
TEB* gsbase
void* r14 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (rbx s> *(r14 + 0x14))
    _Init_thread_header(&data_143cda914)
    rbx = data_143cda914
    
    if (rbx == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)
        rbx = data_143cda914

uint128_t zmm0_1
zmm0_1.d = logf(_mm_cvtepi32_ps(zx.o(rdi_1)).d).d f* data_143cda910
int32_t rdi_2 = 1
zmm0_1.d = zmm0_1.d f+ zmm0_1.d
int32_t rax_3 = not.d(int.d(-0.5f f- zmm0_1.d) s>> 1)

if (rax_3 s>= 1)
    rdi_2 = rax_3

int32_t r12_1 = *(r15 + 0x15a4) - *(r15 + 0x159c)

if (rbx s> *(r14 + 0x14))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

float zmm0_2 = logf(_mm_cvtepi32_ps(zx.o(r12_1)).d) f* data_143cda910
int32_t r12_2 = 1
int32_t r8 = 1
int128_t zmm6
zmm6.d = -0.5f - (zmm0_2 + zmm0_2)
int32_t rax_6 = not.d(int.d(zmm6.d) s>> 1)

if (rax_6 s>= 1)
    r8 = rax_6

int32_t rax_7 = r8

if (rdi_2 s>= r8)
    rax_7 = rdi_2

int32_t arg_20 = rax_7
int32_t var_158 = 1 << rdi_2.b
int32_t rax_8 = 1 << r8.b
char rax_9 = sub_141461ea0(r15)
void* const rcx_3

if (rax_9 != 0 || *(data_143ed3520 + 4) != 0)
    rcx_3 = 1
else
    rcx_3.b = 0

int128_t zmm0_3 = data_143f02308
int32_t var_c8 = data_143f02318
int32_t var_c4 = var_158
int32_t var_c0 = rax_8
int16_t var_b2 = arg_20.w
int32_t rax_14 = 9

if (rcx_3.b != 0)
    rax_14 = 0x10008

char arg_8 = rcx_3.b
int32_t var_a4 = rax_14
int16_t var_a0 = 0
wchar16 const* const var_98 = u"UnknownTexture2D"
int32_t var_a8 = data_143ed337c
int128_t var_d8 = zmm0_3
int32_t var_bc = 0
int32_t var_b8 = 1
int16_t var_b4 = 0
int16_t var_b0 = 1
int32_t var_ac = 0x15
int16_t var_90 = 1
char var_8e = 0
void*** var_e8 = sub_141188e50(arg1, &var_d8, u"HZBFurthest", 0)
void*** result_1 = nullptr

if (rax_9 != 0)
    result_1 = sub_141188e50(arg1, &var_d8, u"HZBClosest", 0)

void* rbx_2 = *(arg2 + 8)

if (arg_8 != 0)
    r12_2 = 4

int16_t var_148 = 0
int64_t var_144 = 0
var_d8:8.q = &var_158
int64_t rdi_3 = *(rbx_2 + 0x44)
var_c8.q = &arg_8
int32_t var_13c = 0
var_c0.q = &arg_20
var_b0.q = &var_e8
char var_130 = 0
var_a8.q = &result_1
uint32_t r14_2 = (rdi_3 u>> 0x20).d
char var_146 = *(rbx_2 + 0x56)
var_d8.q = r15
var_b8.q = arg1

if (*(rbx_2 + 0x54) != 0)
    r14_2 = (rdi_3 u>> 0x20).d
    int32_t var_13c_1 = *(rbx_2 + 0x4c)

void*** rax_20 = sub_14081d830(0x38, *(arg1 + 8), 1, 0)
void*** rdx_4 = rax_20

if (rax_20 == 0)
    rdx_4 = nullptr
else
    float zmm0_4[0x4] = var_148.o
    rdx_4[1] = *(rbx_2 + 8)
    rdx_4[2] = 0
    *(rdx_4 + 0x18) = zmm0_4
    *rdx_4 = &data_142f34e88
    *(rdx_4 + 0x28) = rbx_2.o

uint128_t zmm4 = zx.o(*(r15 + 0x1598))
uint128_t zmm2 = zx.o(*(r15 + 0x159c))
float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(*(r15 + 0x15a0)))
temp0_2[0] = temp0_2[0] - 0.5f
uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rdi_3.d))
zmm4 = _mm_cvtepi32_ps(zmm4)
temp0_2[0] = temp0_2[0] f/ zmm1_1.d
int128_t zmm7
zmm7.d = 1f f/ zmm1_1.d
zmm4.d = zmm4.d f/ zmm1_1.d
zmm7.d = zmm7.d f+ zmm7.d
zmm1_1.d = _mm_cvtepi32_ps(zx.o(*(r15 + 0x15a4))).d f- 0.5f
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(r14_2))
float zmm6_1 = 1f f/ zmm5.d
zmm1_1.d = zmm1_1.d f/ zmm5.d
zmm2.d = _mm_cvtepi32_ps(zmm2).d f/ zmm5.d
int64_t var_178 = (_mm_unpacklo_ps(temp0_2, zmm1_1.q)).q
int32_t var_f8 = zmm7.d
int32_t var_f0 = zmm4.d
int32_t var_ec = zmm2.d
float var_f4 = zmm6_1 + zmm6_1
sub_141414aa0(&var_d8, rdx_4, 0, &var_f8, var_178, rax_9, 1)
int32_t rbx_3 = r12_2

if (r12_2 s< arg_20)
    char arg_10
    arg_10.d = 0x3f800000
    int32_t arg_14 = 0x3f800000
    uint128_t zmm8 = zx.o(arg_10.q)
    
    do
        void*** rdi_4 = var_e8
        char var_128_1 = 0
        int32_t r8_1 = 1 << (rbx_3.b - 1)
        char var_127_1 = rbx_3.b - 1
        char var_126_1 = 1
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q((var_158.q u>> 0x20).d - 1 + r8_1)
        _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(var_158 - 1 + r8_1), r8_1)))
        int64_t var_124_1 = 0
        int32_t var_11c_1 = 0
        char var_110_1 = 0
        float zmm7_1 = 1f f/ _mm_cvtepi32_ps(zx.o(divs.dp.d(temp8_1:temp9_1, r8_1))).d
        
        if (*(rdi_4 + 0x54) != 0)
            int32_t var_11c_2 = *(rdi_4 + 0x4c)
        
        void*** rax_34
        int32_t zmm6_3
        rax_34, zmm6_3 = sub_14081d830(0x38, *(arg1 + 8), 1, 0)
        void*** rdx_9 = rax_34
        
        if (rax_34 == 0)
            rdx_9 = nullptr
        else
            rdx_9[1] = rdi_4[1]
            *rdx_9 = &data_142f34e88
            *(rdx_9 + 0x18) = var_128_1.o
            rdx_9[2] = 0
            *(rdx_9 + 0x28) = rdi_4.o
        
        var_f8 = zmm6_3
        float var_f4_1 = zmm7_1 + zmm7_1
        var_f0.q = 0
        zmm7_1 = sub_141414aa0(&var_d8, rdx_9, rbx_3, &var_f8, zmm8.q, 0, 1)
        
        if (rax_9 != 0)
            int32_t var_11c_3 = 0
            void*** result_2 = result_1
            char var_128_2 = 0
            int64_t var_124_2 = 0
            char var_110_2 = 0
            char var_127_2 = rbx_3.b - 1
            char var_126_2 = 1
            
            if (*(result_2 + 0x54) != 0)
                int32_t var_11c_4 = *(result_2 + 0x4c)
            
            void*** rax_37
            int32_t zmm6_4
            rax_37, zmm6_4 = sub_14081d830(0x38, *(arg1 + 8), 1, 0)
            void*** rdx_11 = rax_37
            
            if (rax_37 == 0)
                rdx_11 = nullptr
            else
                rdx_11[1] = result_2[1]
                *rdx_11 = &data_142f34e88
                *(rdx_11 + 0x18) = var_128_2.o
                rdx_11[2] = 0
                *(rdx_11 + 0x28) = result_2.o
            
            var_148.d = zmm6_4
            var_144.d = zmm7_1
            var_144 = 0
            sub_141414aa0(&var_d8, rdx_11, rbx_3, &var_148, zmm8.q, 1, 0)
        
        rbx_3 += r12_2
    while (rbx_3 s< arg_20)
    
    r15 = arg3

*(r15 + 0x5088) = var_158
*(r15 + 0x508c) = rax_8
int64_t rdi_5 = sx.q(*(arg1 + 0x168))
var_148.q = var_e8
var_144 = r15 + 0x5030
void* var_138
var_138.b = 1
int32_t rax_43 = (rdi_5 + 1).d
*(arg1 + 0x168) = rax_43

if (rax_43 s> *(arg1 + 0x16c))
    sub_14119a720(arg1 + 0x160, rdi_5.d)

int64_t rax_44 = *(arg1 + 0x160)
int64_t rcx_13 = rdi_5 * 3
*(rax_44 + (rcx_13 << 3)) = var_148.o
*(rax_44 + (rcx_13 << 3) + 0x10) = var_138
void*** result = result_1

if (result != 0)
    int64_t rdi_6 = sx.q(*(arg1 + 0x168))
    var_148.q = result
    var_144 = r15 + 0x5038
    var_138.b = 1
    int32_t rax_46 = (rdi_6 + 1).d
    *(arg1 + 0x168) = rax_46
    
    if (rax_46 s> *(arg1 + 0x16c))
        sub_14119a720(arg1 + 0x160, rdi_6.d)
    
    result = *(arg1 + 0x160)
    int64_t rcx_15 = rdi_6 * 3
    *(result + (rcx_15 << 3)) = var_148.o
    result[rcx_15 + 2] = var_138

return result
