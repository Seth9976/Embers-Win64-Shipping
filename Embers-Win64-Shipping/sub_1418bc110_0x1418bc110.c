// 函数: sub_1418bc110
// 地址: 0x1418bc110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efb280)
void* const result

if (arg1[2].d == 0)
    void* result_1 = j_sub_140a82f30(0x18)
    result = result_1
    
    if (result_1 == 0)
        result = nullptr
    else
        void* rcx_2 = *arg1
        uint32_t rax_5 = zx.d(arg2)
        *(result + 8) = rax_5
        *(result + 0x10) = arg1
        int64_t rcx_3 = *(rcx_2 + 8)
        int64_t var_24
        __builtin_memset(&var_24, 0, 0x14)
        int32_t var_28 = 8
        int64_t var_1c
        var_1c:4.d = rax_5
        int32_t rax_6 = data_143efb788(rcx_3, &var_28, 0, result, var_28)
        
        if (rax_6 != 0)
            sub_141903f80(rax_6, 
                "VulkanRHI::vkCreateFence(InDevice->GetInstanceHandle(), &Info, VULKAN_CPU_ALLOCATOR, "
            "&Handle)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
    
    int64_t rsi_1 = sx.q(arg1[4].d)
    int32_t rax_7 = (rsi_1 + 1).d
    arg1[4].d = rax_7
    
    if (rax_7 s> *(arg1 + 0x24))
        sub_1405a4d70(&arg1[3])
    
    *(arg1[3] + (rsi_1 << 3)) = result
else
    int32_t r9_1 = arg1[2].d
    int64_t* rcx = arg1[1]
    int32_t rax = r9_1 - 1
    result = *rcx
    
    if (rax s>= 1)
        rax = 1
    
    if (rax != 0)
        memcpy(rcx, &rcx[sx.q(r9_1 - rax)], rax << 3)
        r9_1 = arg1[2].d
    
    arg1[2].d = r9_1 - 1
    int64_t rsi = sx.q(arg1[4].d)
    int32_t rax_3 = (rsi + 1).d
    arg1[4].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x24))
        sub_1405a4d70(&arg1[3])
    
    *(arg1[3] + (rsi << 3)) = result
    
    if (arg2 != 0)
        *(result + 8) = 1

LeaveCriticalSection(&data_143efb280)
return result
