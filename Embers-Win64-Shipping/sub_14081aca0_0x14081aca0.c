// 函数: sub_14081aca0
// 地址: 0x14081aca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14081a5d0(arg1, arg2, arg3, arg4)
arg1[0x3d].b = 0
*arg1 = &data_142dd8fb8
*(arg1 + 0x1ec) = 0
arg1[0x3e].d = 0x3f800000
*(arg1 + 0x1f4) = 0x3f800000
arg1[0x40].b = 0
*(arg1 + 0x204) = 0
arg1[0x41].d = 0x3f800000
*(arg1 + 0x20c) = 0x3f800000
arg1[0x43].b = 0
*(arg1 + 0x21a) = 0
*(arg1 + 0x21c) = 0
arg1[0x44].d = 0x10
*(arg1 + 0x224) = 0
arg1[0x45].d = 0x3e860a92
*(arg1 + 0x22c) = 1
__builtin_memset(arg1 + 0x234, 0, 0x14)
int64_t* rbx_1 = *(arg4 + 0x778)
arg1[0x3d].b = arg3[0x10].b
*(arg1 + 0x1ec) = *(arg3 + 0x84)
arg1[0x3e] = arg3[0x11]
arg1[0x3f] = arg3[0x12]
arg1[0x40].b = arg3[0x13].b
*(arg1 + 0x204) = *(arg3 + 0x9c)
arg1[0x41] = arg3[0x14]
arg1[0x42] = arg3[0x15]
arg1[0x43].b = arg3[0x16].b
*(arg1 + 0x219) = *(arg3 + 0xb1)
*(arg1 + 0x21a) = arg3[0x17].b
int64_t zmm0 = *(arg3 + 0xb4)

if (zmm0.d f>= 0f)
    zmm0 = __minss_xmmss_memss(zmm0.d, 0x3f7ff972)
else
    zmm0 = (zx.o(0)).q

*(arg1 + 0x21c) = zmm0.d
arg1[0x44].d = *(arg3 + 0xbc)
*(arg1 + 0x224) = arg3[0x18].b
zmm0 = *(arg3 + 0xc4)
int64_t zmm1

if (not(zmm0.d f<= 0f))
    zmm1 = 0x3f800000

if (zmm0.d f<= 0f || not(zmm0.d f< 1f))
    zmm1 = zmm0

zmm1.d = zmm1.d f* 0.0174532924f
arg1[0x45].d = zmm1.d
*(arg1 + 0x22c) = arg3[0x19].b
arg1[0x38].d = 0
sub_14083cd00(&arg1[0x16], 0xc, 1)
sub_14083d560(arg1, rbx_1, &arg3[0x1f], 0)
sub_14083d560(arg1, rbx_1, &arg3[0x3d], 1)
sub_14083d560(arg1, rbx_1, &arg3[0x2e], 2)
sub_14083d560(arg1, rbx_1, &arg3[0x6a], 3)
sub_14083d560(arg1, rbx_1, &arg3[0x5b], 4)
sub_14083d560(arg1, rbx_1, &arg3[0x79], 5)
sub_14083d560(arg1, rbx_1, &arg3[0x4c], 6)
sub_14083d560(arg1, rbx_1, &arg3[0xa6], 7)
arg1[0x46].d = 0
int32_t rbp
rbp.b = sub_14083d560(arg1, rbx_1, &arg3[0xb5], 8) != 0
arg1[0x46].d |= rbp
char rax_11
int32_t rcx_11
rax_11, rcx_11 = sub_14083d560(arg1, rbx_1, &arg3[0xc4], 9)
arg1[0x46].d |= sbb.d(rcx_11, rcx_11, rax_11 != 0) & 2
char rax_12
int32_t rcx_15
rax_12, rcx_15 = sub_14083d560(arg1, rbx_1, &arg3[0xd3], 0xa)
arg1[0x46].d |= sbb.d(rcx_15, rcx_15, rax_12 != 0) & 4
char rax_13
int32_t rcx_19
rax_13, rcx_19 = sub_14083d560(arg1, rbx_1, &arg3[0xe2], 0xb)
arg1[0x46].d |= sbb.d(rcx_19, rcx_19, rax_13 != 0) & 8
return arg1
