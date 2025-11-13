// 函数: sub_141512a20
// 地址: 0x141512a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2)
int64_t result
int64_t result_2
int64_t r14

if (arg2 != 0)
    int64_t rax = 4 * rsi
    
    if (mulu.dp.q(4, rsi) u>> 0x40 != zx.o(0))
        rax = -1
    
    r14 = j_sub_140a82f30(rax)
    int64_t rax_2 = 2 * rsi
    
    if (mulu.dp.q(2, rsi) u>> 0x40 != zx.o(0))
        rax_2 = -1
    
    result = j_sub_140a82f30(rax_2)
    int32_t rcx_4 = *(arg1 + 8)
    int64_t result_1 = result
    
    if (rcx_4 != 0)
        int32_t i = 0
        
        if (rcx_4 != 0)
            do
                uint64_t i_1 = zx.q(i)
                i += 1
                *(r14 + (i_1 << 2)) = *(*(arg1 + 0x18) + (i_1 << 2))
                *(result_1 + (i_1 << 1)) = *(*(arg1 + 0x20) + (i_1 << 1))
            while (i u< *(arg1 + 8))
        
        j_sub_140a74f90(*(arg1 + 0x18))
        result = j_sub_140a74f90(*(arg1 + 0x20))
        rcx_4 = *(arg1 + 8)
    
    if (rcx_4 u< rsi.d)
        result = 0xffff
        __builtin_memset(result_1 + (zx.q(rcx_4) << 1), 0xffff, zx.q(rsi.d - rcx_4) << 1)
    
    result_2 = result_1
    *(arg1 + 8) = rsi.d
else
    result_2 = 0
    *(arg1 + 8) = 0
    j_sub_140a74f90(*(arg1 + 0x18))
    result = j_sub_140a74f90(*(arg1 + 0x20))
    r14 = 0

*(arg1 + 0x18) = r14
*(arg1 + 0x20) = result_2
return result
