// 函数: sub_1418e0db0
// 地址: 0x1418e0db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x1e])
int32_t arg_20
sub_1418e0c30(&arg1[0x23], &arg_20, arg2)
int64_t rax = sx.q(arg_20)
int32_t i_2 = 0
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x190 + arg1[0x23]

int64_t* rdi_1 = rax_2 + 0x180

if (rax_2 == 0)
    rdi_1 = nullptr

void*** result

if (rdi_1 == 0)
    void*** result_3 = nullptr
    void*** result_1
    
    if (arg3 == 0)
        void*** result_2 = j_sub_140a82f30(0x218)
        result_1 = result_2
        
        if (result_2 == 0)
            result_1 = nullptr
        else
            sub_1418cf9a0(result_2, *arg1)
            *result_1 = &data_142fef638
            __builtin_memset(&result_1[0x3d], 0, 0x1c)
            result_1[0x41] = 0
            result_1[0x42].b = 0
    else
        void*** result_4 = j_sub_140a82f30(0x278)
        result_3 = result_4
        
        if (result_4 == 0)
            result_3 = nullptr
            result_1 = nullptr
        else
            sub_1418cf9a0(result_4, *arg1)
            *result_3 = &data_142fef628
            result_3[0x4c].d = 0
            result_3[0x4d] = 0
            result_3[0x4e].b = 0
            memset(&result_3[0x3d], 0, 0x78)
            result_1 = result_3
    
    *(result_1 + 0x10) = *arg2
    *(result_1 + 0x20) = arg2[1]
    result_1[6] = arg2[2].q
    result_1[7].d = *(arg2 + 0x28)
    result_1[0xa].d = arg2[4].d
    *(result_1 + 0x54) = *(arg2 + 0x44)
    void** rax_6 = &arg2[3]
    int32_t var_88
    
    if (&result_1[8] != rax_6)
        int32_t i_3 = result_1[9].d
        int64_t* r15_1 = result_1[8]
        
        if (i_3 != 0)
            int32_t i
            
            do
                int64_t rcx_5 = *r15_1
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                r15_1 = &r15_1[3]
                i = i_3
                i_3 -= 1
            while (i != 1)
            rax_6 = &arg2[3]
        
        var_88 = 0
        sub_1418c9e10(&result_1[8], *rax_6, rax_6[1].d, *(result_1 + 0x4c), 0)
    
    if (&result_1[0xb] != arg2 + 0x48)
        int32_t i_4 = result_1[0xc].d
        int64_t* rdi_2 = result_1[0xb]
        
        if (i_4 != 0)
            int32_t i_1
            
            do
                int64_t rcx_7 = *rdi_2
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                rdi_2 = &rdi_2[3]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        var_88 = 0
        sub_1418c9d30(&result_1[0xb], *(arg2 + 0x48), arg2[5].d, *(result_1 + 0x64), 0)
    
    sub_1418d3b40(&result_1[0xd], arg2 + 0x58)
    
    if (&result_1[0x30] != &arg2[0x17])
        int64_t rdi_3 = sx.q(*(arg2 + 0x178))
        int64_t rbp_1 = arg2[0x17].q
        int32_t r8_3 = *(result_1 + 0x18c)
        result_1[0x31].d = rdi_3.d
        
        if (rdi_3.d != 0 || r8_3 != 0)
            sub_1405c4a90(&result_1[0x30], rdi_3.d, r8_3)
            memcpy(result_1[0x30], rbp_1, (rdi_3 << 2).d)
        else
            *(result_1 + 0x18c) = 0
    
    sub_1418da900(&result_1[2], &arg1[0x2d])
    int32_t var_68 = 0x1e
    int64_t var_64
    __builtin_memset(&var_64, 0, 0x2c)
    int64_t var_54
    var_54.d = result_1[0x34].d
    var_54 = result_1[0x33]
    int32_t rax_10 = data_143efb890(result_1[1][1], &var_68, 0, &result_1[0x3c], var_88)
    
    if (rax_10 != 0)
        sub_141903f80(rax_10, 
            "VulkanRHI::vkCreatePipelineLayout(Device->GetInstanceHandle(), &PipelineLayoutCreateInfo, "
        "VULKAN_CPU_ALLOCATOR, &PipelineLayout)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanShaders.cpp")
    
    if (result_3 != 0)
        result_3[0x3d] = result_3[0xf]
        result_3[0x42] = result_3[0xd]
        result_3[0x47] = result_3[0x11]
        result_3[0x3e] = result_3[0x16]
        result_3[0x43] = result_3[0x14]
        result_3[0x48] = result_3[0x18]
        result_3[0x3f] = result_3[0x1d]
        result_3[0x44] = result_3[0x1b]
        result_3[0x49] = result_3[0x1f]
        result_3[0x40] = result_3[0x24]
        result_3[0x45] = result_3[0x22]
        result_3[0x4a] = result_3[0x26]
        result_3[0x41] = result_3[0x2b]
        result_3[0x46] = result_3[0x29]
        result_3[0x4b] = result_3[0x2d]
        result_3[0x4d] = &result_3[0xb]
        
        if (result_3[0xc].d s> 0)
            int32_t rdx_11 = 1
            int64_t r8_6 = 0
            
            do
                if (*(r8_6 + result_3[0xb] + 8) s> 0)
                    result_3[0x4c].d |= rdx_11
                
                i_2 += 1
                rdx_11 = rol.d(rdx_11, 1)
                r8_6 += 0x18
            while (i_2 s< result_3[0xc].d)
        
        result_3[0x4e].b = 1
    
    sub_1418ca610(&arg1[0x23], arg2)
    result = result_1
else
    result = *rdi_1

if (arg1 != -0xf0)
    LeaveCriticalSection(&arg1[0x1e])

return result
