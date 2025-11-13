// 函数: sub_1429b4420
// 地址: 0x1429b4420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* arg_8 = arg1
int64_t var_38 = -2
_Mtx_init_in_situ(arg1, 2)
int64_t arg_18 = 0
sub_14297d4e0(&arg1[1], 0x40, 0x40, 0x3f800000, &arg_18, 0x3f800000, 0, 3)
void* __offset(_Mtx_internal_imp_t, 0x70) arg_20 = arg1 + 0x70
arg1->__offset(0x70).q = 0
arg1->__offset(0x78).q = 0
arg1->__offset(0x70).q = sub_1429b2560()
int32_t rbx_1 = 1
sub_142984980(arg1 + 0x80, 1, 0, 0, 0, 1, 1, 3, 0, 0)
__builtin_memset(arg1 + 0xd0, 0, 0x18)
__builtin_memset(&arg1[3], 0, 0x60)
arg1->__offset(0x154).d = 0xffffffff
arg1->__offset(0x158).d = arg2
arg1->__offset(0x15c).b = 0
arg1->__offset(0x160).q = 0
arg1->__offset(0x168).b = 0
__builtin_memset(arg1 + 0x170, 0, 0x14)
arg1->__offset(0x188).q = 0
arg1->__offset(0x198).q = 0
arg1->__offset(0x190).d = 0
arg1->__offset(0x1b0).b = 0
arg1->__offset(0x1c0).q = 0
arg1->__offset(0x1b8).d = 0
arg1->__offset(0x1d8).q = 0
arg1->__offset(0x1e0).b = 0
int32_t rax_1 = arg2 * 2

if (rax_1 s> 1)
    rbx_1 = rax_1

sub_142985740(arg1 + 0x138, sx.q(rbx_1))
int64_t i = 0

if ((arg1->__offset(0x140).q - arg1->__offset(0x138).q) s>> 3 != 0)
    do
        *(arg1->__offset(0x138).q + (i << 3)) = 0
        i += 1
    while (i u< (arg1->__offset(0x140).q - arg1->__offset(0x138).q) s>> 3)

arg1->__offset(0x1c8).q = 0
return arg1
