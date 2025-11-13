// 函数: sub_1427f5ef0
// 地址: 0x1427f5ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_1 = *(arg1 + 0x18) + arg3

if (rcx_1 u> *(arg1 + 0x1c))
    int32_t r9_3 = rcx_1 u>> 1 | rcx_1
    int32_t r9_4 = r9_3 | r9_3 u>> 2
    int32_t r9_5 = r9_4 | r9_4 u>> 4
    int32_t r9_6 = r9_5 | r9_5 u>> 8
    int32_t rax_10 = (r9_6 u>> 0x10 | r9_6) + 1
    
    if (rax_10 u< 0x1000)
        rax_10 = 0x1000
    
    int64_t* rcx_2 = *(arg1 + 8)
    *(arg1 + 0x1c) = rax_10
    int64_t rax_12 = (*(*rcx_2 + 8))(rcx_2, arg4, "PxDefaultMemoryOutputStream", 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
    "xtDefaultStreams.cpp", 
        0x42)
    memcpy(rax_12, *(arg1 + 0x10), *(arg1 + 0x18))
    int64_t rdx_2 = *(arg1 + 0x10)
    
    if (rdx_2 != 0)
        int64_t* rcx_4 = *(arg1 + 8)
        int64_t r8_1 = *rcx_4
        (*(r8_1 + 0x10))(rcx_4, rdx_2, r8_1)
    
    *(arg1 + 0x10) = rax_12

int32_t rbx_2 = *(arg1 + 0x18)
memcpy(zx.q(rbx_2) + *(arg1 + 0x10), arg2, arg3)
*(arg1 + 0x18) = rbx_2 + arg3
return zx.q(arg3)
