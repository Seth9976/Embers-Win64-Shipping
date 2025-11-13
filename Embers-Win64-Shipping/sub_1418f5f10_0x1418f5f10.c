// 函数: sub_1418f5f10
// 地址: 0x1418f5f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t rdi = 0
uint32_t i_1 = arg2[4]
int32_t* r11 = *(arg1 + 0x10)
int32_t rbx = arg3
int32_t rbp = 0
uint32_t i = i_1
int32_t r8 = 0
int32_t r10 = *r11

if (r10 != 0)
    void* r9 = &r11[1]
    
    while (i != 0)
        if ((i.b & 1) != 0 && (rbx & *r9) == rbx)
            rbp = r8
            goto label_1418f6058
        
        i u>>= 1
        r8 += 1
        r9 += 8
        
        if (r8 u>= r10)
            break

uint8_t var_1b8
char var_1b0
int64_t var_1a8
int32_t var_1a0
void var_178
int64_t var_78
int64_t var_70

if ((rbx.b & 0x10) == 0)
    sub_1405eb940(&var_178, arg4)
    var_1a0 = arg5
    var_1a8 = var_70
    var_1b0 = rbx.b
    var_1b8 = (arg2[4]).b
    sub_140af98a0("Unknown", 0x356, 
        Cannot find memory type for MemSize %d, MemPropTypeBits %u, MemPropertyFlags %u, %s(%d)", 
        zx.q(*arg2))
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    sub_140afbb40()
else
    rbx &= 0xffffffef
    int32_t rcx = 0
    
    if (r10 == 0)
    label_1418f5feb:
        sub_141903f80(0xfffffff8, 
            "DeviceMemoryManager->GetMemoryTypeFromProperties(MemoryReqs.memoryTypeBits, "
        "MemoryPropertyFlags, &TypeIndex)", 
            "Runtime\VulkanRHI\Public\VulkanMemory.h")
    else
        void* r8_1 = &r11[1]
        
        while (true)
            if (i_1 == 0)
                goto label_1418f5feb
            
            if ((i_1.b & 1) != 0 && (rbx & *r8_1) == rbx)
                rbp = rcx
                break
            
            i_1 u>>= 1
            rcx += 1
            r8_1 += 8
            
            if (rcx u>= r10)
                goto label_1418f5feb

label_1418f6058:
int64_t rcx_5 = *(arg1 + 0x18)
int64_t** r14_1 = sx.q(rbp) << 3

if (*(r14_1 + rcx_5) == 0)
    sub_1405eb940(&var_178, arg4)
    int32_t var_198_1 = arg5
    var_1a0.q = var_70
    var_1a8.d = rbx
    var_1b0 = (arg2[4]).b
    var_1b8 = (*arg2).b
    sub_140af98a0("Unknown", 0x35b, 
        Missing memory type index %d, MemSize %d, MemPropTypeBits %u, MemPropertyFlags %u, %s(%d)", 
        zx.q(rbp))
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    sub_140afbb40()
    rcx_5 = *(arg1 + 0x18)

char rsi_2 = (rbx u>> 4).b & 1
void*** result
int128_t zmm6
int128_t zmm6_1
result, zmm6_1 =
    sub_1418bc280(*(r14_1 + rcx_5), 0, *arg2, arg2[2], zmm6, (arg3 u>> 1).b & 1, rsi_2, arg4, arg5)

if (result == 0)
    int32_t* rdx_3 = *(arg1 + 0x10)
    uint32_t rcx_7 = arg2[4]
    int32_t r8_3 = *rdx_3
    
    if (r8_3 == 0)
    label_1418f616f:
        sub_141903f80(0xfffffff8, 
            "DeviceMemoryManager->GetMemoryTypeFromPropertiesExcluding(MemoryReqs.memoryTypeBits, "
        "MemoryPropertyFlags, TypeIndex, &TypeIndex)", 
            "Runtime\VulkanRHI\Public\VulkanMemory.h")
    else
        void* rdx_4 = &rdx_3[1]
        
        while (true)
            if (rcx_7 == 0)
                goto label_1418f616f
            
            if ((rcx_7.b & 1) != 0 && (rbx & *rdx_4) == rbx && rbp != rdi)
                rbp = rdi
                break
            
            rcx_7 u>>= 1
            rdi += 1
            rdx_4 += 8
            
            if (rdi u>= r8_3)
                goto label_1418f616f
    
    result = sub_1418bc280(*(*(arg1 + 0x18) + (sx.q(rbp) << 3)), 0, *arg2, arg2[2], zmm6_1, 
        (rbx u>> 1).b & 1, rsi_2, arg4, arg5)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
