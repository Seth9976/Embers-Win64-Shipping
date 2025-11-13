// 函数: sub_1418da900
// 地址: 0x1418da900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x38)
*(arg1 + 0x190) = 0

if (*(arg1 + 0x194) != rdx)
    sub_1405c5570(&arg1[0x188], rdx)

if (data_1439c7a08 s<= 1)
    int32_t rdx_1 = *(arg1 + 0x38)
    *(arg1 + 0x1a0) = 0
    
    if (*(arg1 + 0x1a4) != rdx_1)
        sub_1405dadb0(&arg1[0x198], rdx_1)

int64_t* i = *(arg1 + 0x30)

for (void* r13 = &i[sx.q(*(arg1 + 0x38)) * 3]; i != r13; i = &i[3])
    int64_t rbx_1 = sx.q(*(arg1 + 0x190))
    int32_t rax_1 = (rbx_1 + 1).d
    *(arg1 + 0x190) = rax_1
    
    if (rax_1 s> *(arg1 + 0x194))
        sub_1405a4d70(&arg1[0x188])
    
    int64_t r15_1 = *(arg1 + 0x188) + (rbx_1 << 3)
    int32_t* rbx_2 = nullptr
    
    if (data_1439c7a08 s<= 1)
        int64_t rbp_1 = sx.q(*(arg1 + 0x1a0))
        int32_t rax_3 = (rbp_1 + 1).d
        *(arg1 + 0x1a0) = rax_3
        
        if (rax_3 s> *(arg1 + 0x1a4))
            sub_1405a4cf0(&arg1[0x198])
        
        rbx_2 = *(arg1 + 0x198) + (rbp_1 << 2)
    
    int32_t arg_8
    sub_1418e09f0(arg2, &arg_8, i)
    int64_t rax_5 = sx.q(arg_8)
    void* const rax_8
    
    if (rax_5.d == 0xffffffff)
        rax_8 = nullptr
    else
        rax_8 = rax_5 * 0x30 + *arg2
    
    int64_t* rcx_6 = rax_8 + 0x18
    
    if (rax_8 == 0)
        rcx_6 = nullptr
    
    if (rcx_6 == 0)
        int32_t var_48 = 0x20
        int64_t var_44
        __builtin_memset(&var_44, 0, 0x18)
        int64_t var_34_1
        var_34_1.d = i[1].d
        var_34_1 = *i
        int32_t rax_14 = data_143efb8b0(*(*(arg1 + 0x180) + 8), &var_48, 0, r15_1)
        
        if (rax_14 != 0)
            sub_141903f80(rax_14, 
                "VulkanRHI::vkCreateDescriptorSetLayout(Device->GetInstanceHandle(), "
            "&DescriptorLayoutInfo, VULKAN_CPU_ALLOCATOR, LayoutHandle)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanRHI.cpp")
        
        if (rbx_2 != 0)
            int32_t rax_15 = (data_143efb4f0).d
            data_143efb4f0 += 1
            *rbx_2 = rax_15 + 1
        
        int64_t var_58 = *r15_1
        
        if (rbx_2 == 0)
            int32_t var_50_2 = 0
        else
            int32_t var_50_1 = *rbx_2
        
        sub_1418ca4b0(arg2, i, &var_58)
    else
        *r15_1 = *rcx_6
        
        if (rbx_2 != 0)
            *rbx_2 = rcx_6[1].d

if (*(arg1 + 0x44) == 0xffffffff)
    sub_1418dab80(arg1)

*(arg1 + 0x1a8) = 0x22
__builtin_memset(&arg1[0x1ac], 0, 0x24)
*(arg1 + 0x1c0) = *(arg1 + 0x190)
uint64_t result = *(arg1 + 0x188)
*(arg1 + 0x1c8) = result
return result
