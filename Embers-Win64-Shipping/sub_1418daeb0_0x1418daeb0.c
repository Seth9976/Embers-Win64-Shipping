// 函数: sub_1418daeb0
// 地址: 0x1418daeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void*** result_1 = j_sub_140a82f30(0x40)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    result[1] = *arg1
    *result = &data_142fef648
    result[2] = 0
    result[3] = 0
    result[4] = &data_142d3ff08
    result[5].d = 0
    *(result + 0x2c) = 0
    result[6].w = 0x100
    *result = &data_142fef650
    result[4] = &data_142fef658

result[7] = arg2
*(arg2 + 8) += 1
int64_t* var_198 = nullptr
int32_t i_3 = 0
int32_t var_188 = 0
int32_t var_184 = 0xffffffff
void var_180
sub_1418cdfd0(&var_180)
int64_t var_298
__builtin_memset(&var_298, 0, 0x2c)
int64_t var_1c8
__builtin_memset(&var_1c8, 0, 0x2c)
int64_t var_1f8
__builtin_memset(&var_1f8, 0, 0x28)
int32_t var_26c = 0x80
int32_t var_268 = 0xffffffff
int32_t var_264 = 0
int64_t var_258 = 0
int32_t var_250 = 0
int64_t var_248
__builtin_memset(&var_248, 0, 0x2c)
int32_t var_21c = 0x80
int32_t var_218 = 0xffffffff
int32_t var_214 = 0
int64_t var_208 = 0
int32_t var_200 = 0
sub_1418e5370(&var_1c8, 0x20, 0, arg2 + 0x58, &var_298)
int64_t var_308 = 0
int32_t var_300 = 0
sub_1418cafd0(&var_1c8, &var_298, &var_308)
void*** rax_3 = sub_1418e0db0(arg1, &var_1c8, 0)

if (rax_3[0x42].b == 0)
    int32_t i = 0
    rax_3[0x3e] = rax_3[0xd]
    rax_3[0x3d] = rax_3[0xf]
    rax_3[0x3f] = rax_3[0x11]
    rax_3[0x41] = &rax_3[0xb]
    
    if (rax_3[0xc].d s> 0)
        int32_t rcx_4 = 1
        int64_t r8_1 = 0
        
        do
            if (*(rax_3[0xb] + r8_1 + 8) s> 0)
                rax_3[0x40].d |= rcx_4
            
            i += 1
            rcx_4 = rol.d(rcx_4, 1)
            r8_1 += 0x18
        while (i s< rax_3[0xc].d)
    
    rax_3[0x42].b = 1

int64_t rax_8 = sub_1418e2440(arg2 + 0x38, rax_3, rax_3[0xa].d)
int32_t var_2f8 = 0x1d
void var_2f4
memset(&var_2f4, 0, 0x5c)
int32_t var_2e0 = 0x12
int32_t var_2cc = 0x20
int64_t var_2c8 = rax_8
int64_t* var_318
var_318.d = *(arg2 + 0xf4)
char var_48[0x18]
sub_140a54040(&var_48, 0x18, "main_%0.8x_%0.8x", sx.q(*(arg2 + 0x198)) << 2)
char (* var_2c0)[0x18] = &var_48
int64_t var_2b0 = rax_3[0x3c]
int32_t rax_13 = data_143efb880(*(*arg1 + 8), arg1[0x13], 1, &var_2f8, 0, &result[2])

if (rax_13 != 0)
    sub_141903f80(rax_13, 
        "VulkanRHI::vkCreateComputePipelines(Device->GetInstanceHandle(), PipelineCache, 1, "
    "&PipelineInfo, VULKAN_CPU_ALLOCATOR, &Pipeline->Pipeline)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPipeline.cpp")

result[3] = rax_3
sub_1405ae180(&var_248)
sub_1405ae180(&var_298)
sub_1418d2510(&var_180)
int32_t i_2 = i_3
int64_t* rbx_1 = var_198

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_13 = *rbx_1
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        rbx_1 = &rbx_1[3]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_1 = var_198

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

__security_check_cookie(rax_1 ^ &var_338)
return result
