// 函数: sub_14058a890
// 地址: 0x14058a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

std::streambuf::streambuf<char, struct std::char_traits<char> >()
arg1[0xd] = 0
*arg1 = &std::stringbuf::`vftable'{for `std::streambuf'}
int32_t r8_3 = (not.d(arg2) & 1) << 2
int32_t rcx_1 = r8_3 | 2

if ((arg2.b & 2) != 0)
    rcx_1 = r8_3

int32_t rdx_1 = rcx_1 | 8

if ((arg2.b & 8) == 0)
    rdx_1 = rcx_1

int32_t rax_3 = rdx_1 | 0x10
int32_t rbx
rbx.b = arg2.b & 4

if (rbx.b == 0)
    rax_3 = rdx_1

arg1[0xe].d = rax_3
return arg1
