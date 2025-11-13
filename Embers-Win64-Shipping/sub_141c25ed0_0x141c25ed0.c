// 函数: sub_141c25ed0
// 地址: 0x141c25ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e90c00(arg1, sub_140d20910())
*arg1 = &data_14309df70
arg1[5] = &data_14309e4b0
__builtin_memcpy(&arg1[0xf6], 
    "\xb8\x1e\xc7\x41\x29\x5c\x95\x41\x71\x3d\xaa\x3f\xb8\x1e\xc7\x41\x29\x5c\x95\x41\x71\x3d\xaa\x3f", 
    0x18)
arg1[0xfc].b = 1
*(arg1 + 0x7e4) = 0x47c35000
arg1[0xfd].d = 0xffffffff
*(arg1 + 0x7ec) = 0
__builtin_memset(&arg1[0xff], 0, 0x18)
int64_t arg_8 = 0

if (*(arg1 + 0x80c) s<= 0xffffffff)
    sub_1405947f0(&arg1[0x100], 0)

int16_t* rax_1 = arg1[0x100]

if (rax_1 != 0)
    *rax_1 = 0

arg1[0xfe].d = 0
arg1[0x102] = 0
arg1[0x103].d = 0
*(arg1 + 0x81c) &= 0xfe
arg1[0x105].b &= 0xfe
*(arg1 + 0x82c) = 0x41000000
__builtin_memset(&arg1[0x10a], 0, 0x50)
*(arg1 + 0x3a) |= 2
*(arg1 + 0x89) |= 0x80
*(arg1 + 0x204) |= 1
*(arg1 + 0x7bc) = 0x41c71eb8
arg1[0xf8].d = 0x41955c29
__builtin_memcpy(&arg1[0xf9], 
    "\x00\x00\x48\x42\x00\x00\x48\x42\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x70\x41\x05\x00\x00\x00", 
    0x18)
void* rax_2
int64_t zmm1
rax_2, zmm1 = sub_140d209c0(arg1)

if (rax_2 != 0)
    void* rax_3 = sub_141c27b40()
    void* rcx_3 = *(rax_2 + 0x10)
    int64_t rdx_1 = sx.q(*(rax_3 + 0x38))
    
    if (rdx_1.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx_1 << 3)) == rax_3 + 0x30)
        sub_141c27100()
        sub_141c27100()
        sub_141c27200(arg1, rax_2 + 0x890, zmm1)
        *(arg1 + 0x83c) = *(rax_2 + 0x8a4)
        arg1[0x107].d = *(rax_2 + 0x8a0)

sub_141c26ec0(arg1)
return arg1
