// 函数: sub_140641870
// 地址: 0x140641870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
uint64_t* r14 = arg6
uint64_t r15 = zx.q(arg2)
r14[1].d = 0

if (*(r14 + 0xc) != 0)
    sub_14061cd70(r14, 0)

*arg3 = 0
void* result_1 = nullptr
int64_t rbx_1 = *sub_140b58170(&arg6, "ImageWrapper", 1)
j_sub_140b3db50()
int64_t* rax_1
int64_t r8
rax_1, r8 = j_sub_140b407e0(&data_143de7d78, rbx_1)

if (r15.d u> 5)
    r8.b = 1
else
    switch (r15)
        case 0
            r8.b = 1
        case 1
            r8.b = 0
        case 2
            r8.b = 3
        case 3
            r8.b = 4
        case 4
            r8.b = 5
        case 5
            r8.b = 6

int64_t* var_a8
(*(*rax_1 + 0x40))(rax_1, &var_a8, r8)
int64_t var_b8 = 0
int32_t var_b0 = 0
int16_t* const rdx_4

if (arg1[1].d == 0)
    rdx_4 = &data_142d40450
else
    rdx_4 = *arg1

if (sub_140b1ef70(&var_b8, rdx_4, 0) != 0)
    int64_t* rcx_4 = var_a8
    
    if (rcx_4 == 0)
        result = result_1
        *arg3 = 1
    else if ((**rcx_4)(rcx_4, var_b8, sx.q(var_b0)) == 0)
        result = result_1
        *arg3 = 1
    else
        int64_t* rcx_5 = var_a8
        int128_t var_98
        __builtin_memset(&var_98, 0, 0x18)
        
        if ((*(*rcx_5 + 0x20))(rcx_5, 0, 8, &var_98) == 0)
        label_140641bac:
            int64_t rcx_27 = var_98.q
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            result = result_1
            *arg3 = 1
        else
            int64_t* rdi_1 = var_a8
            arg6 = nullptr
            int32_t rax_9 = (*(*rdi_1 + 0x30))(rdi_1)
            int64_t rdx_6 = *rdi_1
            void* result_2
            uint128_t zmm6_1
            uint128_t zmm7_1
            uint128_t zmm8_1
            uint128_t zmm9_1
            result_2, zmm6_1, zmm7_1, zmm8_1, zmm9_1 =
                sub_1423bea40((*(rdx_6 + 0x28))(rdi_1, rdx_6), rax_9, 0x25, 0)
            arg6 = result_2
            result_1 = result_2
            
            if (result_2 != 0)
                int64_t* rcx_10 = var_a8
                int32_t rax_12 = (*(*rcx_10 + 0x28))(rcx_10)
                int64_t* rcx_11 = var_a8
                *arg4 = rax_12
                int32_t rax_14 = (*(*rcx_11 + 0x30))(rcx_11)
                int64_t i = var_98:8.q
                void* rdi_2 = nullptr
                int64_t rbx_3 = var_98.q
                void* var_80 = nullptr
                *arg5 = rax_14
                
                if (i != 0)
                    sub_1406386c0(&var_80, i, 0)
                    rdi_2 = var_80
                    memcpy(rdi_2, rbx_3, i.d)
                    
                    if (i s> 0)
                        uint128_t var_38_1 = zmm6_1
                        int64_t rbx_4 = 2
                        uint128_t var_48_1 = zmm7_1
                        uint128_t var_58_1 = zmm8_1
                        uint128_t var_68_1 = zmm9_1
                        
                        do
                            int32_t rax_15 = (result + 3).d
                            
                            if (rax_15 s< 0)
                                break
                            
                            if (sx.q(rax_15) s>= i)
                                break
                            
                            int64_t r13 = sx.q(r14[1].d)
                            uint32_t rax_17 = zx.d(*(rdi_2 + rbx_4 - 1))
                            zmm6_1 = _mm_cvtepi32_ps(zx.o(*(rdi_2 + rbx_4 - 2)))
                            uint32_t rax_18 = zx.d(*(rdi_2 + rbx_4))
                            zmm7_1 = _mm_cvtepi32_ps(zx.o(rax_17))
                            uint32_t rax_19 = zx.d(*(rdi_2 + rbx_4 + 1))
                            zmm8_1 = _mm_cvtepi32_ps(zx.o(rax_18))
                            int32_t rax_20 = (r13 + 1).d
                            zmm9_1 = _mm_cvtepi32_ps(zx.o(rax_19))
                            r14[1].d = rax_20
                            
                            if (rax_20 s> *(r14 + 0xc))
                                sub_140610660(r14)
                            
                            uint64_t rax_21 = *r14
                            result = zx.q(result.d + 4)
                            rbx_4 += 4
                            int64_t rcx_18 = r13 * 2
                            *(rax_21 + (rcx_18 << 3)) = zmm6_1.d
                            *(rax_21 + (rcx_18 << 3) + 4) = zmm7_1.d
                            *(rax_21 + (rcx_18 << 3) + 8) = zmm8_1.d
                            *(rax_21 + (rcx_18 << 3) + 0xc) = zmm9_1.d
                        while (sx.q(result.d) s< i)
                        
                        result_1 = arg6
                
                memcpy(sub_140bcb6b0(**(*(result_1 + 0xd0) + 0x18) + 0x10, 2), var_98.q, 
                    (var_98:8.q).d)
                sub_140bd1d40(**(*(result_1 + 0xd0) + 0x18) + 0x10)
                (*(*result_1 + 0x2f8))(result_1)
                
                if (rdi_2 != 0)
                    sub_140a74f90(rdi_2)
                
                goto label_140641bac
            
            int64_t rcx_9 = var_98.q
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)

int64_t rcx_28 = var_b8

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t* var_a0

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        (**var_a0)(var_a0)
        int32_t temp1_1 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_5 = *var_a0
            (*(r8_5 + 8))(var_a0, 1, r8_5)

return result
