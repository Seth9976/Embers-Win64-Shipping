// 函数: sub_1418ece60
// 地址: 0x1418ece60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 9) != 0 && arg3 == 0)
    return 

EnterCriticalSection(&arg1[0x37])
EnterCriticalSection(&arg1[0x46])
void* rax_1 = *arg1
int64_t rdx = arg1[0x13]
int32_t r14_1 = 0
uint64_t arg_8 = 0
uint32_t rax = data_143efb868(*(rax_1 + 8), rdx, &arg_8, 0)
int512_t zmm1

if (rax != 0)
    rax, zmm1 = sub_141903f80(rax, 
        "VulkanRHI::vkGetPipelineCacheData(Device->GetInstanceHandle(), PipelineCache, &Size, nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPipeline.cpp")

uint64_t rsi_1 = arg_8
int16_t* const r15_1 = &data_142d40450
int64_t var_188
int32_t var_180
double var_178[0x2]
int32_t var_148
int64_t var_144
int16_t* var_120
int32_t var_118
int64_t* r13_1

if (rsi_1 u< 0x20)
    r13_1 = arg2
else
    var_188 = 0
    int64_t r15_2 = 0
    int32_t var_17c_1 = 0
    var_180 = rsi_1.d
    
    if (rsi_1.d s> 0)
        sub_1405daba0(&var_188)
        rsi_1 = zx.q(var_180)
        r15_2 = var_188
    
    rax = data_143efb868(*(*arg1 + 8), arg1[0x13], &arg_8, r15_2)
    
    if (rax != 0)
        if (rax == 5 || rax == 0xffffffff)
            data_143efb860(*(*arg1 + 8), arg1[0x13], 0)
            var_148 = 0x11
            __builtin_memset(&var_144, 0, 0x14)
            int64_t var_12c_1 = 0
            int32_t var_124_1 = 0
            rax = data_143efb858(*(*arg1 + 8), &var_148, 0, &arg1[0x13])
            
            if (rax != 0)
                rax, zmm1 = sub_141903f80(rax, 
                    "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, "
                "VULKAN_CPU_ALLOCATOR, &PipelineCache)", 
                    "
                    D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPipeline.cpp")
        else
            rax, zmm1 = sub_141903f80(rax, "Result", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPipeline.cpp")
        
        r13_1 = arg2
    else
        r13_1 = arg2
        int64_t* rax_3 = sub_140596d10(&var_178, r13_1)
        sub_1418bd0f0(&var_120, *arg1, rax_3)
        var_180 = rsi_1.d
        int16_t* const rsi_2 = &data_142d40450
        
        if (var_118 != 0)
            rsi_2 = var_120
        
        var_188 = r15_2
        var_178 = var_188.o
        sub_140a464c0()
        sub_140b27070(&var_178, rsi_2, &data_14399ea08, 0)
        int16_t* rcx_9 = var_120
        
        if (rcx_9 != 0)
            rax, zmm1 = sub_140a74f90(rcx_9)
    
    if (r15_2 != 0)
        rax, zmm1 = sub_140a74f90(r15_2)
    
    r15_1 = &data_142d40450

int64_t rsi_3 = data_143efb3c0
int64_t rcx_15

if (data_143de5480 == 0)
    rcx_15 = 0
else
    rcx_15.b = GetCurrentThreadId() != data_143de5470

if (*(rsi_3 + (rcx_15 << 2)) != 0)
    var_188 = 0
    var_180.q = 0
    int64_t arg_20 = 0
    void** const var_e8
    memset(&var_e8, 0, 0x90)
    sub_140b4c2a0(&var_e8)
    int64_t var_58_1 = 0
    var_e8 = &data_142d6ad48
    int64_t* var_50_1 = &var_188
    int64_t var_48_1 = 0
    sub_140b552b0(&var_e8, 1)
    var_e8[0x1b](&var_e8, 0)
    var_144 = 0
    int32_t rdx_10 = arg1[0x52].d
    int64_t var_13c = 0
    var_148 = 2
    var_144.d = 0x10
    
    if (rdx_10 != *(arg1 + 0x2bc))
        sub_1405a5410(&var_144:4, rdx_10 - *(arg1 + 0x2bc))
    
    int32_t r9_6 = arg1[0x56].d
    void* r8_3 = &arg1[0x53]
    var_178[0].d = 0
    int32_t rcx_21 = 0
    var_178[0]:4.d = 1
    var_178[1] = r8_3
    int32_t var_168_1 = 0xffffffff
    int32_t var_164_1 = 0
    int32_t var_160_1 = 0
    
    if (r9_6 != 0)
        void* rax_6 = *(r8_3 + 0x10)
        
        if (rax_6 != 0)
            r8_3 = rax_6
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r9_6 - 1)
        int32_t rdx_14 = *r8_3
        int32_t var_164_3
        
        if (rdx_14 != 0)
        label_1418ed1fb:
            int32_t rax_13 = neg.d(rdx_14) & rdx_14
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            var_178[0]:4.d = rax_13
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            int32_t var_164_2 = rcx_21 - rax_14 + 0x1f
            
            if (rcx_21 - rax_14 + 0x1f s> r9_6)
                var_164_3 = r9_6
        else
            while (true)
                int64_t rdx_15 = sx.q(r14_1)
                rcx_21 += 0x20
                r14_1 += 1
                var_160_1 = rcx_21
                var_178[0].d = r14_1
                
                if (rdx_15.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_14 = *(r8_3 + (rdx_15 << 2) + 4)
                var_168_1 = 0xffffffff
                
                if (rdx_14 != 0)
                    goto label_1418ed1fb
            
            var_164_3 = r9_6
    
    double zmm2[0x2] = var_168_1.o
    double var_f8_1[0x2] = zmm2
    zmm1.o = var_178
    var_178 = (&arg1[0x51]).o
    uint32_t rax_17 = (zmm2[0] u>> 0x20).d
    int64_t var_158_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_168_1.o = zmm1.o
    
    if (rax_17 s< r9_6)
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t rsi_5 = sx.q(var_13c:4.d)
            int32_t rax_18 = (rsi_5 + 1).d
            var_13c:4.d = rax_18
            int32_t var_134
            
            if (rax_18 s> var_134)
                sub_1405a4f90(&var_144:4)
            
            int64_t r8_5 = rsi_5 << 4
            
            if (r8_5 != neg.q(var_144))
                *(r8_5 + var_144) = *((sx.q(i) << 5) + *var_178[0] + 8)
            
            var_160_1 &= not.d(var_178[1]:4.d)
            sub_14059bdd0(&var_178[1])
            i = i_1
        while (i s< *(var_168_1.q + 0x18))
    
    int64_t* var_e0
    int32_t* rdx_20 = *var_e0
    char var_bf
    
    if (&rdx_20[1] u> var_e0[1])
        int32_t* rdx_21 = &var_148
        void** const* rcx_27 = &var_e8
        
        if ((var_bf & 0x20) != 0)
            sub_140b54070(rcx_27, rdx_21, zmm1)
        else
            var_e8[0x2a](rcx_27, rdx_21, 4)
    else
        var_148 = *rdx_20
        *var_e0 += 4
    
    int32_t* rdx_22 = *var_e0
    
    if (&rdx_22[1] u> var_e0[1])
        int32_t* rdx_23 = &var_144
        void** const* rcx_29 = &var_e8
        
        if ((var_bf & 0x20) != 0)
            sub_140b54070(rcx_29, rdx_23, zmm1)
        else
            var_e8[0x2a](rcx_29, rdx_23, 4)
    else
        var_144.d = *rdx_22
        *var_e0 += 4
    
    sub_1418cd780(&var_e8, &var_144:4, zmm1)
    int64_t* rax_29 = sub_140596d10(&var_178, r13_1)
    sub_1418bd0f0(&var_120, *arg1, rax_29)
    sub_140a20ba0(&var_120, u".lru", 4)
    var_178[0] = var_188
    
    if (var_118 != 0)
        r15_1 = var_120
    
    var_178[1].d = var_180
    var_178 = var_178
    sub_140a464c0()
    sub_140b27070(&var_178, r15_1, &data_14399ea08, 0)
    int16_t* rcx_35 = var_120
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    int64_t rcx_36 = var_144
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
    
    sub_140b4cb40(&var_e8)
    int64_t rcx_38 = var_188
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)

if (arg1 != -0x230)
    LeaveCriticalSection(&arg1[0x46])

if (arg1 != -0x1b8)
    LeaveCriticalSection(&arg1[0x37])
