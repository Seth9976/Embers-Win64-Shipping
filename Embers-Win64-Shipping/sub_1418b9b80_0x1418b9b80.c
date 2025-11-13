// 函数: sub_1418b9b80
// 地址: 0x1418b9b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi_1 = *(arg1 + 0x38) + 0x438

if (*(arg1 + 0x2c) != 4)
    EnterCriticalSection(&data_143efb280)
    void* r14_2 = *(arg1 + 0x90)
    
    if (*(r14_2 + 8) != 0)
        int32_t rax_6 = data_143efb798(*(*rsi_1 + 8), 1, r14_2)
        
        if (rax_6 != 0)
            sub_141903f80(rax_6, 
                "VulkanRHI::vkResetFences(Device->GetInstanceHandle(), 1, &Fence->Handle)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
        
        *(r14_2 + 8) = 0
    
    sub_140838b90(&rsi_1[3], arg1 + 0x90, 0)
    int64_t r14_3 = sx.q(rsi_1[2].d)
    int32_t rax_7 = (r14_3 + 1).d
    rsi_1[2].d = rax_7
    
    if (rax_7 s> *(rsi_1 + 0x14))
        sub_1405a4d70(&rsi_1[1])
    
    *(rsi_1[1] + (r14_3 << 3)) = *(arg1 + 0x90)
else
    EnterCriticalSection(&data_143efb280)
    void* r14 = *(arg1 + 0x90)
    
    if (*(r14 + 8) != 1)
        sub_1418c9370(rsi_1, r14, 0x1f78a40)
        r14 = *(arg1 + 0x90)
    
    if (*(r14 + 8) != 0)
        int32_t rax_2 = data_143efb798(*(*rsi_1 + 8), 1, r14)
        
        if (rax_2 != 0)
            sub_141903f80(rax_2, 
                "VulkanRHI::vkResetFences(Device->GetInstanceHandle(), 1, &Fence->Handle)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
        
        *(r14 + 8) = 0
    
    sub_140838b90(&rsi_1[3], arg1 + 0x90, 0)
    int64_t r14_1 = sx.q(rsi_1[2].d)
    int32_t rax_3 = (r14_1 + 1).d
    rsi_1[2].d = rax_3
    
    if (rax_3 s> *(rsi_1 + 0x14))
        sub_1405a4d70(&rsi_1[1])
    
    *(rsi_1[1] + (r14_1 << 3)) = *(arg1 + 0x90)

*(arg1 + 0x90) = 0
LeaveCriticalSection(&data_143efb280)

if (*(arg1 + 0x2c) != 5)
    data_143efb938(*(*(arg1 + 0x38) + 8), **(arg1 + 0xa8), 1, arg1 + 0x40)
    *(arg1 + 0x40) = 0
    *(arg1 + 0x2c) = 5

int64_t* rcx_12 = *(arg1 + 0xb0)

if (rcx_12 != 0)
    sub_141902870(rcx_12)
    int64_t rbx_1 = *(arg1 + 0xb0)
    
    if (rbx_1 != 0)
        j_sub_140a74f90(rbx_1)
    
    *(arg1 + 0xb0) = 0

void* result = sub_1405ae080(arg1 + 0xc0)
int64_t rcx_16 = *(arg1 + 0x80)

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = *(arg1 + 0x70)

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t rcx_18 = *(arg1 + 0x60)

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

int64_t rcx_19 = *(arg1 + 0x50)

if (rcx_19 == 0)
    return result

return sub_140a74f90(rcx_19) __tailcall
