// 函数: sub_142bf2560
// 地址: 0x142bf2560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    int64_t rcx = *(arg1 + 8)
    
    if (rcx != 0)
        j_sub_140a74f90(rcx)
    
    *arg1 = 0
    *(arg1 + 8) = 0
    return 0

EnterCriticalSection(arg2)

for (int32_t i = *arg1; i != 0; i = *arg1)
    uint64_t rcx_2 = zx.q(i - 1)
    int128_t* rax
    
    if (rcx_2.d u< i)
        rax = *(arg1 + 8) + rcx_2 * 0x18
    else
        rax = &data_144017550
        __builtin_memset(&data_144017550, 0, 0x18)
    
    int128_t zmm0 = *rax
    int64_t zmm1 = rax[1].q
    int32_t rax_2 = *arg1
    
    if (rax_2 != 0)
        *arg1 = rax_2 - 1
    
    LeaveCriticalSection(arg2)
    
    if (zmm1 != 0)
        zmm1(zmm0:8.q)
    
    EnterCriticalSection(arg2)

int64_t rcx_7 = *(arg1 + 8)

if (rcx_7 != 0)
    j_sub_140a74f90(rcx_7)

*arg1 = 0
*(arg1 + 8) = 0
return LeaveCriticalSection(arg2) __tailcall
