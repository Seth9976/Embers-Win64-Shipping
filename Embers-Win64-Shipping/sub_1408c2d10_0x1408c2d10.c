// 函数: sub_1408c2d10
// 地址: 0x1408c2d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x278)
uint128_t zmm2 = zx.o(0)
float zmm3[0x4] = *(arg1 + 0x54)
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
uint128_t zmm13
uint128_t var_a8 = zmm13
int128_t zmm14
int128_t var_b8 = zmm14
int128_t var_d8
void arg_8
float zmm6_2

if (*(rax + 0x5769) == 0)
    zmm6_2 = sub_1408bf070(rax + 0x2fd8, zx.o(0), zmm2, zmm3, *(arg1 + 0xf8)) f* *(arg1 + 0x58)
    *(arg1 + 0x18) = zmm6_2
else
    *(arg1 + 0x58)
    int32_t* rax_1
    float zmm6_1
    rax_1, zmm6_1 =
        sub_1408bf210(rax + 0x2fd8, &arg_8, zmm2, zx.o(0), zmm3[0], (*(arg1 + 0xfc)).d, var_d8.d)
    int32_t zmm0_1 = (*(arg1 + 0x104)).d
    char* rcx_2 = *(arg1 + 0x278) + 0x2fd8
    int32_t zmm1_1 = *(arg1 + 0x54)
    float zmm3_1[0x4] = *(arg1 + 0xc)
    uint128_t zmm2_1 = *(arg1 + 0x10)
    *(arg1 + 0x18) = zmm6_1 f* *rax_1
    *(arg1 + 0x58)
    int32_t* rax_2
    rax_2, zmm6_2 = sub_1408bf210(rcx_2, &arg_8, zmm2_1, zmm3_1, zmm1_1, zmm0_1)
    zmm6_2 = zmm6_2 f* rax_2[1]

*(arg1 + 0x1c) = zmm6_2
int32_t* rax_3 = sub_1408bf210(*(arg1 + 0x278) + 0x37c0, &arg_8, *(arg1 + 0x10), *(arg1 + 0xc), 
    *(arg1 + 0x54), (*(arg1 + 0x124)).d, var_d8.d)
int128_t zmm1_3 = *(arg1 + 0x114)
float zmm3_3[0x4] = *(arg1 + 0xc)
char* rcx_6 = *(arg1 + 0x278) + 0x4f78
int32_t rax_4 = *(arg1 + 0xd8)
uint128_t zmm2_3 = *(arg1 + 0x10)
*(arg1 + 0x48) = *rax_3
int64_t zmm0_3 = *(arg1 + 0xe8)
*(arg1 + 0x20) = rax_4
*(arg1 + 0x28) = zmm0_3
int32_t var_e8_4 = (*(arg1 + 0x54)).d
var_d8 = zmm1_3
void var_c8
int128_t* rax_5
float zmm9_1
rax_5, zmm9_1 = sub_1408bee50(rcx_6, &var_c8, zmm2_3, zmm3_3, var_e8_4, &var_d8)
void* rcx_7 = *(arg1 + 0x278)
uint128_t zmm0_4 = *rax_5
*(arg1 + 0x24) = *(arg1 + 0xd4)
*(arg1 + 0x38) = zmm0_4
*(arg1 + 0x50) = 0
*(arg1 + 0x281) = 0

if (*(rcx_7 + 0x9ec0) s> 0)
    void* r15_1 = *(arg1 + 0x228)
    
    if (r15_1 != 0)
        void* rax_7 = sub_142542e20()
        void* rdx_5 = *(r15_1 + 0x10)
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
            void* rax_10 = *(arg1 + 0x278)
            int32_t i = 0
            
            if (*(rax_10 + 0x9ec0) s> 0)
                int128_t* r14_1 = nullptr
                int64_t* rdi_1 = nullptr
                
                do
                    void* rbp_1 = *(rax_10 + 0x9eb8)
                    
                    if (*(rdi_1 + rbp_1) != 0 && i s< *(arg1 + 0x190))
                        int128_t zmm0_5
                        int512_t zmm2_5
                        zmm0_5, zmm2_5 = sub_1408bf070(rbp_1 + 8 + rdi_1, *(arg1 + 0x10), 
                            *(arg1 + 0xc), *(arg1 + 0x54), (*(r14_1 + *(arg1 + 0x188))).d)
                        zmm2_5.o = zmm0_5
                        sub_142131b70(r15_1, *(rdi_1 + rbp_1))
                        rax_10 = *(arg1 + 0x278)
                    
                    i += 1
                    rdi_1 = &rdi_1[0xfe]
                    r14_1 += 4
                while (i s< *(rax_10 + 0x9ec0))
            
            *(arg1 + 0xd0)
            int64_t* rax_12
            int512_t zmm2_6
            int128_t zmm6_4
            rax_12, zmm2_6, zmm6_4 = sub_140b58170(&arg_8, "LifeSpan", 1)
            zmm2_6.o = zmm6_4
            zmm9_1 = sub_142131b70(r15_1, *rax_12)
        
        rcx_7 = *(arg1 + 0x278)

char rax_13 = *(arg1 + 0xe4)
float zmm3_4[0x4] = 0x3c8efa35
int32_t zmm5 = 0x3e22f983
int32_t zmm6_3 = 0x40c90fdb
float zmm10 = -1f
float zmm7 = 2.47604949e-05f
float zmm8 = 2.75255616e-06f
uint128_t zmm1_4
uint128_t zmm2_4

if (rax_13 == 0)
    zmm1_4.d = (*(arg1 + 0x284)).d f+ *(arg1 + 0x1a8)
    zmm0_4.d = (*(arg1 + 0x1ac)).d f+ *(arg1 + 0x288)
    *(arg1 + 0x30) = zmm1_4.d
    *(arg1 + 0x34) = zmm0_4.d
else if (rax_13 == 1)
    uint128_t zmm4_1
    zmm4_1.d = (*(arg1 + 0xd4)).d f* 0.0174532924f
    zmm0_4.d = zmm4_1.d f* 0.159154937f
    
    if (zmm4_1.d f< zmm9_1)
        zmm0_4.d = zmm0_4.d f- 0.5f
    else
        zmm0_4.d = zmm0_4.d f+ 0.5f
    
    zmm0_4.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0_4.d))).d f* 6.28318548f
    zmm4_1.d = zmm4_1.d f- zmm0_4.d
    
    if (not(zmm4_1.d f<= 1.57079637f))
        zmm2_4 = 0xbf800000
        zmm0_4.d = 3.14159274f f- zmm4_1.d
        zmm4_1 = zmm0_4
    else if (zmm4_1.d f>= -1.57079637f)
        zmm2_4 = 0x3f800000
    else
        zmm2_4 = 0xbf800000
        zmm0_4.d = -3.14159274f f- zmm4_1.d
        zmm4_1 = zmm0_4
    
    zmm3_4 = 0x37cfb4c2
    zmm1_4.d = zmm4_1.d f* zmm4_1.d
    zmm0_4.d = zmm1_4.d f* 2.60516146e-07f
    zmm3_4[0] = 2.47604949e-05f f- zmm0_4.d
    zmm0_4.d = zmm1_4.d f* 2.3889859e-08f
    zmm3_4[0] = zmm3_4[0] f* zmm1_4.d
    zmm3_4[0] = zmm3_4[0] - 0.00138883782f
    zmm3_4[0] = zmm3_4[0] f* zmm1_4.d
    zmm3_4[0] = zmm3_4[0] + 0.0416666381f
    zmm3_4[0] = zmm3_4[0] f* zmm1_4.d
    zmm3_4[0] = zmm3_4[0] - 0.5f
    zmm3_4[0] = zmm3_4[0] f* zmm1_4.d
    zmm3_4[0] = zmm3_4[0] + 1f
    zmm3_4[0] = zmm3_4[0] f* zmm2_4.d
    zmm2_4.d = 2.75255616e-06f f- zmm0_4.d
    zmm2_4.d = zmm2_4.d f* zmm1_4.d
    zmm2_4.d = zmm2_4.d f- 0.000198408743f
    zmm2_4.d = zmm2_4.d f* zmm1_4.d
    zmm2_4.d = zmm2_4.d f+ 0.00833333097f
    zmm2_4.d = zmm2_4.d f* zmm1_4.d
    zmm2_4.d = zmm2_4.d f- 0.166666672f
    zmm2_4.d = zmm2_4.d f* zmm1_4.d
    zmm1_4 = *(arg1 + 0x1d0)
    zmm2_4.d = zmm2_4.d f+ 1f
    zmm0_4.d = zmm1_4.d f* zmm3_4[0]
    zmm0_4.d = zmm0_4.d f+ *(arg1 + 0x284)
    zmm2_4.d = zmm2_4.d f* zmm4_1.d
    zmm1_4.d = zmm1_4.d f* zmm2_4.d
    zmm1_4.d = zmm1_4.d f+ *(arg1 + 0x288)
    *(arg1 + 0x30) = zmm0_4.d
    *(arg1 + 0x34) = zmm1_4.d
    zmm3_4 = 0x3c8efa35
else if (rax_13 == 2)
    int128_t zmm0_6
    int512_t zmm6_5
    zmm0_6, zmm6_5 = sub_1408bf070(*(arg1 + 0x278) + 0x96b0, *(arg1 + 0x10), *(arg1 + 0xc), 
        *(arg1 + 0x54), (*(arg1 + 0x130)).d)
    zmm6_5.o = zmm0_6
    zmm0_4, zmm6_3, zmm7, zmm8, zmm9_1, zmm10 = sub_1408bf070(*(arg1 + 0x278) + 0x8ec8, 
        *(arg1 + 0x10), *(arg1 + 0xc), *(arg1 + 0x54), (*(arg1 + 0x12c)).d)
    zmm1_4.d = (*(arg1 + 0x1ac)).d f+ *(arg1 + 0x288)
    zmm3_4 = *(arg1 + 0x58)
    rcx_7 = *(arg1 + 0x278)
    zmm5 = 0x3e22f983
    zmm2_4.d = zmm3_4.d f* zmm0_4.d
    zmm0_4.d = (*(arg1 + 0x284)).d f+ *(arg1 + 0x1a8)
    zmm3_4[0] = zmm3_4[0] f* zmm6_3
    zmm6_3 = 0x40c90fdb
    zmm2_4.d = zmm2_4.d f+ zmm0_4.d
    zmm3_4[0] = zmm3_4[0] f+ zmm1_4.d
    *(arg1 + 0x30) = zmm2_4.d
    *(arg1 + 0x34) = zmm3_4[0]
    zmm3_4 = 0x3c8efa35

if (rcx_7 != 0)
    zmm1_4 = *(arg1 + 0xf4)
    void* rax_15
    
    if (not(zmm1_4.d f== zmm9_1))
        rax_15 = *(arg1 + 0x298)
    
    if (zmm1_4.d f== zmm9_1 || rax_15 == 0)
        *(arg1 + 0x28) = *(arg1 + 0xe8)
    else
        zmm0_4 = zmm1_4
        zmm1_4.d = zmm1_4.d f* *(rax_15 + 0x2c)
        zmm0_4.d = zmm0_4.d f* *(rax_15 + 0x28)
        zmm1_4.d = zmm1_4.d f+ *(arg1 + 0xec)
        zmm0_4.d = zmm0_4.d f+ *(arg1 + 0xe8)
        *(arg1 + 0x2c) = zmm1_4.d
        *(arg1 + 0x28) = zmm0_4.d

uint64_t result = zx.q(*(arg1 + 0xe4))

if (result.b == 0)
    zmm1_4.d = (*(arg1 + 0x1a8)).d f+ *(arg1 + 0x284)
    zmm0_4.d = (*(arg1 + 0x288)).d f+ *(arg1 + 0x1ac)
    *(arg1 + 0x30) = zmm1_4.d
    *(arg1 + 0x34) = zmm0_4.d
else if (result.b == 1)
    zmm2_4.d = (*(arg1 + 0xd4)).d f* zmm3_4[0]
    zmm0_4.d = zmm2_4.d f* zmm5
    
    if (zmm2_4.d f< zmm9_1)
        zmm0_4.d = zmm0_4.d f- 0.5f
    else
        zmm0_4.d = zmm0_4.d f+ 0.5f
    
    result = zx.q(int.d(zmm0_4.d))
    zmm0_4.d = _mm_cvtepi32_ps(zx.o(result.d)).d f* zmm6_3
    zmm2_4.d = zmm2_4.d f- zmm0_4.d
    
    if (not(zmm2_4.d f<= 1.57079637f))
        uint128_t zmm12
        zmm12.d = 3.14159274f f- zmm2_4.d
        zmm2_4 = zmm12
    else if (zmm2_4.d f>= -1.57079637f)
        zmm10 = 1f
    else
        zmm13.d = -3.14159274f f- zmm2_4.d
        zmm2_4 = zmm13
    
    zmm1_4.d = zmm2_4.d f* zmm2_4.d
    zmm0_4.d = zmm1_4.d f* 2.60516146e-07f
    zmm7 = zmm7 f- zmm0_4.d
    zmm0_4.d = zmm1_4.d f* 2.3889859e-08f
    zmm8 = ((((zmm8 f- zmm0_4.d) f* zmm1_4.d - 0.000198408743f) f* zmm1_4.d + 0.00833333097f)
        f* zmm1_4.d - 0.166666672f) f* zmm1_4.d
    zmm7 = (((zmm7 f* zmm1_4.d - 0.00138883782f) f* zmm1_4.d + 0.0416666381f) f* zmm1_4.d - 0.5f)
        f* zmm1_4.d + 1f
    zmm1_4 = *(arg1 + 0x1d0)
    zmm0_4.d = zmm1_4.d f* zmm7 * zmm10
    zmm1_4.d = zmm1_4.d f* (zmm8 + 1f) f* zmm2_4.d
    zmm0_4.d = zmm0_4.d f+ *(arg1 + 0x284)
    zmm1_4.d = zmm1_4.d f+ *(arg1 + 0x288)
    *(arg1 + 0x30) = zmm0_4.d
    *(arg1 + 0x34) = zmm1_4.d
else if (result.b == 2)
    int128_t zmm0_7
    int512_t zmm6_6
    zmm0_7, zmm6_6 = sub_1408bf070(rcx_7 + 0x96b0, *(arg1 + 0x10), *(arg1 + 0xc), *(arg1 + 0x54), 
        (*(arg1 + 0x130)).d)
    zmm6_6.o = zmm0_7
    float zmm0_8
    float zmm6_7
    zmm0_8, result, zmm6_7 = sub_1408bf070(*(arg1 + 0x278) + 0x8ec8, *(arg1 + 0x10), *(arg1 + 0xc), 
        *(arg1 + 0x54), (*(arg1 + 0x12c)).d)
    float zmm3_7 = *(arg1 + 0x58)
    float zmm2_9 = zmm3_7 * zmm0_8
    zmm0_8 = *(arg1 + 0x284) f+ *(arg1 + 0x1a8)
    *(arg1 + 0x34) = zmm3_7 * zmm6_7 + *(arg1 + 0x1ac) f+ *(arg1 + 0x288)
    *(arg1 + 0x30) = zmm2_9 + zmm0_8

int32_t i_1 = 0

if (*(arg1 + 0xc8) s> 0)
    result = *(arg1 + 0xc0)
    void* rdi_2 = nullptr
    
    do
        *(rdi_2 + result + 0x40) = 0
        *(rdi_2 + *(arg1 + 0xc0) + 0x44) = 0
        int64_t rax_17 = *(arg1 + 0xc0)
        int64_t rsi_1 = sx.q(*(rdi_2 + rax_17 + 0x28))
        void* r14_2 = rdi_2 + rax_17
        int32_t rcx_21 = *(rdi_2 + rax_17 + 0x18)
        
        if (rcx_21 s> rsi_1.d)
            *(r14_2 + 0x28) = rcx_21
            
            if (rcx_21 s> *(r14_2 + 0x2c))
                sub_1405a4cf0(r14_2 + 0x20)
            
            memset(*(r14_2 + 0x20) + (rsi_1 << 2), 0, sx.q(rcx_21 - rsi_1.d) << 2)
        else if (rcx_21 s< rsi_1.d && rcx_21 != rsi_1.d)
            *(r14_2 + 0x28) = rcx_21
            sub_1405dac90(r14_2 + 0x20)
        
        result = *(arg1 + 0xc0)
        int32_t j = 0
        
        if (*(rdi_2 + result + 0x28) s> 0)
            int64_t rsi_2 = 0
            int32_t* r14_3 = nullptr
            
            do
                *(r14_3 + *(rdi_2 + *(arg1 + 0xc0) + 0x20)) = j
                *(*(*(rdi_2 + *(arg1 + 0xc0) + 0x10) + rsi_2) + 0x282) = 1
                sub_1408c2d10(*(*(rdi_2 + *(arg1 + 0xc0) + 0x10) + rsi_2))
                result = *(arg1 + 0xc0)
                r14_3 = &r14_3[1]
                j += 1
                rsi_2 += 8
            while (j s< *(rdi_2 + result + 0x28))
        
        i_1 += 1
        rdi_2 += 0x50
    while (i_1 s< *(arg1 + 0xc8))

return result
