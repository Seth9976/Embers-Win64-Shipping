// 函数: sub_141760860
// 地址: 0x141760860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc6e10
*(arg1 + 0x24) = 0xffffffff
arg1[8] = 0
arg1[9] = 0
arg1[0xb] = 0
arg1[0xc].d = 0
*(arg1 + 0x64) = 1
arg1[0xd] = 0
arg1[0xe] = 0
void* rcx = &arg1[0xf]
int32_t var_20 = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x13].d = 0xffffffff
*(arg1 + 0x9c) = 0
arg1[0x15] = 0
arg1[0x16].d = 0
arg1[0x18] = 0
*(arg1 + 0xcc) = 0
__builtin_memset(&arg1[2], 0, 0x14)
arg1[0x19].b = 0
*(arg1 + 0xcc) |= 1
int128_t zmm6 = data_14399f720
*(arg1 + 0xcc) |= 2
*(arg1 + 0x30) = zmm6
*(arg1 + 0xcc) |= 0x2000000
void* rax_1 = arg1[2]
void arg_8
void* arg_18

if (rax_1 != 0)
    void* rcx_1 = *(rax_1 + 8)
    
    if (rcx_1 != 0)
        arg_18 = rax_1
        sub_140946410(rcx_1 + 8, &arg_8, &arg_18, nullptr)

arg1[0x17].w = 0
*(arg1 + 0xcc) |= 0x40000000
void* rax_2 = arg1[2]

if (rax_2 != 0)
    void* rcx_3 = *(rax_2 + 8)
    
    if (rcx_3 != 0)
        arg_18 = rax_2
        sub_140946410(rcx_3 + 8, &arg_8, &arg_18, nullptr)

arg1[0x18] = 0
return arg1
