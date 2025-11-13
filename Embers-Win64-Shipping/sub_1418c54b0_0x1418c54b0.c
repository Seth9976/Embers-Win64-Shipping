// 函数: sub_1418c54b0
// 地址: 0x1418c54b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efb280)
void* rbx = *arg2

if (*(rbx + 8) != 0)
    int32_t rax_2 = data_143efb798(*(*arg1 + 8), 1, rbx)
    
    if (rax_2 != 0)
        sub_141903f80(rax_2, 
            "VulkanRHI::vkResetFences(Device->GetInstanceHandle(), 1, &Fence->Handle)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
    
    *(rbx + 8) = 0

sub_140838b90(&arg1[3], arg2, 0)
int64_t rsi_1 = sx.q(arg1[2].d)
int32_t rax_3 = (rsi_1 + 1).d
arg1[2].d = rax_3

if (rax_3 s> *(arg1 + 0x14))
    sub_1405a4d70(&arg1[1])

*(arg1[1] + (rsi_1 << 3)) = *arg2
*arg2 = 0
return LeaveCriticalSection(&data_143efb280) __tailcall
