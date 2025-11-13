// 函数: sub_141f476a0
// 地址: 0x141f476a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    arg1[0xc9] = arg2
    return sub_141f365a0(arg1) __tailcall

char rsi = *(arg1 + 0x717)
*(arg1 + 0x717) = 0
void* const rdx

if (arg1[0xc9] == 0)
    rdx = nullptr
else
    int64_t rax = sub_14245f6d0()
    
    if (rax == 0)
        rdx = nullptr
    else
        rdx = arg1[0xc9]
        int64_t r8_1 = rax + 0x30
        rax = sx.q(*(rax + 0x38))
        
        if (rax.d s> *(rdx + 0x38))
            rdx = nullptr
        else if (*(*(rdx + 0x30) + (rax << 3)) != r8_1)
            rdx = nullptr

if (arg2 == rdx && rsi == 0)
    return 

arg1[0xc9] = arg2
sub_141f365a0(arg1)
int64_t rdx_1
rdx_1.b = 1
(*(*arg1 + 0x998))(arg1, rdx_1)
