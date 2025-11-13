// 函数: sub_141b8f840
// 地址: 0x141b8f840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint128_t zmm0 = *arg3
int32_t rdi = *(arg3 + 0x18)
uint64_t var_98 = arg3[1].q
TEB* gsbase

if (data_143f31568 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f31568)
    
    if (data_143f31568 == 0xffffffff)
        sub_141a6b800(&data_143f31560)
        _Init_thread_footer(&data_143f31568)

int64_t rax_4 = data_143f31560
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_5 = (rdi_1 + 1).d
uint128_t zmm1 = _mm_unpacklo_pd(zmm0, var_98)
arg2[1].d = rax_5
uint64_t var_38 = rdi.q

if (rax_5 s> *(arg2 + 0xc))
    sub_140775520(arg2)

int64_t rax_6 = *arg2
int64_t rcx_3 = rdi_1 * 9
uint128_t* rdx_1 = rax_6 + (rcx_3 << 3)
char result = *(rax_6 + (rcx_3 << 3) + 0x40)
*rdx_1 = rax_4.o
rdx_1[1] = zmm1
result = (result & 0xfe) | 2 | 3
rdx_1[4].b = result
rdx_1[2] = var_38.o
uint128_t var_28
rdx_1[3] = var_28
__security_check_cookie(rax_1 ^ &var_b8)
return result
