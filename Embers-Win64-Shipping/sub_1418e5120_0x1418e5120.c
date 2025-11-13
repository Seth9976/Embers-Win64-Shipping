// 函数: sub_1418e5120
// 地址: 0x1418e5120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t var_98 = 0x3b9acde9
int64_t var_94
__builtin_memset(&var_94, 0, 0x3c)
int64_t arg_8 = 0

if (arg4 != 0)
    arg_8 = *(arg4 + 0x18)
    int64_t var_84 = &arg_8
    int64_t var_8c
    var_8c:4.d = 1

int64_t var_7c
var_7c:4.d = 1
int64_t var_6c = arg1 + 0x18
int64_t var_74 = arg1

if (*(arg1 + 0x78) != 0 || data_143efb31c != 0)
    rdi = sub_14197f080()

int64_t performanceCount
int32_t performanceCount_1

if (data_1439c723c != 0 && rdi s> 0)
    QueryPerformanceCounter(&performanceCount)
    uint128_t zmm8 = zx.o(*(arg1 + 0x48))
    int128_t zmm7
    zmm7.q = float.d(performanceCount)
    double zmm6[0x2] = zx.o(0)
    zmm7.q = zmm7.q f* data_143d796f8
    zmm6[0] = float.d(rdi)
    zmm7.q = zmm7.q f+ 16777216.0
    zmm6[0] = zmm6[0] * 0.016666666666666666
    zmm7.q = zmm7.q f- data_143de5880
    zmm8.q = zmm8.q f- zmm7.q
    
    if (not(zmm8.q f<= 0.0))
        QueryPerformanceCounter(&performanceCount_1)
        sub_140b732d0(_mm_cvtpd_ps(zmm8))
        QueryPerformanceCounter(&performanceCount)
        int32_t rdi_2 = performanceCount.d - performanceCount_1
        
        if (sub_140a80f10() == 0)
            if (sub_140a80e70() != 0)
                data_143f138d0 += rdi_2
                data_143f138e0 += 1
        else
            data_143f01c9c += rdi_2
    
    zmm6[0] = zmm6[0] f+ *(arg1 + 0x48)
    *(arg1 + 0x48) = (_mm_max_sd(zmm6[0], zmm7.q)).q

*(arg1 + 0x7c) += 1
QueryPerformanceCounter(&performanceCount_1)
int32_t rax_5 = sub_1418c2fc0(*arg3, &var_98)
QueryPerformanceCounter(&performanceCount)
int32_t rsi_2 = performanceCount.d - performanceCount_1

if (sub_140a80f10() == 0)
    if (sub_140a80e70() != 0)
        data_143f138d0 += rsi_2
        data_143f138e0 += 1
else
    data_143f01c9c += rsi_2

*(arg1 + 0x18) = 0xffffffff

if (rax_5 == 0xc4653214)
    return 0xffffffff

if (rax_5 == 0xc4653600)
    return 0xfffffffe

if (rax_5 != 0 && rax_5 != 0x3b9acdeb)
    sub_141903f80(rax_5, "PresentResult", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

*(arg1 + 0x20) += 1
return 0
