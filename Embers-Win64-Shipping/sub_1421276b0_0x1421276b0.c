// 函数: sub_1421276b0
// 地址: 0x1421276b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f4bf78 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f4bf78)
    
    if (data_143f4bf78 == 0xffffffff)
        sub_140b4c820(&data_143f4bf70, u"__SubsurfaceProfile")
        _Init_thread_footer(&data_143f4bf78)

int64_t i = *arg2
uint64_t result

if (i != data_143f4bf70)
    result = sx.q(*(arg1 + 0x1c0))
    int64_t* rcx
    
    if (result.d s> 0)
        rcx = *(arg1 + 0x1b8)
        int64_t rdx_1 = 0
        
        while (*rcx != i || *(rcx + 0xc) != *(arg2 + 0xc) || rcx[1].d != arg2[1].d)
            rdx_1 += 1
            rcx = &rcx[3]
            
            if (rdx_1 s>= result)
                goto label_142127772
    
    if (result.d s<= 0 || rcx == -0x10)
    label_142127772:
        int64_t* rcx_1 = *(arg1 + 0x190)
        
        if (rcx_1 != 0)
            int64_t* rax_2 = (*(*rcx_1 + 0x280))(rcx_1)
            return (*(*rax_2 + 0x60))(rax_2, arg2, arg3, arg4)
        
        result.b = 0
    else
        *arg3 = rcx[2].d
        result.b = 1
else
    uint64_t rdx = *(arg1 + 0x180)
    
    if (rdx != 0)
        rdx = zx.q(sub_1422c5440(&data_143a2fdb0, rdx).d)
    
    result.b = 1
    uint128_t zmm0
    zmm0.d = _mm_cvtepi32_ps(zx.o(rdx.d)).d f* 0.00392156886f
    *arg3 = zmm0.d

return result
