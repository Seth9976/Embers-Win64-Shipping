// 函数: sub_141df3d50
// 地址: 0x141df3d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[4]

if (rdi != 0)
    void* rax_1 = sub_142591550()
    void* r9_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(r9_1 + 0x38) && *(*(r9_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        sub_141f3e990(arg1[4], 1, 1)

void* rdx = arg1[0x48]

if (rdx == 0)
    void* rax_5 = (*(*arg1 + 0x300))(arg1, rdx)
    arg1[0x48] = rax_5
    rdx = rax_5

return sub_141a876a0(arg3, rdx + zx.q(arg2) * 0x50 + 0x2f8) __tailcall
