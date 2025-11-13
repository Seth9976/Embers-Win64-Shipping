// 函数: sub_141761480
// 地址: 0x141761480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg3
arg3.b = 6
sub_1417048d0(arg1, 2, arg3.b)
int32_t i_3 = 0
*arg1 = &data_142fc54b0
*(arg1 + 0x10) = *rbx
*(arg1 + 0x20) = rbx[1]
*(arg1 + 0x30) = rbx[2]
arg1[0xa] = 0
arg1[0xb] = 0
arg1[8] = 0
arg1[9].d = 0
int32_t rcx = arg1[5].d
arg1[8].d = rcx
int32_t rax = *(arg1 + 0x2c)
*(arg1 + 0x44) = rax
int32_t rdx = arg1[6].d
arg1[9].d = rdx
int64_t rbx_1 = sx.q(arg1[0xb].d)
int32_t rdx_2 = rdx * rax * rcx

if (rdx_2 s> rbx_1.d)
    arg1[0xb].d = rdx_2
    
    if (rdx_2 s> 0)
        sub_1406105e0(&arg1[0xa])
    
    memset(arg1[0xa] + (rbx_1 << 2), 0, sx.q(rdx_2 - rbx_1.d) << 2)
else if (rdx_2 s< rbx_1.d && rdx_2 != rbx_1.d)
    arg1[0xb].d = rdx_2
    sub_1405dac90(&arg1[0xa])

arg1[0xe] = 0
arg1[0xf] = 0
arg1[0xc] = 0
arg1[0xd].d = 0
int32_t rcx_4 = arg1[5].d
arg1[0xc].d = rcx_4
int32_t rax_2 = *(arg1 + 0x2c)
*(arg1 + 0x64) = rax_2
int32_t r8_2 = arg1[6].d
arg1[0xd].d = r8_2
int32_t rax_3 = arg1[0xf].d
int32_t r8_4 = r8_2 * rax_2 * rcx_4

if (r8_4 s> rax_3)
    arg1[0xf].d = r8_4
    
    if (r8_4 s> *(arg1 + 0x7c))
        sub_14083a7e0(&arg1[0xe])
else if (r8_4 s< rax_3 && r8_4 != rax_3)
    arg1[0xf].d = r8_4
    sub_140775970(&arg1[0xe])

arg1[0x10] = arg1[2]
arg1[0x11].d = arg1[3].d
*(arg1 + 0x8c) = *(arg1 + 0x1c)
*(arg1 + 0x94) = *(arg1 + 0x24)
(*(*arg4 + 0x28))(arg4, &arg1[0x13])
arg1[0x16].d = arg5
int32_t var_88
int64_t var_78
uint128_t zmm0
uint128_t zmm1

if (arg6 == 0)
    int32_t rbx_3 = arg1[6].d
    int32_t* r12_3 = nullptr
    int32_t rax_15 = *(arg1 + 0x2c)
    int32_t rcx_12 = arg1[5].d
    int32_t var_60_1 = rbx_3
    int32_t* var_58 = nullptr
    int64_t var_50_1 = 0
    int32_t var_68 = rcx_12
    int32_t rbx_5 = rbx_3 * rax_15 * rcx_12
    int32_t var_64_1 = rax_15
    
    if (rbx_5 s> 0)
        var_50_1.d = rbx_5
        sub_1406105e0(&var_58)
        r12_3 = var_58
        memset(r12_3, 0, sx.q(rbx_5) << 2)
    else if (rbx_5 s< 0)
        int32_t r15_3 = neg.d(rbx_5)
        
        if (r15_3 != 0)
            int32_t r15_4 = neg.d(r15_3)
            
            if (r15_4 != rbx_5)
                memmove(sx.q(rbx_5) << 2, nullptr, (r15_4 - rbx_5) << 2)
            
            var_50_1.d = r15_4
            sub_1405dac90(&var_58)
            r12_3 = var_58
    
    int32_t i = 0
    
    if (arg1[5].d * *(arg1 + 0x2c) * arg1[6].d s> 0)
        int32_t* r15_5 = r12_3
        
        do
            int32_t* rax_21 = sub_1417b0ac0(&arg1[2], &var_78, i)
            int32_t rcx_19 = rax_21[1]
            int32_t rdx_11 = rax_21[2]
            zmm0.d = _mm_cvtepi32_ps(zx.o(*rax_21)).d f+ 0.5f
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_19))
            zmm0.d = zmm0.d f* *(arg1 + 0x34)
            zmm1.d = zmm1.d f+ 0.5f
            zmm0.d = zmm0.d f+ arg1[2].d
            zmm1.d = zmm1.d f* arg1[7].d
            var_88 = zmm0.d
            zmm1.d = zmm1.d f+ *(arg1 + 0x14)
            int32_t var_84_2 = zmm1.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_11)).d f+ 0.5f
            zmm0.d = zmm0.d f* *(arg1 + 0x3c)
            zmm0.d = zmm0.d f+ arg1[3].d
            int32_t var_80_2 = zmm0.d
            sub_1417562d0(arg4, &var_88)
            *r15_5 = zmm0.d
            i += 1
            r15_5 = &r15_5[1]
        while (i s< arg1[5].d * *(arg1 + 0x2c) * arg1[6].d)
    
    var_78 = 0
    int64_t var_70_1 = 0
    sub_141771340(arg1, arg4, &var_68, &var_78)
    float zmm0_1 = *(arg1 + 0x34)
    uint128_t zmm1_1 = arg1[7].d
    
    if (zmm0_1 f<= zmm1_1.d || not(zmm0_1 f> *(arg1 + 0x3c)))
        zmm0_1 = _mm_max_ss(*(arg1 + 0x3c), zmm1_1.d)
    
    uint128_t zmm6_1
    zmm6_1.d = _mm_cvtepi32_ps(zx.o(arg1[0x16].d)).d f* zmm0_1
    
    if (not(zmm6_1.d f== 0f))
        int32_t i_1 = 0
        
        if (arg1[6].d * *(arg1 + 0x2c) * arg1[5].d s> 0)
            int64_t rcx_22 = 0
            
            do
                int64_t rax_28 = arg1[0xa]
                rcx_22 += 4
                i_1 += 1
                *(rcx_22 + rax_28 - 4) = __minss_xmmss_memss(zmm6_1.d, *(rcx_22 + rax_28 - 4))
            while (i_1 s< arg1[6].d * arg1[5].d * *(arg1 + 0x2c))
    
    int32_t i_2 = 0
    
    if (arg1[6].d * *(arg1 + 0x2c) * arg1[5].d s> 0)
        int32_t* rcx_23 = nullptr
        
        do
            zmm0_1 = *(rcx_23 + r12_3)
            zmm0_1 - 0f
            int64_t rax_35 = arg1[0xa]
            
            if (not(zmm0_1 <= 0f))
                zmm0_1 = 1f
            else if (zmm0_1 >= 0f)
                zmm0_1 = (zx.o(0)).d
            else
                zmm0_1 = -1f
            
            i_2 += 1
            *(rcx_23 + rax_35) = zmm0_1 f* *(rcx_23 + rax_35)
            rcx_23 = &rcx_23[1]
        while (i_2 s< *(arg1 + 0x2c) * arg1[5].d * arg1[6].d)
    
    uint32_t zmm6_2[0x4]
    float zmm7_1
    zmm6_2, zmm7_1 = sub_1417774d0(arg1, zmm6_1, &var_78)
    
    if (not(zmm6_2[0] f== zmm7_1) && arg1[6].d * *(arg1 + 0x2c) * arg1[5].d s> 0)
        int128_t* rcx_25 = nullptr
        
        do
            int64_t rax_42 = arg1[0xa]
            uint32_t zmm1_2[0x4] = *(rcx_25 + rax_42)
            
            if (not(_mm_and_ps(zmm1_2, 0x7fffffff)[0] f<= zmm6_2[0]))
                uint32_t zmm0_2[0x4] = zmm6_2
                
                if (not(zmm1_2[0] f> zmm7_1))
                    zmm0_2 ^= 0x80000000
                
                *(rcx_25 + rax_42) = zmm0_2[0]
            
            i_3 += 1
            rcx_25 += 4
        while (i_3 s< *(arg1 + 0x2c) * arg1[5].d * arg1[6].d)
    
    sub_141774ea0(arg1)
    sub_141770e20(arg1, &var_78)
    int64_t rcx_28 = var_78
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    if (r12_3 != 0)
        sub_140a74f90(r12_3)
else
    if (arg1[5].d * *(arg1 + 0x2c) * arg1[6].d s> 0)
        int32_t* r15_1 = nullptr
        
        do
            int32_t* rax_11 = sub_1417b0ac0(&arg1[2], &var_78, i_3)
            int64_t rbx_2 = arg1[0xa]
            int32_t rcx_9 = rax_11[1]
            int32_t rdx_7 = rax_11[2]
            zmm0.d = _mm_cvtepi32_ps(zx.o(*rax_11)).d f+ 0.5f
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_9))
            zmm0.d = zmm0.d f* *(arg1 + 0x34)
            zmm1.d = zmm1.d f+ 0.5f
            zmm0.d = zmm0.d f+ arg1[2].d
            zmm1.d = zmm1.d f* arg1[7].d
            var_88 = zmm0.d
            zmm1.d = zmm1.d f+ *(arg1 + 0x14)
            int32_t var_84_1 = zmm1.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_7)).d f+ 0.5f
            zmm0.d = zmm0.d f* *(arg1 + 0x3c)
            zmm0.d = zmm0.d f+ arg1[3].d
            int32_t var_80_1 = zmm0.d
            sub_1417562d0(arg4, &var_88)
            *(r15_1 + rbx_2) = zmm0.d
            i_3 += 1
            r15_1 = &r15_1[1]
        while (i_3 s< arg1[5].d * *(arg1 + 0x2c) * arg1[6].d)
    
    sub_141774ea0(arg1)
return arg1
