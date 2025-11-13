// 函数: sub_141cccd20
// 地址: 0x141cccd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0
*arg1 = &data_143218898
arg1[2] = arg2
arg1[3] = 0
arg1[4].d = 0
arg1[5] = 0
arg1[6].d = 0
arg1[8] = 0
arg1[0xa] = 0
arg1[0x10] = 0
arg1[0x11].d = 0
sub_140b4c480(&arg1[0x12])
sub_140b4c3a0(&arg1[0x29], 0, 0)
__builtin_memset(&arg1[0x3f], 0, 0x25)
arg1[0x44] = 0
arg1[0x45] = 0
int64_t* rax = j_sub_140a82f30(0x10)

if (rax == 0)
    rax = nullptr
else
    *rax = 0

arg1[0x47] = rax
arg1[0x46] = rax
int64_t* rax_1 = j_sub_140a82f30(0x10)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0

arg1[0x49] = rax_1
arg1[0x48] = rax_1
int64_t* rax_2 = j_sub_140a82f30(0x10)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = 0

arg1[0x4b] = rax_2
arg1[0x4a] = rax_2
arg1[0x4c] = 0
arg1[0x4d] = 0
int64_t* rax_3 = j_sub_140a82f30(0x10)

if (rax_3 == 0)
    rax_3 = nullptr
else
    *rax_3 = 0

arg1[0x4f] = rax_3
arg1[0x4e] = rax_3
__builtin_memset(&arg1[0x50], 0, 0x11)
__builtin_memset(&arg1[0x53], 0, 0x21)
arg1[0x28].b = 1
int64_t rax_4 = arg1[0x27]
int64_t rcx_3 = arg1[0x26] + 1

if (rcx_3 s> rax_4)
    int64_t rax_5 = rax_4 * 2
    
    if (rax_5 s>= rcx_3)
        rcx_3 = rax_5
    
    arg1[0x27] = rcx_3
    int64_t r14_1 = sx.q(arg1[0x25].d)
    int32_t rsi_3 = ((rcx_3 + 7) s>> 3).d - arg1[0x25].d
    int32_t rax_6 = r14_1.d + rsi_3
    arg1[0x25].d = rax_6
    
    if (rax_6 s> *(arg1 + 0x12c))
        sub_1405daba0(&arg1[0x24])
    
    memset(r14_1 + arg1[0x24], 0, sx.q(rsi_3))

return arg1
