// 函数: sub_1419eae40
// 地址: 0x1419eae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*arg1 = &data_143016c48
arg1[5] = &data_1430174a8
arg1[0x3e] = &data_1430174d8
__builtin_memset(&arg1[0x86], 0, 0x50)
arg1[0x92] = 0
arg1[0x93].d = 0
*(arg1 + 0x49c) = 0x3f800000
arg1[0x96] = 0
arg1[0x97].d = 0
*(arg1 + 0x4bc) = 0x3f800000
*(arg1 + 0x4dc) = 0xffffffff
__builtin_memset(&arg1[0x9c], 0, 0x18)
__builtin_memset(&arg1[0xa0], 0, 0x40)
__builtin_memset(arg1 + 0x55c, 0, 0x20)
__builtin_memset(&arg1[0xb3], 0, 0x40)
void* rax = j_sub_140a82f30(0x60)
void* const rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(rax, 0, 0x20)
    int64_t* rcx = rax + 0x20
    rcx[2] = 0
    rcx[3].d = 0
    *(rcx + 0x1c) = 0x80
    int64_t* rax_1 = rcx[2]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    *rcx = 0
    rcx[1] = 0
    *(rdi + 0x40) = 0xffffffff
    *(rdi + 0x44) = 0
    *(rdi + 0x50) = 0
    *(rdi + 0x58) = 0

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_14301ab40
    *(rax_2 + 0xc) = 1
    rax_2[2] = rdi

arg1[0xbb] = rdi
arg1[0xbc] = rax_2
__builtin_memset(&arg1[0xbd], 0, 0x14)
sub_1422ac390(arg1, data_143f3a590, 1)
sub_141f256b0(arg1, 0)
*(arg1 + 0x20c) |= 4
*(arg1 + 0x20b) |= 0x28
*(arg1 + 0x20a) |= 0x80
*(arg1 + 0x209) &= 0xdf
arg1[0xa8].d = 0
arg1[0xaa].d = 0
int64_t rdi_1 = sx.q(arg1[0x89].d)
int32_t rax_3 = (rdi_1 + 1).d
arg1[0x89].d = rax_3

if (rax_3 s> *(arg1 + 0x44c))
    sub_1405a4d70(&arg1[0x88])

arg1[0x88][rdi_1] = 0
int64_t rdi_2 = sx.q(arg1[0x8d].d)
int32_t rax_5 = (rdi_2 + 1).d
arg1[0x8d].d = rax_5

if (rax_5 s> *(arg1 + 0x46c))
    sub_1405daba0(&arg1[0x8c])

int128_t zmm0 = data_142d3f660
int512_t zmm1
zmm1.o = zmm0
*(rdi_2 + arg1[0x8c]) = 0
*(arg1 + 0x14d) |= 8
*(arg1 + 0x20e) &= 0xfb
arg1[0xab].d = 0
arg1[0x4b].d = 0
*(arg1 + 0x4b0) = zmm0
*(arg1 + 0x554) = 0xffffffff
*(arg1 + 0x490) = zmm0
*(arg1 + 0x14f) = 0
arg1[0x47].d = 0xffffffff
return arg1
