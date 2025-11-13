// 函数: sub_142666be0
// 地址: 0x142666be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141decb50(arg2)

if (rax != 0)
    void* rbx_1 = *(rax + 0x120)
    
    if (rbx_1 != 0)
        void* rax_1 = sub_14269bba0()
        void* rdx = *(rbx_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            return sub_142665220(rbx_1 + 0x300, (*(*arg1 + 0x28))(arg1, rdx)) __tailcall

EnterCriticalSection(&data_143f714c8)
sub_140868c90(&data_143b51540, arg1)
return LeaveCriticalSection(&data_143f714c8) __tailcall
