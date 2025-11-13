// 函数: sub_1421a8c00
// 地址: 0x1421a8c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9600(arg1)
arg1[0x3a] = arg2
void* rdx = &arg1[0x3f]
arg1[0x3b] = arg3
*arg1 = &data_1432eeb40
arg1[0x3d] = 0
arg1[0x3e] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
__builtin_memset(&arg1[0x43], 0, 0x50)
arg1[0x4d] = data_143dbb208
arg1[0x4e].d = data_143dbb210
*(arg1 + 0x274) = 0
*(arg1 + 0x27c) = 0
arg1[0x50].d = 0xffffffff
*(arg1 + 0x284) = 0
*(arg1 + 0x28c) = 0
void*** rax_2 = j_sub_140a82f30(0x220)
void*** rcx = rax_2

if (rax_2 == 0)
    rcx = nullptr
else
    rax_2[1].d = 0xffffffff
    *(rax_2 + 0xc) = 4
    __builtin_memset(&rax_2[2], 0, 0x28)
    *rcx = &data_1432eea28
    rcx[8].d = data_143dbb1f8.d
    *(rcx + 0x44) = data_143dbb1fc.d
    rcx[9].d = data_143dbb200.d
    *(rcx + 0x4c) = 0
    rcx[0xa].d = data_143dbb1f8.d
    *(rcx + 0x54) = data_143dbb1fc.d
    rcx[0xb].d = data_143dbb200.d
    *(rcx + 0x5c) = 0
    rcx[0xc].d = 0x3f800000
    *(rcx + 0x64) = 0x3f800000
    *(rcx + 0x6c) = 0
    *(rcx + 0x74) = 0
    __builtin_memset(&rcx[0x14], 0, 0x28)
    *(rcx + 0xf0) = data_14399f6e0
    *(rcx + 0x100) = data_14399f6f0
    *(rcx + 0x110) = data_14399f700
    *(rcx + 0x120) = data_14399f710
    *(rcx + 0x130) = data_14399f6e0
    *(rcx + 0x140) = data_14399f6f0
    *(rcx + 0x150) = data_14399f700
    *(rcx + 0x160) = data_14399f710
    *(rcx + 0x170) = data_14399f6e0
    *(rcx + 0x180) = data_14399f6f0
    *(rcx + 0x190) = data_14399f700
    int128_t zmm1 = data_14399f710
    *(rcx + 0x1bc) &= 0xfffffff0
    *(rcx + 0x1a0) = zmm1
    rcx[0x36] = 0
    rcx[0x37].d = 0xffffffff
    rcx[0x38].b = 0
    rcx[0x3b].d = 0xffffffff
    *(rcx + 0x1dc) = 4
    __builtin_memset(&rcx[0x3c], 0, 0x14)
    rcx[0x3a] = &data_1432eea68
    rcx[0x3f] = 0
    rcx[0x40].d = 0xffffffff
    *(rcx + 0x204) = 0
    rcx[0x41].b = 0
    *(rcx + 0x20c) = 0
    rcx[0x42].d = 0x1000101

void* rax_3 = arg1[0x3b]
arg1[0x3c] = rcx
int64_t* r9 = *(rax_3 + 0x30)

if (r9 != 0)
    (*(*r9 + 0x260))(r9, &rcx[0x18], 0)
    rcx = arg1[0x3c]

rcx[0x41].b = *(arg3 + 0x16c) & 1
*(arg1[0x3c] + 0x20c) = zx.d(*(arg3 + 0x170))
return arg1
