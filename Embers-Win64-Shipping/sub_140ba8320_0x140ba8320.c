// 函数: sub_140ba8320
// 地址: 0x140ba8320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x50)

if (rax != 0 && *(rax + 0x329) == 0)
    *(arg1 + 0xd8) = *(arg1 + 0x58)
    *(arg1 + 0xe0) = u"ticking linker"
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int512_t zmm1
    zmm1.o = *(arg1 + 0xc4)
    char r9_1 = *(arg1 + 0xc9)
    double zmm0[0x2] = zx.o(0)
    zmm0[0] = float.d(performanceCount)
    char r8_1 = *(arg1 + 0xc8)
    void* rcx_1 = *(arg1 + 0x50)
    zmm0[0] = zmm0[0] f* data_143d796f8
    zmm0[0] = zmm0[0] + 16777216.0
    zmm0[0] = zmm0[0] f- *(arg1 + 0xd0)
    zmm1.d = zmm1.d f- _mm_cvtpd_ps(zmm0)[0].d
    int128_t entry_zmm2
    uint128_t entry_zmm3
    int32_t rax_3 = sub_140ccfc30(rcx_1, zmm1, r8_1, r9_1, entry_zmm2, entry_zmm3, arg1 + 0x3a0)
    
    if (rax_3 != 1)
        if (*(arg1 + 0xc8) != 0 && *(arg1 + 0xc9) == 0)
            *(arg1 + 0xca) = 1
        
        if (rax_3 == 0)
            *(arg1 + 0xcb) = 1
        
        return 0

return 2
