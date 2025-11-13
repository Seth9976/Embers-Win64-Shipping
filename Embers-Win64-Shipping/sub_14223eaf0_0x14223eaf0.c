// 函数: sub_14223eaf0
// 地址: 0x14223eaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t var_d8
int128_t zmm6 = sub_141f3baa0(*(*arg1 + 0xb8), &var_d8)
void* result = *arg1
int32_t i = 0

if (*(result + 0xd8) s> 0)
    int64_t* r14_1 = nullptr
    int128_t var_38_1 = zmm6
    int64_t* rsi_1 = nullptr
    int128_t zmm7
    int128_t var_48_1 = zmm7
    
    do
        int64_t r12_1 = *(result + 0xc0)
        int64_t rbx_1 = *(result + 0xd0)
        char var_118_1 = 0
        void* rdi_1 = *(r14_1 + r12_1)
        
        if (rdi_1 == 0)
            var_118_1 = 1
            int32_t* rax_2 = j_sub_140a82f30(0x1b8)
            
            if (rax_2 != 0)
                rax_2 = sub_142229f60(rax_2)
            
            *(r14_1 + r12_1) = rax_2
            void* rcx_3 = &rax_2[0x23]
            void* rax_3 = &data_143f51ad0
            int64_t j_1 = 2
            int64_t j
            
            do
                rcx_3 += 0x80
                int128_t zmm0_1 = *rax_3
                rax_3 += 0x80
                *(rcx_3 - 0x80) = zmm0_1
                *(rcx_3 - 0x70) = *(rax_3 - 0x70)
                *(rcx_3 - 0x60) = *(rax_3 - 0x60)
                *(rcx_3 - 0x50) = *(rax_3 - 0x50)
                *(rcx_3 - 0x40) = *(rax_3 - 0x40)
                *(rcx_3 - 0x30) = *(rax_3 - 0x30)
                *(rcx_3 - 0x20) = *(rax_3 - 0x20)
                *(rcx_3 - 0x10) = *(rax_3 - 0x10)
                j = j_1
                j_1 -= 1
            while (j != 1)
            *rcx_3 = *rax_3
            result = *arg1
            rdi_1 = *(r14_1 + r12_1)
        
        zmm6 = *(result + 0xb0)
        int128_t zmm1_1
        zmm1_1.d = zmm6.d f* *(rsi_1 + rbx_1 + 0xc)
        sub_1422348a0(rdi_1, zmm1_1.d, zmm6.d f* *(rsi_1 + rbx_1 + 0x10), 
            zmm6.d f* *(rsi_1 + rbx_1 + 0x20))
        float zmm2
        
        if ((*(rsi_1 + rbx_1 + 8) & 1) == 0)
            zmm1_1.d = zmm6.d f* *(rsi_1 + rbx_1 + 0x14)
            zmm2 = zmm6.d f* *(rsi_1 + rbx_1 + 0x18)
            zmm6.d = zmm6.d f* *(rsi_1 + rbx_1 + 0x1c)
        else
            zmm1_1 = zx.o(0)
            zmm2 = (zx.o(0)).d
            zmm6 = zx.o(0)
        
        sub_142234c30(rdi_1, zmm1_1.d, zmm2, zmm6.d)
        
        if (var_118_1 != 0)
            int64_t rdx_2 = sx.q(sub_142249710(*arg1[1], *(rsi_1 + rbx_1)))
            
            if (rdx_2.d != 0xffffffff)
                void* rdi_2 = *(*(*(*arg1 + 0xb8) + 0x800) + (rdx_2 << 3))
                
                if (rdi_2 != 0)
                    int64_t* rax_9 = sub_14183e350(rdi_2 + 0xf0)
                    
                    if (rax_9 != 0)
                        sub_142234eb0(*(r14_1 + r12_1), 0, &data_143dbb0c0)
                        sub_142234eb0(*(r14_1 + r12_1), 1, &data_143dbb0c0)
                        int32_t r9_1 = sx.d(*(rdi_2 + 4))
                        void* rdx_3 = *(*arg1 + 0xb8)
                        int32_t var_128
                        float var_c8
                        float (* rax_11)[0x4]
                        float zmm8_1[0x4]
                        float var_98[0x2][0x4]
                        
                        if ((*(rsi_1 + rbx_1 + 8) & 1) == 0)
                            rax_11, zmm8_1 = sub_142242460(&var_98, rdx_3, arg1[2], r9_1)
                        else
                            var_128 = r9_1
                            rax_11, zmm8_1 =
                                sub_142241970(&var_c8, rdx_3, *arg1[1], &var_d8, var_128)
                        float zmm6_1[0x4] = *rax_11
                        float zmm7_1[0x4] = rax_11[1]
                        float var_78_1[0x4] = rax_11[2]
                        int64_t* rax_13 = (*(*rax_9 + 0x30))(rax_9)
                        int64_t rdx_4 = *rax_13
                        int64_t* rax_14 = (*(rdx_4 + 0x30))(rax_13, rdx_4)
                        var_c8 = zmm6_1[0]
                        float var_c4_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)[0]
                        float var_b8_1 = zmm7_1[0]
                        float zmm0_2[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
                        float var_c0_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)[0]
                        float var_b4_1 = zmm0_2[0]
                        float var_b0_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)[0]
                        float var_bc_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)[0]
                        int64_t* rax_16
                        int64_t r8_3
                        rax_16, r8_3 = (*(*rax_14 + 0xb0))(rax_14, &var_c8)
                        r8_3.b = 1
                        int64_t r9_3 = *rax_16
                        (*(r9_3 + 0x168))(rax_16, 1, r8_3, r9_3, var_128)
                        int64_t rdx_6 = *rax_16
                        (*(rdx_6 + 0xf8))(rax_16, rdx_6)
                        int64_t r8_4 = *rax_16
                        int32_t var_108 = 0x3f800000
                        int32_t var_104_1 = 0x3f800000
                        int32_t var_100_1 = 0x3f800000
                        (*(r8_4 + 0x110))(rax_16, &var_108, r8_4)
                        rax_16[2] = 0
                        (*(*rax_13 + 0x50))(rax_13, rax_16)
                        *(r14_1 + r12_1 + 8) = rax_16
                        int64_t var_110
                        RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
                            &var_110)
                        void* rcx_23 = *(r14_1 + r12_1)
                        var_110 = *(r14_1 + r12_1 + 8)
                        int64_t var_e8 = 0
                        int32_t var_e0_1 = 0
                        var_128.q = &var_e8
                        sub_142233bf0(rcx_23, rdi_2 + 0xf0, &var_110, zmm8_1, var_128)
        
        result = *arg1
        i += 1
        rsi_1 += 0x24
        r14_1 = &r14_1[2]
    while (i s< *(result + 0xd8))

int64_t rcx_24 = var_d8

if (rcx_24 != 0)
    result = sub_140a74f90(rcx_24)

__security_check_cookie(rax_1 ^ &var_148)
return result
