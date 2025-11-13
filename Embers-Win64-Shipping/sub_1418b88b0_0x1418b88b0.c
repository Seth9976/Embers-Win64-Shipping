// 函数: sub_1418b88b0
// 地址: 0x1418b88b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
__builtin_memset(&arg1[1], 0, 0x28)
InitializeCriticalSection(&arg1[6])
SetCriticalSectionSpinCount(&arg1[6], 0xfa0)
arg1[0xb] = arg2
arg1[0xc] = arg1
arg1[0xd] = *(arg3 + 0x148)
__builtin_memset(&arg1[0xe], 0, 0x50)
int64_t var_3c = 0
int64_t var_44 = 0
void* rax_1 = arg1[0xd]
var_3c = 2
int32_t var_48 = 0x27
int32_t var_34 = *(rax_1 + 8)
int32_t rax_3 = data_143efb918(*(arg1[0xb] + 8), &var_48, 0, &arg1[1], var_48)

if (rax_3 != 0)
    sub_141903f80(rax_3, 
        "VulkanRHI::vkCreateCommandPool(Device->GetInstanceHandle(), &CmdPoolInfo, VULKAN_CPU_ALLOCATOR, "
    "&Handle)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanCommandBuffer.cpp")

if (data_143efaf6c != 0)
    void*** rax_4 = j_sub_140a82f30(0x28)
    void*** rbx_1 = rax_4
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        void* rcx_5 = *arg1
        *rbx_1 = &data_142d5a028
        rbx_1[1].d = 0
        *rbx_1 = &data_142fec120
        rbx_1[2] = rcx_5
        int64_t var_2c
        __builtin_memset(&var_2c, 0, 0x14)
        rbx_1[3] = 0
        rbx_1[4].b = 0
        int32_t var_30 = 9
        int32_t rax_5 = data_143efb7b0(*(rcx_5 + 8), &var_30, 0)
        
        if (rax_5 != 0)
            sub_141903f80(rax_5, 
                "VulkanRHI::vkCreateSemaphore(Device.GetInstanceHandle(), &CreateInfo, "
            "VULKAN_CPU_ALLOCATOR, &SemaphoreHandle)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
    
    arg1[0x12] = rbx_1

void* rax_6 = sub_1418bc9e0(&arg1[1], 0)
arg1[0xe] = rax_6
sub_1418c1f50(rax_6, arg3)
sub_1418bc690(arg1[0xe])
return arg1
