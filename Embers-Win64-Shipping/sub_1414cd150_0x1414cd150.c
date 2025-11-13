// 函数: sub_1414cd150
// 地址: 0x1414cd150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(arg4 - 1)
double zmm9[0x2] = _mm_cvtps_pd(data_1439b7068[0])
int128_t zmm7
zmm7.q = fconvert.d(arg2.d)
zmm0[0] = zmm0[0] / zmm9[0]
zmm7.q = zmm7.q f+ 9.5
int64_t temp0_1 = _mm_cvtpd_ps(zmm0)
uint128_t zmm6
zmm6.q = fconvert.d(arg3)
float zmm0_1 = powf(0x40000000[0].d, temp0_1.d)
uint128_t zmm8 = zmm6
zmm6.q = zmm6.q f- zmm7.q
TEB* gsbase
void* rdi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
zmm8.q = zmm8.q f- fconvert.d(zmm0_1) f* zmm7.q
zmm8.q = zmm8.q f/ zmm6.q
zmm6.q = 0x3ff0000000000000 f- zmm8.q
zmm6.q = zmm6.q f/ zmm7.q

if (data_143cda914 s> *(rdi + 0x14))
    _Init_thread_header(&data_143cda914)
    int32_t rax_3 = data_143cda914
    
    if (rax_3 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)
        rax_3 = data_143cda914
    
    if (rax_3 s> *(rdi + 0x14))
        _Init_thread_header(&data_143cda914)
        int32_t rax_4 = data_143cda914
        
        if (rax_4 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
            rax_4 = data_143cda914
        
        if (rax_4 s> *(rdi + 0x14))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)

*arg1 = _mm_cvtpd_ps(zmm6)
float temp0_3 = _mm_cvtpd_ps(zmm9)
int64_t temp0_4 = _mm_cvtpd_ps(zmm8)
arg1[2] = temp0_3
arg1[1] = temp0_4.d
return arg1
