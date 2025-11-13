// 函数: sub_1418e2c00
// 地址: 0x1418e2c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(data_143de5480)
int64_t rdi = data_143efb420
int64_t rcx
int64_t rbx

if (result.b == 0)
    rbx = 0
    rcx = 0
else
    rbx = 0
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    result = zx.q(data_143de5480)
    rcx.b = cond:0_1

if (*(rdi + (rcx << 2)) != 0)
    int64_t rdi_1 = data_143efb438
    int64_t rcx_1
    
    if (result.b == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi_1 + (rcx_1 << 2)) != 0)
        *(arg1 + 9) = 1
        int64_t* rax_2
        int32_t rdx_1
        rax_2, rdx_1 = sub_140b257f0()
        bool c_1 = rax_2[1].d != 0
        int64_t var_58 = 0
        int32_t rdi_2 = rax_2[1].d
        int64_t rsi_1 = *rax_2
        sub_1405a4c70(&var_58, sbb.d(rdx_1, rdx_1, c_1) + 0x1a + rdi_2, 0)
        memcpy(var_58, rsi_1, rdi_2 * 2)
        sub_140a2cf70(&var_58, u"VulkanProgramBinaryCache", 0x18)
        
        if (&arg1[2] == &var_58)
            int64_t rcx_8 = var_58
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
        else
            int64_t rcx_7 = arg1[2]
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            arg1[2] = var_58
            arg1[3].d = rdi_2
            int32_t var_4c
            *(arg1 + 0x1c) = var_4c
        
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"ClearVulkanBinaryProgramCache") != 0)
            int64_t* rax_7 = __crt_deferred_errno_cache::get(&data_143db7b00)
            arg1[3].d
            (*(*rax_7 + 0x170))()
        
        int64_t* rax_9 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_9 != 0)
            rax_9[1] = arg1
            *rax_9 = &data_142ff1360
            rax_9[2] = sub_1418e47b0
            rax_9[4] = sub_140a387b0()
            *rax_9 = &data_142ff13b8
        
        int64_t rdi_4 = 0
        void arg_8
        
        if (rax_9 != 0)
            sub_140599630(&data_1439c9558, 1)
            int64_t* rax_12 = (*(*rax_9 + 0x30))(rax_9, &arg_8)
            int64_t rbp_1 = sx.q(data_1439c9560)
            rdi_4 = *rax_12
            int32_t rax_13 = (rbp_1 + 1).d
            bool cond:4_1 = rax_13 s<= data_1439c9564
            data_1439c9560 = rax_13
            
            if (not(cond:4_1))
                sub_1405a4f90(&data_1439c9558)
            
            void** rax_16 = (rbp_1 << 4) + data_1439c9558
            *rax_16 = rax_9
            rax_16[1].d = 3
        
        arg1[6] = rdi_4
        result = sub_140a84c80(0, 0x30, 0)
        uint64_t result_1 = result
        
        if (result != 0)
            *(result_1 + 8) = arg1
            *result_1 = &data_142d3fe58
            *(result_1 + 0x10) = sub_1418e4d80
            *(result_1 + 0x20) = sub_140a387b0()
            result = &data_142d3feb0
            *result_1 = &data_142d3feb0
        
        if (result_1 != 0)
            sub_140599630(&data_1439c95a0, 1)
            int64_t* rax_19 = (*(*result_1 + 0x30))(result_1, &arg_8)
            int64_t rsi_3 = sx.q(data_1439c95a8)
            rbx = *rax_19
            int32_t rax_20 = (rsi_3 + 1).d
            bool cond:5_1 = rax_20 s<= data_1439c95ac
            data_1439c95a8 = rax_20
            
            if (not(cond:5_1))
                sub_1405a4f90(&data_1439c95a0)
            
            result = (rsi_3 << 4) + data_1439c95a0
            *result = result_1
            *(result + 8) = 3
        
        arg1[7] = rbx
    else
        result = sub_1418e3e00(arg1, arg2)

if (arg1[0x13] == 0)
    int32_t var_48 = 0x11
    int64_t var_44
    __builtin_memset(&var_44, 0, 0x24)
    result = data_143efb858(*(*arg1 + 8), &var_48, 0, &arg1[0x13])
    
    if (result.d != 0)
        return sub_141903f80(result.d, 
            "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, "
        "VULKAN_CPU_ALLOCATOR, &PipelineCache)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPipeline.cpp")

return result
