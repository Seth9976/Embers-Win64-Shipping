// 函数: sub_14275de80
// 地址: 0x14275de80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_28[0x4] = zmm6
int128_t zmm7
int128_t var_38 = zmm7
int128_t zmm8
int128_t var_48 = zmm8
char* rax = *(arg1 + 0x10)
uint32_t result_1 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint64_t result = zx.q(result_1)
TEB* gsbase
float zmm0[0x4]

if (result_1.b == 0)
    int32_t rdx_2 = *(arg1 + 0x80)
    uint64_t rbp_5 = zx.q(zx.d(*(rax + 1)) * rdx_2)
    *(arg1 + 0x10) = &rax[3]
    result = &rax[5]
    uint64_t r14_3 = zx.q(zx.d(*(rax + 3)) * rdx_2)
    int32_t i_5 = *(arg1 + 0x44)
    float (* rbp_6)[0x4] = rbp_5 + *(arg1 + 0x70)
    *(arg1 + 0x10) = result
    float (* r14_4)[0x4] = r14_3 + *(arg1 + 0x70)
    
    if (i_5 s> 0)
        uint64_t i_2 = zx.q(i_5)
        void* rsi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        uint64_t i
        
        do
            zmm0 = *rbp_6
            rbp_6 = &rbp_6[1]
            int32_t rbx_2 = data_143cda914
            float (* r15_1)[0x4] = r14_4
            r14_4 = &r14_4[1]
            int96_t var_a8_2 = zmm0[0].12
            int64_t var_b8_2 = zmm0[0].q
            float var_c8_2 = zmm0[0]
            
            if (rbx_2 s> *(rsi_2 + 0x14))
                _Init_thread_header(&data_143cda914)
                rbx_2 = data_143cda914
                
                if (rbx_2 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
                    rbx_2 = data_143cda914
            
            float zmm0_4 = logf(zmm0[3][0])
            zmm8.d = data_143cda910.d f* zmm0_4
            
            if (rbx_2 s> *(rsi_2 + 0x14))
                _Init_thread_header(&data_143cda914)
                rbx_2 = data_143cda914
                
                if (rbx_2 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
                    rbx_2 = data_143cda914
            
            float zmm0_5 = logf(var_a8_2:8.d)
            zmm7.d = data_143cda910.d f* zmm0_5
            
            if (rbx_2 s> *(rsi_2 + 0x14))
                _Init_thread_header(&data_143cda914)
                rbx_2 = data_143cda914
                
                if (rbx_2 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
                    rbx_2 = data_143cda914
            
            zmm6 = logf(var_b8_2:4.d)
            zmm6[0] = zmm6[0] f* data_143cda910
            
            if (rbx_2 s> *(rsi_2 + 0x14))
                _Init_thread_header(&data_143cda914)
                
                if (data_143cda914 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
            
            zmm0, result = logf(var_c8_2[0])
            zmm0[0] = zmm0[0] f* data_143cda910
            float temp0_5[0x4] = _mm_unpacklo_ps(zmm6, zmm8.q)
            *r15_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm7.q), temp0_5[0].q)
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (result.d == 1)
    uint32_t rcx = zx.d(*(rax + 1))
    int32_t* r9_1 = *(arg1 + 0x20)
    int32_t r8_1 = 0
    *(arg1 + 0x10) = &rax[3]
    int32_t rax_1 = *r9_1
    
    if (rcx s>= rax_1)
        int64_t rdx = 0
        
        do
            rcx -= rax_1
            rdx += 1
            rax_1 = r9_1[rdx]
            r8_1 += 1
        while (rcx s>= rax_1)
    
    int32_t i_4 = *(arg1 + 0x44)
    zmm0 = *(sx.q(rcx) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
    result = &rax[5]
    uint64_t rbp_2 = zx.q(*(arg1 + 0x80) * zx.d(*(rax + 3)))
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    *(arg1 + 0x10) = result
    float (* rbp_3)[0x4] = rbp_2 + *(arg1 + 0x70)
    
    if (i_4 s> 0)
        uint64_t i_3 = zx.q(i_4)
        void* rsi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        float zmm9[0x4] = temp0_1[3]
        int128_t zmm10 = temp0_1[0].12:8.d
        int128_t zmm11 = temp0_1[0].q:4.d
        float zmm12[0x4] = temp0_1[0]
        uint64_t i_1
        
        do
            int32_t rbx_1 = data_143cda914
            float (* r14_1)[0x4] = rbp_3
            rbp_3 = &rbp_3[1]
            
            if (rbx_1 s> *(rsi_1 + 0x14))
                _Init_thread_header(&data_143cda914)
                rbx_1 = data_143cda914
                
                if (rbx_1 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
                    rbx_1 = data_143cda914
            
            zmm8.d = logf(zmm9[0]).d f* data_143cda910
            
            if (rbx_1 s> *(rsi_1 + 0x14))
                _Init_thread_header(&data_143cda914)
                rbx_1 = data_143cda914
                
                if (rbx_1 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
                    rbx_1 = data_143cda914
            
            zmm7.d = logf(zmm10.d).d f* data_143cda910
            
            if (rbx_1 s> *(rsi_1 + 0x14))
                _Init_thread_header(&data_143cda914)
                rbx_1 = data_143cda914
                
                if (rbx_1 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
                    rbx_1 = data_143cda914
            
            zmm6 = logf(zmm11.d)
            zmm6[0] = zmm6[0] f* data_143cda910
            
            if (rbx_1 s> *(rsi_1 + 0x14))
                _Init_thread_header(&data_143cda914)
                
                if (data_143cda914 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
            
            zmm0, result = logf(zmm12[0])
            zmm0[0] = zmm0[0] f* data_143cda910
            float temp0_2[0x4] = _mm_unpacklo_ps(zmm6, zmm8.q)
            *r14_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm7.q), temp0_2[0].q)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
return result
