// 函数: sub_1429ac030
// 地址: 0x1429ac030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* arg_8 = arg1
int64_t var_28 = -2
_Mtx_init_in_situ(arg1, 2)
int64_t arg_18 = 0
sub_14297d4e0(&arg1[1], 0x40, 0x40, 0x3f800000, &arg_18, 0x3f800000, 0, 3)
arg1->__offset(0x68).d = 0x20
arg1->__offset(0x6c).q = 0x20
arg1->__offset(0x74).d = 0
void* __offset(_Mtx_internal_imp_t, 0x80) arg_20 = arg1 + 0x80
arg1->__offset(0x80).q = 0
arg1->__offset(0x88).q = 0
arg1->__offset(0x80).q = sub_140e348a0()
arg1->__offset(0xb0).q = 0
arg1->__offset(0xb8).q = 0
sub_1429bde70(arg1 + 0xc0, 0, 0, 0, nullptr, nullptr)
__builtin_memset(&arg1[3], 0, 0x18)
arg1->__offset(0x118).d = 0xffffffff
arg1->__offset(0x11c).b = 0
arg1->__offset(0x120).d = arg2
__builtin_memset(arg1 + 0x130, 0, 0x18)
arg1->__offset(0x150).b = 0
arg1->__offset(0x158).q = 0
arg1->__offset(0x160).b = 0
int32_t rax_1 = arg2 * 2
int32_t rdx = 1

if (rax_1 s> 1)
    rdx = rax_1

sub_142985740(arg1 + 0x130, sx.q(rdx))
return arg1
