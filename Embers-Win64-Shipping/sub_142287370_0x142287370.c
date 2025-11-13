// 函数: sub_142287370
// 地址: 0x142287370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"Sprite", 1)
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, nullptr)
sub_142076470(arg1)
*arg1 = &data_1433132d0
void* rbx_1 = &arg1[0x53]
arg1[0x46] = 0
arg1[0x48] = 0
int64_t i = 4
arg1[0x49] = 0
arg1[0x4b] = 0
arg1[0x4c] = 0
arg1[0x4a] = &data_142e259e0
__builtin_memset(&arg1[0x4d], 0, 0x18)
arg1[0x51].w &= 0xe000
*(arg1 + 0x28a) &= 0xf8
*(arg1 + 0x28c) &= 0xe000
*(arg1 + 0x28e) &= 0xf8
arg1[0x52].w &= 0xe000
*(arg1 + 0x292) &= 0xf8
*(arg1 + 0x294) &= 0xe000
*(arg1 + 0x296) &= 0xf8

do
    __builtin_memset(rbx_1, 0, 0x14)
    i -= 1
    int64_t j_1 = 7
    int64_t j
    
    do
        int64_t rdi_1 = sx.q(*(rbx_1 + 8))
        int32_t rax_1 = (rdi_1 + 1).d
        *(rbx_1 + 8) = rax_1
        
        if (rax_1 s> *(rbx_1 + 0xc))
            sub_140594770(rbx_1)
        
        *(*rbx_1 + (rdi_1 << 1)) = 0xffff
        j = j_1
        j_1 -= 1
    while (j != 1)
    rbx_1 += 0x18
while (i != 0)

__builtin_memset(&arg1[0x60], 0, 0x20)
*(arg1 + 0x5b) |= 1
arg1[0xb].b |= 8
*(arg1 + 0x5f) = 1
sub_141dd8f80(arg1, 0)
*(arg1 + 0x59) &= 0xfe
arg1[0x21].d = 0x3f800000
arg1[0x46] = sub_1424a5dc0()
arg_8 = *sub_140b5e500(&arg_8, 0x11f)
int32_t arg_c = 0
arg1[0x4f] = arg_8.q
*(arg1 + 0x22a) = (*(arg1 + 0x22a) & 0x7e) | 1
return arg1
