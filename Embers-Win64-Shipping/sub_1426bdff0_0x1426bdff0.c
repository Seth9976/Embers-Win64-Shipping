// 函数: sub_1426bdff0
// 地址: 0x1426bdff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x12].d

if ((rax.b & 1) == 0)
    rax.b = 0
    return rax

int64_t* rcx = arg1[5]
uint32_t rax_2

if (rcx == 0)
    rax_2 = rax & 0xfffffffe
    arg1[0x12].d = rax_2
else
    (*(*rcx + 0x290))(rcx)
    rax_2 = zx.d(arg1[0x12].b)

rax_2.b = not.b(rax_2.b)
rax_2.b &= 1

if (rax_2.b == 0)
    return rax_2

return sub_1426bb7f0(arg1, arg2) __tailcall
