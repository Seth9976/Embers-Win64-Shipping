// 函数: sub_14123d450
// 地址: 0x14123d450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = data_143f11688
int64_t r15
r15.b = 0
int128_t zmm7 = 0x3f800000
int64_t* r8 = rsi
int128_t zmm6 = zx.o(0)
int128_t zmm9 = zx.o(0)
void* rax = *arg1
int128_t zmm10 = 0x3f800000
int64_t* rdi = rsi
void* rbp = *(rax + 0x20)
uint8_t rdx_1 = (*(rax + 0x2c) u>> 0x13).b & 1

if (rbp != 0)
    void* rax_1 = *(rbp + 0xf80)
    
    if (rax_1 != 0)
        int64_t* rcx = *(rax_1 + 8)
        
        if (rcx != 0 && rdx_1 != 0)
            zmm6 = *(rax_1 + 0x10)
            rsi = rcx
            
            if (not(zmm6.d f<= 0f))
                int64_t* rcx_1 = *(rax_1 + 0x18)
                
                if (rcx_1 != 0)
                    if (zmm6.d f>= 1f)
                        rsi = rcx_1
                        zmm6 = zx.o(0)
                    else
                        rdi = rcx_1
            
            zmm9 = 0x3f800000
            zmm10 = *(rax_1 + 0x24)
            r15.b = (*(rax_1 + 0x20) & 6) == 0

int32_t rax_3 = (*(*rsi + 0x40))(rsi, rdx_1, r8)
TEB* gsbase

if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

float zmm0_1[0x4] = logf(_mm_cvtepi32_ps(zx.o(rax_3)).d)
int64_t rax_4 = rsi[2]
zmm0_1[0] = zmm0_1[0] f* data_143cda910
*(arg2 + 0x18) = rax_4
arg2[2].q = rsi[3]
*(arg2 + 0x28) = rdi[2]
arg2[3].q = rdi[3]

if (r15.b == 0)
    zmm7 = zx.o(0)

float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
temp0_1[0] = zmm9.d
arg2[1].d = zmm10.d
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = zmm7.d
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_3[0] = zmm6.d
*arg2 = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
int32_t rdx_4 = arg1[0x2a9].d
void* rcx_5 = data_143f11888

if (rdx_4 s< 3)
    rcx_5 = data_143f11688

int64_t rcx_7 = *(rcx_5 + 0x10)

if ((*(*arg1 + 0x28) & 0x80000) != 0 && rdx_4 s>= 3 && rbp != 0)
    void* rax_9 = *(rbp + 0x1070)
    
    if (rax_9 != 0 && *(rbp + 0x1040) != 0)
        rcx_7 = *(rax_9 + 0x10)

*(arg2 + 0x38) = rcx_7
arg2[4].q = data_1439b5ec0
*(arg2 + 0x48) = *(data_1439b7100 + 0x10)
int64_t result = data_14395f4d0
arg2[5].q = result
return result
