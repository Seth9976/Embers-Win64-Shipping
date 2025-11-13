// 函数: sub_1418c2300
// 地址: 0x1418c2300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = *(arg1 + 0x20) u>> 9

if ((result.b & 1) == 0)
    int32_t var_38 = 6
    int64_t var_34
    __builtin_memset(&var_34, 0, 0x20)
    int64_t var_24 = arg2
    int64_t var_1c = arg3
    int64_t var_2c = *(arg1 + 0x10)
    result = data_143efb740(*(arg1 + 8), 1, &var_38)
    
    if (result != 0)
        return sub_141903f80(result, 
            "VulkanRHI::vkInvalidateMappedMemoryRanges(DeviceHandle, 1, &Range)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")

return result
