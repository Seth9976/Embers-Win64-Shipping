// 函数: sub_1427cab40
// 地址: 0x1427cab40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2)

if (*(arg1 + 0x10) u< arg2)
    int64_t rax_1 = 0x10 * rsi
    
    if (mulu.dp.q(0x10, rsi) u>> 0x40 != zx.o(0))
        rax_1 = -1
    
    int64_t rax_2 = j_sub_140a82f30(rax_1)
    
    if (rax_2 == 0)
        return rax_2
    
    int32_t i = 0
    
    if (*(arg1 + 0x10) u> 0)
        do
            uint64_t i_1 = zx.q(i)
            i += 1
            uint64_t rcx_1 = i_1 * 2
            *(rax_2 + (rcx_1 << 3)) = *(*(arg1 + 0x18) + (rcx_1 << 3))
        while (i u< *(arg1 + 0x10))
    
    j_sub_140a74f90(*(arg1 + 0x18))
    *(arg1 + 0x10) = rsi.d
    *(arg1 + 0x18) = rax_2

int64_t rax
rax.b = 1
return rax
