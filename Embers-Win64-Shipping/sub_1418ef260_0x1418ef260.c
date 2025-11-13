// 函数: sub_1418ef260
// 地址: 0x1418ef260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x90)
int32_t rdx = *(arg2 + 0x68)
int64_t arg_8 = *(arg2 + 0x40)
int64_t var_84
__builtin_memset(&var_84, 0, 0x40)
int64_t var_5c = &arg_8
int32_t var_88 = 4
int64_t var_64
var_64:4.d = 1
int64_t var_54
var_54:4.d = arg3
int64_t var_4c = arg4
int64_t var_98 = 0
int64_t var_90 = 0

if (rdx s> 0)
    sub_1405c5570(&var_98, rdx)
    int64_t* rsi_1 = *(arg2 + 0x60)
    int64_t r14_1 = 0
    int64_t rcx_1 = var_98
    uint64_t r13_2 = sx.q(*(arg2 + 0x68)) << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[sx.q(*(arg2 + 0x68))])
        r13_2 = 0
    
    if (r13_2 != 0)
        do
            int64_t rbx_1 = sx.q(var_90.d)
            int64_t r12_1 = *(*rsi_1 + 0x18)
            int32_t rax_4 = (rbx_1 + 1).d
            var_90.d = rax_4
            
            if (rax_4 s> var_90:4.d)
                sub_1405a4d70(&var_98)
                rcx_1 = var_98
            
            rsi_1 = &rsi_1[1]
            *(rcx_1 + (rbx_1 << 3)) = r12_1
            r14_1 += 1
        while (r14_1 != r13_2)
    
    int64_t var_7c
    var_7c:4.d = *(arg2 + 0x68)
    int64_t var_6c = *(arg2 + 0x50)
    int64_t var_74 = rcx_1

int32_t rax_7 = data_143efb700(*arg1, 1, &var_88, *rbx)

if (rax_7 != 0)
    sub_141903f80(rax_7, "VulkanRHI::vkQueueSubmit(Queue, 1, &SubmitInfo, Fence->GetHandle())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanQueue.cpp")

*(arg2 + 0x2c) = 4
*(arg2 + 0x58) = 0

if (*(arg2 + 0x5c) s<= 0xffffffff)
    sub_1405dadb0(arg2 + 0x50, 0)

if (arg2 + 0x70 != arg2 + 0x60)
    int64_t r14_2 = sx.q(*(arg2 + 0x68))
    int64_t r12_2 = *(arg2 + 0x60)
    int32_t r8_1 = *(arg2 + 0x7c)
    *(arg2 + 0x78) = r14_2.d
    
    if (r14_2.d != 0 || r8_1 != 0)
        sub_1405c4a00(arg2 + 0x70, r14_2.d, r8_1)
        memcpy(*(arg2 + 0x70), r12_2, (r14_2 << 3).d)
    else
        *(arg2 + 0x7c) = 0

int32_t rax_8 = *(arg2 + 0x6c)
*(arg2 + 0x68) = 0

if (rax_8 s< 0 && rax_8 != 0)
    sub_1405c5570(arg2 + 0x60, 0)

*(arg2 + 0xa0) = *(arg2 + 0x98)
int32_t rdx_4 = data_143efb314

if (rdx_4 != 0)
    int64_t* rcx_10 = *(*(arg1[2] + 0x1a50) + 0x240)
    void*** rax_11
    
    if (rdx_4 == 2)
        if (rcx_10[0xf] != 0)
            rax_11 = sub_1418c0d30(rcx_10)
        label_1418ef4ad:
            
            if (rax_11 == arg2)
                goto label_1418ef4ca
    else if (rdx_4 != 3)
    label_1418ef4ca:
        sub_1418c9370(arg1[2] + 0x438, *(arg2 + 0x90), 0xbebc200)
        int64_t* rdx_7 = *(arg2 + 0x90)
        
        if (rdx_7[1].d != 1)
            sub_1418bc980(arg1[2] + 0x438, rdx_7)
        
        sub_1418c4ff0(*(arg2 + 0xa8), 0)
    else
        rax_11 = rcx_10[0xe]
        
        if (rax_11 != 0)
            goto label_1418ef4ad

EnterCriticalSection(&arg1[3])
arg1[8] = arg2
int64_t rax_12 = *(arg2 + 0x98)
arg1[0xa] += 1
arg1[9] = rax_12

if (arg1 != -0x18)
    LeaveCriticalSection(&arg1[3])

sub_1418c4ff0(*(arg2 + 0xa8), arg2)
int64_t result = sub_1418c2fd0(arg1[2] + 0x3f0, 0, 0)
int64_t rcx_21 = var_98

if (rcx_21 == 0)
    return result

return sub_140a74f90(rcx_21)
