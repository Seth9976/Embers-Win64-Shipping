// 函数: sub_140be2110
// 地址: 0x140be2110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140be21b0(arg1, arg2, arg3)
uint64_t result = zx.q(arg1[0x16].d) & 0xff7fffff
arg1[0x16].d = result.d

if (arg1[0x17] == 0)
    void* i = arg1[0xe]
    result = zx.q(result.d) | 0xe000
    arg1[0x16].d = result.d
    
    for (; i != 0; i = *(i + 0x58))
        int64_t rax_1 = *(i + 0x40)
        
        if (not(test_bit(rax_1, 9)))
            arg1[0x16].d &= 0xffff7fff
            rax_1 = *(i + 0x40)
        
        if ((0x1000000000 & rax_1) == 0)
            arg1[0x16].d &= 0xffffbfff
        
        result = zx.q(*(i + 0x40))
        
        if (not(test_bit(result, 0x1e)))
            arg1[0x16].d &= 0xffffdfff

return result
