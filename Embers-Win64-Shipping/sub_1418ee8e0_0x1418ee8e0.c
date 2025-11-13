// 函数: sub_1418ee8e0
// 地址: 0x1418ee8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1570) != 0)
    return 

int64_t rcx = *(arg1 + 0x7c0)
int64_t rdi_1 = 0
uint64_t rdx = zx.q(*(*(arg1 + 0x1558) + 8))
int32_t arg_8 = 0
int32_t rax_2 = data_143efbae8(rcx, rdx, arg2, &arg_8)

if (rax_2 != 0)
    sub_141903f80(rax_2, 
        "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(PhysicalDevice, FamilyIndex, Surface, "
    "&bSupportsPresent)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

if (arg_8 != 1)
    sub_140b709d0(0, 
        Cannot find a compatible Vulkan device that supports surface presentation.\n\n", 
        Vulkan device not available")
    j_sub_140b721f0(1)

void* rax_3 = *(arg1 + 0x1560)
int64_t rcx_2 = *(arg1 + 0x7c0)
arg_8 = 0
int32_t rax_4 = data_143efbae8(rcx_2, zx.q(*(rax_3 + 8)), arg2, &arg_8)

if (rax_4 != 0)
    sub_141903f80(rax_4, 
        "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(PhysicalDevice, FamilyIndex, Surface, "
    "&bSupportsPresent)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

int64_t rbp
rbp.b = arg_8 == 1
int32_t rdx_2 = *(*(arg1 + 0x1568) + 8)

if (rdx_2 != *(*(arg1 + 0x1558) + 8) && rdx_2 != *(*(arg1 + 0x1560) + 8))
    int64_t rcx_4 = *(arg1 + 0x7c0)
    arg_8 = 0
    int32_t rax_8 = data_143efbae8(rcx_4, rdx_2, arg2, &arg_8)
    
    if (rax_8 != 0)
        sub_141903f80(rax_8, 
            "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(PhysicalDevice, FamilyIndex, Surface, "
        "&bSupportsPresent)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

int64_t rsi_1 = data_143efb120

if (data_143de5480 != 0)
    rdi_1.b = GetCurrentThreadId() != data_143de5470

if (*(rsi_1 + (rdi_1 << 2)) != 0)
    void* rdx_3 = *(arg1 + 0x1560)
    
    if (*(rdx_3 + 8) != *(*(arg1 + 0x1558) + 8) && rbp.b != 0)
        void* rax_10
        rax_10.b = *(arg1 + 0x157c) == 0x1002
        *(arg1 + 0x1570) = rdx_3
        *(arg1 + 0x1579) = rax_10.b
        return 

*(arg1 + 0x1570) = *(arg1 + 0x1558)
