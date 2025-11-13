// 函数: sub_1418c4d80
// 地址: 0x1418c4d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2c) != 4)
    return 

int64_t* rdi_1 = *(arg1 + 0x90)

if (rdi_1[1].d == 1)
    goto label_1418c4dfa

int64_t rax = data_143efb7a0(*(*rdi_1[2] + 8), *rdi_1)

if (rax.d == 0)
    rdi_1[1].d = 1
label_1418c4dfa:
    *(arg1 + 0x2d) &= 0xe1
    int64_t* rdi_2 = *(arg1 + 0x70)
    int64_t rsi_1 = 0
    uint64_t r14_2 = sx.q(*(arg1 + 0x78)) << 3 u>> 3
    
    if (rdi_2 u> &rdi_2[sx.q(*(arg1 + 0x78))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t* rcx_4 = *rdi_2
            rcx_4[1].d -= 1
            
            if (rcx_4[1].d == 1 && rcx_4 != 0)
                (**rcx_4)(rcx_4, 1)
            
            rdi_2 = &rdi_2[1]
            rsi_1 += 1
        while (rsi_1 != r14_2)
    
    *(arg1 + 0x78) = 0
    
    if (*(arg1 + 0x7c) s<= 0xffffffff)
        sub_1405c5570(arg1 + 0x70, 0)
    
    __builtin_memset(arg1, 0, 0x2c)
    data_143efb950(*(arg1 + 0x40), 1)
    void* rdi_3 = *(arg1 + 0x90)
    
    if (*(rdi_3 + 8) != 0)
        int32_t rax_8 = data_143efb798(*(**(rdi_3 + 0x10) + 8), 1, rdi_3)
        
        if (rax_8 != 0)
            sub_141903f80(rax_8, 
                "VulkanRHI::vkResetFences(Device->GetInstanceHandle(), 1, &Fence->Handle)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
        
        *(rdi_3 + 8) = 0
    
    *(arg1 + 0x98) += 1
    
    if (data_1439c7a08 s> 1 && *(arg1 + 0x30) != 0)
        sub_1408d84f0(arg1 + 0xc0)
        sub_1418ebfd0(*(*(arg1 + 0x38) + 0x468), *(arg1 + 0x30))
        *(arg1 + 0x30) = 0
    
    *(arg1 + 0x2c) = 0
else if (rax.d != 1 && rax.d != 0)
    return sub_141903f80(rax.d, "Result", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp") __tailcall
