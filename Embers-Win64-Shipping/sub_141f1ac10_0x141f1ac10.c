// 函数: sub_141f1ac10
// 地址: 0x141f1ac10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_141f16380(arg1, *(arg2 + 0x278), arg4)
int128_t zmm0 = sub_141f12f60(arg1, arg4, *(arg2 + 0x278))
float zmm6 = *(arg2 + 0xd30)
int128_t zmm8

if (arg4 == 0)
    zmm8 = 0x40800000
else
    zmm8 = *(arg1 + 0x1b4)

int64_t result

if (arg3 u<= rax)
    float zmm0_2
    zmm0_2, result = sub_141f0a940(zmm8.d, arg3, rax)
    int128_t zmm7
    zmm7.d = zmm0.d f- zmm6
else
    if (arg5 != 0)
        return sub_141f135e0(arg1)
    
    char rcx_2 = data_143de5480
    int64_t rdi_1 = data_143f3aeb0
    int64_t rdx_2
    int64_t rbx_1
    
    if (rcx_2 == 0)
        rbx_1 = 0
        rdx_2 = 0
    else
        uint32_t rax_1 = GetCurrentThreadId()
        rcx_2 = data_143de5480
        rbx_1 = 0
        rdx_2.b = rax_1 != data_143de5470
    
    int32_t r14_1 = *(arg1 + 0x154)
    
    if (*(rdi_1 + (rdx_2 << 2)) u<= r14_1)
        r14_1 = *(rdi_1 + (rdx_2 << 2))
    
    int64_t rdi_2 = data_143f3aed8
    int64_t r12_1 = rdi_2
    int64_t rdx_3
    
    if (rcx_2 == 0)
        rdx_3 = 0
    else
        uint32_t rax_2 = GetCurrentThreadId()
        rdi_2 = data_143f3aed8
        rcx_2 = data_143de5480
        rdx_3.b = rax_2 != data_143de5470
    
    if (0f f>= *(r12_1 + (rdx_3 << 2)))
        *(arg1 + 0x150)
    else
        if (rcx_2 != 0)
            rbx_1.b = GetCurrentThreadId() != data_143de5470
        
        *(rdi_2 + (rbx_1 << 2))
    
    int32_t zmm0_1
    zmm0_1, result = sub_141f0a940(zmm8.d, arg3 - rax, r14_1)

return result
