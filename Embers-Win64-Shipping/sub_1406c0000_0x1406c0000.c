// 函数: sub_1406c0000
// 地址: 0x1406c0000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x691) == 0)
    int64_t rax
    int64_t rdx
    rdx:rax = muls.dp.q(0x6666666666666667, *arg2)
    *(arg1 + 0x6a8) &= 0xfffffffd
    int64_t rdx_1 = rdx s>> 2
    *(arg1 + 0x6a0) = 0
    *(arg1 + 0x691) = 1
    *(arg1 + 0x698) = rdx_1 + (rdx_1 u>> 0x3f)
    int64_t* rcx = *(arg1 + 0x650)
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx)

uint64_t result
result.b = 1
return result
