// 函数: sub_141ad9550
// 地址: 0x141ad9550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg1[1]
int64_t* rdi = arg1
int64_t rax = arg1[2]
int64_t result = -1
*arg3 = 0
int64_t rcx = rax
int64_t result_1 = -1

if (rax s>= r14)
    rcx = r14

int32_t* rbx = arg3
int64_t result_2 = 0

if (rcx s> 0)
    int64_t rcx_1 = r14 - 1
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    int64_t r11_2 = r14 - rax
    int64_t rax_1 = rax - r14
    int64_t var_540_1 = r11_2
    int64_t var_538_1 = rax_1
    
    do
        int64_t r9_1 = rdi[9]
        int64_t rcx_2 = *rdi
        int64_t r8 = rdi[1]
        int64_t r13_2 = rax_1 - 1 + r14
        int64_t rdx_1 = r9_1 * result_2
        int64_t var_278
        uint64_t var_460 = var_278
        int64_t var_4e8
        uint64_t var_448_1 = var_4e8
        int64_t var_4f0_1 = r8
        uint64_t i_9 = r11_2 + r13_2
        int64_t r8_1 = r8 - r14
        uint64_t var_430_1 = rdi[2]
        uint128_t zmm1 = zx.o(rdi[5])
        int64_t var_3f8_1 = r9_1
        int64_t var_3e0_1 = r9_1
        int64_t var_4f8 = rcx_2 + (rdx_1 << 2)
        uint128_t* r10_1 = rcx_2 + ((rdx_1 + r8_1) << 2)
        int64_t var_3d8_1 = r8_1
        int64_t i = 1
        int64_t var_408_1 = rdi[7]
        int64_t rax_5 = rdi[8]
        int64_t var_3c8_1 = r9_1
        int64_t i_13 = 0
        uint128_t* var_288 = r10_1
        int64_t var_280_1 = r14
        uint64_t var_418_1 = zmm1.q
        int64_t var_400_1 = rax_5
        int64_t var_3f0_1 = 0
        uint128_t var_470_1 = var_288.o
        uint128_t var_458_1 = var_4f8.o
        uint128_t var_440_1 = *rdi
        uint128_t var_428_1 = *(rdi + 0x18)
        zmm6 = _mm_and_ps(*r10_1, 0x7fffffff)
        uint128_t zmm0
        
        if (r14 s> 1)
            if (r14 s> 4)
                do
                    int64_t i_14 = i + 2
                    uint32_t zmm3[0x4] = *(r10_1 + (i << 2))
                    int64_t i_12 = i + 1
                    uint32_t zmm2[0x4] = *(r10_1 + (i << 2) + 4)
                    zmm0 = _mm_and_ps(*(r10_1 + (i << 2) + 8), 0x7fffffff)
                    uint32_t temp0_3[0x4] = _mm_and_ps(zmm3, 0x7fffffff)
                    int64_t i_5 = i
                    bool cond:3_1 = temp0_3[0] f<= zmm6.d
                    uint32_t temp0_4[0x4] = _mm_and_ps(zmm2, 0x7fffffff)
                    
                    if (cond:3_1)
                        i_5 = i_13
                    
                    uint32_t temp0_5 = _mm_max_ss(temp0_3[0], zmm6.d)
                    i_13 = i + 3
                    zmm6 = _mm_and_ps(*(r10_1 + (i << 2) + 0xc), 0x7fffffff)
                    bool cond:4_1 = temp0_4[0] f<= temp0_5
                    zmm1 = _mm_max_ss(temp0_4.d, temp0_5)
                    
                    if (cond:4_1)
                        i_12 = i_5
                    
                    float temp0_8 = _mm_max_ss(zmm0.d, zmm1.d)
                    
                    if (zmm0.d f<= zmm1.d)
                        i_14 = i_12
                    
                    bool cond:6_1 = zmm6.d f<= temp0_8
                    zmm6 = _mm_max_ss(zmm6.d, temp0_8)
                    
                    if (cond:6_1)
                        i_13 = i_14
                    
                    i += 4
                while (i s< r11_2 - 2 + r13_2)
            
            while (i s< r14)
                int64_t i_4 = i
                zmm0 = _mm_and_ps(*(r10_1 + (i << 2)), 0x7fffffff)
                zmm1 = _mm_max_ss(zmm0.d, zmm6.d)
                
                if (zmm0.d f<= zmm6.d)
                    i_4 = i_13
                
                i += 1
                i_13 = i_4
                zmm6 = zmm1
        
        int64_t rcx_3 = i_13 + result_2
        *(arg2 + (result_2 << 2)) = rcx_3.d
        int64_t var_3b8
        
        if (zmm6.d f== 0f)
            if (result == -1)
                result = result_2
            
            result_1 = result
        else
            if (result_2 != rcx_3)
                int64_t rax_7 = *rdi
                int64_t r9_2 = rdi[2]
                int64_t r8_2 = rdi[9]
                int64_t rdx_2 = rax_7 + (rcx_3 << 2)
                int64_t rcx_4 = rax_7 + (result_2 << 2)
                int64_t rax_8 = 0
                
                if (r9_2 s>= 4)
                    int32_t* rcx_5 = rcx_4 + (r8_2 << 3)
                    int32_t* rdx_3 = rdx_2 + (r8_2 << 3)
                    int64_t r11_6 = neg.q(r8_2)
                    int64_t rbx_2 = neg.q(r8_2)
                    int64_t r15_1 = neg.q(r8_2)
                    int64_t r12_2 = neg.q(r8_2)
                    int64_t i_8 = ((r9_2 - 4) u>> 2) + 1
                    int64_t rax_11 = i_8 << 2
                    int64_t i_1
                    
                    do
                        zmm0 = rcx_5[r12_2 * 2]
                        rcx_5[r12_2 * 2] = rdx_3[r15_1 * 2]
                        rdx_3[r15_1 * 2] = zmm0.d
                        zmm1 = rcx_5[rbx_2]
                        rcx_5[rbx_2] = rdx_3[r11_6]
                        rdx_3[r11_6] = zmm1.d
                        zmm0 = *rcx_5
                        *rcx_5 = *rdx_3
                        *rdx_3 = zmm0.d
                        zmm1 = rcx_5[r8_2]
                        rcx_5[r8_2] = rdx_3[r8_2]
                        rcx_5 = &rcx_5[r8_2 * 4]
                        rdx_3[r8_2] = zmm1.d
                        rdx_3 = &rdx_3[r8_2 * 4]
                        i_1 = i_8
                        i_8 -= 1
                    while (i_1 != 1)
                    rdi = arg1
                    rax_8 = rax_11
                    rbx = arg3
                
                if (rax_8 s< r9_2)
                    int64_t r8_3 = r8_2 * rax_8
                    int64_t i_7 = r9_2 - rax_8
                    int32_t* rcx_6 = rcx_4 + (r8_3 << 2)
                    int32_t* rdx_4 = rdx_2 + (r8_3 << 2)
                    int64_t i_2
                    
                    do
                        zmm0 = *rcx_6
                        *rcx_6 = *rdx_4
                        rcx_6 = &rcx_6[r8_2]
                        *rdx_4 = zmm0.d
                        rdx_4 = &rdx_4[r8_2]
                        i_2 = i_7
                        i_7 -= 1
                    while (i_2 != 1)
                
                *rbx += 1
            
            int64_t r11_7 = rdi[9]
            uint64_t i_3 = i_9
            int64_t r10_5 = *rdi
            int64_t r9_3 = rdi[1]
            int64_t rcx_8 = r11_7 * result_2
            uint64_t var_390_1 = var_4e8
            uint64_t var_378_1 = rdi[2]
            int64_t var_4f0_2 = r9_3
            int64_t r9_4 = r9_3 - i_9
            uint64_t i_10 = i_9
            uint64_t var_360_1 = rdi[5]
            int64_t var_350_1 = rdi[7]
            int64_t var_348_1 = rdi[8]
            var_4f8 = r10_5 + (rcx_8 << 2)
            zmm0 = var_4f8.o
            int64_t rcx_9 = r10_5 + ((r9_4 + rcx_8) << 2)
            int64_t var_340_1 = r11_7
            var_3b8 = rcx_9
            uint128_t var_3a0_1 = zmm0
            zmm0 = *rdi
            int64_t var_338_1 = 0
            int64_t result_5 = result_2
            int64_t var_328_1 = r11_7
            int64_t var_320_1 = r9_4
            int64_t var_310_1 = r11_7
            int64_t var_510 = rcx_9
            int64_t var_500_1 = r11_7
            uint128_t var_388_1 = zmm0
            uint128_t var_370_1 = *(rdi + 0x18)
            zmm0 = *(r10_5 + (((r11_7 + 1) * result_2) << 2))
            int64_t* var_530 = &var_510
            int32_t var_590
            int32_t* var_528_1 = &var_590
            void arg_20
            void* var_520_1 = &arg_20
            int64_t* var_518_1 = &var_3b8
            var_590 = zmm0.d
            
            if ((rcx_9.b & 3) == 0)
                uint64_t i_6 = zx.q((neg.q(rcx_9 u>> 2)).d) & 3
                
                if (i_6 s< i_9)
                    i_3 = i_6
            
            uint64_t rax_22 = i_9 - i_3
            
            if (i_9 - i_3 s< 0)
                rax_22 += 3
            
            int64_t r15_2 = i_3 + (rax_22 s>> 2 << 2)
            sub_141a8b550(&var_530, 0, i_3)
            
            for (; i_3 s< r15_2; i_3 += 4)
                int64_t rax_24 = var_510
                float zmm0_1[0x4] = var_590
                float temp0_13[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
                *(rax_24 + (i_3 << 2)) = _mm_div_ps(*(rax_24 + (i_3 << 2)), temp0_13)
            
            sub_141a8b550(&var_530, r15_2, i_9)
            result = result_1
        
        if (result_2 s< rcx_1)
            int64_t rcx_14 = rdi[9]
            int64_t rbx_3 = rdi[2]
            var_4e8 = rbx_3
            int64_t rbx_4 = rbx_3 - r13_2
            int64_t rdx_7 = *rdi + (result_2 << 2)
            int64_t var_4a8_1 = rdi[7]
            int64_t var_4a0_1 = rdi[8]
            uint128_t var_4e0_1 = *rdi
            uint64_t var_4d0_1 = rdi[2]
            zmm1 = zx.o(rdi[5])
            uint128_t var_4c8_1 = *(rdi + 0x18)
            var_4f8 = rdx_7
            zmm0 = data_142e1c950
            int64_t var_498_1 = rcx_14
            int64_t var_478 = rdx_7 + ((rbx_4 * rcx_14) << 2)
            uint64_t var_4b8_1 = zmm1.q
            int64_t result_3 = result_2
            uint128_t var_488_1 = zmm0
            var_470_1:8.q = r13_2
            sub_141a8c7c0(&var_460, &var_4f8)
            int64_t rcx_16 = rdi[9]
            int64_t rdx_9 = *rdi
            int64_t zmm1_2 = rdi[2]
            int64_t result_4 = result_2
            int64_t r8_8 = rcx_16 * result_2
            int128_t var_2f0_1 = *rdi
            int128_t zmm0_2 = *(rdi + 0x18)
            int64_t var_2a8_1 = rcx_16
            int64_t var_290_1 = rcx_16
            int64_t var_3d8_2 = rbx_4
            int64_t rbx_5 = rdi[1]
            int64_t var_300_1 = rbx_5
            int64_t var_308 = rdx_9 + (r8_8 << 2)
            int64_t rbx_6 = rbx_5 - i_9
            int64_t var_2b8_1 = rdi[7]
            int64_t var_2b0_1 = rdi[8]
            int64_t var_2e0_1 = zmm1_2
            zmm1_2 = rdi[5]
            var_288 = rdx_9 + ((rbx_6 + r8_8) << 2)
            int128_t var_2d8_1 = zmm0_2
            int64_t var_2a0_1 = 0
            int64_t var_2c8_1 = zmm1_2
            int64_t result_6 = result_2
            uint64_t i_11 = i_9
            void var_270
            sub_141a8c7c0(&var_270, &var_308)
            int64_t var_1f0_1 = rbx_6
            int64_t var_1f8
            int64_t var_1e0_1 = var_1f8
            sub_141a8c830(&var_3b8, rdi, rdi[1] - i_9, rdi[2] - r13_2, i_9, r13_2)
            void var_1d8
            int128_t* rax_37 = sub_141a874b0(&var_288, &var_1d8, &var_478)
            void var_598
            void* var_5a8_2 = &var_598
            sub_141a8b2a0(&var_3b8, rax_37, &rax_37[0xb])
        
        rbx = arg3
        result_2 += 1
        r11_2 = var_540_1
        r14 -= 1
        rax_1 = var_538_1
    while (result_2 s< rcx)

return result
