// 函数: sub_1418e3430
// 地址: 0x1418e3430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_28 = zmm6
int128_t zmm7
int128_t var_38 = zmm7
BOOL result_1 = 1
uint128_t zmm8
uint128_t var_48 = zmm8
uint128_t zmm9
uint128_t var_58 = zmm9
BOOL result

if (data_143efb7d0(*(*(arg1 + 8) + 8), *(arg1 + 0x18)) != 3)
label_1418e3501:
    
    if (arg2 == 0)
    label_1418e34db:
        result.b = 0
    else
        int64_t performanceCount[0x2]
        QueryPerformanceCounter(&performanceCount)
        int64_t performanceCount_1[0x2]
        QueryPerformanceCounter(&performanceCount_1)
        int32_t rsi_1 = data_14399e5e0
        zmm7.q = float.d(performanceCount_1[0])
        zmm7.q = zmm7.q f* data_143d796f8
        
        while (true)
            sub_140b732d0((zx.o(0)).q.d)
            
            if (sub_140a80e70() != 0)
                int64_t* rax_5 = sub_140a242a0()
                int64_t r8_2 = *rax_5
                (*(r8_2 + 0x30))(rax_5, zx.q(rsi_1), r8_2)
            
            if (data_143efb7d0(*(*(arg1 + 8) + 8), *(arg1 + 0x18)) == 3)
                int32_t rdx_5 = *(arg1 + 0x40)
                result_1 = data_143efb7f8(*(*(arg1 + 8) + 8), *(arg1 + 0x10), 0, zx.q(rdx_5), 
                    zx.q(rdx_5) << 3, *(arg1 + 0x28), 8, 1)
            
            if (result_1 == 0)
                int32_t performanceCount_3
                QueryPerformanceCounter(&performanceCount_3)
                data_143f138cc += performanceCount_3 - performanceCount[0].d
                data_143f138d8:4.d += 1
                break
            
            if (result_1 != 1)
                sub_141903f80(result_1, "Result", 
                    "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanQuery.cpp")
            
            if (*(arg1 + 0x24) != 2)
                zmm6 = 0x3fe0000000000000
            else
                zmm6 = 0x4000000000000000
            
            int64_t performanceCount_2
            QueryPerformanceCounter(&performanceCount_2)
            
            if (not(float.d(performanceCount_2) f* data_143d796f8 f- zmm7.q f<= zmm6.q))
                goto label_1418e34db_1
        
        *(arg1 + 0x38) = 3
        result.b = 1
else
    int32_t rdx_1 = *(arg1 + 0x40)
    result = data_143efb7f8(*(*(arg1 + 8) + 8), *(arg1 + 0x10), 0, zx.q(rdx_1), zx.q(rdx_1) << 3, 
        *(arg1 + 0x28), 8, 1)
    result_1 = result
    
    if (result == 0)
        *(arg1 + 0x38) = 3
        result.b = 1
    else
        if (result == 1)
            goto label_1418e3501
        
        sub_141903f80(result, "Result", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanQuery.cpp")
    label_1418e34db_1:
        result.b = 0

return result
