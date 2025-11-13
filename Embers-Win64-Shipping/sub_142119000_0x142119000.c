// 函数: sub_142119000
// 地址: 0x142119000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x30)
*arg1 = (*(*arg2 + 0x20))(arg2)
void arg_8
arg1[1].w = *(*(*arg2 + 0x1e8))(arg2, &arg_8)
arg1[2] = (*(*arg2 + 0x1d8))(arg2)
arg1[3] = *(arg2 + 0x1c)
arg1[4] = arg2[3].d
arg1[5] = (*(*arg2 + 0x168))(arg2)
arg1[6] = (*(*arg2 + 0x308))(arg2)
arg1[7] = (*(*arg2 + 0x2b8))(arg2)
arg1[8] = (*(*arg2 + 0x300))(arg2)
arg1[9] = (*(*arg2 + 0x328))(arg2)
char rax_19 = (*(*arg2 + 0x2f8))(arg2)
*(arg1 + 0x28) &= 0xfffffffffffffffe
*(arg1 + 0x28) |= zx.q(rax_19) & 1
char rax_23 = (*(*arg2 + 0xc0))(arg2)
*(arg1 + 0x28) &= 0xfffffffffffffffd
*(arg1 + 0x28) |= (zx.q(rax_23) & 1) * 2
char rax_28 = (*(*arg2 + 0x1c0))(arg2)
*(arg1 + 0x28) &= 0xfffffffffffffffb
*(arg1 + 0x28) |= (zx.q(rax_28) & 1) << 2
char rax_33 = (*(*arg2 + 0x28))(arg2)
*(arg1 + 0x28) &= 0xfffffffffffffff7
*(arg1 + 0x28) |= (zx.q(rax_33) & 1) << 3
char rax_38 = (*(*arg2 + 0x210))(arg2)
*(arg1 + 0x28) &= 0xffffffffffffffef
*(arg1 + 0x28) |= (zx.q(rax_38) & 1) << 4
int64_t rax_52

if (*(*(*arg2 + 0x1e8))(arg2, &arg_8) == 0x400)
    rax_52 = 0
else if ((*(*arg2 + 0x1d8))(arg2) == 0)
    rax_52 = 0x20
else if ((*(*arg2 + 0x1d8))(arg2) == 1)
    rax_52 = 0x20
else if ((*(*arg2 + 0x1d8))(arg2) != 2)
    rax_52 = 0
else if ((*(*arg2 + 0x208))(arg2) == 0)
    rax_52 = 0
else
    rax_52 = 0x20

*(arg1 + 0x28) &= 0xffffffffffffffdf
*(arg1 + 0x28) |= rax_52
char rax_54 = (*(*arg2 + 0x50))(arg2)
*(arg1 + 0x28) &= 0xffffffffffffffbf
*(arg1 + 0x28) |= (zx.q(rax_54) & 1) << 6
char rax_59 = (*(*arg2 + 0x58))(arg2)
*(arg1 + 0x28) &= 0xffffffffffffff7f
*(arg1 + 0x28) |= (zx.q(rax_59) & 1) << 7
char rax_63 = sub_142134f80(arg2, 0)
*(arg1 + 0x28) &= 0xfffffffffffffeff
*(arg1 + 0x28) |= zx.q(rax_63) << 8
char rax_66 = sub_142134f80(arg2, 1)
*(arg1 + 0x28) &= 0xfffffffffffffdff
*(arg1 + 0x28) |= zx.q(rax_66) << 9
char rax_70 = (*(*arg2 + 0x2d0))(arg2)
*(arg1 + 0x28) &= 0xfffffffffffffbff
*(arg1 + 0x28) |= (zx.q(rax_70) & 1) << 0xa
char rax_75 = (*(*arg2 + 0x2e8))(arg2)
*(arg1 + 0x28) &= 0xfffffffffffff7ff
*(arg1 + 0x28) |= (zx.q(rax_75) & 1) << 0xb
char rax_80 = (*(*arg2 + 0x2a0))(arg2)
*(arg1 + 0x28) &= 0xffffffffffffefff
*(arg1 + 0x28) |= (zx.q(rax_80) & 1) << 0xc
char rax_85 = (*(*arg2 + 0x2a8))(arg2)
*(arg1 + 0x28) &= 0xffffffffffffdfff
*(arg1 + 0x28) |= (zx.q(rax_85) & 1) << 0xd
char rax_89 = sub_14212efd0(arg2)
*(arg1 + 0x28) &= 0xffffffffffffbfff
*(arg1 + 0x28) |= zx.q(rax_89) << 0xe
char rax_93 = (*(*arg2 + 0x110))(arg2)
*(arg1 + 0x28) &= 0xffffffffffff7fff
*(arg1 + 0x28) |= (zx.q(rax_93) & 1) << 0xf
char rax_98 = (*(*arg2 + 0xe0))(arg2)
*(arg1 + 0x28) &= 0xfffffffffffeffff
*(arg1 + 0x28) |= (zx.q(rax_98) & 1) << 0x10
char rax_103 = (*(*arg2 + 0xf0))(arg2)
*(arg1 + 0x28) &= 0xfffffffffffdffff
*(arg1 + 0x28) |= (zx.q(rax_103) & 1) << 0x11
char rax_108 = (*(*arg2 + 0xf8))(arg2)
*(arg1 + 0x28) &= 0xfffffffffffbffff
*(arg1 + 0x28) |= (zx.q(rax_108) & 1) << 0x12
char rax_113 = (*(*arg2 + 0x108))(arg2)
*(arg1 + 0x28) &= 0xfffffffffff7ffff
*(arg1 + 0x28) |= (zx.q(rax_113) & 1) << 0x13
char rax_118 = (*(*arg2 + 0x100))(arg2)
*(arg1 + 0x28) &= 0xffffffffffefffff
*(arg1 + 0x28) |= (zx.q(rax_118) & 1) << 0x14
char rax_123 = (*(*arg2 + 0xd0))(arg2)
*(arg1 + 0x28) &= 0xffffffffffdfffff
*(arg1 + 0x28) |= (zx.q(rax_123) & 1) << 0x15
char rax_128 = (*(*arg2 + 0xe8))(arg2)
*(arg1 + 0x28) &= 0xffffffffffbfffff
*(arg1 + 0x28) |= (zx.q(rax_128) & 1) << 0x16
char rax_133 = (*(*arg2 + 0x120))(arg2)
*(arg1 + 0x28) &= 0xffffffffff7fffff
*(arg1 + 0x28) |= (zx.q(rax_133) & 1) << 0x17
char rax_138 = (*(*arg2 + 0xc8))(arg2)
*(arg1 + 0x28) &= 0xfffffffffeffffff
*(arg1 + 0x28) |= (zx.q(rax_138) & 1) << 0x18
char rax_143 = (*(*arg2 + 0x118))(arg2)
*(arg1 + 0x28) &= 0xfffffffffdffffff
*(arg1 + 0x28) |= (zx.q(rax_143) & 1) << 0x19
uint32_t rax_149 = zx.d((*(*arg2 + 0x138))(arg2))
*(arg1 + 0x28) &= 0xfffffffffbffffff
*(arg1 + 0x28) |= (zx.q(rax_149) & 1) << 0x1a
char rax_153 = (*(*arg2 + 0x148))(arg2)
*(arg1 + 0x28) &= 0xfffffffff7ffffff
*(arg1 + 0x28) |= (zx.q(rax_153) & 1) << 0x1b
char rax_158 = (*(*arg2 + 0x130))(arg2)
*(arg1 + 0x28) &= 0xffffffffefffffff
*(arg1 + 0x28) |= (zx.q(rax_158) & 1) << 0x1c
char rax_163 = (*(*arg2 + 0x158))(arg2)
*(arg1 + 0x28) &= 0xffffffffdfffffff
*(arg1 + 0x28) |= (zx.q(rax_163) & 1) << 0x1d
char rax_168 = (*(*arg2 + 0x150))(arg2)
*(arg1 + 0x28) &= 0xffffffffbfffffff
*(arg1 + 0x28) |= (zx.q(rax_168) & 1) << 0x1e
uint32_t rax_174 = zx.d((*(*arg2 + 0x40))(arg2))
*(arg1 + 0x28) &= 0xffffffff7fffffff
*(arg1 + 0x28) |= (zx.q(rax_174) & 1) << 0x1f
uint32_t rax_179 = zx.d((*(*arg2 + 0x38))(arg2))
*(arg1 + 0x28) &= 0xfffffffeffffffff
*(arg1 + 0x28) |= (zx.q(rax_179) & 1) << 0x20
uint32_t rax_184 = zx.d((*(*arg2 + 0x30))(arg2))
*(arg1 + 0x28) &= 0xfffffffdffffffff
*(arg1 + 0x28) |= (zx.q(rax_184) & 1) << 0x21
uint32_t rax_189 = zx.d((*(*arg2 + 0x128))(arg2))
*(arg1 + 0x28) &= 0xfffffffbffffffff
*(arg1 + 0x28) |= (zx.q(rax_189) & 1) << 0x22
uint32_t rax_194 = zx.d((*(*arg2 + 0x330))(arg2))
*(arg1 + 0x28) &= 0xfffffff7ffffffff
*(arg1 + 0x28) |= (zx.q(rax_194) & 1) << 0x23
uint32_t rax_199 = zx.d((*(*arg2 + 0x160))(arg2))
*(arg1 + 0x28) &= 0xfffff7ffffffffff
*(arg1 + 0x28) |= (zx.q(rax_199) & 1) << 0x2b
uint32_t rax_204 = zx.d((*(*arg2 + 0x318))(arg2))
*(arg1 + 0x28) &= 0xffffefffffffffff
*(arg1 + 0x28) |= (zx.q(rax_204) & 1) << 0x2c
int64_t var_18
(*(*arg2 + 0x298))(arg2, &var_18)
int64_t rcx_53
rcx_53.b = sub_140a23cf0(&var_18, u"MaterialTexCoordScale", 1, 0, 0xffffffff) != 0xffffffff
*(arg1 + 0x28) &= 0xffffffefffffffff
*(arg1 + 0x28) |= rcx_53 << 0x24
int64_t rcx_56
rcx_56.b = sub_140a23cf0(&var_18, u"DebugViewMode", 1, 0, 0xffffffff) != 0xffffffff
*(arg1 + 0x28) &= 0xffffffdfffffffff
*(arg1 + 0x28) |= rcx_56 << 0x25
int64_t rcx_59
rcx_59.b = sub_140a23cf0(&var_18, u"MeshTexCoordSizeAccuracy", 1, 0, 0xffffffff) != 0xffffffff
*(arg1 + 0x28) &= 0xffffffbfffffffff
*(arg1 + 0x28) |= rcx_59 << 0x26
int64_t rcx_62
rcx_62.b = sub_140a23cf0(&var_18, u"PrimitiveDistanceAccuracy", 1, 0, 0xffffffff) != 0xffffffff
*(arg1 + 0x28) &= 0xffffff7fffffffff
*(arg1 + 0x28) |= rcx_62 << 0x27
int64_t rcx_65
rcx_65.b = sub_140a23cf0(&var_18, u"RequiredTextureResolution", 1, 0, 0xffffffff) != 0xffffffff
*(arg1 + 0x28) &= 0xfffffeffffffffff
*(arg1 + 0x28) |= rcx_65 << 0x28
int64_t rcx_68
rcx_68.b = sub_140a23cf0(&var_18, u"ComplexityAccumulate", 1, 0, 0xffffffff) != 0xffffffff
*(arg1 + 0x28) &= 0xfffffdffffffffff
*(arg1 + 0x28) |= rcx_68 << 0x29
int32_t rax_214 = sub_140a23cf0(&var_18, u"LODColoration", 1, 0, 0xffffffff)
int64_t rcx_71 = var_18
int64_t rsi
rsi.b = rax_214 != 0xffffffff
*(arg1 + 0x28) &= 0xfffffbffffffffff
*(arg1 + 0x28) |= rsi << 0x2a

if (rcx_71 != 0)
    sub_140a74f90(rcx_71)

return arg1
