// 函数: sub_1421fda80
// 地址: 0x1421fda80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg3)
void* const rax

if (arg2 == 0)
    rax = nullptr
else
    rax = *(arg2 + 0x28)

if (rax == 0 || (*(*(rax + 0x30) + 0x59) & 1) != 0)
label_1421fdb29:
    
    if (arg2 != 0)
        int32_t rax_4 = *(arg2 + 0x4c)
        
        if (rax_4 != 0)
            rdi = zx.q(rax_4)
else if (arg2 != 0)
    void* rsi_1 = *(arg2 + 0x18)
    
    if (rsi_1 != 0)
        uint32_t rax_2
        int64_t rax_3
        
        if ((*(rsi_1 + 0x433) & 8) == 0 && data_143de5480 != 0)
            rax_2.b = GetCurrentThreadId() == data_143de5470
            rax_3 = 0x620
        
        if ((*(rsi_1 + 0x433) & 8) != 0 || data_143de5480 == 0 || rax_2.b != 0)
            rax_3 = 0x1c0
        
        uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(*(rax_3 + rsi_1 + 0x20), data_143f50540)
        _mm_max_ps(_mm_max_ps(temp0_1, _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)), 
            _mm_shuffle_ps(temp0_1, temp0_1, 0xd2))
    
    goto label_1421fdb29

void* rdi_1 = rdi + arg5
float zmm0_1
float zmm6
zmm0_1, zmm6 = sub_141fe5610(arg1 + 0x30, *(arg5 + 0xc), *(arg2 + 0x18), nullptr, arg4)
char result = *(arg1 + 0x64)
float zmm1_1 = zmm0_1 * zmm6

if (result == 0)
    *rdi_1 = zmm1_1
    *(rdi_1 + 4) = zmm1_1
    return result

zmm0_1 = *(rdi_1 + 4)

if (result != 1)
    *(rdi_1 + 4) = zmm0_1 * zmm1_1
    return result

*(rdi_1 + 4) = zmm0_1 + zmm1_1
return result
