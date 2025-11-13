// 函数: sub_1418c1490
// 地址: 0x1418c1490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2c) = 0
arg1[5].d = arg3
void* rax_1 = sub_1418bb790(arg2 + 0x248, arg3, 0xf5, 6, 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp", 0xa3b)
int64_t* rcx_1 = *arg1
*arg1 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        (**rcx_1)(rcx_1, 1)

void* rcx_2 = *arg1
void* result = *(*(rcx_2 + 0x20) + 0x18)
int64_t rdx_2 = *(result + 0x18) + zx.q(*(rcx_2 + 0x14))
arg1[3] = rdx_2
arg1[4] = rdx_2
return result
