// 函数: sub_141fd7360
// 地址: 0x141fd7360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143293440
__builtin_memset(&arg1[6], 0, 0x30)
sub_140b214c0(&arg1[0xc])
arg1[5].d &= 0xfffffffd
int64_t var_48 = 1
int128_t var_58 = zx.o(0)
sub_1405a4d70(&var_58:8)
int128_t var_40
__builtin_memset(&var_40, 0, 0x18)
int64_t* var_50
*var_50 = 0
sub_1405947f0(&var_40:8, 0xe)
int64_t var_30
int32_t r15 = var_30:4.d
int32_t r14 = var_30.d + 0xe
var_30.d = r14

if (r14 s> r15)
    sub_140594770(&var_40:8)
    r15 = var_30:4.d
    r14 = var_30.d

int64_t rbp = var_40:8.q
UnDecorator::getReferenceType(rbp, u"{ContextHash}", 0x1c)
int64_t rdi = sx.q(arg1[0xb].d)
int32_t rax_1 = (rdi + 1).d
arg1[0xb].d = rax_1

if (rax_1 s> *(arg1 + 0x5c))
    sub_1407c3b60(&arg1[0xa])

int64_t* rcx_7 = &arg1[0xa][rdi * 7]
*rcx_7 = var_58.q
rcx_7[1] = var_50
rcx_7[2].d = var_48.d
*(rcx_7 + 0x14) = var_48:4.d
rcx_7[3] = var_40.q
rcx_7[4] = rbp
rcx_7[5].d = r14
*(rcx_7 + 0x2c) = r15
rcx_7[6] = 0
return arg1
