// 函数: sub_141f771f0
// 地址: 0x141f771f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
void* rbx

if (arg2 == 0)
    arg1[2].b = 0
    rbx = &arg1[6]
    arg1[5].b = 0
    arg1[8].b = 0
else
    float zmm1[0x4]
    
    if (rsi.d s<= 0)
        zmm1 = zx.o(0)
    else
        zmm1 = *(rsi * 0x2c + *arg1 - 0x2c)
    
    if (arg5 == 0)
        zmm1[0] = zmm1[0] + 1f
    else
        zmm1 = arg6
    
    float zmm2
    
    if (rsi.d != 0)
        zmm2 = *(rsi * 0x2c + *arg1 - 0x2c)
    
    void* const* rax
    
    if (rsi.d == 0 || zmm1[0] <= zmm2)
        rax.b = 0
    else
        rax.b = 1
        *(arg1 + 0x14) = zmm1[0] - zmm2
    
    arg1[2].b = rax.b
    int64_t rax_1 = sx.q(arg1[4].d)
    
    if (rax_1.d != 0)
        zmm2 = arg1[3 - 0xa][rax_1 * 0xa].d
    
    if (rax_1.d == 0 || zmm1[0] <= zmm2)
        rax_1.b = 0
    else
        rax_1.b = 1
        *(arg1 + 0x2c) = zmm1[0] - zmm2
    
    rbx = &arg1[6]
    arg1[5].b = rax_1.b
    int64_t rax_2 = sx.q(*(rbx + 8))
    float zmm0
    
    if (rax_2.d != 0)
        zmm0 = *(rax_2 * 0x2c + *rbx - 0x2c)
    
    if (rax_2.d == 0 || zmm1[0] <= zmm0)
        *(rbx + 0x10) = 0
    else
        zmm1[0] = zmm1[0] - zmm0
        *(rbx + 0x10) = 1
        *(rbx + 0x14) = zmm1[0]

int64_t rdx
int512_t zmm1_1
rdx, zmm1_1 = sub_141f55fe0(arg1, zx.o(0), arg3)
zmm1_1.o = zx.o(0)
sub_141f55d40(&arg1[3], rdx, arg3)
int128_t zmm7
uint128_t zmm8
uint128_t zmm9
int128_t zmm11_1
uint128_t zmm12
uint128_t zmm13
zmm7, zmm8, zmm9, zmm11_1, zmm12, zmm13 = sub_141f55fe0(rbx, zx.o(0), arg3)
arg1[0xa].d = 0

if (arg2 == 0)
    rsi = zx.q((rsi - 1).d)

int32_t arg_10 = rsi.d

if (rsi.d * arg4 + 1 s> *(arg1 + 0x54))
    sub_1405c55e0(&arg1[9], rsi.d * arg4 + 1)

int32_t i = 0
int32_t zmm10 = (zx.o(0)).d
uint128_t zmm6_1

if (rsi.d s> 0)
    int128_t var_48_1 = zmm7
    uint128_t var_58_1 = zmm8
    uint128_t var_68_1 = zmm9
    uint128_t var_98_1 = zmm12
    
    do
        int32_t rbx_1 = 0
        
        if (arg4 s> 0)
            zmm9.d = zmm13.d f/ _mm_cvtepi32_ps(zx.o(arg4)).d
            zmm12 = _mm_cvtepi32_ps(zx.o(i))
            
            do
                zmm6_1.d = _mm_cvtepi32_ps(zx.o(rbx_1)).d f* zmm9.d
                
                if (rbx_1 != 0)
                    int64_t var_b8_1 = arg7
                    int128_t zmm0_2
                    zmm0_2, zmm6_1, zmm9, zmm10, zmm11_1, zmm12, zmm13 =
                        sub_141f65cc0(arg1, i, zmm6_1, zx.q(arg2))
                    zmm7 = zmm0_2
                else
                    zmm7 = zmm11_1
                
                int64_t rsi_1 = sx.q(arg1[0xa].d)
                zmm7.d = zmm7.d f+ zmm10
                zmm8.d = zmm12.d f+ zmm6_1.d
                int32_t rax_5 = (rsi_1 + 1).d
                arg1[0xa].d = rax_5
                
                if (rax_5 s> *(arg1 + 0x54))
                    sub_1405c4d20(&arg1[9])
                
                int64_t rax_6 = arg1[9]
                int64_t rcx_11 = rsi_1 * 5
                rbx_1 += 1
                *(rax_6 + (rcx_11 << 2)) = zmm7.d
                *(rax_6 + (rcx_11 << 2) + 4) = zmm8.d
                *(rax_6 + (rcx_11 << 2) + 8) = 0
                *(rax_6 + (rcx_11 << 2) + 0x10) = 0
            while (rbx_1 s< arg4)
            
            rsi = zx.q(arg_10)
        
        int64_t var_b8_2 = arg7
        uint128_t zmm0_1
        zmm0_1, zmm10, zmm11_1, zmm13 = sub_141f65cc0(arg1, i, zmm13, zx.q(arg2))
        i += 1
        zmm10 = zmm10 f+ zmm0_1.d
    while (i s< rsi.d)

int64_t rbx_2 = sx.q(arg1[0xa].d)
int32_t rax_7 = (rbx_2 + 1).d
zmm6_1 = _mm_cvtepi32_ps(zx.o(rsi.d))
arg1[0xa].d = rax_7

if (rax_7 s> *(arg1 + 0x54))
    sub_1405c4d20(&arg1[9])

int64_t result = arg1[9]
int64_t rcx_14 = rbx_2 * 5
*(result + (rcx_14 << 2)) = zmm10
*(result + (rcx_14 << 2) + 4) = zmm6_1.d
*(result + (rcx_14 << 2) + 8) = 0
*(result + (rcx_14 << 2) + 0x10) = 0
return result
