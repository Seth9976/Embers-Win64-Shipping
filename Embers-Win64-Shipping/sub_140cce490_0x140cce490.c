// 函数: sub_140cce490
// 地址: 0x140cce490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x318)
int32_t i_1 = i

if (i == 0 && *(arg1 + 0x100) s> i)
    int64_t* rcx = *(arg1 + 0x2d8)
    (*(*rcx + 0x178))(rcx, sx.q(*(arg1 + 0x104)))
    i_1 = *(arg1 + 0x318)
    i = i_1

int64_t* rbx = *(arg1 + 0x2b8)

if (i_1 s< *(arg1 + 0x100))
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
            i = *(arg1 + 0x318)
            float zmm0[0x2] = _mm_cvtps_pd(*(arg1 + 0x334)).q
            arg2.q = arg2.q f* data_143d796f8
            arg2.q = arg2.q f+ 0x4170000000000000
            arg2.q = arg2.q f- *(arg1 + 0x338)
            r8_1 = arg2.q f> zmm0
            *(arg1 + 0x32b) = r8_1
        
        if (r8_1 != 0)
            break
        
        int64_t rbp_1 = sx.q(*(arg1 + 0x20))
        int32_t rax_4 = (rbp_1 + 1).d
        *(arg1 + 0x20) = rax_4
        
        if (rax_4 s> *(arg1 + 0x24))
            sub_1408888d0(arg1 + 0x18)
        
        int64_t rcx_4 = rbp_1 << 7
        void* const rsi_1
        
        if (rcx_4 == neg.q(*(arg1 + 0x18)))
            rsi_1 = nullptr
        else
            rsi_1 = sub_140cd3ae0(rcx_4 + *(arg1 + 0x18))
        
        sub_140cd4e30(rbx, rsi_1, arg2)
        int32_t rax_7 = *(arg1 + 0x318) + 1
        bool cond:1_1 = *(rsi_1 + 0x51) != 0
        *(rsi_1 + 0x10) = rax_7
        
        if (cond:1_1 || *(rsi_1 + 0x53) != 0 || (*(arg1 + 0x1f0) != 0 && *(rsi_1 + 0x4e) != 0)
                || (*(arg1 + 0x1f1) != 0 && *(rsi_1 + 0x4d) != 0))
            rax_7.b = 1
        else
            rax_7.b = rax_7 == 0
        
        *(rsi_1 + 0x53) = rax_7.b
        i = *(arg1 + 0x318) + 1
        *(arg1 + 0x318) = i
    while (i s< *(arg1 + 0x100))

if (i == *(arg1 + 0x100) && sub_140cc1900(arg1, u"serializing export map", 1) == 0)
    return 1

return 2
