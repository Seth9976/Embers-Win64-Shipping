// 函数: sub_142761b60
// 地址: 0x142761b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
int32_t i_2 = *(arg1 + 0x44)
uint32_t rsi = zx.d(*rax)
void* result = &rax[2]
*(arg1 + 0x10) = &rax[1]
uint64_t rbp_1 = zx.q(zx.d(rax[1]) * r9)
*(arg1 + 0x10) = result
float (* rbp_2)[0x4] = rbp_1 + *(arg1 + 0x70)
int128_t* rsi_2 = zx.q(rsi * r9) + *(arg1 + 0x70)

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
    uint64_t i
    
    do
        float zmm0[0x4] = *rsi_2
        rsi_2 = &rsi_2[1]
        int32_t rbx_1 = data_143cda914
        float (* r14_1)[0x4] = rbp_2
        rbp_2 = &rbp_2[1]
        int96_t var_78_1 = zmm0[0].12
        int64_t var_68_1 = zmm0[0].q
        float var_58_1 = zmm0[0]
        
        if (rbx_1 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            rbx_1 = data_143cda914
            
            if (rbx_1 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
                rbx_1 = data_143cda914
        
        float zmm0_1 = logf(zmm0[3][0])
        zmm8.d = data_143cda910.d f* zmm0_1
        
        if (rbx_1 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            rbx_1 = data_143cda914
            
            if (rbx_1 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
                rbx_1 = data_143cda914
        
        float zmm0_2 = logf(var_78_1:8.d)
        zmm7.d = data_143cda910.d f* zmm0_2
        
        if (rbx_1 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            rbx_1 = data_143cda914
            
            if (rbx_1 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
                rbx_1 = data_143cda914
        
        zmm6 = logf(var_68_1:4.d)
        zmm6[0] = zmm6[0] f* data_143cda910
        
        if (rbx_1 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        zmm0, result = logf(var_58_1[0])
        zmm0[0] = zmm0[0] f* data_143cda910
        float temp0_1[0x4] = _mm_unpacklo_ps(zmm6, zmm8.q)
        *r14_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm7.q), temp0_1[0].q)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
