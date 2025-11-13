// 函数: sub_141903390
// 地址: 0x141903390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t var_d4 = arg2
int64_t var_cc
var_cc:4.d = arg3
int64_t var_c4
var_c4.d = arg6
int64_t result_1 = 0
int32_t var_e8 = 0xf
int64_t var_e4
__builtin_memset(&var_e4, 0, 0x4c)

if (arg11 == 0)
    var_c4:4.o = *sub_1418bfb70(arg1, arg5)

if (arg12 != 0)
    int32_t var_88_1 = *arg12
    int32_t var_70_1 = arg12[7]
    int32_t var_7c_1 = arg12[4]
    int32_t var_78_1 = arg12[5]
    int32_t var_74_1 = arg12[6]
    int32_t var_84_1 = arg12[8]
    int32_t var_80_1 = arg12[9]
    int32_t var_6c_1 = arg12[0xa]
    int32_t var_68_1 = arg12[0xb]
    int64_t var_100
    __builtin_memset(&var_100, 0, 0x18)
    int64_t var_94_1 = 0
    int32_t var_8c_1 = 0
    int64_t var_60_1 = 0
    int32_t var_98 = 0x3b9d2b60
    int32_t var_64_1 = 0
    int64_t var_f0_1 = sub_1418bd1b0(arg1, &var_98)
    var_e4 = &var_100
    var_100.d = 0x3b9d2b61

int64_t var_ac
var_ac.d = arg7
int64_t var_b4
var_b4:4.d = arg4
var_ac:4.d = arg8
int32_t var_118
TEB* gsbase

if (data_143efbbd0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efbbd0)
    
    if (data_143efbbd0 == 0xffffffff)
        int32_t rax_23
        
        if (*(arg1 + 0x157c) == 0x10de)
            var_118 = 0xffffffff
            rax_23 = sub_140a23cf0(&data_143f024b8, u"RTX 20", 1, 0, var_118)
        
        if (*(arg1 + 0x157c) != 0x10de || rax_23 == 0xffffffff
                || (*(arg1 + 0x7cc) & 0xffc00000) u>= 0x6b800000)
            rax_23.b = 0
        else
            rax_23 = 1
        
        data_143efbbcc = rax_23.b
        _Init_thread_footer(&data_143efbbd0)

if (data_143efbbcc != 0 && arg6 - 0x83 u<= 0xf && arg8 u> 1)
    int32_t rax_17 = arg8 - 2
    
    if (rax_17 s<= 1)
        rax_17 = 1
    
    var_ac:4.d = rax_17

int64_t var_a4
var_a4.d = arg9

if (arg3 == 2)
    var_a4:4.d = 1
else if (arg3 == 3)
    var_a4:4.d = 6
else if (arg3 s<= 3)
    var_a4:4.d = 1
else if (arg3 s<= 5)
    var_a4:4.d = arg10
else if (arg3 != 6)
    var_a4:4.d = 1
else
    var_a4:4.d = arg10 * 6

if (arg5 == 0x2c)
    var_c4.d = data_1439c87b4
    var_b4:4.d = 4

int32_t rax_22 = data_143efb838(*(arg1 + 8), &var_e8, 0, &result_1, var_118)

if (rax_22 != 0)
    sub_141903f80(rax_22, 
        "VulkanRHI::vkCreateImageView(Device.GetInstanceHandle(), &ViewInfo, VULKAN_CPU_ALLOCATOR, "
    "&OutView)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanTexture.cpp")

int64_t result = result_1
__security_check_cookie(rax_1 ^ &var_138)
return result
