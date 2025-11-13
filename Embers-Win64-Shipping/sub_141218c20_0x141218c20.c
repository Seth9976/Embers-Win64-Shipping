// 函数: sub_141218c20
// 地址: 0x141218c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f40cb0
arg1[1].d = 0
__builtin_memset(&arg1[2], 0, 0x70)
__builtin_memset(&arg1[0x12], 0, 0x18)
arg1[0x24].d = 0
arg1[0x27].d = 0
__builtin_memset(&arg1[0x28], 0, 0x20)
arg1[0x2c].d = 0x45a60000
arg1[0x2d].w = 0
*(arg1 + 0x16a) = 0
*(arg1 + 0x16c) = 0
arg1[0x2e].b = 1
arg1[0x32].b = 0
arg1[0x34].d = 0xffffffff
*(arg1 + 0x1a4) = 4
arg1[0x33] = &data_142f40c70
arg1[0x35].d = 2
arg1[0x36] = 0
arg1[0x37] = 0
arg1[0x39].d = 0xffffffff
*(arg1 + 0x1cc) = 4
arg1[0x38] = &data_142f40c70
arg1[0x3a].d = 2
arg1[0x3b] = 0
arg1[0x3c] = 0
*(arg1 + 0x1ec) = 0xffffffff
int64_t rax = j_sub_140a82f30(0x20)

if (rax == 0)
    rax = 0
else
    __builtin_memset(rax, 0, 0x1c)

arg1[0x11] = rax
int32_t r8 = data_143ec501c
uint64_t r8_1 = zx.q(r8 * r8)
sub_140834200(arg1[0x11], 0xc, (r8_1 << 2).d, 0, u"mVplListBuffer", 1, 0)
int64_t* rax_1 = j_sub_140a82f30(0x20)

if (rax_1 == 0)
    rax_1 = nullptr
else
    __builtin_memset(rax_1, 0, 0x20)

arg1[0x10] = rax_1
sub_14122b080(rax_1, 0x20000, 0x20)
int64_t* rax_2 = j_sub_140a82f30(0x20)

if (rax_2 == 0)
    rax_2 = nullptr
else
    __builtin_memset(rax_2, 0, 0x1c)

arg1[0x26] = rax_2
sub_140834200(rax_2, 0xc, r8_1.d << 4, 0, u"GvListBuffer", 1, 0)
int64_t* rax_3 = j_sub_140a82f30(0x20)

if (rax_3 == 0)
    rax_3 = nullptr
else
    __builtin_memset(rax_3, 0, 0x20)

arg1[0x25] = rax_3
sub_14122b080(rax_3, 0x20000, 0x20)
void* const rax_4 = j_sub_140a82f30(0xc0)

if (rax_4 == 0)
    rax_4 = nullptr
else
    *(rax_4 + 0x40) = 0
    *(rax_4 + 0x48) = 0
    *(rax_4 + 0x4c) = 0x3f800000
    *(rax_4 + 0x54) = 0
    *(rax_4 + 0x5c) = 0x3f800000
    *(rax_4 + 0x64) = 0
    *(rax_4 + 0x6c) = 0x3f800000

arg1[0x15] = rax_4
memset(rax_4, 0, 0xc0)
arg1[0x3d].b = 0
return arg1
