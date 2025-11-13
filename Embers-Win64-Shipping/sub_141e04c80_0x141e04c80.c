// 函数: sub_141e04c80
// 地址: 0x141e04c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1[4]

if (rbp != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rbp + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        void* r8
        
        if (data_143de5480 != 0)
            rax_4, r8 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8.b = 1
            sub_141f3e990(arg1[4], 1, r8.b)

void* rcx_3 = arg1[0x48]

if (rcx_3 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rcx_3 = rax_6

sub_141e04bd0(rcx_3, arg2, arg3)
return arg2
