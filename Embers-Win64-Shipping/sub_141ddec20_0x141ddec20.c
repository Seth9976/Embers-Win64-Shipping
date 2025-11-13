// 函数: sub_141ddec20
// 地址: 0x141ddec20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dde9f0(arg1, arg2)
arg1[7].d |= 1
*arg1 = &data_143240318
int32_t rbp = 0

if (arg1[5] != u"Remove Linear Keys")
    int32_t rdx = 0
    arg1[6].d = 0
    
    if (*(arg1 + 0x34) != 0x13)
        sub_1405947f0(&arg1[5], 0x13)
        rdx = arg1[6].d
    
    arg1[6].d = rdx + 0x13
    
    if (rdx + 0x13 s> *(arg1 + 0x34))
        sub_140594770(&arg1[5])
    
    __builtin_wcscpy(arg1[5], u"Remove Linear Keys")

*(arg1 + 0x5c) |= 3
*arg1 = &data_1432405b0
__builtin_memcpy(&arg1[8], 
    "\x6f\x12\x83\x3a\xa6\x9b\x44\x3a\xbd\x37\x86\x35\x6f\x12\x83\x3a\x6f\x12\x83\x3a\x6f\x12\x83\x3a\x"
"00\x00\x00\x40", 
    0x1c)
__builtin_memset(&arg1[0xe], 0, 0x30)

if (arg1[5] != u"Compress each track independently")
    arg1[6].d = 0
    
    if (*(arg1 + 0x34) != 0x22)
        sub_1405947f0(&arg1[5], 0x22)
        rbp = arg1[6].d
    
    arg1[6].d = rbp + 0x22
    
    if (rbp + 0x22 s> *(arg1 + 0x34))
        sub_140594770(&arg1[5])
    
    __builtin_memcpy(arg1[5], u"Compress each track independently", 0x44)

arg1[0x14].d &= 0xfffffffe
*(arg1 + 0x5c) &= 0xfffffffc
*(arg1 + 0xac) &= 0xfffffffc
*(arg1 + 0xbc) &= 0xfffffffe
*(arg1 + 0x64) = 0x3be56042
arg1[0xd].d = 0x3b03126f
*(arg1 + 0x6c) = 0x3a378034
arg1[0xc].d = 0x3951b717
*(arg1 + 0xa4) = 0x41700000
arg1[0x15].d = 0xa
*(arg1 + 0xb4) = 0x3f800000
arg1[0x17].d = 0x3f800000
arg1[0x16].d = 1
__builtin_memcpy(&arg1[0x18], 
    "\xcd\xcc\x4c\x3f\xcd\xcc\x4c\x3f\x6f\x12\x83\x3a\x9a\x99\x99\x3e\x6f\x12\x83\x3a", 0x14)
int64_t rdi = sx.q(arg1[0xf].d)
int32_t rax_3 = (rdi + 1).d
arg1[0xf].d = rax_3

if (rax_3 s> *(arg1 + 0x7c))
    sub_1405daba0(&arg1[0xe])

*(rdi + arg1[0xe]) = 6
int64_t rdi_1 = sx.q(arg1[0xf].d)
int32_t rax_5 = (rdi_1 + 1).d
arg1[0xf].d = rax_5

if (rax_5 s> *(arg1 + 0x7c))
    sub_1405daba0(&arg1[0xe])

*(rdi_1 + arg1[0xe]) = 2
int64_t rdi_2 = sx.q(arg1[0x11].d)
int32_t rax_7 = (rdi_2 + 1).d
arg1[0x11].d = rax_7

if (rax_7 s> *(arg1 + 0x8c))
    sub_1405daba0(&arg1[0x10])

*(rdi_2 + arg1[0x10]) = 6
int64_t rdi_3 = sx.q(arg1[0x11].d)
int32_t rax_9 = (rdi_3 + 1).d
arg1[0x11].d = rax_9

if (rax_9 s> *(arg1 + 0x8c))
    sub_1405daba0(&arg1[0x10])

*(rdi_3 + arg1[0x10]) = 3
int64_t rdi_4 = sx.q(arg1[0x11].d)
int32_t rax_11 = (rdi_4 + 1).d
arg1[0x11].d = rax_11

if (rax_11 s> *(arg1 + 0x8c))
    sub_1405daba0(&arg1[0x10])

*(rdi_4 + arg1[0x10]) = 2
int64_t rdi_5 = sx.q(arg1[0x13].d)
int32_t rax_13 = (rdi_5 + 1).d
arg1[0x13].d = rax_13

if (rax_13 s> *(arg1 + 0x9c))
    sub_1405daba0(&arg1[0x12])

*(rdi_5 + arg1[0x12]) = 6
int64_t rdi_6 = sx.q(arg1[0x13].d)
int32_t rax_15 = (rdi_6 + 1).d
arg1[0x13].d = rax_15

if (rax_15 s> *(arg1 + 0x9c))
    sub_1405daba0(&arg1[0x12])

*(rdi_6 + arg1[0x12]) = 3
int64_t rdi_7 = sx.q(arg1[0x13].d)
int32_t rax_17 = (rdi_7 + 1).d
arg1[0x13].d = rax_17

if (rax_17 s> *(arg1 + 0x9c))
    sub_1405daba0(&arg1[0x12])

*(rdi_7 + arg1[0x12]) = 2
return arg1
