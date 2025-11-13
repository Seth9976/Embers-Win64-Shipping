// 函数: sub_1408d76d0
// 地址: 0x1408d76d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))

if (data_143cebe88 s> result.d)
    result = _Init_thread_header(&data_143cebe88)
    
    if (data_143cebe88 == 0xffffffff)
        sub_140b58170(&data_143cebe80, "SignificanceManager", 1)
        result = _Init_thread_footer(&data_143cebe88)

if (arg2 != 0)
    result = (*(*arg1 + 0x680))(arg1, &data_143cebe80)
    
    if (result.b != 0)
        int32_t result_1
        sub_140865c40(&data_143984e60, &result_1, (*(*arg1 + 0x150))(arg1))
        result = sx.q(result_1)
        
        if (result.d != 0xffffffff)
            uint64_t rdx_1 = result * 3
            result = data_143984e60
            int64_t rcx_2 = result + (rdx_1 << 3)
            
            if (rcx_2 != 0)
                void* rcx_3 = *(rcx_2 + 8)
                
                if (rcx_3 != 0)
                    int64_t var_10_1 = arg4
                    int64_t r9
                    int64_t var_18_1 = r9
                    return sub_1408d7800(rcx_3, arg1, arg2, arg3)

return result
