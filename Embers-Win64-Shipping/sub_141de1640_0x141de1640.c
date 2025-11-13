// 函数: sub_141de1640
// 地址: 0x141de1640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = arg2
sub_140780b40(arg1, arg3)
uint64_t i_2 = zx.q(arg1[1].d)
arg1[4].d = 0

if (*(arg1 + 0x24) != i_2.d)
    sub_1405c5510(&arg1[3], i_2.d)

if (i_2.d s> 0)
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int64_t rdi = sx.q(arg1[4].d)
        int32_t rax_1 = (rdi + 1).d
        arg1[4].d = rax_1
        
        if (rax_1 s> *(arg1 + 0x24))
            sub_1405daba0(&arg1[3])
        
        if (rdi != neg.q(arg1[3]))
            *(rdi + arg1[3]) = 0
        
        i = i_1
        i_1 -= 1
    while (i != 1)

char* result = arg1[3]
*result = 1
return result
