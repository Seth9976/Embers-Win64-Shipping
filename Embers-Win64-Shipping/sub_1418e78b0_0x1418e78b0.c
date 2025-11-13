// 函数: sub_1418e78b0
// 地址: 0x1418e78b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
sub_1418eeab0(arg3, *(arg1 + 0x58), &var_68)
int32_t arg_8 = sub_140b21160(&var_68, 0x50, 0)
EnterCriticalSection(&data_143efb570)
int64_t* rdi_1 = *(arg1 + 0x58) + 0x1a00
void* const rcx_4

if (rdi_1[1].d == *(rdi_1 + 0x34))
label_1418e7970:
    rcx_4 = nullptr
else
    void* rcx_2 = rdi_1[8]
    void* r8_1 = &rdi_1[7]
    int64_t r9_1 = sx.q(arg_8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_3 = *(r8_1 + (((sx.q(rdi_1[9].d) - 1) & r9_1) << 2))
    
    if (rax_3 == 0xffffffff)
    label_1418e7970_1:
        rcx_4 = nullptr
    else
        int64_t r8_2 = *rdi_1
        
        while (true)
            int64_t rdx_4 = sx.q(rax_3) * 3
            rcx_4 = r8_2 + (rdx_4 << 3)
            
            if (*(r8_2 + (rdx_4 << 3)) == r9_1.d)
                break
            
            rax_3 = *(rcx_4 + 0x10)
            
            if (rax_3 == 0xffffffff)
                goto label_1418e7970_2
        
        if (rax_3 == 0xffffffff)
        label_1418e7970_2:
            rcx_4 = nullptr

void* rax_4 = rcx_4 + 8

if (rcx_4 == 0)
    rax_4 = nullptr

if (rax_4 == 0)
    void*** rax_6 = j_sub_140a82f30(0x28)
    void*** rbx_1 = rax_6
    
    if (rax_6 == 0)
        rbx_1 = nullptr
    else
        void* rcx_5 = *(arg1 + 0x58)
        *rbx_1 = &data_142d3ff08
        rbx_1[1].d = 0
        *rbx_1 = &data_142feede8
        *(rbx_1 + 0xc) = 0
        rbx_1[2].w = 0x100
        rbx_1[3] = 0
        rbx_1[4].d = 0
        *(rbx_1 + 0x24) = 0
        int32_t rax_7 = data_143efb8a0(*(rcx_5 + 8), &var_68, 0)
        
        if (rax_7 != 0)
            sub_141903f80(rax_7, 
                "VulkanRHI::vkCreateSampler(InDevice.GetInstanceHandle(), &InInfo, VULKAN_CPU_ALLOCATOR, "
            "&Sampler)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanState.cpp")
        
        if (data_1439c7a08 s<= 1)
            int32_t rax_8 = (data_143efb4e8).d
            data_143efb4e8 += 1
            rbx_1[4].d = rax_8 + 1
    
    void*** var_88 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int32_t* var_80 = &arg_8
    void**** var_78_1 = &var_88
    void arg_20
    sub_1418ca760(rdi_1, &arg_20, &var_80, nullptr)
    *arg2 = var_88
    var_88 = nullptr
    sub_1405d1550(&var_88)
    LeaveCriticalSection(&data_143efb570)
else
    void* rax_5 = *rax_4
    *arg2 = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    LeaveCriticalSection(&data_143efb570)

return arg2
