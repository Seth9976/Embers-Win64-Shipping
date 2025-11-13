// 函数: sub_140e208e0
// 地址: 0x140e208e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int128_t* result = __security_cookie ^ &var_c8
int128_t* result_1 = result

if (*(arg1 + 9) != 0)
    EnterCriticalSection(arg1 + 0x50)
    result = arg1 + 0x30
    
    if (result != arg1 + 0x40)
        int128_t zmm1 = *result
        *result = *(arg1 + 0x40)
        *(arg1 + 0x40) = zmm1
    
    if (arg1 != -0x50)
        result = LeaveCriticalSection(arg1 + 0x50)
    
    if (*(arg1 + 0x48) != 0)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        uint128_t zmm7 = 0x3f40624dd2f1a9fc
        int128_t zmm6
        zmm6.q = float.d(performanceCount)
        zmm6.q = zmm6.q f* data_143d796f8
        int128_t zmm0
        
        do
            while (*(arg1 + 0x48) s> 0)
                int64_t rdx_1 = *(arg1 + 0x40)
                int64_t rcx_4 = sx.q(*(arg1 + 0x48)) * 0xa
                int64_t rax_2 = *(rdx_1 + (rcx_4 << 3) - 0x50)
                int128_t* rax_3 = *(rdx_1 + (rcx_4 << 3) - 0x40)
                *(rdx_1 + (rcx_4 << 3) - 0x40) = 0
                int128_t var_78 = *(rdx_1 + (rcx_4 << 3) - 0x30)
                int128_t var_68_1 = *(rdx_1 + (rcx_4 << 3) - 0x20)
                
                if (rax_2 != 0)
                    *(rdx_1 + (rcx_4 << 3) - 0x50) = 0
                
                int64_t rsi_1 = sx.q(*(arg1 + 0x48))
                int64_t* rax_4 = *(rdx_1 + (rcx_4 << 3) - 0x10)
                int32_t rcx_5 = rsi_1.d
                void* rdx_2 = *(arg1 + 0x40)
                int64_t rbx_3 = rsi_1 * 0x50
                
                if (*(rbx_3 + rdx_2 - 0x50) != 0)
                    int64_t* rax_5 = *(rbx_3 + rdx_2 - 0x40)
                    int64_t* rcx_7 = rdx_2 - 0x30 + rbx_3
                    
                    if (rax_5 != 0)
                        rcx_7 = rax_5
                    
                    (*(*rcx_7 + 0x10))(rcx_7, rdx_2)
                    rcx_5 = *(arg1 + 0x48)
                
                int32_t rax_8 = rcx_5 - (rsi_1 - 1).d
                
                if (rax_8 != 1)
                    int64_t rcx_8 = *(arg1 + 0x40)
                    memmove(rcx_8 - 0x50 + rbx_3, rsi_1 * 0x50 + rcx_8, (rax_8 - 1) * 0x50)
                    rcx_5 = *(arg1 + 0x48)
                
                *(arg1 + 0x48) = rcx_5 - 1
                sub_140976b40(arg1 + 0x40)
                int128_t* rcx_12 = &var_78
                
                if (rax_3 != 0)
                    rcx_12 = rax_3
                
                rax_2((*(*rcx_12 + 8))(rcx_12))
                
                if (rax_4 != 0)
                    (*(*rax_4 + 0x10))(rax_4)
                
                if (rax_2 != 0)
                    int128_t* rcx_15 = &var_78
                    
                    if (rax_3 != 0)
                        rcx_15 = rax_3
                    
                    (*(*rcx_15 + 0x10))(rcx_15)
            
            result = QueryPerformanceCounter(&performanceCount)
            zmm0.q = float.d(performanceCount)
            zmm0.q = zmm0.q f* data_143d796f8
            zmm0.q = zmm0.q f- zmm6.q
            
            if (zmm0.q f>= zmm7.q)
                break
            
            int64_t performanceCount_1
            result = QueryPerformanceCounter(&performanceCount_1)
            zmm0.q = float.d(performanceCount_1)
            zmm0.q = zmm0.q f* data_143d796f8
            zmm0.q = zmm0.q f- zmm6.q
        while (zmm0.q f< zmm7.q)

__security_check_cookie(result_1 ^ &var_c8)
return result
