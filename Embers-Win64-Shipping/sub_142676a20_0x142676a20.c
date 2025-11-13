// 函数: sub_142676a20
// 地址: 0x142676a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0

if (arg1 == 0)
    zmm0 = 0x41a00000
else
    int32_t rbx_1 = *(arg1 + 0x440)
    TEB* gsbase
    
    if (data_143cda914
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    zmm0.d = logf(_mm_cvtepi32_ps(zx.o(rbx_1)).d).d f* data_143cda910
    int32_t rcx_2 = int.d(zmm0.d)
    
    if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm0.d))
        zmm0 = _mm_cvtepi32_ps(zx.o(rcx_2
            + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm0, zmm0.q)) & 1) ^ 1)))

int32_t rax_6 = int.d(zmm0.d)
*arg2 = rax_6
int32_t rcx_4 = 0x3b - rax_6

if (rcx_4 s>= 0x20)
    rcx_4 = 0x20

*arg3 = rcx_4
return 0x20
