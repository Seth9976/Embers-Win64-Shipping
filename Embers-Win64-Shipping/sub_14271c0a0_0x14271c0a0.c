// 函数: sub_14271c0a0
// 地址: 0x14271c0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x20)

if (r8 == 0)
    return 

uint128_t zmm0 = *(arg1 + 0x10)
int128_t zmm5 = data_143b58120 ^ 0x80000000
uint128_t zmm3 = data_143b58128
uint128_t zmm1 = data_143b58124
char rdx
int32_t zmm4

if (zmm5.d f>= zmm0.d || zmm0.d f>= data_143b58120)
    rdx = 0
else
    zmm4 = *(arg1 + 0x14)
    
    if ((zmm1 ^ 0x80000000).d f>= zmm4 || zmm4 f>= zmm1.d)
        rdx = 0
    else
        zmm4 = *(arg1 + 0x18)
        
        if ((zmm3 ^ 0x80000000).d f>= zmm4 || zmm4 f>= zmm3.d)
            rdx = 0
        else
            rdx = 1

zmm0 = *(arg1 + 4)
int32_t rax

if (zmm5.d f>= zmm0.d || zmm0.d f>= data_143b58120)
    rax.b = 0
else
    zmm4 = *(arg1 + 8)
    
    if ((zmm1 ^ 0x80000000).d f>= zmm4 || zmm4 f>= zmm1.d)
        rax.b = 0
    else
        zmm1 = *(arg1 + 0xc)
        
        if ((zmm3 ^ 0x80000000).d f>= zmm1.d || zmm1.d f>= zmm3.d)
            rax.b = 0
        else
            rax.b = 1

if (rdx != rax.b)
    if (rdx == 0)
        int32_t rax_2 = *(arg1 + 0x18)
        *(arg1 + 4) = *(arg1 + 0x10)
        *(arg1 + 0xc) = rax_2
        return 
    
    int32_t rax_1 = *(arg1 + 0xc)
    *(arg1 + 0x10) = *(arg1 + 4)
    *(arg1 + 0x18) = rax_1
    return 

if (rdx != 0 || rax.b != 0)
    return 

void* rax_3 = *(r8 + 0x130)
uint64_t var_18
int32_t var_10_1

if (rax_3 == 0)
    var_18 = data_143dbb1f8.q
    var_10_1 = data_143dbb200
else
    zmm1 = *(rax_3 + 0x1d0)
    var_18.d = zmm1.d
    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_10_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
    var_18:4.d = zmm0.d

zmm0 = zx.o(var_18)
*(arg1 + 4) = zmm0.q
*(arg1 + 0x10) = zmm0.q
*(arg1 + 0xc) = var_10_1
*(arg1 + 0x18) = var_10_1
