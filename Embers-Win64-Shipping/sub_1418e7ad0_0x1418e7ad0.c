// 函数: sub_1418e7ad0
// 地址: 0x1418e7ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_68 = *arg4
int32_t var_50 = arg4[7]
void* rcx = *(arg1 + 0x58)
int32_t var_5c = arg4[4]
int32_t var_58 = arg4[5]
int32_t var_54 = arg4[6]
int32_t var_64 = arg4[8]
int32_t var_60 = arg4[9]
int32_t var_4c = arg4[0xa]
int32_t var_48 = arg4[0xb]
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x18)
int64_t var_74 = 0
int32_t var_6c = 0
int64_t var_40 = 0
int32_t var_78 = 0x3b9d2b60
int32_t var_44 = 0
int64_t var_d8 = sub_1418bd1b0(rcx, &var_78)
var_e8.d = 0x3b9d2b61
void var_c8
sub_1418eeab0(arg3, *(arg1 + 0x58), &var_c8)
int64_t* var_c0 = &var_e8
void*** rax_12 = j_sub_140a82f30(0x28)
void*** rbx_1 = rax_12

if (rax_12 == 0)
    rbx_1 = nullptr
else
    void* rcx_2 = *(arg1 + 0x58)
    *rbx_1 = &data_142d3ff08
    rbx_1[1].d = 0
    *rbx_1 = &data_142feede8
    *(rbx_1 + 0xc) = 0
    rbx_1[2].w = 0x100
    rbx_1[3] = 0
    rbx_1[4].d = 0
    *(rbx_1 + 0x24) = 1
    int32_t rax_13 = data_143efb8a0(*(rcx_2 + 8), &var_c8, 0)
    
    if (rax_13 != 0)
        sub_141903f80(rax_13, 
            "VulkanRHI::vkCreateSampler(InDevice.GetInstanceHandle(), &InInfo, VULKAN_CPU_ALLOCATOR, "
        "&Sampler)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanState.cpp")
    
    if (data_1439c7a08 s<= 1)
        int32_t rax_14 = (data_143efb4e8).d
        data_143efb4e8 += 1
        rbx_1[4].d = rax_14 + 1

*arg2 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

__security_check_cookie(rax_1 ^ &var_108)
return arg2
