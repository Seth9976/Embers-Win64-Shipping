// 函数: sub_1409b2fe0
// 地址: 0x1409b2fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = data_143dbb1f8
int128_t zmm7 = data_143dbb1fc
int128_t zmm8 = data_143dbb200
TEB* gsbase

if (data_143cee058 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cee058)
    
    if (data_143cee058 == 0xffffffff)
        atexit(sub_142cb91d0)
        _Init_thread_footer(&data_143cee058)

sub_1409c3d60(arg1, arg3, &data_143cee048)
void* arg_8
sub_14090aa40(*(arg1 + 0x28) + 0x150, &arg_8, data_143f35cc8)
int32_t* r8_3 = data_143cee048
int64_t r9 = 0
int32_t r11 = (data_143cee050).d
void* rcx_3 = &r8_3[sx.q(r11)]
uint64_t r10_3 = (rcx_3 - r8_3 + 3) u>> 2

if (r8_3 u> rcx_3)
    r10_3 = 0

if (r10_3 != 0)
    int64_t rdx_2 = **(arg_8 + 0x18)
    
    do
        int64_t rax_4 = sx.q(*r8_3)
        r9 += 1
        r8_3 = &r8_3[1]
        int64_t rcx_5 = rax_4 * 3
        zmm6.d = zmm6.d f+ *(rdx_2 + (rcx_5 << 2))
        zmm7.d = zmm7.d f+ *(rdx_2 + (rcx_5 << 2) + 4)
        zmm8.d = zmm8.d f+ *(rdx_2 + (rcx_5 << 2) + 8)
    while (r9 != r10_3)

float zmm1 = 1f f/ _mm_cvtepi32_ps(zx.o(r11)).d
zmm6.d = zmm6.d f* zmm1
zmm7.d = zmm7.d f* zmm1
zmm8.d = zmm8.d f* zmm1
*arg2 = zmm6.d
arg2[1] = zmm7.d
arg2[2] = zmm8.d
return arg2
