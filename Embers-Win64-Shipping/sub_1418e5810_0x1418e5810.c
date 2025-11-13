// 函数: sub_1418e5810
// 地址: 0x1418e5810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
char rcx = 2

if (arg1[2].d u<= 2)
    rcx = (arg1[2].d).b

int32_t r12 = 0x20 << rcx
int64_t* result_1 = j_sub_140a82f30(0x28)
int64_t* result = result_1

if (result_1 == 0)
    result = nullptr
else
    int64_t rax_2 = *arg1
    int32_t rcx_1 = 0xb
    int32_t i = 0
    int32_t rbp_1 = 0
    int64_t r13_1 = arg1[1]
    result[3] = r13_1
    *result = rax_2
    *(result + 0xc) = 0
    result[4] = 0
    result[1].d = r12
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0xb
    int32_t var_90[0x16]
    
    do
        int32_t rdi_1 = *(r13_1 + (sx.q(i) << 2))
        
        if (rdi_1 != 0)
            if (rbp_1 + 1 s> rcx_1)
                sub_1418ecc90(&var_90)
            
            int64_t rax_5 = sx.q(rbp_1)
            var_90[rax_5 * 2] = i
            var_8c
            *(&var_8c + (rax_5 << 3)) = rdi_1 * r12
            rcx_1 = var_34_1
            rbp_1 += 1
        
        i += 1
    while (i u<= 0xa)
    
    void* rcx_3 = *result
    int32_t var_b8 = 0x21
    int64_t var_b4
    __builtin_memset(&var_b4, 0, 0x20)
    int64_t var_9c = &var_90
    int64_t var_a4
    var_a4:4.d = rbp_1
    var_a4.d = r12
    int32_t rax_6 = data_143efb8c0(*(rcx_3 + 8), &var_b8, 0, &result[4], var_b8)
    
    if (rax_6 != 0)
        sub_141903f80(rax_6, 
            "VulkanRHI::vkCreateDescriptorPool(Device->GetInstanceHandle(), &PoolInfo, "
        "VULKAN_CPU_ALLOCATOR, &DescriptorPool)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPendingState.cpp")

int64_t rbx_1 = arg1[4]
int64_t** rax_7 = j_sub_140a82f30(0x10)
int64_t** rcx_6 = rax_7

if (rbx_1 == 0)
    if (rax_7 == 0)
        rcx_6 = nullptr
    else
        *rax_7 = result
        rax_7[1] = 0
    
    arg1[3] = rcx_6
else
    if (rax_7 == 0)
        rcx_6 = nullptr
    else
        *rax_7 = result
        rax_7[1] = 0
    
    *(arg1[4] + 8) = rcx_6
    rcx_6 = *(arg1[4] + 8)

arg1[4] = rcx_6
arg1[2].d += 1
__security_check_cookie(rax_1 ^ &var_d8)
return result
