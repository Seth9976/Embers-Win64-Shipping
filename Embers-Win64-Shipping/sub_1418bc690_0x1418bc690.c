// 函数: sub_1418bc690
// 地址: 0x1418bc690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0xa8) + 0x28
EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x2c) = 1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

int64_t rcx_2 = *(arg1 + 0x40)
int32_t var_28 = 0x2a
int64_t var_1c = 0
var_1c:4.d = 1
int64_t var_24 = 0
int64_t var_14 = 0
int32_t var_c = 0
int32_t result = data_143efb940(rcx_2, &var_28)

if (result != 0)
    result = sub_141903f80(result, 
        "VulkanRHI::vkBeginCommandBuffer(CommandBufferHandle, &CmdBufBeginInfo)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanCommandBuffer.cpp")

if (data_143efaf68 != 0)
    result = sub_1418c1f50(arg1, *(*(arg1 + 0x38) + 0x1a50))
    void* rcx_5 = *(arg1 + 0xb0)
    
    if (rcx_5 != 0)
        result = sub_1419032a0(rcx_5, arg1)

*(arg1 + 0x2d) |= 1
return result
