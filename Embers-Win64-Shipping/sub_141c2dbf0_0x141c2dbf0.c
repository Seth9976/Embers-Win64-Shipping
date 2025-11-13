// 函数: sub_141c2dbf0
// 地址: 0x141c2dbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = arg3
*arg1 = &data_143205090
arg1[1].d = arg2
arg1[2] = 0
arg1[3] = 0
uint64_t i_2 = zx.q(*(arg1 + 0xc))
arg1[3].d = 0

if (*(arg1 + 0x1c) != i_2.d)
    sub_1405a5130(&arg1[2], i_2.d)

if (i_2.d s> 0)
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int64_t rdi = sx.q(arg1[3].d)
        int32_t rax_1 = (rdi + 1).d
        arg1[3].d = rax_1
        
        if (rax_1 s> *(arg1 + 0x1c))
            sub_1405a4df0(&arg1[2])
        
        int32_t* rax_3 = &arg1[2][rdi * 3]
        
        if (rax_3 != 0)
            *rax_3 = 0
            *(rax_3 + 8) = 0
            *(rax_3 + 0x10) = 0
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
