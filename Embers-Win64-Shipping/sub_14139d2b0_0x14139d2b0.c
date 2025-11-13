// 函数: sub_14139d2b0
// 地址: 0x14139d2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x3b8)
int32_t rax = data_1439c7a74
int32_t rdi

if (r8 s>= 1)
    rdi = rax
    
    if (r8 s< rax)
        rdi = r8
else
    rdi = 1

int32_t rcx = data_1439c7a70
int32_t rsi

if (r8 s>= 1)
    rsi = rcx
    
    if (r8 s< rcx)
        rsi = r8
else
    rsi = 1

TEB* gsbase

if (data_143ec7030 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ec7030)
    
    if (data_143ec7030 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_4 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.Shadow.PreShadowResolutionFactor", r8_3)
        
        if (rax_4 != 0)
            int64_t rdx_5 = *rax_4
            rax_4 = (*(rdx_5 + 0x60))(rax_4, rdx_5)
        
        data_143ec7028 = rax_4
        _Init_thread_footer(&data_143ec7030)
    
    rax = data_1439c7a74
    rcx = data_1439c7a70

void* rdx_2 = data_143ec7028
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rsi))
int32_t zmm2 = *(rdx_2 + 4)
zmm0.d = zmm0.d f* zmm2
int32_t rdx_4 = int.d(zmm0.d) * 2

if (rdx_4 s< 1)
    rcx = 1
else if (rdx_4 s< rcx)
    rcx = rdx_4

*arg2 = rcx
zmm0.d = _mm_cvtepi32_ps(zx.o(rdi)).d f* zmm2
int32_t rcx_2 = int.d(zmm0.d) * 2

if (rcx_2 s< 1)
    arg2[1] = 1
    return arg2

if (rcx_2 s< rax)
    rax = rcx_2

arg2[1] = rax
return arg2
