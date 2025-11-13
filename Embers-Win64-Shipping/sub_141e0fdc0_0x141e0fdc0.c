// 函数: sub_141e0fdc0
// 地址: 0x141e0fdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[4]

if (rdi != 0)
    void* rax_1 = sub_142591550()
    void* r8_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(r8_1 + 0x38) && *(*(r8_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        
        if (data_143de5480 != 0)
            rax_4, r8_1 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)

void* rcx_3 = arg1[0x48]

if (rcx_3 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rcx_3 = rax_6

return sub_141e0fa00(rcx_3, arg2) __tailcall
