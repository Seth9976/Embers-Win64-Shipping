// 函数: sub_1418d1400
// 地址: 0x1418d1400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* r14 = arg1
*arg1 = 0
arg1[1] = arg3
arg1[3].d = 0xffffffff
__builtin_memset(arg1 + 0x1c, 0, 0x15)
__builtin_memset(arg1 + 0x34, 0, 0x1c)
arg1[0xa] = arg2
arg1[2] = 0
__builtin_memset(&arg1[0xb], 0, 0x20)
arg1[0xf].b = arg11
*(arg1 + 0x7c) = 0
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
r14[9] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0 f- data_143de5880

if (arg12 == 0 || *arg12 == 0)
    sub_1418f7580(arg4, r14[0xa], &arg1[2])
else
    arg1[2] = arg12[1]
    arg12[1] = 0

int64_t rbx_1 = 0
int64_t var_180 = 0
int32_t var_184
int32_t rax_7 = data_143efbaf8(*(r14[1] + 0x7c0), arg1[2], &var_184, 0)

if (rax_7 s< 0)
    sub_141903f80(rax_7, 
        "VulkanRHI::vkGetPhysicalDeviceSurfaceFormatsKHR(Device.GetPhysicalHandle(), Surface, "
    "&NumFormats, nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

int64_t rdi_1 = sx.q(var_184)
int32_t* r12 = nullptr
int32_t* var_150 = nullptr
int32_t var_144 = 0
int32_t i_2 = rdi_1.d
int32_t i_3 = rdi_1.d

if (rdi_1.d s> 0)
    sub_1405a4d70(&var_150)
    i_2 = i_3
    r12 = var_150

memset(r12, 0, rdi_1 << 3)
int32_t rax_9 = data_143efbaf8(*(r14[1] + 0x7c0), arg1[2], &var_184, r12)

if (rax_9 s< 0)
    sub_141903f80(rax_9, 
        "VulkanRHI::vkGetPhysicalDeviceSurfaceFormatsKHR(Device.GetPhysicalHandle(), Surface, "
    "&NumFormats, Formats.GetData())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

uint64_t rax_13 = zx.q(*arg5)
int32_t r9_3 = rax_13.d

if (rax_13.d == 0)
    TEB* gsbase
    
    if (data_143efb630
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143efb630)
        
        if (data_143efb630 == 0xffffffff)
            int64_t* rcx_69 = data_143db18d0
            
            if (rcx_69 == 0)
                sub_140a53c40()
                rcx_69 = data_143db18d0
            
            int64_t r8_26
            r8_26.b = 1
            int64_t* rax_64 = (*(*rcx_69 + 0xb0))(rcx_69, u"r.DefaultBackBufferPixelFormat", r8_26)
            
            if (rax_64 != 0)
                rax_64 = (*(*rax_64 + 0x58))(rax_64)
            
            data_143efb628 = rax_64
            _Init_thread_footer(&data_143efb630)
    
    rax_13 = data_143efb628
    
    if (rax_13 != 0)
        rax_13 = sub_142295d40(sub_14229df30(*rax_13))
    
    *arg5 = rax_13.d
    r9_3 = rax_13.d
    
    if (rax_13.d == 0)
        goto label_1418d1702

int64_t r8_5 = sx.q(rax_13.d)
int64_t rax_14 = r8_5 * 5
int32_t rax_21

if ((&data_1439c8600)[rax_14 << 3] != 0)
    int32_t rcx_12 = 0
    
    if (i_2 s> 0)
        int32_t* rax_15 = r12
        
        do
            if (*rax_15 == (&data_1439c85fc)[rax_14 * 2])
                rax_21 = *arg5
                rbx_1 = *(r12 + (sx.q(rcx_12) << 3))
                var_180 = rbx_1
                goto label_1418d16fa
            
            rcx_12 += 1
            rax_15 = &rax_15[2]
        while (rcx_12 s< i_2)
        
        r9_3 = *arg5
    
    void var_118
    
    if (data_1439c7308 == data_1439c7334)
    label_1418d16f1:
        sub_1406f3d50(&data_1439c7300, &var_118, arg5, nullptr)
    else
        void* rcx_13 = data_1439c7340
        void* rax_19 = &data_1439c7338
        
        if (rcx_13 != 0)
            rax_19 = rcx_13
        
        int32_t rax_20 = *(rax_19 + ((sx.q(data_1439c7348 - 1) & r8_5) << 2))
        
        if (rax_20 == 0xffffffff)
        label_1418d16f1_1:
            sub_1406f3d50(&data_1439c7300, &var_118, arg5, nullptr)
        else
            int64_t r8_6 = data_1439c7300
            
            while (true)
                int64_t rdx_7 = sx.q(rax_20) * 3
                
                if (*(r8_6 + (rdx_7 << 2)) == r9_3)
                    break
                
                rax_20 = *(r8_6 + (rdx_7 << 2) + 4)
                
                if (rax_20 == 0xffffffff)
                    goto label_1418d16f1_2
            
            if (rax_20 == 0xffffffff)
            label_1418d16f1_2:
                sub_1406f3d50(&data_1439c7300, &var_118, arg5, nullptr)

rax_21 = 0
*arg5 = 0
label_1418d16fa:

if (rax_21 == 0)
label_1418d1702:
    int32_t r9_4 = 0
    
    if (i_2 s> 0)
        int32_t* r8_8 = r12
        
        do
            int32_t rcx_15 = 0
            int32_t* rax_22 = &data_1439c85fc
            
            while (true)
                if (*r8_8 == *rax_22)
                    *arg5 = rcx_15
                    rbx_1 = *r8_8
                    var_180 = rbx_1
                    break
                
                rcx_15 += 1
                rax_22 = &rax_22[0xa]
                
                if (rax_22 s>= &data_1439c9114)
                    rcx_15 = *arg5
                    break
            
            if (rcx_15 != 0)
                goto label_1418d1785
            
            r9_4 += 1
            r8_8 = &r8_8[2]
        while (r9_4 s< i_2)
    
    int32_t rax_23 = 0
    
    if (i_2 s> 0)
        int32_t* rcx_16 = r12
        
        do
            if (*rcx_16 == data_1439c85fc)
                rbx_1 = *(r12 + (sx.q(rax_23) << 3))
                var_180 = rbx_1
                break
            
            rax_23 += 1
            rcx_16 = &rcx_16[2]
        while (rax_23 s< i_2)

label_1418d1785:
int32_t rax_24 = 1
int16_t* const var_1a8

if (*arg5 == 0)
    int16_t* var_178 = nullptr
    int32_t var_170_1 = 0
    bool cond:1_1 = i_2 == 0
    
    if (i_2 s> 0)
        int64_t rdi_2 = 0
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            void* const rdx_11 = &data_142dc30a4
            int32_t r8_9
            r8_9.b = rdi_2 != 0
            
            if (rdi_2 != 0)
                rdx_11 = &data_142d8adc4
            
            sub_140a20ba0(&var_178, rdx_11, r8_9 + 1)
            int64_t var_f8
            sub_140a2e390(&var_f8, u"%d", zx.q(r12[rdi_2 * 2]))
            int32_t var_f0
            int32_t r8_13
            
            if (var_f0 == 0)
                r8_13 = 0
            else
                r8_13 = var_f0 - 1
            
            sub_140a20ba0(&var_178, var_f8, r8_13)
            int64_t rcx_20 = var_f8
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            rdi_2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
        r14 = arg1
        rax_24 = (i_1 + 1).d
        cond:1_1 = i_2 == 0
    
    if (not(cond:1_1))
        sub_140a20ba0(&var_178, &data_142da76f4, rax_24)
    
    int16_t* const rax_25 = &data_142d40450
    
    if (var_170_1 != 0)
        rax_25 = var_178
    
    var_1a8 = rax_25
    sub_140af98a0("Unknown", 0x110, 
        Unable to find a pixel format for the swapchain; swapchain returned %d Vulkan formats %s", 
        zx.q(i_2))
    sub_140afbb40()
    int16_t* rcx_22 = var_178
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)

if (r12 != 0)
    sub_140a74f90(r12)

sub_1418ee8e0(r14[1], arg1[2])
void* rax_26 = r14[1]
int64_t rdx_14 = arg1[2]
int32_t var_190 = 0
int32_t var_198 = 2
int32_t rax_27 = data_143efbb00(*(rax_26 + 0x7c0), rdx_14, &var_190, 0, var_1a8)

if (rax_27 != 0)
    sub_141903f80(rax_27, 
        "VulkanRHI::vkGetPhysicalDeviceSurfacePresentModesKHR(Device.GetPhysicalHandle(), Surface, "
    "&NumFoundPresentModes, nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

int32_t* rsi_1 = nullptr
int32_t* var_128 = nullptr
int32_t var_11c = 0
int64_t rdi_3 = sx.q(var_190)
int32_t var_120 = rdi_3.d

if (rdi_3.d s> 0)
    sub_1405a4cf0(&var_128)
    rsi_1 = var_128

memset(rsi_1, 0, rdi_3 << 2)
int32_t rax_29 = data_143efbb00(*(r14[1] + 0x7c0), arg1[2], &var_190, rsi_1)

if (rax_29 != 0)
    sub_141903f80(rax_29, 
        "VulkanRHI::vkGetPhysicalDeviceSurfacePresentModesKHR(Device.GetPhysicalHandle(), Surface, "
    "&NumFoundPresentModes, FoundPresentModes.GetData())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

uint64_t r9_9 = zx.q(var_190)
rdi_3.b = 0
i_2.b = 0
r12.b = 0
int64_t r8_19 = 0

if (r9_9 != 0)
    do
        int32_t rdx_17 = rsi_1[sx.q(r8_19.d)]
        
        if (rdx_17 == 0)
            i_2.b = 1
        else if (rdx_17 == 1)
            rdi_3.b = 1
        else if (rdx_17 == 2)
            r12 = zx.q((rdx_17 - 1).b)
        
        r8_19 += 1
    while (r8_19 u< r9_9)

int32_t var_18c = 0xffffffff
sub_140af2b60()
bool rax_30 = sub_140b2ab20(&data_143dbb3f0, u"vulkanpresentmode=", &var_18c)
int32_t rdx_19 = var_18c

if (rax_30 == 0)
label_1418d1a13:
    
    if (rdx_19 == 0xffffffff)
        goto label_1418d1a18
else
    if (rdx_19 != 0)
        bool cond:5_1
        
        if (rdx_19 == 1)
            var_198 = sbb.d(r14.d, r14.d, rdi_3.b != 0) + 2
            cond:5_1 = rdi_3.b != 0
            r14 = arg1
        else
            if (rdx_19 != 2)
                goto label_1418d1a31
            
            var_198 = 2
            cond:5_1 = r12.b != 0
        
        if (cond:5_1 == 0)
            goto label_1418d1a31
        
        goto label_1418d1a13
    
    if (i_2.b != 0)
        var_198 = 0
    else
    label_1418d1a31:
        var_18c = 0xffffffff
    label_1418d1a18:
        int64_t* rcx_34 = data_143efb1c0
        
        if (rcx_34 == 0)
            rax_30 = false
        else
            rax_30 = (*(*rcx_34 + 0x10))(rcx_34)
        
        if (i_2.b != 0 && (rax_30 != 0 || r14[0xf].b == rax_30))
            var_198 = 0
        else if (rdi_3.b != 0)
            var_198 = 1
        else if (r12.b == 0)
            var_198 = *rsi_1
        else
            var_198 = 2

data_143efb634 = 0

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

int32_t var_78
int32_t rax_34 = data_143efbaf0(*(r14[1] + 0x7c0), arg1[2], &var_78)

if (rax_34 s< 0)
    sub_141903f80(rax_34, 
        "VulkanRHI::vkGetPhysicalDeviceSurfaceCapabilitiesKHR(Device.GetPhysicalHandle(), Surface, "
    "&SurfProperties)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

int32_t var_50
int32_t rdi_4 = var_50
int32_t r12_1 = 1
char var_54

if ((var_54 & 1) != 0)
    rdi_4 = 1

char var_4c

if ((var_4c & 1) == 0)
    r12_1 = 8

int32_t rax_36 = *arg9
int32_t var_188_1
int32_t var_74
int32_t rsi_2

if (var_74 == 0)
    rsi_2 = rax_36
    var_188_1 = rsi_2
else
    rsi_2 = var_78
    var_188_1 = rsi_2
    
    if (rax_36 u>= rsi_2)
        rsi_2 = var_74
        
        if (rax_36 u< var_74)
            rsi_2 = rax_36
        
        var_188_1 = rsi_2

int32_t var_70
int32_t r14_3 = var_70
int32_t var_6c
int32_t r15 = var_6c

if (r14_3 == 0xffffffff)
    r14_3 = arg6

int32_t var_e8 = 0x3b9acde8

if (r15 == 0xffffffff)
    r15 = arg7

void var_e4
memset(&var_e4, 0, 0x64)
int32_t var_c8 = rsi_2
int32_t var_c4 = rbx_1.d
int32_t var_b0 = 0x16
int64_t var_d0 = arg1[2]
int32_t var_c0 = var_180:4.d
int32_t var_90 = var_198
int32_t var_98 = rdi_4
int32_t var_b4 = 1
int32_t var_ac = 0
int64_t var_88 = 0

if (arg12 != 0)
    int64_t var_88_1 = *arg12

int32_t var_8c = 1

if (r14_3 == 0)
    r14_3 = arg6

int32_t var_94 = r12_1
*arg9 = rsi_2

if (r15 == 0)
    r15 = arg7

void* rcx_40 = arg1[1]
void var_114
int32_t rax_44 =
    data_143efbae8(*(rcx_40 + 0x7c0), zx.q(*(*(rcx_40 + 0x1570) + 8)), arg1[2], &var_114)

if (rax_44 != 0)
    sub_141903f80(rax_44, 
        "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(Device.GetPhysicalHandle(), Device."
    "GetPresentQueue()->GetFamilyIndex(), Surface, &bSupportsPresent)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

void* rcx_43 = arg1[1]
int32_t var_140 = 0x3b9eae18
int64_t var_13c
__builtin_memset(&var_13c, 0, 0x14)

if ((*(rcx_43 + 0x1af0) & 0x800) != 0)
    int64_t var_134
    var_134:4.d = (zx.d(arg8) ^ 1) + 1
    int64_t var_e0
    var_13c = var_e0
    int32_t* var_e0_1 = &var_140

int32_t rax_49 = data_143efbab8(*(rcx_43 + 8), &var_e8, 0, arg1)
void* rcx_45 = arg1[1]

if ((*(rcx_45 + 0x1af0) & 0x800) != 0 && rax_49 == 0xfffffffd)
    int64_t var_e0_2 = var_13c
    rax_49 = data_143efbab8(*(rcx_45 + 8), &var_e8, 0, arg1)

if (rax_49 s< 0)
    sub_141903f80(rax_49, "Result", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

if (arg12 != 0)
    int64_t rdx_24 = *arg12
    
    if (rdx_24 != 0)
        data_143efbac0(*(arg1[1] + 8), rdx_24, 0)
        *arg12 = 0
    
    int64_t rdx_25 = arg12[1]
    
    if (rdx_25 != 0)
        data_143efbae0(arg1[0xa], rdx_25, 0)
        arg12[1] = 0

int32_t rax_51 = r14_3
int64_t rdx_26 = *arg1
arg1[6].b = arg8

if (arg6 u<= rax_51)
    rax_51 = arg6

arg1[5].d = rax_51
int32_t rax_52 = r15

if (arg7 u<= rax_52)
    rax_52 = arg7

*(arg1 + 0x2c) = rax_52
int32_t var_194
int32_t rax_54 = data_143efbac8(*(arg1[1] + 8), rdx_26, &var_194, 0)

if (rax_54 s< 0)
    sub_141903f80(rax_54, 
        "VulkanRHI::vkGetSwapchainImagesKHR(Device.GetInstanceHandle(), SwapChain, &NumSwapChainImages, "
    "nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

int32_t rcx_54 = var_194 + arg10[1].d
arg10[1].d = rcx_54

if (rcx_54 s> *(arg10 + 0xc))
    sub_1405a4d70(arg10)

int32_t rax_56 = data_143efbac8(*(arg1[1] + 8), *arg1, &var_194, *arg10)

if (rax_56 s< 0)
    sub_141903f80(rax_56, 
        "VulkanRHI::vkGetSwapchainImagesKHR(Device.GetInstanceHandle(), SwapChain, &NumSwapChainImages, "
    "OutImages.GetData())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanSwapChain.cpp")

int32_t rcx_58 = var_194
int32_t rax_57 = arg1[0xe].d + rcx_58
arg1[0xe].d = rax_57

if (rax_57 s> *(arg1 + 0x74))
    sub_1405a4d70(&arg1[0xd])
    rcx_58 = var_194

int32_t rdi_6 = 0

if (rcx_58 != 0)
    do
        int32_t rdx_29
        rdx_29.b = 1
        int64_t rbx_6 = arg1[0xd]
        void* rax_58
        rax_58, rdx_29 = sub_1418bc110(arg1[1] + 0x438, rdx_29.b)
        int64_t rax_59 = sx.q(rdi_6)
        rdi_6 += 1
        *(rbx_6 + (rax_59 << 3)) = rax_58
    while (rdi_6 u< var_194)
    
    rsi_2 = var_188_1

int32_t rax_60 = arg1[0xc].d + rsi_2
arg1[0xc].d = rax_60

if (rax_60 s> *(arg1 + 0x64))
    sub_1405a4d70(&arg1[0xb])

int32_t rbx_7 = 0

if (rsi_2 != 0)
    do
        void*** rax_61 = j_sub_140a82f30(0x28)
        void*** rax_62
        
        if (rax_61 == 0)
            rax_62 = nullptr
        else
            rax_62 = sub_1418b8750(rax_61, arg1[1])
        
        int64_t rdx_32 = sx.q(rbx_7)
        *(arg1[0xb] + (rdx_32 << 3)) = rax_62
        void* rdx_33 = *(arg1[0xb] + (rdx_32 << 3))
        *(rdx_33 + 8) += 1
        rbx_7 += 1
    while (rbx_7 u< rsi_2)

*(arg1 + 0x7c) = 0
__security_check_cookie(rax_1 ^ &var_1c8)
return arg1
