// 函数: sub_1418d9470
// 地址: 0x1418d9470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(data_1439c7244)).d f/ arg1[4].d

if (zmm1.d f>= 0f)
    int32_t rcx = int.d(zmm1.d)
    
    if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1.d))
        zmm1 =
            _mm_cvtepi32_ps(zx.o(rcx + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1) ^ 1)))
else
    int32_t rdx_1 = int.d(zmm1.d)
    
    if (rdx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx_1)).d f== zmm1.d))
        zmm1 = _mm_cvtepi32_ps(zx.o(rdx_1 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))

void* rbx = arg1[3]
int32_t* rbp = nullptr
int32_t r14 = (int.q(zmm1.d)).d

if (rbx == 0)
    goto label_1418d95e1

uint128_t zmm0
zmm0.d = float.s(zx.q(r14))
zmm1.d = float.s(zx.q(*(rbx + 0x10)))
zmm1.d = zmm1.d f- zmm0.d
zmm1.d = zmm1.d f/ zmm0.d
int32_t** result

if (zmm1.d f< -0.100000001f || zmm1.d f> 0.5f)
    arg1[3] = 0
    sub_1418d7e60(&arg1[3], rbx)
label_1418d95e1:
    int32_t* rax_11 = j_sub_140a82f30(0xc8)
    
    if (rax_11 != 0)
        rbp = sub_1418cdcd0(rax_11, *arg1, zx.q(r14))
    
    int64_t rdi_1 = sx.q(arg1[2].d)
    int32_t rax_13 = (rdi_1 + 1).d
    arg1[2].d = rax_13
    
    if (rax_13 s> *(arg1 + 0x14))
        sub_1405a4d70(&arg1[1])
    
    int32_t** rdx_9 = arg1[1]
    memmove(&rdx_9[1], rdx_9, (rdi_1 << 3).d)
    result = arg1[1]
    *result = rbp
else
    int32_t rax_9 = data_143efb8d0(*(*(rbx + 8) + 8), *(rbx + 0x18), 0)
    
    if (rax_9 != 0)
        sub_141903f80(rax_9, 
            "VulkanRHI::vkResetDescriptorPool(Device->GetInstanceHandle(), DescriptorPool, 0)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPendingState.cpp")
    
    sub_1418ec600(rbx + 0x20)
    sub_1418ec510(rbx + 0x70)
    int64_t rbx_1 = sx.q(arg1[2].d)
    int32_t rax_10 = (rbx_1 + 1).d
    arg1[2].d = rax_10
    
    if (rax_10 s> *(arg1 + 0x14))
        sub_1405a4d70(&arg1[1])
    
    int64_t rdx_5 = arg1[1]
    memmove(rdx_5 + 8, rdx_5, (rbx_1 << 3).d)
    result = arg1[3]
    *arg1[1] = result
    arg1[3] = 0

return result
