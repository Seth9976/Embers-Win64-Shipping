// 函数: sub_14234fdb0
// 地址: 0x14234fdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14237f650(arg1, arg2, 0)
int32_t i_1 = 0
*arg1 = &data_143333fb8
__builtin_memset(&arg1[0xc8], 0, 0x58)
arg1[0xd7] = 0
arg1[0xd8] = 0
*(arg1 + 0x3b) &= 0xf7
*(arg1 + 0x3b) |= 2
void* r13 = arg1[0x2c]
void* r12_2 = (sx.q(arg1[0x2d].d) << 7) + r13

if (r13 != r12_2)
    void* r15_1 = r13 + 0x48
    
    do
        void* i_2 = *(r15_1 - 8)
        void* i = r15_1 - 0x18
        
        if (i_2 != 0)
            i = i_2
        
        for (void* rsi_3 = (sx.q(*r15_1) << 4) + i; i != rsi_3; i += 0x10)
            int64_t* rcx = *i
            
            if ((*(*rcx + 0x2d8))(rcx, 6) == 0)
                *i = sub_14210f630(0)
        
        r13 -= -0x80
        r15_1 -= -0x80
    while (r13 != r12_2)

*(arg1 + 0x640) = *(arg2 + 0x4a0)
*(arg1 + 0x650) = *(arg2 + 0x4b0)
*(arg1 + 0x660) = *(arg2 + 0x4c0)
*(arg1 + 0x670) = *(arg2 + 0x4d0)
*(arg1 + 0x680) = *(arg2 + 0x4e0)
arg1[0xd2] = arg2[0x9e]
arg1[0xd3] = arg2[0x9f]
arg1[0xd4].d = arg2[0xa0].d
*(arg1 + 0x6a4) = *(arg2 + 0x524) u>> 1 & 1
arg1[0xd5].d = zx.d(*(arg2 + 0x525))
sub_141f587b0(arg2, &arg1[0xd6], arg1 + 0x6ac)

if (arg1[0x2d].d s> 0)
    int64_t rbx_1 = 0
    
    do
        sub_141f6bc60(arg1, arg2, i_1, 0)
        
        if (i_1 s>= 0 && i_1 s< arg2[0x8d].d)
            int64_t r9_1 = *(arg2[0x8c] + rbx_1 + 0x30)
            
            if (r9_1 != 0)
                sub_141f6bc60(arg1, arg2, i_1, r9_1)
        
        i_1 += 1
        rbx_1 += 0x90
    while (i_1 s< arg1[0x2d].d)

return arg1
