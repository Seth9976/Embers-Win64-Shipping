// 函数: sub_1420f3030
// 地址: 0x1420f3030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
int64_t* rdx = &arg1[0x47]
*arg1 = &data_1432c6758
arg1[0x45] = 0
arg1[0x46] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0x4b].d = 0xffffffff
*(arg1 + 0x25c) = 0
arg1[0x4d] = 0
arg1[0x4e].d = 0
arg1[0x50] = 0
arg1[0x51].d = 0x459c4000
arg1[0x52] = 0
arg1[0x53] = 0
*(arg1 + 0x2a1) &= 0xfe
sub_141dd7d00(arg1, 0)
*(arg1 + 0x32) = (*(arg1 + 0x32) & 0xf3) | 3
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"StaticMeshComponent0", 1)
int64_t* rax_3 = sub_1425b0750()
void* rax_4
int64_t r8_1
rax_4, r8_1 = sub_140cd9110(arg1, rbx, rax_3, rax_3, 1, 0)
arg1[0x44] = rax_4
r8_1.b = 1
int64_t r9_1 = *rax_4
(*(r9_1 + 0x620))(rax_4, data_143f3a590, r8_1, r9_1)
*(rax_4 + 0x14f) = 0
sub_141f256b0(rax_4, 0)
*(rax_4 + 0x20b) &= 0x37
*(rax_4 + 0x209) &= 0xdf
*(rax_4 + 0x208) |= 4
uint32_t rcx_5 = zx.d(arg1[0x54].b)
int32_t rdx_3 = data_143f48718
int32_t rcx_6

if (rcx_5 s<= rdx_3)
    rcx_6 = *(arg1 + 0x28c) - rcx_5 + rdx_3

float zmm0

if (rcx_5 s> rdx_3 || rcx_6 - 1 s< 0 || rcx_6 - 1 s>= rdx_3)
    zmm0 = (zx.o(0)).d
else
    zmm0 = *(data_143f48710 + (sx.q(rcx_6) << 2) - 4)

float zmm1 = arg1[0x51].d

if (not(zmm0 == 0f))
    zmm1 = zmm0

*(rax_4 + 0x1f8) = zmm1
int64_t rax_9 = arg1[0x44]
*(arg1 + 0x2a1) &= 0xf5
arg1[0x26] = rax_9
*(arg1 + 0x2a4) = 0
arg1[0x54].b = 1
return arg1
