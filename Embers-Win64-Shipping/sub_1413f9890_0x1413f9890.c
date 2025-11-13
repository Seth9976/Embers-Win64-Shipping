// 函数: sub_1413f9890
// 地址: 0x1413f9890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xf80)

if (rax == 0 || *(rax + 8) == 0 || *(rax + 0xe8) == 0)
    *arg2 = 0xffffffff
    *(arg2 + 4) = 0
    *(arg2 + 0x10) = _mm_unpacklo_ps(zx.o(0), 0)
    arg2[6] = 0
    int32_t var_20_1 = 0
    *(arg2 + 0x38) = *(data_143f11688 + 0x10)
    *(arg2 + 0x40) = data_14395f4d0
    __builtin_memset(&arg2[8], 0, 0x14)
    *(arg2 + 0x60) = *(data_143f10cc8 + 0x48)
    *(arg2 + 0x68) = *(data_143f10cc8 + 0x48)
    *(arg2 + 0x70) = *(data_143f10cc8 + 0x48)
    *(arg2 + 0x78) = *(data_143f10cc8 + 0x48)
    *(arg2 + 0x80) = *(data_143f10cc8 + 0x48)
    *(arg2 + 0x88) = *(data_143f10cc8 + 0x48)
    *(arg2 + 0x90) = *(data_143f10cc8 + 0x48)
    *(arg2 + 0x98) = *(data_143f10cc8 + 0x48)
    *(arg2 + 0xa0) = *(data_143f10cc8 + 0x48)
    *(arg2 + 0xa8) = *(data_143f10cc8 + 0x48)
    *(arg2 + 0xb0) = *(data_143f10cc8 + 0x48)
    *(arg2 + 0xb8) = *(data_143f10cc8 + 0x48)
    void* rax_57 = data_143f10cc8
    *(arg2 + 0xc0) = *(rax_57 + 0x48)
    return rax_57

int32_t rcx = data_1439b6b3c

if (rcx s< 0)
    int32_t rax_1 = *(rax + 0xe0)
    rcx = 2
    
    if (rax_1 s>= 2)
        rcx = rax_1

*arg2 = rcx
arg2[1] = data_143ec8324
arg2[2] = data_1439b6b40.d
arg2[0xb] = __maxss_xmmss_memss(data_1439b6af0, 0x3c23d70a)
arg2[0xc] = data_1439b6b48.d
float var_1c[0x4]
float (* rax_3)[0x4] = sub_141f624b0(*(arg1 + 0xf80), &var_1c)
float zmm0_1 = (*rax_3)[2]
*(arg2 + 0x10) = (_mm_unpacklo_ps(*rax_3, (*rax_3)[1])).q
arg2[6] = zmm0_1
*(arg2 + 0x38) = *(*(*(arg1 + 0xf80) + 8) + 0x10)
int64_t* rcx_3 = *(*(arg1 + 0xf80) + 8)
int32_t rax_9 = (*(*rcx_3 + 0x48))(rcx_3)
int64_t* rcx_5 = *(*(arg1 + 0xf80) + 8)
int64_t rdx_1 = *rcx_5
int32_t rax_10 = (*(rdx_1 + 0x40))(rcx_5, rdx_1)
arg2[0x15] = rax_9
arg2[0x16] = 0
arg2[0x14] = rax_10
*(arg2 + 0x40) = *(*(*(arg1 + 0xf80) + 8) + 0x18)
void* rcx_7 = *(*(arg1 + 0xf80) + 0xe8)
arg2[8] = *(rcx_7 + 0x1c)
arg2[9] = *(rcx_7 + 0x20)
arg2[0xa] = *(rcx_7 + 0x24)
*(arg2 + 0x60) = *(*(*(arg1 + 0xf80) + 0xe8) + 0x38)
*(arg2 + 0x68) = *(*(*(arg1 + 0xf80) + 0xe8) + 0x58)
*(arg2 + 0x70) = *(*(*(arg1 + 0xf80) + 0xe8) + 0x78)
*(arg2 + 0x78) = *(*(*(arg1 + 0xf80) + 0xe8) + 0x98)
*(arg2 + 0x80) = *(*(*(arg1 + 0xf80) + 0xe8) + 0xb8)
*(arg2 + 0x88) = *(*(*(arg1 + 0xf80) + 0xe8) + 0xd8)
*(arg2 + 0x90) = *(*(*(arg1 + 0xf80) + 0xe8) + 0xf8)
*(arg2 + 0x98) = *(*(*(arg1 + 0xf80) + 0xe8) + 0x118)
*(arg2 + 0xa0) = *(*(*(arg1 + 0xf80) + 0xe8) + 0x138)
*(arg2 + 0xa8) = *(*(*(arg1 + 0xf80) + 0xe8) + 0x158)
*(arg2 + 0xb0) = *(*(*(arg1 + 0xf80) + 0xe8) + 0x178)
*(arg2 + 0xb8) = *(*(*(arg1 + 0xf80) + 0xe8) + 0x198)
int64_t rax_42 = *(*(*(arg1 + 0xf80) + 0xe8) + 0x1b8)
*(arg2 + 0xc0) = rax_42
return rax_42
