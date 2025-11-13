// 函数: sub_140615f20
// 地址: 0x140615f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].b == 0)
    return 

int64_t rax = arg1[0xe]
uint128_t zmm8 = zx.o(*arg2)
uint128_t zmm7
zmm7.q = zmm8.q f- arg1[0x15]

if (rax != 0)
    rax(int.q(zmm7.q))
    zmm7.q = fconvert.d(arg3.d)

arg3 = zx.q(arg1[3].d)
uint128_t zmm6
zmm6.q = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x1c))).q f* zmm7.q
zmm6.q = zmm6.q f* 1000.0
zmm6.q = zmm6.q f/ _mm_cvtepi32_pd(arg3)
zmm6.q = zmm6.q f* arg1[0xc]

if (zmm6.q f< 1.0)
    return 

void* rdi_1 = arg1[4]
arg3 = zmm6.q f+ *(rdi_1 + 0x30)
int64_t _Y = _mm_cvtepi32_pd(zx.q(*(rdi_1 + 0x38)))
*(rdi_1 + 0x30) = arg3

if (not(arg3 f< _Y))
    double zmm0 = fmod(arg3, _Y)
    void* rcx_1 = *(rdi_1 + 0x20)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(*(rdi_1 + 0x2c) + 1)
    *(rdi_1 + 0x30) = zmm0
    *(rcx_1 + 0x20)
    int32_t temp1_1 = mods.dp.d(temp2_1:temp3_1, *(rcx_1 + 0x20))
    *(rdi_1 + 0x2c) = temp1_1
    
    if (temp1_1 == 0)
        *(rdi_1 + 0x28) += 1
    
    sub_140611760(arg1, arg1[4])

zmm7.q = zmm7.q f+ arg1[2]
zmm6.q = zmm6.q f+ arg1[0xb]
arg1[0x15] = zmm8.q
int64_t rsi_1 = 0
int32_t rbp_1 = 0
arg1[2] = zmm7.q
arg1[0xb] = zmm6.q
int64_t rdx_3 = arg1[0xf]
int32_t r15_3 = ((arg1[0x10] - rdx_3) s>> 3).d
int64_t r14_1 = sx.q(r15_3)

if (r15_3 s> 0)
    int64_t rdi_2 = 0
    
    do
        arg1[0xd].d = rbp_1
        rdx_3 = arg1[0xf]
        
        while (*(rdx_3 + (rdi_2 << 3)) != *(arg1[0x12] + (rdi_2 << 3)))
            void* rcx_4 = **(rdx_3 + (rdi_2 << 3))
            
            if (_mm_cvtepi32_pd(zx.q(*(rcx_4 + 0xc))) f> arg1[0xb])
                break
            
            sub_140611760(arg1, rcx_4)
            int64_t rax_7 = arg1[0xf]
            *(rax_7 + (rdi_2 << 3)) += 8
            rdx_3 = arg1[0xf]
        
        rbp_1 += 1
        rdi_2 += 1
    while (rdi_2 s< r14_1)

if (r15_3 s> 0)
    int64_t* rcx_7 = arg1[0x12]
    int64_t* rdx_5 = rdx_3 - rcx_7
    
    do
        if (*(rdx_5 + rcx_7) != *rcx_7)
            return 
        
        rsi_1 += 1
        rcx_7 = &rcx_7[1]
    while (rsi_1 s< r14_1)

arg1[1].b = 0
sub_140615210(arg1)
int64_t* rcx_9 = arg1[0x16]
int64_t rdx_6
rdx_6.b = 1
(*(*rcx_9 + 0x10))(rcx_9, rdx_6)
