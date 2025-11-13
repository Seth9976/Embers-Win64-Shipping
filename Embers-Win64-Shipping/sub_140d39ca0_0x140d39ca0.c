// 函数: sub_140d39ca0
// 地址: 0x140d39ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d40488
arg1[1].d = GetCurrentThreadId()
*arg1 = &data_142eb1098
__builtin_memset(&arg1[2], 0, 0x11)
arg1[5] = 0
arg1[6].b = 0
__builtin_memset(arg1 + 0x34, 0, 0x14)
int32_t* rax_1 = j_sub_140a82f30(0xb0)
int32_t* rdx = rax_1

if (rax_1 == 0)
    rdx = nullptr
else
    __builtin_memset(rax_1, 0, 0x40)
    int64_t* rcx = &rax_1[0x10]
    rcx[2] = 0
    rcx[3].d = 0
    *(rcx + 0x1c) = 0x80
    int64_t* rax_2 = rcx[2]
    
    if (rax_2 != 0)
        rcx = rax_2
    
    *rcx = 0
    rcx[1] = 0
    rdx[0x18] = 0xffffffff
    rdx[0x19] = 0
    *(rdx + 0x70) = 0
    rdx[0x1e] = 0
    __builtin_memset(&rdx[0x20], 0, 0x14)
    *(rdx + 0x98) = 0
    rdx[0x28] = 0
    *(rdx + 0xa8) = 0

arg1[9] = rdx

if (rdx != 0)
    *rdx += 1

return arg1
