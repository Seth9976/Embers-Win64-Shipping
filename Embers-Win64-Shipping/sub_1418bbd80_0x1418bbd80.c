// 函数: sub_1418bbd80
// 地址: 0x1418bbd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t rdi = 0
uint32_t rdx = arg2[4]
int32_t rbx = arg3
char* r14 = arg4
int32_t rsi = 0
int32_t* r11 = *(arg1 + 0x10)
uint32_t rcx = rdx
int32_t r8 = 0
int32_t r10 = *r11
int32_t r8_1

if (r10 == 0)
label_1418bbe04:
    r8_1 = -8
else
    void* r9 = &r11[1]
    
    while (true)
        if (rcx == 0)
            goto label_1418bbe04
        
        if ((rcx.b & 1) != 0 && (*r9 & rbx) == rbx)
            rsi = r8
            r8_1 = 0
            break
        
        rcx u>>= 1
        r8 += 1
        r9 += 8
        
        if (r8 u>= r10)
            goto label_1418bbe04

uint8_t rbp_1 = (rbx u>> 1).b & 1

if (r8_1 != 0)
    goto label_1418bbe39

int64_t* rcx_1 = *(arg1 + 0x18)
int64_t r14_1 = sx.q(rsi) << 3
void var_178
int64_t var_78
int64_t var_70

if (*(rcx_1 + r14_1) == 0)
    r14 = arg4
label_1418bbe39:
    int32_t rcx_3 = rbx & 0xfffffff7
    int32_t r9_1 = -1
    int32_t r12_1 = rsi
    
    if ((rbx.b & 8) == 0)
        rcx_3 = rbx
    
    rbx = rcx_3 & 0xffffffef
    
    if ((rcx_3.b & 0x10) == 0)
        rbx = rcx_3
    
    int32_t rcx_4 = 0
    
    if (r8_1 == 0)
        r9_1 = rsi
    
    char var_1b8
    char var_1b0
    int64_t var_1a8
    int32_t var_198
    
    if (r10 == 0)
    label_1418bbe98:
        sub_1405eb940(&var_178, r14)
        var_198 = arg5
        int32_t var_1a0
        var_1a0.q = var_70
        var_1a8.d = rbx
        var_1b0.d = arg2[4]
        var_1b8.d = *arg2
        sub_140af98a0("Unknown", 0x380, 
            Unable to find alternate type for index %d, MemSize %d, MemPropTypeBits %u, MemPropertyFlags "
        ", %s(%d)", zx.q(rsi))
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        sub_140afbb40()
    else
        void* r8_2 = &r11[1]
        
        while (true)
            if (rdx == 0)
                goto label_1418bbe98
            
            if ((rdx.b & 1) != 0 && (rbx & *r8_2) == rbx && r9_1 != rcx_4)
                rsi = rcx_4
                break
            
            rdx u>>= 1
            rcx_4 += 1
            r8_2 += 8
            
            if (rcx_4 u>= r10)
                goto label_1418bbe98
    
    rcx_1 = *(arg1 + 0x18)
    r14_1 = sx.q(rsi) << 3
    
    if (*(rcx_1 + r14_1) == 0)
        sub_1405eb940(&var_178, arg4)
        int32_t var_190_1 = arg5
        var_198.q = var_70
        int32_t var_1a0_1 = rbx
        var_1a8.d = arg2[4]
        var_1b0.d = *arg2
        var_1b8.d = r12_1
        sub_140af98a0("Unknown", 0x388, 
            Missing memory type index %d (originally requested %d), MemSize %d, MemPropTypeBits %u, "
        "MemPropertyFlags %u, %s(%d)", zx.q(rsi))
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        sub_140afbb40()
        rcx_1 = *(arg1 + 0x18)

void*** result
int128_t zmm6
int128_t zmm6_1
result, zmm6_1 = sub_1418bc280(*(r14_1 + rcx_1), 1, *arg2, arg2[2], zmm6, rbp_1, 0, arg4, arg5)

if (result == 0)
    int32_t* rdx_3 = *(arg1 + 0x10)
    uint32_t rcx_10 = arg2[4]
    int32_t r8_4 = *rdx_3
    
    if (r8_4 == 0)
    label_1418bc00f:
        sub_141903f80(0xfffffff8, 
            "DeviceMemoryManager->GetMemoryTypeFromPropertiesExcluding(MemoryReqs.memoryTypeBits, "
        "MemoryPropertyFlags, TypeIndex, &TypeIndex)", 
            "Runtime\VulkanRHI\Public\VulkanMemory.h")
    else
        void* rdx_4 = &rdx_3[1]
        
        while (true)
            if (rcx_10 == 0)
                goto label_1418bc00f
            
            if ((rcx_10.b & 1) != 0 && (*rdx_4 & rbx) == rbx && rsi != rdi)
                rsi = rdi
                break
            
            rcx_10 u>>= 1
            rdi += 1
            rdx_4 += 8
            
            if (rdi u>= r8_4)
                goto label_1418bc00f
    
    int64_t* rcx_13 = *(arg1 + 0x18)
    int64_t** r14_2 = sx.q(rsi) << 3
    
    if (*(rcx_13 + r14_2) == 0)
        sub_1405eb940(&var_178, arg4)
        int32_t var_198_1 = arg5
        int32_t var_1a0_2
        var_1a0_2.q = var_70
        char* var_1a8_1
        var_1a8_1.d = rbx
        char var_1b0_1
        var_1b0_1.d = arg2[4]
        uint8_t var_1b8_1
        var_1b8_1.d = *arg2
        sub_140af98a0("Unknown", 0x394, 
            Missing memory type index %d, MemSize %d, MemPropTypeBits %u, MemPropertyFlags %u, %s(%d)", 
            zx.q(rsi))
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        sub_140afbb40()
        rcx_13 = *(arg1 + 0x18)
    
    result = sub_1418bc280(*(r14_2 + rcx_13), 1, *arg2, arg2[2], zmm6_1, (rbx u>> 1).b & 1, 0, 
        arg4, arg5)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
