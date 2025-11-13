// 函数: sub_141de1260
// 地址: 0x141de1260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
EnterCriticalSection(arg1 + 0x60)
int32_t arg_8
sub_140865c40(arg1 + 0x10, &arg_8, arg_10)
int64_t rax = sx.q(arg_8)
int32_t* result
void* rcx_2

if (rax.d != 0xffffffff)
    result = *(arg1 + 0x10)
    rcx_2 = &result[rax * 6]

if (rax.d == 0xffffffff || rcx_2 == 0 || *(rcx_2 + 8) == 0)
    result = j_sub_140a82f30(0x78)
    int32_t* result_1 = result
    
    if (result == 0)
        result_1 = nullptr
    else
        __builtin_memset(result, 0, 0x18)
        InitializeCriticalSection(&result[6])
        SetCriticalSectionSpinCount(&result_1[6], 0xfa0)
        __builtin_memset(&result_1[0x10], 0, 0x1c)
        *(result_1 + 0x58) = 0
        __builtin_memset(&result_1[0x18], 0, 0x18)
        
        if (result_1[0x17] s<= 0xffffffff)
            sub_1405dadb0(&result_1[0x14], 0)
        
        int64_t r14_1 = sx.q(result_1[0x16])
        int32_t rax_1 = (r14_1 + 1).d
        result_1[0x16] = rax_1
        
        if (rax_1 s> result_1[0x17])
            sub_1405a4cf0(&result_1[0x14])
        
        result = *(result_1 + 0x50)
        result[r14_1] = 0
    
    void* r8_1 = arg_10
    int32_t* result_2 = result_1
    
    if (*(r8_1 + 0xc0) != 0)
        *result_1 = r8_1
        *(result_1 + 0x70) = arg1
        sub_141de1190(result_1, 0, *(*(r8_1 + 0xb8) + 8))
        int64_t rdi_1 = sx.q(result_1[0x12])
        int32_t rax_2 = (rdi_1 + 1).d
        result_1[0x12] = rax_2
        
        if (rax_2 s> result_1[0x13])
            sub_1405a4cf0(&result_1[0x10])
        
        *(*(result_1 + 0x40) + (rdi_1 << 2)) = 0
        void** var_48 = &arg_10
        int32_t** var_40_1 = &result_2
        result = sub_1408d5f10(arg1 + 0x10, &arg_8, &var_48, nullptr)
    else if (result_1 != 0)
        int64_t rcx_10 = *(result_1 + 0x60)
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = *(result_1 + 0x50)
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = *(result_1 + 0x40)
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        DeleteCriticalSection(&result_1[6])
        int64_t rcx_14 = *(result_1 + 8)
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        result = j_sub_140a74f90(result_1)

if (arg1 == -0x60)
    return result

return LeaveCriticalSection(arg1 + 0x60)
