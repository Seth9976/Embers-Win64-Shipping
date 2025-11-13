// 函数: sub_1418bb2a0
// 地址: 0x1418bb2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg4)
EnterCriticalSection(&data_143efb258)
int64_t rcx = *(arg1 + 0x208)
int32_t var_50 = 5
int64_t var_4c
__builtin_memset(&var_4c, 0, 0x1c)
int64_t var_64
__builtin_memset(&var_64, 0, 0x14)
int64_t rax = *(arg1 + 0x218)
int64_t var_5c
var_5c:4.d = arg5.d
int64_t var_3c
var_3c:4.d = rsi.d
int32_t var_68 = 0x3b9e6bb1
int32_t* rax_1 = &var_68

if ((*(rax + 0x1af0) & 0x100) == 0)
    rax_1 = var_4c

var_4c = rax_1
int64_t arg_8
int32_t rax_2 = data_143efb718(rcx, &var_50, 0, &arg_8)
int64_t* result

if (rax_2 != 0xfffffffe)
    if (rax_2 != 0xffffffff)
        if (rax_2 != 0)
            sub_141903f80(rax_2, "Result", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")
        
        goto label_1418bb407
    
    if (arg2 == 0)
    label_1418bb407:
        int64_t* result_1 = j_sub_140a82f30(0x28)
        result = nullptr
        
        if (result_1 != 0)
            result_1[4].b = 0
            result_1[4].d &= 0xffffe0ff
            __builtin_memset(result_1, 0, 0x20)
            result = result_1
        
        result[1] = *(arg1 + 0x208)
        result[2] = arg_8
        result[4].b = rsi.b
        *result = arg3
        result[4].d ^= (*(arg1 + (rsi << 3) + 4) << 7 ^ result[4].d) & 0x100
        int32_t rcx_8 = ((*(arg1 + (rsi << 3) + 4) << 7 ^ result[4].d) & 0x200) ^ result[4].d
        result[4].d = rcx_8
        result[4].d = (*(arg1 + (rsi << 3) + 4) & 8) << 7 | (rcx_8 & 0xffffebff)
        *(arg1 + 0x220) += 1
        int32_t rax_14 = *(arg1 + 0x224)
        int32_t rcx_10 = *(arg1 + 0x220)
        
        if (rcx_10 u>= rax_14)
            rax_14 = rcx_10
        
        *(arg1 + 0x224) = rax_14
        int64_t rsi_1 = sx.q(*(arg1 + (rsi << 3) + 8)) * 5
        int64_t rax_16 = *(arg1 + 0x228)
        int64_t r15_1 = sx.q(*(rax_16 + (rsi_1 << 3) + 0x20))
        void* r14_1 = rax_16 + (rsi_1 << 3)
        int32_t rax_17 = (r15_1 + 1).d
        *(r14_1 + 0x20) = rax_17
        
        if (rax_17 s> *(r14_1 + 0x24))
            sub_1405a4d70(r14_1 + 0x18)
        
        *(*(r14_1 + 0x18) + (r15_1 << 3)) = result
        int64_t rax_19 = *(arg1 + 0x228)
        *(rax_19 + (rsi_1 << 3) + 8) += arg3
        int64_t r9_4 = *(arg1 + 0x228)
        int64_t r8_1 = *(r9_4 + (rsi_1 << 3) + 8)
        
        if (*(r9_4 + (rsi_1 << 3) + 0x10) u>= r8_1)
            r8_1 = *(r9_4 + (rsi_1 << 3) + 0x10)
        
        *(r9_4 + (rsi_1 << 3) + 0x10) = r8_1
    else
        result = nullptr
else
    if (arg2 == 0)
        int64_t zmm0
        zmm0.d = float.s(arg3)
        
        if (arg3 s< 0)
            zmm0.d = zmm0.d f+ 1.84467441e+19f
        
        zmm0.d = zmm0.d f* 0.0009765625f
        int16_t* var_78
        sub_140a2e390(&var_78, Out of Device Memory, Requested=%.2fKb MemTypeIndex=%d", 
            _mm_cvtps_pd(zmm0))
        int16_t* const r9_2 = &data_142d40450
        int32_t var_70
        
        if (var_70 != 0)
            r9_2 = var_78
        
        sub_140af98a0("Unknown", 0x139, u"%s", r9_2)
        int16_t* rcx_2 = var_78
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        sub_140afbb40()
        goto label_1418bb407
    
    result = nullptr

LeaveCriticalSection(&data_143efb258)
return result
