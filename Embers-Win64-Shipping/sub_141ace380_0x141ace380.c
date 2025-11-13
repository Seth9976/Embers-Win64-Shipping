// 函数: sub_141ace380
// 地址: 0x141ace380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg3 + 8))
int64_t* r15 = arg4
uint64_t r12 = arg3
int64_t* r13 = arg2
void* r14 = arg1

if (*arg1 == result.d)
    int64_t rbx_1 = sx.q(arg2[1].d)
    int32_t i_3 = 0
    uint64_t result_2 = 0
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    uint64_t result_3 = 0
    int32_t var_9c_1 = 0
    int32_t var_a0_1 = rbx_1.d
    
    if (rbx_1.d s> 0)
        sub_1406105e0(&result_3)
        result_2 = result_3
    
    memset(result_2, 0, rbx_1 << 2)
    uint128_t zmm8 = zx.o(0)
    int128_t zmm9 = 0x38d1b717
    uint128_t zmm6 = 0x3f800000
    uint128_t zmm0_1
    uint128_t zmm1
    uint128_t zmm2
    
    if (*(r14 + 4) == 1)
        zmm6, zmm8, zmm9 = sub_141acf160(r14, r13, r12, &result_3)
        result_2 = result_3
    else
        int32_t i = 0
        
        if (r13[1].d s> 0)
            int64_t r13_1 = 0
            uint64_t result_4 = result_2
            
            do
                int64_t* rdi_2 = *arg2 + r13_1
                char rbx_2 = *(rdi_2 + 0x99)
                
                if (rbx_2 == 5)
                    rbx_2 = *(r14 + 0xc)
                
                zmm0_1, zmm6, zmm7, zmm8, zmm9 = sub_141ab4140(rdi_2, arg3, r14, rdi_2[0x13].b)
                zmm2 = zmm0_1
                zmm0_1 = *(r14 + 8)
                
                if (*(r14 + 4) == 0)
                    zmm0_1.d = zmm0_1.d f* rdi_2[2].d
                
                zmm2.d = zmm2.d f/ _mm_max_ss(zmm0_1.d, zmm9.d).d
                
                if (zmm2.d f< zmm8.d)
                    zmm1 = zmm8
                else
                    uint32_t rcx_3 = zx.d(rbx_2)
                    
                    if (rbx_2 == 0)
                        zmm2.d = zmm2.d f* zmm2.d
                        zmm1 = expf((zmm2 ^ zmm7).d)
                    else if (rcx_3 == 1)
                        zmm1.d = zmm6.d f/ expf(zmm2.d).d
                    else if (rcx_3 == 3)
                        zmm0_1.d = zmm2.d f* zmm2.d
                        zmm0_1.d = zmm0_1.d f* zmm2.d
                        zmm1.d = zmm6.d f- zmm0_1.d
                        zmm1 = _mm_max_ss(zmm1.d, zmm8.d)
                    else if (rcx_3 == 4)
                        zmm0_1.d = zmm2.d f* zmm2.d
                        zmm0_1.d = zmm0_1.d f* zmm0_1.d
                        zmm0_1.d = zmm0_1.d f* zmm2.d
                        zmm1.d = zmm6.d f- zmm0_1.d
                        zmm1 = _mm_max_ss(zmm1.d, zmm8.d)
                    else
                        zmm1.d = zmm6.d f- _mm_min_ss(zmm2.d, zmm6.d).d
                
                if (*(rdi_2 + 0x14) != 0)
                    zmm0_1, zmm6, zmm8, zmm9 = sub_141f86ef0(&rdi_2[3], zmm1, zmm1)
                    zmm1 = zmm0_1
                
                i += 1
                r13_1 += 0xa0
                *result_4 = zmm1.d
                result_4 += 4
            while (i s< arg2[1].d)
            
            r15 = arg4
            i_3 = 0
            r13 = arg2
            result_2 = result_3
        
        r12 = arg3
    
    zmm7 = zmm8
    int64_t i_1 = 0
    int64_t rcx_9 = result_2 + (sx.q(var_a0_1) << 2)
    result = result_2
    uint64_t r8_6 = (rcx_9 - result_2 + 3) u>> 2
    
    if (result_2 u> rcx_9)
        r8_6 = 0
    
    if (r8_6 != 0)
        if (r8_6 u>= 8)
            zmm1 = zx.o(0)
            zmm2 = zx.o(0)
            
            do
                i_1 += 8
                zmm1 = _mm_add_ps(zmm1, *result)
                zmm0_1 = *(result + 0x10)
                result += 0x20
                zmm2 = _mm_add_ps(zmm2, zmm0_1)
            while (i_1 != (r8_6 & 0xfffffffffffffff8))
            
            zmm1 = _mm_add_ps(zmm1, zmm2)
            zmm7.q = zmm1 u>> 0x40
            zmm7 = _mm_add_ps(zmm7, zmm1)
            zmm7.d = zmm7.d f+ _mm_shuffle_ps(zmm7, zmm7, 0xf5).d
        
        for (; i_1 != r8_6; i_1 += 1)
            zmm7.d = zmm7.d f+ *result
            result += 4
        
        if (not(zmm7.d f<= zmm9.d))
            uint32_t rcx_12
            
            if (not(zmm7.d f> zmm6.d))
                rcx_12 = zx.d(*(r14 + 0x14))
            
            if (zmm7.d f> zmm6.d || rcx_12 == 1)
                zmm6.d = zmm6.d f/ zmm7.d
            else if (rcx_12 == 2 && not((*(r14 + 0x24)).d f> *(r14 + 0x28)))
                bool cond:2_1 = *(r12 + 8) s<= 0
                int64_t rbx_3 = 0
                int32_t i_2 = 0
                int64_t var_98 = 0
                int32_t var_90_1 = 0
                int32_t r8_7 = 0
                int32_t var_8c_1 = 0
                
                if (not(cond:2_1))
                    do
                        int64_t i_4 = sx.q(i_2)
                        i_2 = (i_4 + 3).d
                        
                        if (i_2 s> r8_7)
                            sub_1406105e0(&var_98)
                            r8_7 = var_8c_1
                            rbx_3 = var_98
                        
                        *(rbx_3 + (i_4 << 2)) = *(r14 + 0x18)
                        *(rbx_3 + (i_4 << 2) + 4) = *(r14 + 0x1c)
                        *(rbx_3 + (i_4 << 2) + 8) = *(r14 + 0x20)
                    while (*(r12 + 8) s> i_2)
                    
                    result_2 = result_3
                
                uint32_t rcx_15 = zx.d(*(r14 + 0xe))
                int32_t var_b8
                
                if (rcx_15 == 1)
                    var_b8 = 0
                    int64_t var_b4_1 = 0x3f800000
                else
                    int64_t var_b4
                    
                    if (rcx_15 == 2)
                        var_b8.q = 0
                        var_b4:4.d = 0x3f800000
                    else
                        var_b8.q = 0x3f800000
                        var_b4:4.d = 0
                
                int32_t zmm8_1
                zmm0_1, result, zmm6, zmm7, zmm8_1 =
                    sub_141abb1f0(r12, &var_98, *(r14 + 0xd), &var_b8)
                zmm0_1.d = zmm0_1.d f* 57.2957764f
                float zmm2_1 = *(r14 + 0x28)
                
                if (zmm0_1.d f<= zmm2_1)
                    float zmm1_1 = *(r14 + 0x24)
                    
                    if (zmm0_1.d f> zmm1_1)
                        zmm0_1.d = zmm0_1.d f- zmm1_1
                        zmm0_1.d = zmm0_1.d f/ (zmm2_1 - zmm1_1)
                        
                        if (not(zmm0_1.d f< zmm8_1))
                            zmm8_1 = _mm_min_ss(zmm0_1.d, zmm6.d)
                        
                        zmm0_1.d = zmm6.d f/ zmm7.d
                        zmm6.d = zmm6.d f- zmm0_1.d
                        zmm6.d = zmm6.d f* zmm8_1
                        zmm6.d = zmm6.d f+ zmm0_1.d
                    else
                        zmm6.d = zmm6.d f/ zmm7.d
                
                if (rbx_3 != 0)
                    result = sub_140a74f90(rbx_3)
            
            if (r13[1].d s> 0)
                do
                    zmm0_1.d = zmm6.d f* *result_2
                    
                    if (not(zmm0_1.d f<= *(r14 + 0x10)))
                        int64_t rbx_4 = sx.q(r15[1].d)
                        uint64_t result_1
                        result_1:4.d = zmm0_1.d
                        result_1.d = i_3
                        int32_t rax_4 = (rbx_4 + 1).d
                        r15[1].d = rax_4
                        
                        if (rax_4 s> *(r15 + 0xc))
                            sub_1405a4d70(r15)
                        
                        result = result_1
                        *(*r15 + (rbx_4 << 3)) = result
                    
                    i_3 += 1
                    result_2 += 4
                while (i_3 s< r13[1].d)
    
    uint64_t result_5 = result_3
    
    if (result_5 != 0)
        return sub_140a74f90(result_5)

return result
