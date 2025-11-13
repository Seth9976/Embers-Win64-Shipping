// 函数: sub_1429a83e0
// 地址: 0x1429a83e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* arg_8 = arg1
int64_t var_28 = -2
_Mtx_init_in_situ(arg1, 2)
int64_t arg_18 = 0
sub_14297d4e0(&arg1[1], 0x40, 0x40, 0x3f800000, &arg_18, 0x3f800000, 0, 3)
void* __offset(_Mtx_internal_imp_t, 0x70) arg_20 = arg1 + 0x70
arg1->__offset(0x70).q = 0
arg1->__offset(0x78).q = 0
arg1->__offset(0x70).q = sub_140e348a0()
__builtin_memset(arg1 + 0x98, 0, 0x18)
__builtin_memset(arg1 + 0xb8, 0, 0x60)
arg1->__offset(0x128).d = 0xffffffff
arg1->__offset(0x12c).b = 0
arg1->__offset(0x130).b = 0
__builtin_memset(arg1 + 0x138, 0, 0x18)
int32_t rax_1 = arg2 * 2
int32_t rdx = 1

if (rax_1 s> 1)
    rdx = rax_1

sub_142985740(arg1 + 0x100, sx.q(rdx))
return arg1
