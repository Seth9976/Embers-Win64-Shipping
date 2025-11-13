// 函数: sub_1418e3e00
// 地址: 0x1418e3e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *arg2
uint64_t r12
r12.b = 0
int64_t var_148
int32_t var_138
int64_t var_134
int64_t var_110
int16_t* var_100
int32_t var_f8
int64_t arg_8
int64_t performanceCount

for (void* r14_2 = (sx.q(arg2[1].d) << 4) + i; i != r14_2; i += 0x10)
    QueryPerformanceCounter(&performanceCount)
    int32_t rbx_1 = *(i + 8)
    var_110 = 0
    int64_t rsi_1 = *i
    int32_t var_108_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_110, rbx_1, 0)
        memcpy(var_110, rsi_1, rbx_1 * 2)
    else
        int32_t var_104_1 = 0
    
    sub_1418bd0f0(&var_100, *arg1, &var_110)
    int16_t* const rdx_3 = &data_142d40450
    var_148 = 0
    
    if (var_f8 != 0)
        rdx_3 = var_100
    
    int32_t var_140_1 = 0
    
    if (sub_140b1ef70(&var_148, rdx_3, 2) != 0 && sub_1418c2cf0(*arg1, &var_148) != 0)
        var_138 = 0x11
        int32_t* rdx_5 = &var_138
        __builtin_memset(&var_134, 0, 0x20)
        int64_t var_124_1 = sx.q(var_140_1)
        int64_t var_11c_1 = var_148
        int64_t rcx_6 = *(*arg1 + 8)
        
        if (arg1[0x13] != 0)
            int32_t rax_7 = data_143efb858(rcx_6, rdx_5, 0, &arg_8)
            
            if (rax_7 != 0)
                sub_141903f80(rax_7, 
                    "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, "
                "VULKAN_CPU_ALLOCATOR, &TempPipelineCache)", 
                    "
                    D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPipeline.cpp")
            
            int32_t rax_9 = data_143efb870(*(*arg1 + 8), arg1[0x13], 1, &arg_8)
            
            if (rax_9 != 0)
                sub_141903f80(rax_9, 
                    "VulkanRHI::vkMergePipelineCaches(Device->GetInstanceHandle(), PipelineCache, 1, "
                "&TempPipelineCache)", 
                    "
                    D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPipeline.cpp")
            
            data_143efb860(*(*arg1 + 8), arg_8, 0)
        else
            int32_t rax_6 = data_143efb858(rcx_6, rdx_5, 0, &arg1[0x13])
            
            if (rax_6 != 0)
                sub_141903f80(rax_6, 
                    "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, "
                "VULKAN_CPU_ALLOCATOR, &PipelineCache)", 
                    "
                    D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPipeline.cpp")
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        r12.b = 1
    
    int64_t rcx_14 = var_148
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int16_t* rcx_15 = var_100
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

int64_t rbx_2 = data_143efb3c0
int64_t rcx_16

if (data_143de5480 == 0)
    rcx_16 = 0
else
    rcx_16.b = GetCurrentThreadId() != data_143de5470

if (*(rbx_2 + (rcx_16 << 2)) != 0)
    int64_t* i_1 = *arg2
    
    for (void* r13_3 = &i_1[sx.q(arg2[1].d) * 2]; i_1 != r13_3; i_1 = &i_1[2])
        QueryPerformanceCounter(&performanceCount)
        int32_t rbx_3 = i_1[1].d
        int64_t rdi = *i_1
        var_110 = 0
        int32_t var_108_2 = rbx_3
        
        if (rbx_3 != 0)
            sub_1405a4c70(&var_110, rbx_3, 0)
            memcpy(var_110, rdi, rbx_3 * 2)
        else
            int32_t var_104_2 = 0
        
        sub_1418bd0f0(&var_100, *arg1, &var_110)
        sub_140a20ba0(&var_100, u".lru", 4)
        int512_t zmm1_1 = sub_140a306e0(&var_100, u"TempScanVulkanPSO_", u"VulkanPSO_", 1)
        int16_t* rdx_11 = &data_142d40450
        var_148 = 0
        
        if (var_f8 != 0)
            rdx_11 = var_100
        
        int64_t var_140_2 = 0
        
        if (sub_140b1ef70(&var_148, rdx_11, 2) == 0)
            r12.b = 0
        else
            void** const var_e8
            memset(&var_e8, 0, 0x90)
            sub_140b4c2a0(&var_e8)
            int64_t var_58_1 = 0
            var_e8 = &data_142d6b230
            int64_t* var_50_1 = &var_148
            int64_t var_48_1 = 0x7fffffffffffffff
            sub_140b55290(&var_e8, 1)
            var_e8[0x1b](&var_e8, 0)
            var_138.q = -1
            var_134 = 0
            int64_t var_12c = 0
            int64_t* var_e0
            int32_t* rdx_13 = *var_e0
            char var_bf
            
            if (&rdx_13[1] u> var_e0[1])
                int32_t* rdx_14 = &var_138
                int64_t* rcx_29 = &var_e8
                
                if ((var_bf & 0x20) != 0)
                    sub_140b54070(rcx_29, rdx_14, zmm1_1)
                else
                    var_e8[0x2a](rcx_29, rdx_14, 4)
            else
                var_138 = *rdx_13
                *var_e0 += 4
            
            if (var_138 == 2)
                rdx_13 = *var_e0
                
                if (&rdx_13[1] u> var_e0[1])
                    int32_t* rdx_15 = &var_134
                    int64_t* rcx_31 = &var_e8
                    
                    if ((var_bf & 0x20) != 0)
                        sub_140b54070(rcx_31, rdx_15, zmm1_1)
                    else
                        var_e8[0x2a](rcx_31, rdx_15, 4)
                else
                    var_134.d = *rdx_13
                    *var_e0 += 4
                
                if (var_134.d == 0x10)
                    sub_1418cd780(&var_e8, &var_134:4, zmm1_1)
                    rdx_13.b = 1
                else
                    rdx_13.b = 0
            else
                rdx_13.b = 0
            
            char rcx_33 = 0
            int32_t j = 0
            
            if (rdx_13.b != 0)
                rcx_33 = r12.b
            
            r12 = zx.q(rcx_33)
            
            if (var_12c:4.d s> 0)
                int64_t rdi_1 = 0
                
                do
                    int32_t* rcx_34 = var_134
                    arg_8.d = *(rcx_34 + rdi_1)
                    sub_1418ca110(&arg1[0x51], &arg_8, &rcx_34[sx.q(j) * 4])
                    j += 1
                    rdi_1 += 0x10
                while (j s< var_12c:4.d)
            
            int64_t rcx_36 = var_134
            
            if (rcx_36 != 0)
                sub_140a74f90(rcx_36)
            
            sub_140b4cb40(&var_e8)
        
        int64_t rcx_38 = var_148
        
        if (rcx_38 != 0)
            sub_140a74f90(rcx_38)
        
        int16_t* rcx_39 = var_100
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)

if (arg1[0x13] == 0)
    var_138 = 0x11
    __builtin_memset(&var_134, 0, 0x24)
    int32_t rax_22 = data_143efb858(*(*arg1 + 8), &var_138, 0, &arg1[0x13])
    
    if (rax_22 != 0)
        sub_141903f80(rax_22, 
            "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, "
        "VULKAN_CPU_ALLOCATOR, &PipelineCache)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPipeline.cpp")

return zx.q(r12.b)
