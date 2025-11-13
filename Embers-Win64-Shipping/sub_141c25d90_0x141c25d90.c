// 函数: sub_141c25d90
// 地址: 0x141c25d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"CameraComponent", 1)
void* rax_1 = sub_141c27b40()
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, rax_1)
sub_141e8fb90(arg1)
*arg1 = &data_14309d940
arg1[0xf5].d = 0xffffffff
*(arg1 + 0x7ac) = 0
__builtin_memset(&arg1[0xf7], 0, 0x18)
arg_8 = 0

if (*(arg1 + 0x7cc) s<= 0xffffffff)
    sub_1405947f0(&arg1[0xf8], 0)

int16_t* rax_2 = arg1[0xf8]

if (rax_2 != 0)
    *rax_2 = 0

arg1[0xf6].d = 0
void* const rbx_1 = arg1[0x45]
void* rax_3
int64_t rax_4
void* rdx_3

if (rbx_1 != 0)
    rax_3 = sub_141c27b40()
    rdx_3 = *(rbx_1 + 0x10)
    rax_4 = sx.q(*(rax_3 + 0x38))

if (rbx_1 == 0 || rax_4.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
    rbx_1 = nullptr

*(arg1 + 0x32) |= 2
rdx_3.b = 1
arg1[0xfd] = rbx_1
sub_141dd7200(arg1, rdx_3.b)
return arg1
