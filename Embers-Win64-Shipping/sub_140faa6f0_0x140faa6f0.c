// 函数: sub_140faa6f0
// 地址: 0x140faa6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28

if (*(arg1 + 0x530) != 0)
    int64_t* rcx = *(arg1 + 0x528)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int32_t* rax_3 = sub_140ad9100(arg1 + 0x3d8, &var_28)
        int64_t* rcx_2
        
        if (*(arg1 + 0x530) == 0)
            rcx_2 = nullptr
        else
            rcx_2 = *(arg1 + 0x528)
        
        int64_t rax_4 = *rcx_2
        int128_t var_38 = *rax_3
        return (*(rax_4 + 0x48))(rcx_2, &var_38)

*(arg1 + 0x3b8) = *(arg1 + 0x3d8)
int32_t* rax_6 = sub_140ad9100(arg1 + 0x3d8, &var_28)
bool cond:1 = *(arg1 + 0x491) == 0
*(arg1 + 0x3c8) = *rax_6

if (cond:1 || *(arg1 + 0x502) != 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int128_t zmm6
    zmm6.q = float.d(performanceCount)
    zmm6.q = zmm6.q f* data_143d796f8
    
    if (*(arg1 + 0x491) == 0 || *(arg1 + 0x502) != 0)
        zmm6 = sub_140fc3530(arg1)
    
    int64_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    int128_t zmm0_2
    zmm0_2.q = float.d(performanceCount_1)
    zmm0_2.q = zmm0_2.q f* data_143d796f8
    zmm0_2.q = zmm0_2.q f- zmm6.q
    
    if (not(zmm0_2.q f<= 0.10000000000000001))
        *(arg1 + 0x410) = 1

return sub_140fc25d0(arg1) __tailcall
