// 函数: sub_1418de130
// 地址: 0x1418de130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
uint32_t rbx = zx.d(*(arg2 + 0x361))
int64_t var_1d4
__builtin_memset(&var_1d4, 0, 0x20)
void* const r9 = arg2
int32_t r8 = 1

if (rbx.b == 0)
    r9 = nullptr

int64_t var_1b4
__builtin_memset(&var_1b4, 0, 0x1c)
int32_t r11 = 0
void* rax_2 = arg2 + 0x50
int32_t var_1d8 = 0x26
int64_t var_138
__builtin_memset(&var_138, 0, 0x18)
int32_t var_11c = 0
int64_t var_100 = 0
int64_t var_f8 = 0
uint32_t var_120 = rbx
void* const var_118 = r9
void* rcx

if (*(arg2 + 0x368) != 1)
    rcx = rax_2
    
    if (*(arg2 + 0x364) == 0)
        rcx = nullptr
else
    rcx = nullptr

void* var_110 = rcx
void* rcx_1 = arg2 + 0x40

if (*(arg2 + 0x363) == 0)
    rcx_1 = nullptr

void* var_108 = rcx_1
int32_t var_a8

if (*(arg2 + 0x368) == 1)
    r8 = 2
    int64_t var_f0_1 = 0
    
    if (*(arg2 + 0x364) == 0)
        rax_2 = nullptr
    
    int64_t var_e8_1 = 0
    void* var_c8_1 = rax_2
    int32_t var_68 = *rcx_1
    int64_t var_d8_1 = 0
    int32_t* var_e0_1 = &var_68
    int64_t var_b8_1 = 0
    int64_t var_b0_1 = 0
    r11 = 1
    int32_t* var_c0_1 = &var_68
    var_f0_1:4.d = 0
    var_d8_1.d = rbx
    void* const var_d0_1 = r9
    int32_t var_64_1 = 4
    var_e8_1.d = 1
    var_a8 = 0
    int32_t var_a4
    __builtin_memcpy(&var_a4, 
        "\x01\x00\x00\x00\x00\x03\x00\x00\x80\x00\x00\x00\x00\x04\x00\x00\x10\x00\x00\x00\x01\x00\x00\x00", 
        0x18)

int64_t var_1c4
var_1c4.d = zx.d(*(arg2 + 0x360))
var_1c4 = arg2 + 0xd8
var_1b4 = &var_138
int64_t var_1a4 = &var_a8
int64_t var_1bc
var_1bc:4.d = r8
int64_t var_1ac
var_1ac:4.d = r11
int32_t var_1f0 = 3
int32_t var_1ec = 3
int32_t var_1f8 = 3
int64_t* rcx_2

if (*(arg2 + 0x369) == 0)
    rcx_2 = var_1d4
else
    int64_t var_178 = 0x3b9b9908
    int32_t* var_160_1 = &var_1f0
    rcx_2 = &var_178
    int32_t var_164_1 = 0
    int32_t* var_140_1 = &var_1f8
    int64_t var_158_1 = 0
    int64_t var_148_1 = 1
    int64_t var_170_1 = 0
    int32_t var_168_1 = r8
    int64_t var_150_1 = 0
    var_1d4 = &var_178

if ((*(arg1 + 0x1af0) & 0x400) != 0 && *(arg2 + 0x365) != 0)
    int32_t var_198 = 0x3b9e1d92
    int64_t var_18c_1 = 0
    int64_t var_194_1 = 0
    var_18c_1 = *(arg2 + 0x48)
    var_1d4 = &var_198
    var_194_1 = rcx_2

int64_t result_1
int32_t rax_7 = data_143efb900(*(arg1 + 8), &var_1d8, 0, &result_1)

if (rax_7 s< 0)
    sub_141903f80(rax_7, 
        "VulkanRHI::vkCreateRenderPass(InDevice.GetInstanceHandle(), &CreateInfo, VULKAN_CPU_ALLOCATOR, "
    "&RenderPassHandle)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanRHI.cpp")

int64_t result = result_1
__security_check_cookie(rax_1 ^ &var_218)
return result
