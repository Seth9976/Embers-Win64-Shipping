// 函数: sub_1405fcc90
// 地址: 0x1405fcc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
CRITICAL_SECTION* var_50 = arg1 + 0x10
EnterCriticalSection(arg1 + 0x10)
HRESULT rsi_1

if (*(arg1 + 0x38) != 0)
    PROPVARIANT* pvarDest = j_sub_140a82f30(0x18)
    HRESULT rax_1
    
    if (arg4 != 0)
        rax_1 = PropVariantCopy(pvarDest, arg4)
        rsi_1 = rax_1
    
    if (arg4 == 0 || rax_1 s>= 0)
        int32_t var_48_1 = arg2
        PROPVARIANT* pvarDest_1 = pvarDest
        rsi_1 = 0
        int64_t var_38_1 = 0
        int64_t r15_1 = sx.q(*(arg1 + 0xb0))
        int32_t rax_2 = (r15_1 + 1).d
        *(arg1 + 0xb0) = rax_2
        
        if (rax_2 s> *(arg1 + 0xb4))
            sub_1405a4df0(arg1 + 0xa8)
        
        int64_t rdx_3 = *(arg1 + 0xa8)
        int64_t rcx_4 = r15_1 * 3
        *(rdx_3 + (rcx_4 << 3)) = arg2
        *(rdx_3 + (rcx_4 << 3) + 8) = pvarDest
        *(rdx_3 + (rcx_4 << 3) + 0x10) = 0
        int64_t* arg_8 = nullptr
        char rax_3
        int64_t zmm1_1
        rax_3, zmm1_1 = sub_1405f8240(arg1 - 0x10, &arg_8)
        int64_t* rbx_1 = arg_8
        
        if (rax_3 != 0)
            sub_1405fea10(arg1 - 0x10, rbx_1, arg3, arg5, zmm1_1)
        
        if (rbx_1 != 0)
            int64_t rdx_6 = *rbx_1
            (*(rdx_6 + 0x10))(rbx_1, rdx_6)
    else
        j_sub_140a74f90(pvarDest)
else
    rsi_1 = 0xc00d3e85

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return zx.q(rsi_1)
