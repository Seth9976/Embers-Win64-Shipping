// 函数: sub_140fe92d0
// 地址: 0x140fe92d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
uint64_t var_18 = rdi
int128_t zmm6
int128_t var_38 = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7

if (data_143f0f161 != 0)
    int32_t rsi_1 = *(arg1 + 0x1c)
    int64_t arg_18
    int64_t arg_20
    int64_t rax_7
    int64_t rcx_2
    
    if (arg2 == 0)
        rdi = 1
        
        if (*(arg1 + 0x20) s> 1)
            do
                int64_t r14_1 = sx.q(rsi_1)
                int64_t* rcx = *(*(arg1 + 0x10) + 0x150)
                
                if ((*(*rcx + 0xe8))(rcx, *(*(arg1 + 0x30) + (r14_1 << 3)), &arg_18, 8, 1) == 0)
                    int64_t* rcx_1 = *(*(arg1 + 0x10) + 0x150)
                    
                    if ((*(*rcx_1 + 0xe8))(rcx_1, *(*(arg1 + 0x28) + (r14_1 << 3)), &arg_20, 8, 1)
                            == 0)
                        rax_7 = arg_18
                        rcx_2 = arg_20
                        
                        if (rax_7 u> rcx_2)
                            return rax_7 - rcx_2
                
                int32_t rcx_3 = *(arg1 + 0x18)
                rdi = zx.q(rdi.d + 1)
                rsi_1 = mods.dp.d(sx.q(rcx_3 - 1 + rsi_1), rcx_3)
            while (rdi.d s< *(arg1 + 0x20))
    
    int32_t rax_12 = *(arg1 + 0x20)
    
    if (rax_12 s> 0 || arg2 != 0)
        if (rax_12 == *(arg1 + 0x18) || arg2 != 0)
            rdi.b = 1
        else
            rdi.b = 0
        
        int32_t r14_3 = zx.d(rdi.b) ^ 1
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        zmm7 = 0x3fe0000000000000
        zmm6.q = float.d(performanceCount)
        int64_t r15_1 = sx.q(rsi_1)
        zmm6.q = zmm6.q f* data_143d796f8
        int32_t rax_15
        
        do
            int64_t* rcx_6 = *(*(arg1 + 0x10) + 0x150)
            rax_15 = (*(*rcx_6 + 0xe8))(rcx_6, *(*(arg1 + 0x30) + (r15_1 << 3)), &arg_18, 8, r14_3)
            QueryPerformanceCounter(&performanceCount)
            
            if (float.d(performanceCount) f* data_143d796f8 f- zmm6.q f> zmm7.q)
                return 0
            
            if (rax_15 != 1)
                break
        while (rdi.b != 0)
        
        QueryPerformanceCounter(&performanceCount)
        data_143f138cc += performanceCount.d - performanceCount_1.d
        data_143f138d8:4.d += 1
        
        if (rax_15 == 0)
            QueryPerformanceCounter(&performanceCount)
            QueryPerformanceCounter(&performanceCount_1)
            zmm6.q = float.d(performanceCount_1)
            zmm6.q = zmm6.q f* data_143d796f8
            int32_t rax_20
            
            do
                int64_t* rcx_11 = *(*(arg1 + 0x10) + 0x150)
                rax_20 =
                    (*(*rcx_11 + 0xe8))(rcx_11, *(*(arg1 + 0x28) + (r15_1 << 3)), &arg_20, 8, r14_3)
                QueryPerformanceCounter(&performanceCount_1)
                
                if (float.d(performanceCount_1) f* data_143d796f8 f- zmm6.q f> zmm7.q)
                    return 0
                
                if (rax_20 != 1)
                    break
            while (rdi.b != 0)
            
            QueryPerformanceCounter(&performanceCount_1)
            data_143f138cc += performanceCount_1.d - performanceCount.d
            
            if (rax_20 == 0)
                rax_7 = arg_18
                rcx_2 = arg_20
                
                if (rax_7 u> rcx_2)
                    return rax_7 - rcx_2

return 0
