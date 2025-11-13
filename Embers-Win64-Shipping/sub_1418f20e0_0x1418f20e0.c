// 函数: sub_1418f20e0
// 地址: 0x1418f20e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
char var_f0 = 0
*arg1 = &data_142ff18d0
arg1[1] = arg2
arg1[6].d = arg11
arg1[2] = 0
arg1[0xa].d = 0
*(arg1 + 0x1c) = 0
arg1[4].d = arg5
*(arg1 + 0x24) = arg6
arg1[5].d = arg7
*(arg1 + 0x2c) = arg4
*(arg1 + 0x34) = 1
*(arg1 + 0x54) = 0x7fffffff
arg1[0xb].d = arg3
*(arg1 + 0x5c) = 1
arg1[3].d = 0
arg1[0xc] = 0
int32_t rax_3 = arg1[6].d
arg1[0xd].d = arg9
arg1[0xe] = 0
*(arg1 + 0x6c) = arg10
void var_c8
sub_1418fad40(&var_c8, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, rax_3, &arg1[3], 
    arg1 + 0x1c, var_f0)
int32_t rax_4 = data_143efb820(*(arg2 + 8), &var_c8, 0, &arg1[2])

if (rax_4 != 0)
    sub_141903f80(rax_4, 
        "VulkanRHI::vkCreateImage(InDevice.GetInstanceHandle(), &ImageCreateInfo.ImageCreateInfo, "
    "VULKAN_CPU_ALLOCATOR, &Image)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanTexture.cpp")

data_143efb768(*(arg2 + 8), arg1[2], &arg1[7])
int64_t var_e0
sub_140a2e390(&var_e0, u"(FVulkanSurface*)0x%p", arg1)
arg1[2]
int64_t rcx_7 = var_e0

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t r8_5 = 6
int32_t rax_5

if (arg3 != 3)
    rax_5 = 1

if (arg3 == 3 || arg3 == 6)
    rax_5 = 6

int32_t rcx_8 = *(arg1 + 0x2c)
int32_t r9_4 = 4
arg1[0xa].d = rax_5 * arg8

if (rcx_8 != 0xb)
    if (rcx_8 == 0xc || rcx_8 == 0x14)
        r8_5 = 2
    else if (rcx_8 == 0x2c)
        r8_5 = 4
    else
        r8_5 = 1

arg1[0xe].d = r8_5

if (rcx_8 == 0xb || rcx_8 == 0xc || rcx_8 == 0x14)
    r9_4 = 2
else if (rcx_8 != 0x2c)
    r9_4 = 1

*(arg1 + 0x74) = r9_4
int32_t var_94

if (var_94 != 0)
    *(arg1 + 0x34) |= 2

int32_t rcx_12 = arg1[6].d
uint8_t rax_8 = (rcx_12 u>> 0x12).b & 1
int32_t rbx_2 = rcx_12 & 7
int32_t r8_7 = zx.d(rax_8) + 1

if (((rcx_12 u>> 0xb).b & 1) != 0 && rbx_2 != 0 && rax_8 == 0)
    r8_7 |= 0x10

void*** rax_9 = sub_1418f5f10(arg2 + 0x248, &arg1[7], r8_7, 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanTexture.cpp", 0x27a)
int64_t* rcx_15 = arg1[0xc]
arg1[0xc] = rax_9

if (rax_9 != 0)
    rax_9[1].d += 1

if (rcx_15 != 0)
    rcx_15[1].d -= 1
    
    if (rcx_15[1].d == 1)
        (**rcx_15)(rcx_15, 1)

sub_1418bc930(arg1[0xc], arg1[1], arg1[2])
int64_t rcx_17 = arg1[7]
int32_t rcx_19

if (rcx_17 s<= 0)
    int64_t rax_17
    int32_t rdx_13
    rdx_13:rax_17 = sx.o((0x3ff - rcx_17) & 0xfffffffffffffc00)
    rcx_19 = (neg.q(((zx.q(rdx_13) & 0x3ff) + rax_17) s>> 0xa)).d
else
    int64_t rax_14
    int32_t rdx_11
    rdx_11:rax_14 = sx.o((rcx_17 + 0x3ff) & 0xfffffffffffffc00)
    rcx_19 = (((zx.q(rdx_11) & 0x3ff) + rax_14) s>> 0xa).d

int32_t* rax_18 = &data_143f0f1f8

if (rbx_2 != 0)
    rax_18 = &data_143f0f1fc

*rax_18
*rax_18 += rcx_19
*(arg1 + 0x54) = var_94
char var_90

if ((var_90 & 4) != 0)
    int32_t rbx_3 = arg1[6].d
    
    if ((rbx_3.b & 5) != 0)
        uint8_t rbx_4 = (rbx_3 u>> 0x11).b & 1
        
        if (sub_140a80f40() == 0 || data_143f01c92 == 0)
            sub_1418fb870(arg1, arg1[1][0x34a], arg12 + 0x10, rbx_4)
        else
            void*** rdx_17 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_21 = &rdx_17[6]
            
            if (rax_21 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x38)
                rdx_17 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_21 = &rdx_17[6]
            
            void**** rcx_23 = data_143f02ba0
            data_143f02bac += 1
            data_143f02bc8 = rax_21
            *rcx_23 = rdx_17
            data_143f02ba0 = &rdx_17[1]
            rdx_17[1] = 0
            *rdx_17 = &data_142ff1de8
            rdx_17[2] = arg1
            *(rdx_17 + 0x18) = *(arg12 + 0x10)
            rdx_17[5].d = *(arg12 + 0x20)
            *(rdx_17 + 0x2c) = rbx_4

__security_check_cookie(rax_1 ^ &var_158)
return arg1
