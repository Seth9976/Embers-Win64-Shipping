// 函数: sub_140fb4e20
// 地址: 0x140fb4e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x504) = 0

if (arg2 != 0)
    *(arg1 + 0x3b8) = *(arg1 + 0x3d8)
    void var_28
    int32_t* rax_1 = sub_140ad9100(arg1 + 0x3d8, &var_28)
    bool cond:0_1 = *(arg1 + 0x491) == 0
    *(arg1 + 0x3c8) = *rax_1
    
    if (cond:0_1 || *(arg1 + 0x502) != 0)
        int64_t performanceCount[0x2]
        QueryPerformanceCounter(&performanceCount)
        int128_t zmm6
        zmm6.q = float.d(performanceCount[0])
        zmm6.q = zmm6.q f* data_143d796f8
        
        if (*(arg1 + 0x491) == 0 || *(arg1 + 0x502) != 0)
            zmm6 = sub_140fc3530(arg1)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        int128_t zmm0_1
        zmm0_1.q = float.d(performanceCount_1)
        zmm0_1.q = zmm0_1.q f* data_143d796f8
        zmm0_1.q = zmm0_1.q f- zmm6.q
        
        if (not(zmm0_1.q f<= 0.10000000000000001))
            *(arg1 + 0x410) = 1
    
    sub_140fc25d0(arg1)

if (*(arg1 + 0x490) != 0 || *(arg1 + 0x410) != 0)
    sub_140fc3530(arg1)

if (*(arg1 + 0x550) == 0)
    return 

int64_t* rcx_6 = *(arg1 + 0x548)

if (rcx_6 == 0 || (*(*rcx_6 + 0x28))(rcx_6) == 0)
    return 

if (*(arg1 + 0x550) == 0)
    jump(*(*nullptr + 0x50))

jump(*(**(arg1 + 0x548) + 0x50))
