// 函数: sub_140b3ac40
// 地址: 0x140b3ac40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140b3a4e0(arg1, arg2)
uint64_t* result_1 = result

if (result != 0 && *(result + 0x29) == 0)
    int64_t performanceCount
    
    if (sub_140b40300(&data_1439a9160, arg2) == 0)
        char i
        
        do
            QueryPerformanceCounter(&performanceCount)
            double zmm1_1 = float.d(performanceCount)
            float zmm0_1[0x2] = _mm_cvtps_pd(arg1[0xa].d)
            
            if (zmm1_1 f* data_143d796f8 f+ 0x4170000000000000 f- result_1[3] f> zmm0_1)
                result_1[5].b = 1
                break
            
            i = sub_140b40300(&data_1439a9160, arg2)
        while (i == 0)
    
    int64_t* r14_1 = nullptr
    int64_t var_38 = 0
    int32_t rdx_2 = 0
    int32_t var_30_1 = 0
    int32_t rcx_1 = 0
    int32_t var_2c_1 = 0
    int64_t rsi_1 = -1
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (arg2[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_38, rdi_1.d + 1)
            rcx_1 = var_2c_1
            rdx_2 = var_30_1
        
        int32_t rax_1 = rdi_1.d + 1 + rdx_2
        int32_t var_30_2 = rax_1
        
        if (rax_1 s> rcx_1)
            sub_140594770(&var_38)
        
        UnDecorator::getReferenceType(var_38, arg2, (rdi_1.d + 1) * 2)
    
    EnterCriticalSection(&data_1439a91c0)
    int64_t var_48
    
    if (sub_140b40300(&data_1439a9160, arg2) != 0)
        var_48 = 0
        int32_t rdx_6 = 0
        int32_t var_40_1 = 0
        int32_t rcx_5 = 0
        int32_t var_3c_1 = 0
        int64_t rdi_3 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            do
                rsi_1 += 1
            while (arg2[rsi_1] != 0)
            
            if (rsi_1.d + 1 s> 0)
                sub_1405947f0(&var_48, rsi_1.d + 1)
                rcx_5 = var_3c_1
                rdx_6 = var_40_1
                rdi_3 = var_48
            
            int32_t rax_3 = rdx_6 + rsi_1.d + 1
            int32_t var_40_2 = rax_3
            
            if (rax_3 s> rcx_5)
                sub_140594770(&var_48)
                rdi_3 = var_48
            
            UnDecorator::getReferenceType(rdi_3, arg2, (rsi_1.d + 1) * 2)
        
        sub_1408f1b50(&data_1439a9160, &performanceCount, &var_48)
        int64_t rdx_10 = sx.q(performanceCount.d)
        
        if (rdx_10.d != 0xffffffff)
            r14_1 = *((rdx_10 << 5) + data_1439a9160 + 0x10)
            sub_140b45450(&data_1439a9160, rdx_10.d)
        
        if (rdi_3 != 0)
            sub_140a74f90(rdi_3)
        
        sub_140b30f50(result_1, &r14_1[0x101])
        
        if (r14_1 != 0)
            (*(*r14_1 + 0x10))(r14_1, 1)
    
    LeaveCriticalSection(&data_1439a91c0)
    *(result_1 + 0x29) = 1
    int64_t* rax_6 = sub_140b17c60(&var_48)
    int16_t* const rax_7
    
    if (rax_6[1].d == 0)
        rax_7 = &data_142d40450
    else
        rax_7 = *rax_6
    
    int16_t* const var_58_1 = rax_7
    result = sub_140af8e00(&var_38, result_1 + 0x2a, nullptr, 0, 0, 1)
    int64_t rcx_14 = var_48
    
    if (rcx_14 != 0)
        result = sub_140a74f90(rcx_14)
    
    int64_t rcx_15 = var_38
    
    if (rcx_15 != 0)
        return sub_140a74f90(rcx_15)

return result
