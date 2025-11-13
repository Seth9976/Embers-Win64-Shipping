// 函数: sub_1418fa450
// 地址: 0x1418fa450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t r12 = arg8
int32_t rax_2 = arg6

if (arg5 u>= arg6)
    rax_2 = arg5

int32_t var_128 = arg3
bool cond:2 = arg4 != rax_2

if (arg4 u>= rax_2)
    rax_2 = arg4

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(rax_2)
int32_t rax_3 = 0

if (cond:2)
    rax_3 = temp0

if (rax_3 + 1 u<= r12)
    r12 = rax_3 + 1

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143efbbd4 s> *rbx_1)
    _Init_thread_header(&data_143efbbd4)
    
    if (data_143efbbd4 == 0xffffffff)
        atexit(sub_142ceda10)
        _Init_thread_footer(&data_143efbbd4)

if (data_143efbc00 s> *rbx_1)
    _Init_thread_header(&data_143efbc00)
    
    if (data_143efbc00 == 0xffffffff)
        InitializeCriticalSection(&data_143efbbd8)
        SetCriticalSectionSpinCount(&data_143efbbd8, 0xfa0)
        atexit(sub_142cedaa0)
        _Init_thread_footer(&data_143efbc00)

int32_t var_100 = arg3
uint32_t r15_1 = zx.d(arg7)
int32_t var_f4 = arg6
int32_t var_fc = arg4
int32_t var_f8 = arg5
uint32_t var_f0 = r15_1
int32_t var_ec = r12
int32_t var_e8 = arg9
int32_t var_e4 = arg10
int64_t rdi_1 = sx.q(sub_140b21160(&var_100, 0x20, 0))
EnterCriticalSection(&data_143efbbd8)

if (data_1439c73b8 == data_1439c73e4)
label_1418fa5e2:
    LeaveCriticalSection(&data_143efbbd8)
    int32_t r8_3 = var_128
    int32_t* var_140
    __builtin_memset(&var_140, 0, 0x11)
    int32_t* var_138
    char var_130
    void var_c8
    sub_1418fad40(&var_c8, arg2, r8_3, r15_1, arg4, arg5, arg6, 1, r12, arg9, arg10, var_140, 
        var_138, var_130)
    int64_t var_118
    int32_t rax_12 = data_143efb820(*(arg2 + 8), &var_c8, 0, &var_118)
    
    if (rax_12 != 0)
        sub_141903f80(rax_12, 
            "VulkanRHI::vkCreateImage(Device->GetInstanceHandle(), &TmpCreateInfo.ImageCreateInfo, "
        "VULKAN_CPU_ALLOCATOR, &TmpImage)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanTexture.cpp")
    
    int128_t var_e0
    data_143efb768(*(arg2 + 8), var_118, &var_e0)
    data_143efb828(*(arg2 + 8), var_118, 0)
    EnterCriticalSection(&data_143efbbd8)
    int32_t rdx_6 = data_1439c73e4
    void* rsi_1 = &data_1439c73c0
    int64_t rbx_3
    
    if (rdx_6 == 0)
        rbx_3 = zx.q(data_1439c73b8)
        int32_t rax_17 = (rbx_3 + 1).d
        bool cond:3_1 = rax_17 s<= data_1439c73bc
        data_1439c73b8 = rax_17
        
        if (not(cond:3_1))
            sub_1405c4ec0(&data_1439c73b0)
        
        sub_1405b2ba0(&data_1439c73c0, 0)
    else
        rbx_3 = sx.q(data_1439c73e0)
        int64_t r8_5 = data_1439c73b0
        int64_t rax_13 = sx.q(*(r8_5 + rbx_3 * 0x28 + 4))
        data_1439c73e0 = rax_13.d
        data_1439c73e4 = rdx_6 - 1
        
        if (rdx_6 != 1)
            *(r8_5 + rax_13 * 0x28) = 0xffffffff
    
    void* rax_18 = data_1439c73d0
    int32_t var_170_1
    var_170_1.q = 0
    int32_t var_178_2 = rbx_3.d
    
    if (rax_18 != 0)
        rsi_1 = rax_18
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rbx_3.d)
    void* rdx_11 = rsi_1 + (sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5) << 2)
    *rdx_11 |= 1 << (rbx_3.b & 0x1f)
    int64_t rdx_12 = sx.q(rbx_3.d) * 5
    int64_t rax_24 = data_1439c73b0
    *(rax_24 + (rdx_12 << 3)) = rdi_1.d
    int32_t* r8_6 = rax_24 + (rdx_12 << 3)
    *(r8_6 + 8) = var_e0
    int64_t var_d0
    *(r8_6 + 0x18) = var_d0
    r8_6[8] = 0xffffffff
    sub_1418f91d0(&data_1439c73b0, &var_128, rdi_1.d, r8_6, var_178_2, var_170_1)
    LeaveCriticalSection(&data_143efbbd8)
    *arg1 = var_e0
    arg1[1].q = var_d0
else
    void* rdx = data_1439c73f0
    void* rcx_6 = &data_1439c73e8
    
    if (rdx != 0)
        rcx_6 = rdx
    
    int32_t rax_9 = *(rcx_6 + ((sx.q(data_1439c73f8 - 1) & rdi_1) << 2))
    
    if (rax_9 == 0xffffffff)
        goto label_1418fa5e2
    
    int64_t r8_2 = data_1439c73b0
    int64_t rdx_1
    
    while (true)
        rdx_1 = sx.q(rax_9)
        int64_t rcx_7 = rdx_1 * 5
        
        if (*(r8_2 + (rcx_7 << 3)) == rdi_1.d)
            break
        
        rax_9 = *(r8_2 + (rcx_7 << 3) + 0x20)
        
        if (rax_9 == 0xffffffff)
            goto label_1418fa5e2
    
    if (rax_9 == 0xffffffff)
        goto label_1418fa5e2
    
    void* rax_15 = r8_2 + rdx_1 * 0x28
    
    if (rax_15 == 0 || rax_15 == -8)
        goto label_1418fa5e2
    
    uint128_t var_110_1 = *(rax_15 + 8)
    var_128.q = *(rax_15 + 0x18)
    LeaveCriticalSection(&data_143efbbd8)
    *arg1 = var_110_1
    arg1[1].q = var_128.q

__security_check_cookie(rax_1 ^ &var_198)
return arg1
