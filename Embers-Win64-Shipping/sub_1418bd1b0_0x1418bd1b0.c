// 函数: sub_1418bd1b0
// 地址: 0x1418bd1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(sub_140b21160(arg2, 0x40, 0))
int32_t r8 = *(arg1 + 0x1a78)
int32_t arg_8 = r10.d
void* const rcx_2

if (r8 == *(arg1 + 0x1aa4))
labelid_9:
    rcx_2 = nullptr
else
    void* rdx = *(arg1 + 0x1ab0)
    void* r9_1 = arg1 + 0x1aa8
    
    if (rdx != 0)
        r9_1 = rdx
    
    int32_t rax_1 = *(r9_1 + (((sx.q(*(arg1 + 0x1ab8)) - 1) & r10) << 2))
    
    if (rax_1 == 0xffffffff)
    label_1418bd240:
        rcx_2 = nullptr
    else
        int64_t r8_4 = *(arg1 + 0x1a70)
        
        while (true)
            int64_t rdx_1 = sx.q(rax_1) * 3
            rcx_2 = r8_4 + (rdx_1 << 3)
            
            if (*(r8_4 + (rdx_1 << 3)) == r10.d)
                break
            
            rax_1 = *(rcx_2 + 0x10)
            
            if (rax_1 == 0xffffffff)
                goto label_1418bd240_1
        
        if (rax_1 == 0xffffffff)
        label_1418bd240_1:
            rcx_2 = nullptr

void* rax_2 = rcx_2 + 8

if (rcx_2 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    return *rax_2

int64_t result
int32_t rax_4 = data_143efbb10(*(arg1 + 8), arg2, 0, &result)

if (rax_4 != 0)
    sub_141903f80(rax_4, 
        "VulkanRHI::vkCreateSamplerYcbcrConversionKHR(GetInstanceHandle(), &CreateInfo, "
    "VULKAN_CPU_ALLOCATOR, &NewConversion)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanDevice.cpp")

sub_1418b7b40(arg1 + 0x1a70, &arg_8, &result)
return result
