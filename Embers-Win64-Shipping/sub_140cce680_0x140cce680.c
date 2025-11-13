// 函数: sub_140cce680
// 地址: 0x140cce680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x314)
int32_t i_1 = i

if (i == 0 && *(arg1 + 0x108) s> i)
    int64_t* rcx = *(arg1 + 0x2d8)
    (*(*rcx + 0x178))(rcx, sx.q(*(arg1 + 0x10c)))
    i_1 = *(arg1 + 0x314)
    i = i_1

int64_t* rbx = *(arg1 + 0x2b8)

if (i_1 s< *(arg1 + 0x108))
    do
        bool r8_1 = *(arg1 + 0x32b)
        int32_t r9_2 = *(arg1 + 0x330) + 1
        *(arg1 + 0x330) = r9_2
        
        if (r8_1 != 0)
            break
        
        if (*(arg1 + 0x32c) != r8_1 && r9_2 == r9_2 s/ 0x64 * 0x64)
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            arg2.o = zx.o(0)
            arg2.q = float.d(performanceCount)
            i = *(arg1 + 0x314)
            float zmm0[0x2] = _mm_cvtps_pd(*(arg1 + 0x334)).q
            arg2.q = arg2.q f* data_143d796f8
            arg2.q = arg2.q f+ 0x4170000000000000
            arg2.q = arg2.q f- *(arg1 + 0x338)
            r8_1 = arg2.q f> zmm0
            *(arg1 + 0x32b) = r8_1
        
        if (r8_1 != 0)
            break
        
        int64_t rbp_1 = sx.q(*(arg1 + 0x10))
        int32_t rax_4 = (rbp_1 + 1).d
        *(arg1 + 0x10) = rax_4
        
        if (rax_4 s> *(arg1 + 0x14))
            sub_1407c3b60(arg1 + 8)
        
        int64_t rcx_3 = rbp_1 * 0x38
        void* const rax_5
        
        if (rcx_3 == neg.q(*(arg1 + 8)))
            rax_5 = nullptr
        else
            rax_5 = sub_140cd3bc0(rcx_3 + *(arg1 + 8))
        
        sub_140cd5530(rbx, rax_5, arg2)
        i = *(arg1 + 0x314) + 1
        *(arg1 + 0x314) = i
    while (i s< *(arg1 + 0x108))

if (i == *(arg1 + 0x108) && sub_140cc1900(arg1, u"serializing import map", 1) == 0)
    return 1

return 2
