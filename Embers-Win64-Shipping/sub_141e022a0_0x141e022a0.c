// 函数: sub_141e022a0
// 地址: 0x141e022a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[4]

if (rsi != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rsi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        
        if (data_143de5480 != 0)
            rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            sub_141f3e990(arg1[4], 1, 1)

void* rcx_3 = arg1[0x48]

if (rcx_3 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rcx_3 = rax_6

sub_141e020e0(rcx_3, arg2, arg3)
return arg2
