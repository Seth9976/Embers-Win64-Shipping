// 函数: sub_14233c970
// 地址: 0x14233c970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(**arg1 + (sx.q(arg1[1].d) << 3))
void* rcx

if (arg2 != 0)
    rcx = *(arg2 + 0x10)

if (arg2 == 0 || rcx == 0 || *(rcx + 0x34) != *(r10 + 0xec))
    rcx = r10 + 0xf8

arg1[0x44] = rcx
void* var_e8 = &arg1[2]
int64_t var_d0 = arg1[0x44]
void* var_e0 = r10 + 0xb8
uint64_t result

if (sub_140a80f40() == 0)
    uint32_t rax_5
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_5.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_5.b == 0))
        void var_80
        void** rax_6 = sub_142332970(&var_80, nullptr, 0xff)
        void* rcx_4 = *rax_6
        *(rcx_4 + 0x10) = var_e8.o
        *(rcx_4 + 0x20) = (r10 + 0x30).o
        void* rcx_5 = *rax_6
        int32_t r8_2 = rax_6[2].d
        int64_t* rdx_2 = rax_6[1]
        int64_t* rbx_1 = *(rcx_5 + 0x38)
        int64_t* arg_20 = rbx_1
        void* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_20
        
        result = sub_1407c96b0(rcx_5, rdx_2, r8_2, 1)
        
        if (rbx_1 != 0)
            result = zx.q(*rdi_1)
            *rdi_1 -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(arg_20)
    else
        int128_t var_a0 = var_e8.o
        int128_t var_90_1 = (r10 + 0x30).o
        result = sub_14232df00(&var_a0)
else
    result = sub_14232df00(&var_e8)

if (data_143f0f21f != 0)
    uint64_t rdx_3 = zx.q(data_143f0f1a0)
    result = zx.q(*(&data_143f025fc + sx.q(rdx_3.d) * 0x14) u>> 0x13)
    
    if ((result.b & 1) != 0)
        result = data_143f13cd8
        
        if (test_bit(result, rdx_3))
            int64_t* r14_1 = *(**arg1 + (sx.q(arg1[1].d) << 3))
            void* rbx_2 = r14_1[0x19]
            void* arg_10 = rbx_2
            
            if (rbx_2 != 0)
                *(rbx_2 + 8) += 1
                rbx_2 = arg_10
            
            void* rdi_3 = *(r14_1[3] + 0x10)
            void* arg_18 = rdi_3
            
            if (rdi_3 != 0)
                *(rdi_3 + 8) += 1
                rbx_2 = arg_10
                rdi_3 = arg_18
            
            int64_t r10_1 = sx.q(r14_1[1].d)
            int32_t r15_1 = 0
            int32_t r13_1 = r14_1[0x1d].d
            int32_t r9_3 = 0
            
            if (r10_1.d s> 0 && r10_1.d u>= 8)
                int64_t r8_3 = *r14_1
                int32_t zmm4_1[0x4] = zx.o(0)
                int32_t zmm5_1[0x4] = zx.o(0)
                int32_t rcx_10 = r10_1.d & 0x80000007
                
                if (rcx_10 s< 0)
                    rcx_10 = ((rcx_10 - 1) | 0xfffffff8) + 1
                
                int64_t i = 0
                int64_t rcx_13 = 0
                int32_t zmm3[0x4]
                
                do
                    uint64_t zmm1_1 = zx.q(*(r8_3 + rcx_13 + 0x2c0))
                    r9_3 += 8
                    uint128_t zmm0_1 = zx.o(*(r8_3 + rcx_13 + 0x1d8))
                    i += 8
                    int32_t zmm2[0x4] = zx.o(*(r8_3 + rcx_13 + 0xf0))
                    zmm3 = zx.o(*(r8_3 + rcx_13 + 8))
                    rcx_13 += 0x740
                    zmm3 = _mm_unpacklo_epi32(zmm3, zmm0_1.q)
                    zmm0_1 = zx.o(*(r8_3 + rcx_13 - 0x1c8))
                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm1_1)
                    zmm1_1 = zx.q(*(r8_3 + rcx_13 - 0xe0))
                    zmm3 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
                    zmm2 = zx.o(*(r8_3 + rcx_13 - 0x2b0))
                    zmm3 = _mm_add_epi32(zmm3, zmm4_1)
                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm1_1)
                    zmm4_1 = zmm3
                    zmm3 = _mm_add_epi32(
                        _mm_unpacklo_epi32(
                            _mm_unpacklo_epi32(zx.o(*(r8_3 + rcx_13 - 0x398)), zmm0_1.q), 
                            zmm2[0].q), 
                        zmm5_1)
                    zmm5_1 = zmm3
                while (i s< sx.q(r10_1.d - rcx_10))
                
                zmm4_1 = _mm_add_epi32(zmm4_1, zmm3)
                zmm4_1 = _mm_add_epi32(zmm4_1, _mm_bsrli_si128(zmm4_1, 8))
                r15_1 = _mm_add_epi32(zmm4_1, _mm_bsrli_si128(zmm4_1, 4))[0]
            
            int32_t rdx_6 = 0
            int64_t r9_4 = sx.q(r9_3)
            int32_t r8_4 = 0
            
            if (r9_4 s< r10_1)
                if (r10_1 - r9_4 s>= 2)
                    int64_t r10_2 = *r14_1
                    int64_t rcx_14 = r9_4 * 0xe8
                    int64_t i_2 = ((r10_1 - r9_4 - 2) u>> 1) + 1
                    r9_4 += i_2 << 1
                    int64_t i_1
                    
                    do
                        rdx_6 += *(r10_2 + rcx_14 + 8)
                        r8_4 += *(r10_2 + rcx_14 + 0xf0)
                        rcx_14 += 0x1d0
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                
                if (r9_4 s< r10_1)
                    r15_1 += *(r9_4 * 0xe8 + *r14_1 + 8)
                
                r15_1 += rdx_6 + r8_4
            
            int64_t* var_110 = arg1
            void* const var_108 = rbx_2
            
            if (rbx_2 != 0)
                *(rbx_2 + 8) += 1
                rbx_2 = arg_10
                rdi_3 = arg_18
            
            void* const var_100 = rdi_3
            
            if (rdi_3 != 0)
                *(rdi_3 + 8) += 1
                rbx_2 = arg_10
                rdi_3 = arg_18
            
            int32_t var_f8_1 = r13_1
            int32_t var_f4_1 = r15_1
            int64_t* var_f0_1 = r14_1
            
            if (sub_140a80f40() == 0)
                uint32_t rax_21
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_21.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_21.b == 0))
                    void var_68
                    void** rax_22 = sub_142332c10(&var_68, nullptr, 0xff)
                    var_108 = nullptr
                    var_100 = nullptr
                    void* rcx_21 = *rax_22
                    *(rcx_21 + 0x10) = arg1
                    *(rcx_21 + 0x18) = rbx_2
                    *(rcx_21 + 0x20) = rdi_3
                    *(rcx_21 + 0x28) = r13_1
                    *(rcx_21 + 0x2c) = r15_1
                    *(rcx_21 + 0x30) = r14_1
                    void* rcx_22 = *rax_22
                    int32_t r8_5 = rax_22[2].d
                    int64_t* rdx_9 = rax_22[1]
                    int64_t* rbx_3 = *(rcx_22 + 0x40)
                    int64_t* var_118_1 = rbx_3
                    int32_t* rdi_4 = &rbx_3[9]
                    
                    if (rbx_3 != 0)
                        *rdi_4 += 1
                        rbx_3 = var_118_1
                    
                    sub_1405e4b20(rcx_22, rdx_9, r8_5, 1)
                    
                    if (rbx_3 != 0)
                        int32_t r12_1 = *rdi_4
                        *rdi_4 -= 1
                        
                        if (r12_1 == 1)
                            sub_140a2f6e0(var_118_1)
                else
                    int64_t* var_c8 = arg1
                    var_108 = nullptr
                    var_100 = nullptr
                    void* var_c0 = rbx_2
                    void* var_b8 = rdi_3
                    int32_t var_b0_1 = r13_1
                    int32_t var_ac_1 = r15_1
                    int64_t* var_a8_1 = r14_1
                    sub_14232d3e0(&var_c8)
                    sub_14081c9d0(&var_b8)
                    sub_1405d1550(&var_c0)
            else
                sub_14232d3e0(&var_110)
            
            sub_14081c9d0(&var_100)
            sub_1405d1550(&var_108)
            sub_14081c9d0(&arg_18)
            result = sub_1405d1550(&arg_10)

arg1[0x53].b = 1
return result
