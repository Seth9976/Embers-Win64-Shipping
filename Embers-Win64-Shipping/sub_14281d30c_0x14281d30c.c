// 函数: sub_14281d30c
// 地址: 0x14281d30c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct std::streambuf::std::stringbuf::VTable** arg_8 = arg1
std::streambuf::streambuf<char, struct std::char_traits<char> >()
*arg1 = &std::stringbuf::`vftable'{for `std::streambuf'}
int32_t r9_3 = (not.d(arg3) & 1) << 2
int32_t rdx_1 = r9_3 | 2

if ((arg3.b & 2) != 0)
    rdx_1 = r9_3

int32_t rcx_1 = rdx_1 | 8

if ((arg3.b & 8) == 0)
    rcx_1 = rdx_1

int32_t r9_5 = rcx_1 | 0x10
int32_t rbx
rbx.b = arg3.b & 4

if (rbx.b == 0)
    r9_5 = rcx_1

int64_t* rdx_2 = arg2

if (arg2[3] u>= 0x10)
    rdx_2 = *arg2

sub_14281d5ec(arg1, rdx_2, arg2[2], r9_5)
return arg1
