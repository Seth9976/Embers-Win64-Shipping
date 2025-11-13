// 函数: sub_1418ed510
// 地址: 0x1418ed510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void* r15 = arg1
int32_t rdi = 0
int32_t var_1e8 = 0
int32_t rax_2 = data_143efb6a0(*(arg1 + 0x20), &var_1e8, 0)

if (rax_2 == 0xfffffffd)
    sub_140b709d0(0, 
        Cannot find a compatible Vulkan device or driver. Try updating your video drive", 
        Vulkan device not available")
    j_sub_140b721f0(1)
    sub_141903f80(rax_2, "Result", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanRHI.cpp")
else if (rax_2 s< 0)
    sub_141903f80(rax_2, "Result", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanRHI.cpp")

int64_t rbx_1 = sx.q(var_1e8)
int64_t r14 = 0
int64_t var_1a0 = 0
int32_t var_194 = 0
int32_t var_198 = rbx_1.d

if (rbx_1.d s> 0)
    sub_1405a4d70(&var_1a0)
    r14 = var_1a0

memset(r14, 0, rbx_1 << 3)
int32_t rax_3
int64_t r8_3
rax_3, r8_3 = data_143efb6a0(*(r15 + 0x20), &var_1e8, r14)

if (rax_3 s< 0)
    sub_141903f80(rax_3, 
        "VulkanRHI::vkEnumeratePhysicalDevices(Instance, &GpuCount, PhysicalDevices.GetData())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanRHI.cpp")

void** result_4 = nullptr
int32_t rsi = 0
int32_t r12 = 0
void** result_1 = nullptr
int32_t rbx_2 = 0
int32_t var_1a4 = 0
void** var_1d8 = nullptr
int32_t var_1e4 = 0
int32_t var_1cc
__builtin_memset(&var_1cc, 0, 0x14)
int32_t var_1d0

if (var_1e8 u> 0)
    void* r13 = r15 + 0x48
    void** result_3
    int64_t var_1c0_1
    
    do
        int64_t* rax_4 = j_sub_140a82f30(0x1b08)
        int64_t* r14_1
        
        if (rax_4 == 0)
            r14_1 = nullptr
        else
            r14_1 = sub_1418b8b60(rax_4, r15, *(r14 + (sx.q(rbx_2) << 3)))
        
        int64_t r15_1 = sx.q(*(r13 + 8))
        int32_t rax_6 = (r15_1 + 1).d
        *(r13 + 8) = rax_6
        
        if (rax_6 s> *(r13 + 0xc))
            sub_1405a4d70(r13)
        
        *(*r13 + (r15_1 << 3)) = r14_1
        char rax_8
        rax_8, r8_3 = __acrt_call_reportfault(r14_1)
        void** result_2
        int64_t r15_2
        int128_t zmm0_1
        
        if (rax_8 == 0)
            r15_2 = sx.q(r12)
            int32_t var_178_1 = rbx_2
            r12 = (r15_2 + 1).d
            
            if (r12 s> var_1a4)
                sub_14119a860(&result_1)
            
            zmm0_1 = r14_1.o
            result_2 = result_1
        else
            r15_2 = sx.q(rsi)
            int32_t var_188_1 = rbx_2
            rsi = (r15_2 + 1).d
            var_1c0_1.d = rsi
            
            if (rsi s> var_1c0_1:4.d)
                sub_14119a860(&result_3)
                rsi = var_1c0_1.d
            
            zmm0_1 = r14_1.o
            result_2 = result_3
        
        int64_t r14_2 = sx.q(var_1e4)
        int32_t var_168_1 = rbx_2
        int32_t r15_3 = (r14_2 + 1).d
        *(result_2 + r15_2 * 0x10) = zmm0_1
        var_1e4 = r15_3
        var_1d0 = r15_3
        
        if (r15_3 s> var_1cc)
            sub_14119a860(&var_1d8)
            var_1e4 = var_1d0
        
        r15 = arg1
        r14 = var_1a0
        rbx_2 += 1
        *(var_1d8 + r14_2 * 0x10) = r14_1.o
    while (rbx_2 u< var_1e8)
    
    if (r12 == 0)
        result_4 = result_3
    else
        int32_t rdx_9 = r12 + rsi
        
        if (rdx_9 s> var_1c0_1:4.d)
            sub_14119ae20(&result_3, rdx_9)
            rsi = var_1c0_1.d
        
        result_4 = result_3
        memcpy(&result_4[sx.q(rsi) * 2], result_1, r12 << 4)
        rsi += r12

int64_t* rcx_17 = data_143db18d0

if (rcx_17 == 0)
    sub_140a53c40()
    rcx_17 = data_143db18d0

r8_3.b = 1
int64_t* rax_14 = (*(*rcx_17 + 0xb0))(rcx_17, u"r.GraphicsAdapter", r8_3)
int64_t rbx_3 = -1
void* rax_15

if (rax_14 != 0)
    int64_t rdx_11 = *rax_14
    rax_15 = (*(rdx_11 + 0x58))(rax_14, rdx_11)

int32_t rax_17

if (rax_14 == 0 || rax_15 == 0)
    rax_17 = -1
else if (data_143de5480 == 0)
    rax_17 = *rax_15
else
    int64_t rcx_19
    rcx_19.b = GetCurrentThreadId() != data_143de5470
    rax_17 = *(rax_15 + (rcx_19 << 2))

int32_t var_1e0 = rax_17
sub_140af2b60()
sub_140b2ab20(&data_143dbb3f0, u"graphicsadapter=", &var_1e0)
int32_t rax_18 = var_1e0
void* rcx_20
void** r12_1
int32_t r14_4

if (rax_18 s< var_1e8)
    if (rax_18 s>= 0)
        goto label_1418ed879
    
    if (rax_18 != 0xfffffffe)
        if (rsi s<= 0 || rax_18 != 0xffffffff)
            rcx_20 = *(r15 + 0x58)
            r14_4 = 0
        else
            sub_140af2b60()
            int32_t r8_9
            
            if (sub_140b21a10(&data_143dbb3f0, u"preferAMD") == 0)
                sub_140af2b60()
                
                if (sub_140b21a10(&data_143dbb3f0, u"preferIntel") == 0)
                    sub_140af2b60()
                    r8_9 = -1
                    
                    if (sub_140b21a10(&data_143dbb3f0, u"preferNvidia") != 0)
                        r8_9 = 0x10de
                else
                    r8_9 = 0x8086
            else
                r8_9 = 0x1002
            
            int32_t rcx_21
            
            if (rsi s> 1 && r8_9 != 0xffffffff)
                rcx_21 = 0
            
            if (rsi s<= 1 || r8_9 == 0xffffffff || rsi s<= 0)
            label_1418ed96f:
                rcx_20 = *result_4
                *(r15 + 0x58) = rcx_20
                r14_4 = result_4[1].d
            else
                void** result_5 = result_4
                
                do
                    if (*(*result_5 + 0x7d0) == r8_9)
                        int64_t rax_26 = sx.q(rcx_21) * 2
                        r14_4 = result_4[rax_26 + 1].d
                        rcx_20 = result_4[rax_26]
                        *(r15 + 0x58) = rcx_20
                        
                        if (r14_4 != 0xffffffff)
                            goto label_1418ed984
                        
                        goto label_1418ed96f
                    
                    rcx_21 += 1
                    result_5 = &result_5[2]
                while (rcx_21 s< rsi)
                
                rcx_20 = *result_4
                *(r15 + 0x58) = rcx_20
                r14_4 = result_4[1].d
        
    label_1418ed984:
        r12_1 = var_1d8
    else
        r12_1 = var_1d8
        rcx_20 = *r12_1
        r14_4 = r12_1[1].d
        *(r15 + 0x58) = rcx_20
else
    rax_18 = 0
    var_1e0 = 0
label_1418ed879:
    r12_1 = var_1d8
    int64_t rax_20 = sx.q(rax_18) * 2
    rcx_20 = r12_1[rax_20]
    r14_4 = r12_1[rax_20 + 1].d
    *(r15 + 0x58) = rcx_20

data_143f0f1b0 = *(rcx_20 + 0x7d0)
void var_158
sub_1405eb940(&var_158, rcx_20 + 0x7dc)
int16_t* var_50

if (data_143f024b8 != var_50)
    int32_t rbx_4
    
    if (var_50 == 0 || *var_50 == 0)
        rbx_4 = 0
    else
        do
            rbx_3 += 1
        while (var_50[rbx_3] != 0)
        
        rbx_4 = rbx_3.d + 1
    
    int32_t rcx_23 = data_143f024c4
    data_143f024c0 = 0
    
    if (rcx_23 != rbx_4)
        sub_1405947f0(&data_143f024b8, rbx_4)
        rcx_23 = data_143f024c4
        rdi = data_143f024c0
    
    int32_t rax_28 = rdi + rbx_4
    data_143f024c0 = rax_28
    
    if (rax_28 s> rcx_23)
        sub_140594770(&data_143f024b8)
    
    if (rbx_4 != 0)
        memcpy(data_143f024b8, var_50, rbx_4 * 2)

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_1418f6880(r14_4, *(*(arg1 + 0x58) + 0x157c), rcx_20 + 0x7c8)
sub_1418c1530(*(arg1 + 0x58))

if (*(*(arg1 + 0x58) + 0x157c) == 0x10de)
    sub_140a2e390(&var_1d8, u"%d.%d", zx.q(*(rcx_20 + 0x7cc) u>> 0x16))
    int64_t rcx_29 = data_143f024d8
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    data_143f024d8 = var_1d8
    data_143f024e0 = var_1d0
    data_143f024e4 = var_1cc

if (r12_1 != 0)
    sub_140a74f90(r12_1)

void** result = result_1

if (result != 0)
    result = sub_140a74f90(result)

if (result_4 != 0)
    result = sub_140a74f90(result_4)

int64_t rcx_33 = var_1a0

if (rcx_33 != 0)
    result = sub_140a74f90(rcx_33)

__security_check_cookie(rax_1 ^ &var_208)
return result
