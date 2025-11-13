// 函数: sub_141e37f00
// 地址: 0x141e37f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
*arg1 = &data_143248358
arg1[5] = &data_1432485b8
__builtin_memset(&arg1[6], 0, 0x18)
void* rdi = arg1[4]

if (rdi != 0)
    void* rax_1 = sub_142597430()
    void* rdx_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        arg1[6] = rdi
        int32_t* i = arg1[7]
        
        for (void* rsi = &i[sx.q(arg1[8].d) * 5]; i != rsi; i = &i[5])
            sub_141ea5720(i, arg1[6])

return arg1
