// 函数: sub_142977b00
// 地址: 0x142977b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* arg_8 = arg1
int64_t var_28 = -2
_Mtx_init_in_situ(arg1, 2)
arg1->__offset(0x50).q = arg2
arg1->__offset(0x58).b = (arg3 u>> 5).b & 1
int32_t* rax_1 = sub_142980a30(sub_142988800(arg2))
int32_t rdx = *rax_1
int32_t r9 = rax_1[1]
int32_t rcx_2 = rax_1[2]
int32_t r8 = rax_1[3]
arg1->__offset(0x5c).d = rdx
arg1->__offset(0x60).d = r9
arg1->__offset(0x64).d = r8
arg1->__offset(0x68).d = rcx_2 - rdx + 1
arg1->__offset(0x6c).d = r8 - r9 + 1
arg1->__offset(0x70).d = r9 - 0x1d
arg1->__offset(0x74).d = *sub_1429812f0(sub_142988800(arg1->__offset(0x50).q))
float var_20[0x6]
float* rax_6 = sub_14297a970(&var_20, sub_142988800(arg1->__offset(0x50).q))
arg1->__offset(0x78).d = *rax_6
arg1->__offset(0x7c).d = rax_6[1]
arg1->__offset(0x80).d = rax_6[2]
uint64_t rbx_3 = sub_1429784b0(sx.q(arg1->__offset(0x68).d) << 3) u>> 3
int64_t rcx_16 = (sx.q(arg1->__offset(0x68).d) + rbx_3) << 5
int64_t arg_10 = rcx_16
int64_t rax_9 = 8 * rcx_16

if (mulu.dp.q(8, rcx_16) u>> 0x40 != zx.o(0))
    rax_9 = -1

int64_t rax_10 = j_sub_140a82f30(rax_9)
arg_10 = rax_10
arg1->__offset(0x88).q = rax_10
arg1->__offset(0x90).q = rax_10
arg1->__offset(0x98).q = arg1->__offset(0x88).q + ((sx.q(arg1->__offset(0x68).d) + rbx_3) << 3)
arg1->__offset(0xa0).q = ((sx.q(arg1->__offset(0x68).d) + rbx_3) << 4) + arg1->__offset(0x88).q
arg1->__offset(0xa8).q = arg1->__offset(0x88).q + (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x18
arg1->__offset(0xb0).q = ((sx.q(arg1->__offset(0x68).d) + rbx_3) << 5) + arg1->__offset(0x88).q
arg1->__offset(0xb8).q = arg1->__offset(0x88).q + (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x28
arg1->__offset(0xc0).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x30 + arg1->__offset(0x88).q
arg1->__offset(0xc8).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x38 + arg1->__offset(0x88).q
arg1->__offset(0xd0).q = ((sx.q(arg1->__offset(0x68).d) + rbx_3) << 6) + arg1->__offset(0x88).q
arg1->__offset(0xd8).q = arg1->__offset(0x88).q + (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x48
arg1->__offset(0xe0).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x50 + arg1->__offset(0x88).q
arg1->__offset(0xe8).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x58 + arg1->__offset(0x88).q
arg1->__offset(0xf0).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x60 + arg1->__offset(0x88).q
arg1->__offset(0xf8).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x68 + arg1->__offset(0x88).q
arg1->__offset(0x100).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x70 + arg1->__offset(0x88).q
arg1->__offset(0x108).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x78 + arg1->__offset(0x88).q
arg1->__offset(0x110).q = ((sx.q(arg1->__offset(0x68).d) + rbx_3) << 7) + arg1->__offset(0x88).q
arg1->__offset(0x118).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x88 + arg1->__offset(0x88).q
arg1->__offset(0x120).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x90 + arg1->__offset(0x88).q
arg1->__offset(0x128).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0x98 + arg1->__offset(0x88).q
arg1->__offset(0x130).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xa0 + arg1->__offset(0x88).q
arg1->__offset(0x138).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xa8 + arg1->__offset(0x88).q
arg1->__offset(0x140).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xb0 + arg1->__offset(0x88).q
arg1->__offset(0x148).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xb8 + arg1->__offset(0x88).q
arg1->__offset(0x150).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xc0 + arg1->__offset(0x88).q
arg1->__offset(0x158).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xc8 + arg1->__offset(0x88).q
arg1->__offset(0x160).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xd0 + arg1->__offset(0x88).q
arg1->__offset(0x168).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xd8 + arg1->__offset(0x88).q
arg1->__offset(0x170).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xe0 + arg1->__offset(0x88).q
arg1->__offset(0x178).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xe8 + arg1->__offset(0x88).q
arg1->__offset(0x180).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xf0 + arg1->__offset(0x88).q
arg1->__offset(0x188).q = (sx.q(arg1->__offset(0x68).d) + rbx_3) * 0xf8 + arg1->__offset(0x88).q
int64_t rdx_6 = sx.q(arg1->__offset(0x68).d + 0x1a)
arg_10 = rdx_6
int64_t rax_79 = 8 * rdx_6

if (mulu.dp.q(8, rdx_6) u>> 0x40 != zx.o(0))
    rax_79 = -1

struct _Mtx_internal_imp_t* rax_80 = j_sub_140a82f30(rax_79)
arg_8 = rax_80
arg1->__offset(0x190).q = rax_80
__builtin_memset(arg1 + 0x198, 0, 0x18)
return arg1
