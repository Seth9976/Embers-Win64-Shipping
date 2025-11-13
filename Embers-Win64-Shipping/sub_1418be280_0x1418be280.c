// 函数: sub_1418be280
// 地址: 0x1418be280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t result_1 = 0
int32_t rax = data_143efb658(arg1, &result_1, 0)

if ((0x80000000 & (rax - 0x80000000)) == 0 && rax != 0xfffffffd)
    sub_141903f80(rax, 
        "VulkanRHI::vkEnumerateInstanceExtensionProperties(LayerName, &Count, nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")

int32_t result = result_1

if (result != 0)
    *(arg2 + 0x210) = 0
    
    if (*(arg2 + 0x214) != result)
        sub_1418c5f30(arg2 + 0x208, result)
        result = result_1
        rdi = *(arg2 + 0x210)
    
    int32_t rax_1 = result + rdi
    *(arg2 + 0x210) = rax_1
    
    if (rax_1 s> *(arg2 + 0x214))
        sub_1418c5ea0(arg2 + 0x208)
    
    result = data_143efb658(arg1, &result_1, *(arg2 + 0x208))
    
    if ((0x80000000 & (result - 0x80000000)) == 0 && result != 0xfffffffd)
        return sub_141903f80(result, 
            "VulkanRHI::vkEnumerateInstanceExtensionProperties(LayerName, &Count, OutLayer."
        "ExtensionProps.GetData())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanLayers.cpp")

return result
