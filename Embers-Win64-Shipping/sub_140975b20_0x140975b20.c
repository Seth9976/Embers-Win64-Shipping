// 函数: sub_140975b20
// 地址: 0x140975b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q((*(*arg1 + 0x290))())

if (rdi.d == 0xffffffff)
    int32_t rax_1
    rax_1.b = 0
    return rax_1

arg1[6].d -= 1
int32_t rax_2 = sub_140947320(&arg1[0xa], *(rdi * 0x78 + arg1[8] + 0x30))

if (rax_2 != 0xffffffff)
    sub_140911e80(&arg1[0xa], rax_2, 1, 1)

sub_140974ce0(&arg1[8], rdi.d, 1, 1)
int64_t rax_3
rax_3.b = 1
return rax_3
