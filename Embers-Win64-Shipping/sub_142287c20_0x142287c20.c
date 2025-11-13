// 函数: sub_142287c20
// 地址: 0x142287c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
*arg1 = &data_143314f68
*(arg1 + 0x1c) = data_143dbb1f8.q
int32_t rax = data_143dbb200
*(arg1 + 0x24) = rax
arg1[2] = *(arg1 + 0x1c)
arg1[3].d = rax
arg1[5].b = 0
*(arg1 + 0x2c) = 1
arg1[6] = 0
arg1[7].d = 0
arg1[8] = &data_143314ec0
__builtin_memset(&arg1[9], 0, 0x29)
arg1[0xf] = 0
arg1[0x10] = 0
sub_142289220(&arg1[0x11])
arg1[0x5f] = 0
void* rcx_1 = &arg1[0x71]
arg1[0x60] = 0
arg1[0x5e] = &data_143314ee8
arg1[0x61].b = 0
arg1[0x63] = 0
arg1[0x64] = 0
arg1[0x62] = &data_143314f28
arg1[0x65].b = 0
__builtin_memset(&arg1[0x66], 0, 0x24)
__builtin_memset(&arg1[0x6b], 0, 0x30)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x75].d = 0xffffffff
*(arg1 + 0x3ac) = 0
arg1[0x76].d = 0xffffffff
return arg1
