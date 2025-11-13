// 函数: sub_141e44dd0
// 地址: 0x141e44dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141df83c0(arg1)

if (rax != 0)
    return zx.q(rax[5].b)

void* rdi = arg1[4]

if (rdi != 0)
    void* rax_2 = sub_142591550()
    void* rdx_1 = *(rdi + 0x10)
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
        void* r8_1
        r8_1.b = 1
        sub_141f3e990(arg1[4], 1, r8_1.b)

void* rax_6 = arg1[0x48]

if (rax_6 == 0)
    rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6

return zx.q(*(rax_6 + 0x825))
