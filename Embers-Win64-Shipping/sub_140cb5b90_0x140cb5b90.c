// 函数: sub_140cb5b90
// 地址: 0x140cb5b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5452 != 0)
    return 1

int32_t i_1 = *(arg1 + 0x320)

if (i_1 == 0)
    int64_t rax_2 = j_sub_140a82f30(0x400)
    int64_t rcx = *(arg1 + 0x2e8)
    *(arg1 + 0x2e8) = rax_2
    j_sub_140a74f90(rcx)
    
    for (int32_t* i = nullptr; i s< 0x400; i = &i[2])
        *(i + *(arg1 + 0x2e8)) = 0xffffffff
        *(i + *(arg1 + 0x2e8) + 4) = 0xffffffff
    
    i_1 = *(arg1 + 0x320)

uint128_t zmm6 = 0x4170000000000000
int32_t temp0 = *(arg1 + 0x20)
bool cond:1 = i_1 != temp0
int64_t performanceCount
double zmm0
double zmm1

if (i_1 s< temp0)
    do
        bool r8_1 = *(arg1 + 0x32b)
        int32_t r9_1 = *(arg1 + 0x330) + 1
        *(arg1 + 0x330) = r9_1
        
        if (r8_1 != 0)
            break
        
        if (*(arg1 + 0x32c) != r8_1 && r9_1 == r9_1 s/ 0x64 * 0x64)
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            zmm1 = float.d(performanceCount_1)
            i_1 = *(arg1 + 0x320)
            zmm0 = _mm_cvtps_pd(*(arg1 + 0x334)).q
            r8_1 = zmm1 f* data_143d796f8 f+ zmm6.q f- *(arg1 + 0x338) > zmm0
            *(arg1 + 0x32b) = r8_1
        
        if (r8_1 != 0)
            break
        
        uint64_t r8_2 = sx.q(*(arg1 + 0x320))
        void* r15_1 = *(arg1 + 0x18)
        uint64_t r14_2 = r8_2 << 7
        int32_t rax_9 = *(r14_2 + r15_1 + 0xc)
        int64_t performanceCount_2
        
        if (rax_9 s< 0)
            int64_t rdx_4 = *(arg1 + 8)
            int64_t rax_12 = sx.q(*(sx.q(not.d(rax_9)) * 0x38 + rdx_4 + 8))
            
            if (rax_12.d s>= 0)
                performanceCount_2 = *(r15_1 - 0x80 + (rax_12 << 7))
                performanceCount = performanceCount_2
            else
                performanceCount_2 = *(sx.q(neg.d(rax_12.d)) * 0x38 - 0x38 + rdx_4)
                performanceCount = performanceCount_2
        else if (rax_9 == 0)
            sub_140b63580(&data_143de5770, &performanceCount)
            performanceCount_2 = performanceCount
            r8_2 = zx.q(*(arg1 + 0x320))
        else
            performanceCount_2 = *(*(arg1 + 0xa0) + 0x18)
            performanceCount = performanceCount_2
        
        int64_t performanceCount_3 = performanceCount_2
        void var_48
        int64_t* rax_20 = sub_140cbb7c0(arg1, &var_48, r8_2.d)
        int32_t rdi_1 = *(r14_2 + r15_1)
        int32_t rbx_1 = (*rax_20).d
        void var_40
        int64_t* rax_21
        rax_21, zmm6 = PDBCommon::QueryLastError(&var_40, &performanceCount_3)
        char rsi_1 = sub_140b5ead0(*rax_21) * 0x1f
        char rbx_3 = sub_140b5ead0(rbx_1) * 7 + rsi_1
        uint64_t rdx_8 = zx.q(sub_140b5ead0(rdi_1) + rbx_3)
        *(r14_2 + r15_1 + 0x48) = *(*(arg1 + 0x2e8) + (rdx_8 << 2))
        *(*(arg1 + 0x2e8) + (rdx_8 << 2)) = *(arg1 + 0x320)
        i_1 = *(arg1 + 0x320) + 1
        *(arg1 + 0x320) = i_1
    while (i_1 s< *(arg1 + 0x20))
    
    cond:1 = i_1 != *(arg1 + 0x20)

if (not(cond:1))
    *(arg1 + 0x330) += 1
    bool rax_29 = *(arg1 + 0x32b)
    
    if (rax_29 == 0)
        if (*(arg1 + 0x32c) != rax_29)
            QueryPerformanceCounter(&performanceCount)
            zmm1 = float.d(performanceCount)
            zmm0 = _mm_cvtps_pd(*(arg1 + 0x334)).q
            rax_29 = zmm1 f* data_143d796f8 f+ zmm6.q f- *(arg1 + 0x338) > zmm0
            *(arg1 + 0x32b) = rax_29
        
        if (rax_29 == 0)
            return 1

return 2
