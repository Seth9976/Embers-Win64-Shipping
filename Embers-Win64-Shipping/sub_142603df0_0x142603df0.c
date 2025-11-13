// 函数: sub_142603df0
// 地址: 0x142603df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = arg3.b
int32_t rax = arg5[1].d
char rax_4
int512_t zmm2

if (rax s> 0)
    rax_4, arg3, zmm2 = sub_142609980((sx.q(rax - 1) << 5) + *arg5 + 0xc, arg2)

if (rax s<= 0 || rax_4 == 0)
    zmm2.o = zx.o(0)
    sub_142602cb0(arg5, arg4, arg3, arg2, zx.d(rdi))
    
    if (rdi == 2)
        return 0x40000000
else
    *((sx.q(arg5[1].d) << 5) + *arg5 - 8) = zx.d(rdi)
    *((sx.q(arg5[1].d) << 5) + *arg5 - 0x20) = arg4

return 0x20000000
