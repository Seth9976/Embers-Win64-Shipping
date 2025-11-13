// 函数: sub_141e77170
// 地址: 0x141e77170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg3 == 0)
    return 

int32_t i_1
float zmm1[0x4]

if (sub_140a80ea0() == 0)
    void* var_80_1 = arg2
    void*** rax_1 = sub_140a82f30(0x28, 8)
    zmm1 = arg3.o
    *rax_1 = &data_142ec17e8
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
    *(rax_1 + 8) = arg1.o
    temp0_1[0] = arg4.d
    *(rax_1 + 0x18) = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    void*** var_58_1 = rax_1
    int64_t (* var_68)(int64_t* arg1)
    int64_t (* rax_2)(int64_t* arg1) = var_68
    
    if (rax_1 != -8)
        rax_2 = sub_141e76320
    
    char rdx = i_1.b
    var_68 = rax_2
    sub_141e85cb0(&var_68, rdx)
    return 

sub_140ba6ab0(arg1 + 0x260, &i_1, arg2)
int64_t* i = sx.q(i_1)
void* const rbx_3

if (i.d == 0xffffffff)
    rbx_3 = nullptr
else
    rbx_3 = i * 0x60 + *(arg1 + 0x260)

void* rsi_1 = rbx_3 + 8

if (rbx_3 == 0)
    rsi_1 = nullptr

if (rsi_1 == 0)
    return 

sub_141e7ade0(rsi_1, &i_1, arg3)
int64_t i_2 = sx.q(i_1)

if (i_2.d == 0xffffffff)
    i = nullptr
else
    i = i_2 * 0x70 + *rsi_1

void* rcx_4 = &i[1]

if (i == 0)
    rcx_4 = nullptr

if (rcx_4 == 0)
    return 

char r8_2 = *(rcx_4 + 0x5c)

if ((r8_2 & 1) == 0)
    sub_141e84120(rsi_1, arg3)
    int32_t* rdx_7 = rbx_3 + 0x3c
    
    if (rbx_3 == 0)
        rdx_7 = 0x34
    
    void* rax_4 = rbx_3 + 0x10
    
    if (rbx_3 == 0)
        rax_4 = 8
    
    if (*rax_4 == *rdx_7)
        sub_141e84430(arg1 + 0x260, arg2)
else
    i = *(arg2 + 0x70)
    int32_t zmm0 = 0x3f800000
    zmm1 = 0x3f800000
    
    for (; i != &i[sx.q(*(arg2 + 0x78)) * 4]; i = &i[4])
        if (*i == arg3)
            zmm0 = i[1].d
            zmm1 = *(i + 0xc)
            break
    
    *(rcx_4 + 0x58) = arg4.d
    *(rcx_4 + 8) = zmm0
    *(rcx_4 + 0x5c) = (r8_2 & 0xf7) | 6
    *(rcx_4 + 0xc) = zmm1[0]
