// 函数: sub_1418c9280
// 地址: 0x1418c9280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[6])
int128_t zmm6
zmm6.d = arg3.d f* 1e+09f
int64_t r8 = 0
void* rsi = *(arg2 + 0x90)

if (not(zmm6.d f< 9.22337204e+18f))
    zmm6.d = zmm6.d f- 9.22337204e+18f
    
    if (not(zmm6.d f>= 9.22337204e+18f))
        r8 = -0x8000000000000000

int32_t rax_3 = data_143efb7a8(*(*(*arg1 + 0x438) + 8), 1, rsi, 1, int.q(zmm6.d) + r8)

if (rax_3 == 0)
    *(rsi + 8) = 1
else if (rax_3 != 2)
    sub_141903f80(rax_3, "Result", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")

int64_t result = sub_1418c4d80(arg2)

if (arg1 == -0x30)
    return result

return LeaveCriticalSection(&arg1[6])
