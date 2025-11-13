// 函数: sub_141b8f570
// 地址: 0x141b8f570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
double zmm6[0x2] = *arg3
TEB* gsbase

if (data_143f31598 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f31598)
    
    if (data_143f31598 == 0xffffffff)
        sub_141a6b800(&data_143f31590)
        _Init_thread_footer(&data_143f31598)

int64_t rdi = sx.q(arg2[1].d)
double var_90[0x2] = zmm6
int128_t zmm7 = data_143f31590.o
int32_t rax_5 = (rdi + 1).d
int64_t var_70 = (_mm_unpackhi_pd(zmm6, zmm6[0])).q
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    sub_140775520(arg2)

int64_t rax_6 = *arg2
int64_t rcx_3 = rdi * 9
int128_t* rdx_1 = rax_6 + (rcx_3 << 3)
char result = *(rax_6 + (rcx_3 << 3) + 0x40)
*rdx_1 = zmm7
rdx_1[1] = var_70.o
result = (result & 0xfe) | 2 | 3
int128_t var_60
rdx_1[2] = var_60
rdx_1[4].b = result
int128_t var_50
rdx_1[3] = var_50
__security_check_cookie(rax_1 ^ &var_b8)
return result
