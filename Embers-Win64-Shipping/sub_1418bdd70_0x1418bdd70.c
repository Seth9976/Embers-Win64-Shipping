// 函数: sub_1418bdd70
// 地址: 0x1418bdd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x80)

for (void* rbp_2 = &i[sx.q(*(arg1 + 0x88)) * 4]; i != rbp_2; i = &i[4])
    int64_t rsi_1 = *i
    int64_t rdi_1 = i[3]
    data_143efba88(*(arg1 + 0x40), rdi_1, zx.q(rsi_1.d), zx.q(i[1].d), i[2], rsi_1 << 3, 8, 3)
    data_143efba78(*(arg1 + 0x40), rdi_1, zx.q(rsi_1.d), zx.q(i[1].d))

*(arg1 + 0x88) = 0

if (*(arg1 + 0x8c) s<= 0xffffffff)
    sub_1405a51b0(arg1 + 0x80, 0)

if (data_143efaf68 != 0)
    void* rcx_3 = *(arg1 + 0xb0)
    
    if (rcx_3 != 0)
        sub_1418f9bc0(rcx_3, arg1)
        *(arg1 + 0xb8) = *(arg1 + 0x98)

int32_t result = data_143efb948(*(arg1 + 0x40))

if (result != 0)
    result = sub_141903f80(result, "VulkanRHI::vkEndCommandBuffer(GetHandle())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanCommandBuffer.cpp")

*(arg1 + 0x2c) = 3
return result
