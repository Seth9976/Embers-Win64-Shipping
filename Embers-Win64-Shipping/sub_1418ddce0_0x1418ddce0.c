// 函数: sub_1418ddce0
// 地址: 0x1418ddce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_40 = 0x10
int64_t var_3c
__builtin_memset(&var_3c, 0, 0x24)
uint64_t rax = zx.q(arg3)
void* const rax_1

if (rax.d u> 5)
    rax_1 = 0x3800000030
else
    switch (rax)
        case 0, 5
            rax_1 = 0x68
        case 1
            rax_1 = 0x110
        case 2
            rax_1 = 0x148
        case 3
            rax_1 = 0xa0
        case 4
            rax_1 = 0xd8

int32_t i_2 = 0
int64_t* rdi = rax_1 + arg1

if (*(arg4 + 0x84) != 0)
    int32_t i = 0
    
    if (*(arg4 + 0xa8) s> 0)
        int64_t r10_1 = 0
        int64_t rsi_1 = 0
        
        do
            void* rcx_2 = rdi[2]
            
            if (*(rcx_2 + r10_1 + 4) != 0)
                void* rax_2 = *(arg4 + 0xa0)
                int64_t r8 = sx.q(*(rax_2 + rsi_1 + 4))
                *(*arg2 + (sx.q(*(rax_2 + rsi_1)) << 2)) = zx.d(*(rcx_2 + r10_1))
                *(*arg2 + (r8 << 2)) = zx.d(*(r10_1 + rdi[2] + 2))
            
            i += 1
            rsi_1 += 8
            r10_1 += 6
        while (i s< *(arg4 + 0xa8))

int32_t i_1 = 0

if (*(arg4 + 0xb8) s> 0)
    int64_t r10_2 = 0
    int64_t rsi_2 = 0
    
    do
        int64_t rcx_4 = *(arg4 + 0xb0)
        rsi_2 += 8
        r10_2 += 4
        i_1 += 1
        int64_t r8_1 = sx.q(*(rcx_4 + rsi_2 - 4))
        *(*arg2 + (sx.q(*(rcx_4 + rsi_2 - 8)) << 2)) = zx.d(*(r10_2 + *rdi - 4))
        *(*arg2 + (r8_1 << 2)) = zx.d(*(r10_2 + *rdi - 2))
    while (i_1 s< *(arg4 + 0xb8))

if (*(arg4 + 0x48) s> 0)
    int64_t r10_3 = 0
    int64_t r11_1 = 0
    
    do
        int64_t rax_10 = *(arg4 + 0x40)
        r11_1 += 0x10
        r10_3 += 2
        i_2 += 1
        int64_t r8_2 = sx.q(*(r11_1 + rax_10 - 4))
        *(*arg2 + (sx.q(*(r11_1 + rax_10 - 8)) << 2)) = zx.d(rdi[6].w)
        *(*arg2 + (r8_2 << 2)) = zx.d(*(r10_3 + rdi[4] - 2))
    while (i_2 s< *(arg4 + 0x48))

void* rcx_7 = *(arg1 + 8)
int64_t var_2c = sx.q(arg2[1].d) << 2
int64_t var_24 = *arg2

if ((*(rcx_7 + 0x1af0) & 8) != 0)
    int32_t var_58 = 0x3b9d3b01
    int64_t var_54
    __builtin_memset(&var_54, 0, 0x14)
    int64_t var_4c = *(rcx_7 + 0x1af8)
    var_3c = &var_58

int64_t result
int32_t rax_18 = data_143efb848(*(rcx_7 + 8), &var_40, 0, &result)

if (rax_18 != 0)
    sub_141903f80(rax_18, 
        "VulkanRHI::vkCreateShaderModule(Device->GetInstanceHandle(), &ModuleCreateInfo, "
    "VULKAN_CPU_ALLOCATOR, &ShaderModule)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanShaders.cpp")

return result
