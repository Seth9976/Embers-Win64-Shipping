// 函数: sub_141c4b5c0
// 地址: 0x141c4b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    void* rcx = arg3 + 0x10
    int32_t i
    
    do
        int64_t* r8 = arg2
        arg2 += 0x14
        *r8 = *(rcx - 0x10)
        int32_t zmm0 = *(rcx - 4)
        *(r8 + 0xc) = zmm0
        int32_t zmm1 = *rcx
        r8[2].d = zmm1
        int32_t zmm2 = *(rcx - 8)
        
        if (not(zmm2 f< zmm0))
            zmm0 = _mm_min_ss(zmm1, zmm2)
        
        rcx += 0x14
        r8[1].d = zmm0
        i = arg4
        arg4 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
