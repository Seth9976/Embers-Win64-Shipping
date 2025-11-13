// 函数: sub_1405a5490
// 地址: 0x1405a5490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 u> *(arg1 + 0x10))
    return 

int64_t var_20_1 = -0x4010000000000000
void* lpBuffer_1
sub_140b16600(&lpBuffer_1, arg3, arg4, arg2, data_143de5484)
int32_t var_10

if (*(arg1 + 0x11) == 0)
    void* lpBuffer_3 = &data_142d40450
    
    if (var_10 != 0)
        lpBuffer_3 = lpBuffer_1
    
    sub_1405a65a0(u"%s\n", lpBuffer_3)
    fflush(__acrt_iob_func(1))
else
    int32_t rbx_1 = var_10 - 1
    
    if (var_10 s<= 0)
        rbx_1 = 0
    
    int32_t rax_2
    rax_2.b = var_10 s<= 0
    int32_t rax_4 = rax_2 + 1 + var_10
    int32_t var_c
    
    if (rax_4 s> var_c)
        sub_140594770(&lpBuffer_1)
    
    int64_t rcx_2 = sx.q(rbx_1)
    *(lpBuffer_1 + (rcx_2 << 1)) = 0xa
    *(lpBuffer_1 + (rcx_2 << 1) + 2) = 0
    void* lpBuffer
    uint32_t nNumberOfCharsToWrite
    
    if (rax_4 == 0)
        nNumberOfCharsToWrite = 0
        lpBuffer = &data_142d40450
    else
        lpBuffer = lpBuffer_1
        nNumberOfCharsToWrite = rax_4 - 1
    
    WriteConsoleW(GetStdHandle(STD_OUTPUT_HANDLE), lpBuffer, nNumberOfCharsToWrite, nullptr, 
        nullptr)
void* lpBuffer_2 = lpBuffer_1

if (lpBuffer_2 != 0)
    sub_140a74f90(lpBuffer_2)
