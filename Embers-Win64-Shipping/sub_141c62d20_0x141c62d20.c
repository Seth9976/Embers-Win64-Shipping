// 函数: sub_141c62d20
// 地址: 0x141c62d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t r13 = 0
int32_t rax = arg2

if (data_143f34e08 == 0)
    bool cond:1_1 = data_143f34e0c s>= 0x80
    data_143f34e08 = 0x80
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_143f34e00)
    
    memset(data_143f34e00, 0, 0x800)
    int64_t rbx_1 = sx.q(data_143f34e18)
    int32_t rax_1 = (rbx_1 + 8).d
    bool cond:2_1 = rax_1 s<= data_143f34e1c
    data_143f34e18 = rax_1
    
    if (not(cond:2_1))
        sub_1405a4f90(&data_143f34e10)
    
    memset((rbx_1 << 4) + data_143f34e10, 0, 0x80)
    int32_t i = 1
    int64_t r15_1 = 0
    int64_t r12_1 = 0x40
    
    do
        int32_t j = 1
        int64_t rdi_1 = r15_1
        
        do
            sub_141c5cd30(arg1, i, j, 1, data_143f34e00 + 0x400 + rdi_1)
            sub_141c5cd30(arg1, i, j, 0, data_143f34e00 + rdi_1)
            j += 1
            rdi_1 -= -0x80
        while (j s< 9)
        
        i += 1
        r15_1 += 0x10
        r12_1 += 1
    while (i s< 9)
    
    rax = arg_10

int32_t var_40 = 0
int32_t var_3c = 0x3f800000
int128_t zmm6 = zx.o(0)
float zmm0[0x4] = 0.o
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
int32_t zmm1

if (rax != 2)
    temp0[0] = 0x43a50000
    zmm1 = 0x41f00000
else
    temp0[0] = 0x43870000
    zmm1 = 0x42b40000

bool cond:3 = (*(arg1 + 0x368) & 1) == 0
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xe1)
int32_t var_48
var_48.o = temp0_1
*(arg1 + 0x7f8) = temp0_1
int32_t var_40_1 = 0
int32_t var_3c_1 = 0x3f800000
zmm0 = 1.o
float temp0_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
temp0_2[0] = zmm1
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
int32_t var_48_1
var_48_1.o = temp0_3
int32_t var_40_2 = 0
int32_t var_3c_2 = 0x3f800000
*(arg1 + 0x808) = temp0_3

if (cond:3)
    int32_t var_48_2 = 2
    int32_t var_44_1 = 0xbf800000
else
    var_48_1.q = 2

int32_t var_40_3 = 0
int32_t var_3c_3 = 0x3f800000
int32_t var_44_2 = 0xbf800000
*(arg1 + 0x818) = 2
int32_t var_40_4 = 0
int32_t var_3c_4 = 0x3f800000
*(arg1 + 0x828) = 3.o
zmm0 = 4.o
float temp0_4[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
temp0_4[0] = 0x43520000
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
int32_t var_48_4
var_48_4.o = temp0_5
int32_t var_40_5 = 0
int32_t var_3c_5 = 0x3f800000
*(arg1 + 0x838) = temp0_5
zmm0 = 5.o
float temp0_6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
temp0_6[0] = 0x43160000
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xe1)
int32_t var_48_5
var_48_5.o = temp0_7
int32_t var_40_6 = 0
int32_t var_3c_6 = 0x3f800000
*(arg1 + 0x848) = temp0_7
zmm0 = 6.o
float temp0_8[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
temp0_8[0] = 0x41700000
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
int32_t var_48_6
var_48_6.o = temp0_9
int32_t var_40_7 = 0
int32_t var_3c_7 = 0x3f800000
*(arg1 + 0x858) = temp0_9
zmm0 = 7.o
float temp0_10[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
temp0_10[0] = 0x43ac8000
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xe1)
int32_t var_48_7
var_48_7.o = temp0_11
int32_t var_40_8 = 0
int32_t var_3c_8 = 0x3f800000
*(arg1 + 0x868) = temp0_11
zmm0 = 8.o
float temp0_12[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
temp0_12[0] = 0x43340000
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xe1)
int32_t var_48_8
var_48_8.o = temp0_13
int32_t var_40_9 = 0
int32_t var_3c_9 = 0x3f800000
*(arg1 + 0x878) = temp0_13
zmm0 = 9.o
float temp0_14[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
temp0_14[0] = 0x437a0000
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xe1)
int32_t var_48_9
var_48_9.o = temp0_15
int32_t var_40_10 = 0
int32_t var_3c_10 = 0x3f800000
*(arg1 + 0x888) = temp0_15
zmm0 = 0xa.o
float temp0_16[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
temp0_16[0] = 0x42dc0000
*(arg1 + 0x898) = _mm_shuffle_ps(temp0_16, temp0_16, 0xe1)

if (rax != 2)
    arg_10 = 0
    float* rdi_2 = arg1 + 0x7fc
    
    for (int32_t i_1 = 0; i_1 s< 0xb; )
        if (i_1 != 2)
            if (i_1 u<= 0x12)
                jump(&__dos_header.e_magic[zx.q(*((sx.q(i_1) << 2) + 0x141c63300))])
            
            char rax_3
            rax_3, zmm6 = sub_140af3c10(data_143ddb400, AudioChannelAzimuthMap", UNSUPPORTED"
                , &arg_10, &data_143de5780)
            
            if (rax_3 != 0)
                int32_t rax_4 = arg_10
                
                if (rax_4 u<= 0x167)
                    int64_t rcx_14 = 0
                    float temp0_18[0x4] = _mm_cvtepi32_ps(zx.o(rax_4))
                    void* rax_5 = arg1 + 0x7fc
                    
                    while (not(temp0_18[0] f== *rax_5))
                        rcx_14 += 1
                        rax_5 += 0x10
                        
                        if (rcx_14 s>= 0xb)
                            *rdi_2 = temp0_18[0]
                            break
        else if ((*(arg1 + 0x368) & 1) != 0)
            jump(&__dos_header.e_magic[zx.q(*((sx.q(i_1) << 2) + 0x141c63300))])
        
        i_1 += 1
        rdi_2 = &rdi_2[4]

int32_t rax_6 = *(arg1 + 0x8b4)
*(arg1 + 0x8b0) = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_1405a5410(arg1 + 0x8a8, 0)

int32_t* rsi_1 = *(arg1 + 0x968)
uint64_t r12_3 = sx.q(*(arg1 + 0x970)) << 2 u>> 2

if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0x970))])
    r12_3 = 0

if (r12_3 != 0)
    do
        int64_t rax_9 = sx.q(*rsi_1)
        
        if (rax_9.d != 3)
            int64_t rdi_4 = rax_9 * 2
            
            if (not(zmm6.d f> *(arg1 + (rdi_4 << 3) + 0x7fc)))
                int64_t r15_2 = sx.q(*(arg1 + 0x8b0))
                int32_t rax_10 = (r15_2 + 1).d
                *(arg1 + 0x8b0) = rax_10
                
                if (rax_10 s> *(arg1 + 0x8b4))
                    sub_1405a4f90(arg1 + 0x8a8)
                
                *(*(arg1 + 0x8a8) + r15_2 * 0x10) = *(arg1 + (rdi_4 << 3) + 0x7f8)
        
        rsi_1 = &rsi_1[1]
        r13 += 1
    while (r13 != r12_3)

return sub_141c4d210(*(arg1 + 0x8a8), *(arg1 + 0x8b0), arg_10.b)
