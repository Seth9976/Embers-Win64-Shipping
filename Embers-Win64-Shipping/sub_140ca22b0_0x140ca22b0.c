// 函数: sub_140ca22b0
// 地址: 0x140ca22b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 1
int64_t var_38
__builtin_memset(&var_38, 0, 0x20)
int32_t* var_20
sub_140775640(&var_20)
int32_t* rcx_1 = var_20
int64_t* rdx_1 = &rcx_1[0x18]
*rcx_1 = arg1 | 0x20000
*(rcx_1 + 4) = *arg2
*(rcx_1 + 0xc) = arg2[1]
*(rcx_1 + 0x14) = arg2[2]
__builtin_memset(&rcx_1[7], 0, 0x30)
*(rcx_1 + 0x50) = 0
*(rcx_1 + 0x58) = 0
rdx_1[2] = 0
rdx_1[3].d = 0
*(rdx_1 + 0x1c) = 0x80
int64_t* rax_3 = rdx_1[2]

if (rax_3 != 0)
    rdx_1 = rax_3

*rdx_1 = 0
rdx_1[1] = 0
rcx_1[0x20] = 0xffffffff
rcx_1[0x21] = 0
*(rcx_1 + 0x90) = 0
rcx_1[0x26] = 0
sub_140be32e0(rcx_1)
var_38 = 0
int32_t var_30 = 0
sub_1405947f0(&var_38, 0x13)
int32_t rax_4 = var_30 + 0x13
var_30 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_38)

int64_t rbx_2 = var_38
UnDecorator::getReferenceType(rbx_2, u"RemoveKnownMissing", 0x26)
char rax_5 = sub_140ca2510(&var_20)

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

sub_140bd6610(&var_20)
return zx.q(rax_5)
