// 函数: sub_1418ba820
// 地址: 0x1418ba820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint64_t rsi = zx.q(arg2)

if (arg4 == 8)
    int64_t rcx = *(arg1[8] + 0xae0)
    rsi = zx.q((divu.dp.q(0:(rsi - 1 + rcx), rcx)).d * rcx.d)

int32_t r14_1 = arg3 | 3

if ((arg3.b & 3) == 0)
    r14_1 = arg3

EnterCriticalSection(&data_143efb230)
int32_t rax_6 = 0
void*** result

if (arg1[5].d s<= 0)
label_1418ba8c4:
    LeaveCriticalSection(&data_143efb230)
    void*** result_1 = j_sub_140a82f30(0x28)
    result = result_1
    
    if (result_1 == 0)
        result = nullptr
    else
        *result = &data_142d5a028
        result[1].d = 0
        *result = &data_142fec108
        result[2] = 0
        result[3] = 0
        result[4] = 4
    
    int32_t var_90 = 0xc
    int64_t var_8c
    __builtin_memset(&var_8c, 0, 0x34)
    int64_t var_7c = zx.q(rsi.d)
    int64_t var_74
    var_74:4.d = r14_1
    int64_t r14_2 = *(arg1[8] + 8)
    int32_t rax_10 = data_143efb800(r14_2, &var_90, 0, &result[3])
    
    if (rax_10 != 0)
        sub_141903f80(rax_10, 
            "VulkanRHI::vkCreateBuffer(VulkanDevice, &StagingBufferCreateInfo, VULKAN_CPU_ALLOCATOR, "
        "&StagingBuffer->Buffer)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
    
    void var_58
    data_143efb760(r14_2, result[3], &var_58)
    int64_t var_50
    int64_t rax_11 = var_50
    
    if (rax_11 u<= 0x10)
        rax_11 = 0x10
    
    TEB* gsbase
    
    if (data_143efb310
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143efb310)
        
        if (data_143efb310 == 0xffffffff)
            data_143efb30c = *(arg1[8] + 0x7d0) == 0x1002
            _Init_thread_footer(&data_143efb310)
    
    void* r9_3
    
    if (arg4 == 8 || data_143efb30c != 0)
        r9_3 = arg1[8]
        int64_t rcx_15 = *(r9_3 + 0xae0)
        int64_t r8_5 = rax_11 - 1 + rcx_15
        int64_t var_50_2 = r8_5 - modu.dp.q(0:r8_5, rcx_15)
    else
        r9_3 = arg1[8]
    
    void*** rax_16 = sub_1418bbd80(r9_3 + 0x248, &var_58, arg4 | 2, 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp", 0x7bd)
    int64_t* rcx_17 = result[2]
    result[2] = rax_16
    
    if (rax_16 != 0)
        rax_16[1].d += 1
    
    if (rcx_17 != 0)
        rcx_17[1].d -= 1
        
        if (rcx_17[1].d == 1)
            (**rcx_17)(rcx_17, 1)
    
    void* rax_19 = result[2]
    int64_t rdx_14 = result[3]
    result[4].d = arg4
    *(result + 0x24) = rsi.d
    int32_t rax_22 =
        data_143efb750(*(arg1[8] + 8), rdx_14, *(*(rax_19 + 0x28) + 0x10), zx.q(*(rax_19 + 0x24)))
    
    if (rax_22 != 0)
        sub_141903f80(rax_22, "Result", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
    
    EnterCriticalSection(&data_143efb230)
    int64_t rsi_3 = sx.q(arg1[1].d)
    int32_t rax_23 = (rsi_3 + 1).d
    arg1[1].d = rax_23
    
    if (rax_23 s> *(arg1 + 0xc))
        sub_1405a4d70(arg1)
    
    *(*arg1 + (rsi_3 << 3)) = result
    arg1[7] += zx.q(*(result + 0x24))
    int64_t rcx_22 = arg1[6]
    
    if (arg1[7] u>= rcx_22)
        rcx_22 = arg1[7]
    
    arg1[6] = rcx_22
else
    void** r9 = arg1[4]
    void** rcx_2 = r9
    
    while (true)
        result = *rcx_2
        
        if (*(result + 0x24) == rsi.d && result[4].d == arg4)
            int32_t rdx_1 = arg1[5].d
            int32_t rcx_5 = rdx_1 - rax_6 - 1
            
            if (rcx_5 s>= 1)
                rcx_5 = 1
            
            if (rcx_5 != 0)
                memcpy(&r9[sx.q(rax_6) * 2], &r9[sx.q(rdx_1 - rcx_5) * 2], rcx_5 << 4)
                rdx_1 = arg1[5].d
            
            arg1[5].d = rdx_1 - 1
            int64_t rsi_2 = sx.q(arg1[1].d)
            int32_t rdx_6 = (rsi_2 + 1).d
            arg1[1].d = rdx_6
            
            if (rdx_6 s> *(arg1 + 0xc))
                sub_1405a4d70(arg1)
            
            *(*arg1 + (rsi_2 << 3)) = result
            break
        
        rax_6 += 1
        rcx_2 = &rcx_2[2]
        
        if (rax_6 s>= arg1[5].d)
            goto label_1418ba8c4

LeaveCriticalSection(&data_143efb230)
__security_check_cookie(rax_1 ^ &var_c8)
return result
