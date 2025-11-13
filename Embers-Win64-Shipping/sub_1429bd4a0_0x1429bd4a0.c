// 函数: sub_1429bd4a0
// 地址: 0x1429bd4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t* rax_2 = sub_142980a30(arg1)
int32_t i_6
int32_t var_a4
int64_t var_a0
int32_t* var_98
sub_1429bd870(sub_1429839b0(arg1), *rax_2, rax_2[2], rax_2[1], rax_2[3], &var_98, &var_a0, &i_6, 
    &var_a4)
int64_t i = 0
int32_t rbx_1 = 0
void* rax_4 = sub_1429839b0(arg1)
int64_t rdi_1 = var_a0
int32_t* r15 = var_98
int32_t rcx_3 = *(rax_4 + 8)

if (rcx_3 s>= 0)
    int32_t zmm0_1[0x4]
    uint128_t zmm1
    uint128_t zmm2
    uint128_t zmm3
    
    if (rcx_3 s<= 1)
        int32_t i_7 = i_6
        int32_t r10_2 = 0
        
        if (i_7 s> 0)
            if (i_7 u>= 8 && data_143ccb970 s>= 2)
                zmm3 = zx.o(0)
                zmm2 = zx.o(0)
                int32_t rcx_12 = i_7 & 0x80000007
                
                if (rcx_12 s< 0)
                    rcx_12 = ((rcx_12 - 1) | 0xfffffff8) + 1
                
                void* rcx_16 = rdi_1 - r15
                void* rax_11 = &r15[4]
                
                do
                    zmm0_1 = *(rcx_16 + rax_11 - 0x10)
                    r10_2 += 8
                    i += 8
                    zmm1 = *(rax_11 - 0x10)
                    rax_11 += 0x20
                    zmm3 = _mm_add_epi32(_mm_mullo_epi32(zmm1, zmm0_1), zmm3)
                    zmm2 = _mm_add_epi32(
                        _mm_mullo_epi32(*(rax_11 - 0x20), *(rcx_16 + rax_11 - 0x20)), zmm2)
                while (i s< sx.q(i_7 - rcx_12))
                
                zmm2 = _mm_add_epi32(zmm2, zmm3)
                zmm2 = _mm_add_epi32(zmm2, _mm_bsrli_si128(zmm2, 8))
                rbx_1 = _mm_add_epi32(zmm2, _mm_bsrli_si128(zmm2, 4)).d
            
            if (r10_2 s< i_7)
                int32_t* r8_3 = rdi_1 + (sx.q(r10_2) << 2)
                uint64_t i_3 = zx.q(i_7 - r10_2)
                uint64_t i_1
                
                do
                    int32_t rdx_5 = *(r15 - rdi_1 + r8_3) * *r8_3
                    r8_3 = &r8_3[1]
                    rbx_1 += rdx_5
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
    else if (rcx_3 == 2)
        int32_t i_5 = i_6
        
        if (i_5 s> 0)
            int32_t r10_1 = var_a4
            int32_t zmm4_1[0x4] = zx.o(0)
            zmm3 = zx.o(0)
            int32_t* r11_1 = r15
            int32_t r14_1 = data_143ccb970
            uint64_t i_4 = zx.q(i_5)
            uint64_t i_2
            
            do
                int32_t r8_1 = 0
                int64_t j = 0
                
                if (r10_1 s> 0)
                    if (r10_1 u>= 8 && r14_1 s>= 2)
                        zmm2 = _mm_shuffle_epi32(zx.o(*r11_1), 0)
                        int32_t rcx_5 = r10_1 & 0x80000007
                        
                        if (rcx_5 s< 0)
                            rcx_5 = ((rcx_5 - 1) | 0xfffffff8) + 1
                        
                        do
                            r8_1 += 8
                            zmm1 = _mm_mullo_epi32(zmm2, *(rdi_1 + (j << 2)))
                            zmm0_1 = *(rdi_1 + (j << 2) + 0x10)
                            j += 8
                            zmm4_1 = _mm_add_epi32(zmm1, zmm4_1)
                            zmm3 = _mm_add_epi32(_mm_mullo_epi32(zmm2, zmm0_1), zmm3)
                        while (j s< sx.q(r10_1 - rcx_5))
                    
                    if (r8_1 s< r10_1)
                        int32_t* rax_7 = rdi_1 + (j << 2)
                        uint64_t j_2 = zx.q(r10_1 - r8_1)
                        uint64_t j_1
                        
                        do
                            int32_t rcx_9 = *rax_7
                            rax_7 = &rax_7[1]
                            rbx_1 += rcx_9 * *r11_1
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                
                r11_1 = &r11_1[1]
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
            zmm3 = _mm_add_epi32(zmm3, zmm4_1)
            zmm3 = _mm_add_epi32(zmm3, _mm_bsrli_si128(zmm3, 8))
            rbx_1 += _mm_add_epi32(zmm3, _mm_bsrli_si128(zmm3, 4)).d
    else if (rcx_3 == 3)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_1429a8530(&exceptionObject, "Bad level mode getting chunk offset table size")
        _CxxThrowException(&exceptionObject, &data_143946700)
        noreturn

j_sub_140a74f90(r15)
j_sub_140a74f90(rdi_1)
__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rbx_1)
