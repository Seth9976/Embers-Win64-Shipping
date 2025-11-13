// 函数: sub_142761db0
// 地址: 0x142761db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r9

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8 s>= rax_1)

int32_t i_2 = *(arg1 + 0x44)
float result[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint64_t rsi_1 = zx.q(*(arg1 + 0x80) * zx.d(rax[1]))
result = _mm_shuffle_ps(result, result, 0)
*(arg1 + 0x10) = &rax[2]
float (* rsi_2)[0x4] = rsi_1 + *(arg1 + 0x70)

if (i_2 s> 0)
    TEB* gsbase
    void* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    uint64_t i_1 = zx.q(i_2)
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_38_1 = zmm7
    int128_t zmm8
    int128_t var_48_1 = zmm8
    float zmm9[0x4] = result[3]
    int128_t zmm10 = result[0].12:8.d
    int128_t zmm11 = result[0].q:4.d
    float zmm12[0x4] = result[0]
    uint64_t i
    
    do
        int32_t rbx_1 = data_143cda914
        float (* rbp_1)[0x4] = rsi_2
        rsi_2 = &rsi_2[1]
        
        if (rbx_1 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            rbx_1 = data_143cda914
            
            if (rbx_1 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
                rbx_1 = data_143cda914
        
        zmm8.d = logf(zmm9[0]).d f* data_143cda910
        
        if (rbx_1 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            rbx_1 = data_143cda914
            
            if (rbx_1 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
                rbx_1 = data_143cda914
        
        zmm7.d = logf(zmm10.d).d f* data_143cda910
        
        if (rbx_1 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            rbx_1 = data_143cda914
            
            if (rbx_1 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
                rbx_1 = data_143cda914
        
        zmm6 = logf(zmm11.d)
        zmm6[0] = zmm6[0] f* data_143cda910
        
        if (rbx_1 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        result = logf(zmm12[0])
        result[0] = result[0] f* data_143cda910
        float temp0_1[0x4] = _mm_unpacklo_ps(zmm6, zmm8.q)
        *rbp_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(result, zmm7.q), temp0_1[0].q)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
