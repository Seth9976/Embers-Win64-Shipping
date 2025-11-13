// 函数: sub_142c4cb30
// 地址: 0x142c4cb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
void* r13_1 = sx.q(*(arg2 + 0x70)) * 0x624 + *(arg1 + 0x400)
*(arg2 + 0x48) = 0
int64_t rcx = *(arg1 + 8)
int64_t result_1 = 0
int32_t i_4 = 0

if ((*(arg1 + 0xf0))(rcx, zx.q(*(r13_1 + 4)), &i_4, &result_1, 0) == 0)
    uint64_t i_3 = zx.q(i_4)
    
    if (i_3.d s> 0)
        char* rax_5 = result_1 + 0x224
        uint64_t i
        
        do
            if ((*rax_5 & 1) != 0)
                *(arg2 + 0x48) += 1
            
            rax_5 = &rax_5[0x228]
            i = i_3
            i_3 -= 1
        while (i != 1)

int64_t result = sx.q(*(arg2 + 0x48))

if (result.d != 0)
    int64_t rax_6 = sub_142c4c1b0(result * 0x1d0)
    uint64_t count = sx.q(*(arg2 + 0x48)) * 0x1d0
    *(arg2 + 0x50) = rax_6
    result = memset(rax_6, 0, count)
    int32_t i_5 = i_4
    int32_t r15_1 = 0
    
    if (i_5 s> 0)
        int32_t* rsi_1 = nullptr
        int64_t r12_1 = 0
        uint128_t zmm6 = 0x40c3880000000000
        
        do
            result = result_1
            
            if ((*(rsi_1 + result + 0x224) & 1) != 0)
                void* rbx_2 = *(arg2 + 0x50) + r12_1
                *(rbx_2 + 0x154) = -1
                int64_t i_2 = 2
                *(rbx_2 + 0x1c8) = *(rsi_1 + result_1)
                void* rcx_5 = rbx_2
                void* rdx_3 = result_1 + 0x14 + rsi_1
                uint128_t zmm0_1
                int64_t i_1
                
                do
                    rcx_5 += 0x80
                    zmm0_1 = *rdx_3
                    rdx_3 += 0x80
                    *(rcx_5 - 0x80) = zmm0_1
                    *(rcx_5 - 0x70) = *(rdx_3 - 0x70)
                    *(rcx_5 - 0x60) = *(rdx_3 - 0x60)
                    *(rcx_5 - 0x50) = *(rdx_3 - 0x50)
                    *(rcx_5 - 0x40) = *(rdx_3 - 0x40)
                    *(rcx_5 - 0x30) = *(rdx_3 - 0x30)
                    *(rcx_5 - 0x20) = *(rdx_3 - 0x20)
                    *(rcx_5 - 0x10) = *(rdx_3 - 0x10)
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                *(rbx_2 + 0xff) = i_2.b
                int64_t rdx_4 = sx.q(*(rsi_1 + result_1 + 8))
                
                if (rdx_4.d s>= 0 && rdx_4.d s< *(arg1 + 0x408))
                    int64_t rax_9 = *(arg1 + 0x400)
                    int64_t rcx_6 = rdx_4 * 0x624
                    *(rbx_2 + 0x100) = *(rcx_6 + rax_9 + 0x218)
                    *(rbx_2 + 0x110) = *(rcx_6 + rax_9 + 0x228)
                    *(rbx_2 + 0x11f) = 0
                
                *(rbx_2 + 0x1cc) = rdx_4.d
                int64_t rcx_7 = *(arg1 + 8)
                int32_t var_220 = 0
                void* var_228 = nullptr
                int32_t var_248
                var_248.q = &var_228
                int32_t rax_10 = (*(arg1 + 0xd0))(rcx_7, zx.q(*(rbx_2 + 0x1cc)), 
                    zx.q(*(rbx_2 + 0x1c8)), &var_220, var_248)
                
                if (rax_10 == 0 && var_220 s> rax_10)
                    *(rbx_2 + 0x138) = *(var_228 + 0x1c)
                    *(rbx_2 + 0x13c) = *(var_228 + 0x20)
                    *(rbx_2 + 0x150) = *(var_228 + 0x28)
                    *(rbx_2 + 0x130) = *(var_228 + 0x14)
                    *(rbx_2 + 0x134) = *(var_228 + 0x18)
                    *(rbx_2 + 0x140) = *(rbx_2 + 0x130)
                
                sub_142c4c1d0(&var_228)
                void var_1f8
                memset(&var_1f8, 0, 0x1a0)
                int64_t rax_16 = *(arg1 + 0xe8)
                
                if (rax_16 != 0 &&
                        rax_16(*(arg1 + 8), zx.q(*(r13_1 + 4)), zx.q(*(rbx_2 + 0x1c8)), &var_1f8) == 0)
                    int32_t var_84
                    *(rbx_2 + 0x120) |= (var_84 & 1) * 2
                    int32_t rcx_19 = ((var_84 & 2) * 2) | *(rbx_2 + 0x120)
                    *(rbx_2 + 0x120) = rcx_19
                    *(rbx_2 + 0x120) = (var_84 & 4) << 2 | rcx_19
                    int32_t var_e8
                    *(rbx_2 + 0x124) = var_e8
                    int32_t var_e4
                    *(rbx_2 + 0x128) = var_e4
                    int32_t var_e0
                    *(rbx_2 + 0x12c) = _mm_cvtepi32_ps(zx.o(var_e0)).d
                    int32_t var_ac
                    uint128_t zmm1
                    zmm1.q = _mm_cvtepi32_pd(zx.q(var_ac)).q f/ zmm6.q
                    *(rbx_2 + 0x160) = zmm1.q
                    int32_t var_a8
                    zmm0_1.q = _mm_cvtepi32_pd(zx.q(var_a8)).q f/ zmm6.q
                    *(rbx_2 + 0x168) = zmm0_1.q
                    int32_t var_a4
                    zmm1.q = _mm_cvtepi32_pd(zx.q(var_a4)).q f/ zmm6.q
                    *(rbx_2 + 0x170) = zmm1.q
                    int32_t var_a0
                    zmm0_1.q = _mm_cvtepi32_pd(zx.q(var_a0)).q f/ zmm6.q
                    *(rbx_2 + 0x178) = zmm0_1.q
                    int32_t var_9c
                    zmm1.q = _mm_cvtepi32_pd(zx.q(var_9c)).q f/ zmm6.q
                    *(rbx_2 + 0x180) = zmm1.q
                    int32_t var_98
                    zmm0_1.q = _mm_cvtepi32_pd(zx.q(var_98)).q f/ zmm6.q
                    *(rbx_2 + 0x188) = zmm0_1.q
                    int32_t var_94
                    zmm1.q = _mm_cvtepi32_pd(zx.q(var_94)).q f/ zmm6.q
                    *(rbx_2 + 0x190) = zmm1.q
                    int32_t var_90
                    zmm0_1.q = _mm_cvtepi32_pd(zx.q(var_90)).q f/ zmm6.q
                    *(rbx_2 + 0x198) = zmm0_1.q
                    int32_t var_c0
                    zmm1.q = _mm_cvtepi32_pd(zx.q(var_c0)).q f/ zmm6.q
                    *(rbx_2 + 0x1b0) = zmm1.q
                    int32_t var_b8
                    *(rbx_2 + 0x1b8) = (_mm_cvtepi32_pd(zx.q(var_b8))).q
                    int32_t var_bc
                    *(rbx_2 + 0x1c0) = (_mm_cvtepi32_pd(zx.q(var_bc))).q
                
                int64_t var_218 = 0
                int32_t var_210_1 = 0
                int64_t var_208_1 = 0
                int64_t var_200_1 = 0
                result = *(arg1 + 0xf8)
                
                if (result != 0)
                    result =
                        result(*(arg1 + 8), zx.q(*(r13_1 + 4)), zx.q(*(rbx_2 + 0x1c8)), &var_218)
                    
                    if (result.d == 0 && var_218:4.d s> result.d && var_210_1 s> result.d)
                        *(rbx_2 + 0x120) |= 8
                
                i_5 = i_4
                r12_1 += 0x1d0
            
            r15_1 += 1
            rsi_1 = &rsi_1[0x8a]
        while (r15_1 s< i_5)

if (result_1 != 0)
    result = sub_142c4c1d0(&result_1)

__security_check_cookie(rax_1 ^ &var_268)
return result
