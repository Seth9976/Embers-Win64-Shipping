// 函数: sub_141e09af0
// 地址: 0x141e09af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x2c8))()
sub_14245e950(arg1)
void* rdi = arg1[4]

if (rdi != 0)
    void* rax_1 = sub_142591550()
    void* rdx_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* r8_1
        r8_1.b = 1
        sub_141f3e990(arg1[4], 1, r8_1.b)

int64_t* rcx_4 = arg1[0x48]

if (rcx_4 == 0)
    int64_t* rax_5 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_5
    rcx_4 = rax_5

jump(*(*rcx_4 + 0x88))
