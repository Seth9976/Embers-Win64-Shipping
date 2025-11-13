// 函数: sub_140882910
// 地址: 0x140882910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419c1ef0(arg1, arg2)
__builtin_memset(arg1 + 0x118, 0, 0x38)
__builtin_memset(arg1 + 0x150, 0xff, 0x18)
__builtin_memset(arg1 + 0x168, 0, 0x114)
*(arg1 + 0x27c) = 0xffff
__builtin_memset(arg1 + 0x280, 0, 0x18)
int32_t rbp = arg2[0xd].d
int64_t r14 = arg2[0xc]
*(arg1 + 0x298) = rbp

if (rbp != 0)
    sub_1405e3e80(arg1 + 0x290, rbp, 0)
    void* rcx_1 = *(arg1 + 0x290)
    
    if ((rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + arg1 + 0x290
    
    memcpy(rcx_1, r14, rbp * 2)
else
    *(arg1 + 0x29c) = 0

sub_140883cd0(arg1, &arg2[0xe], arg2[3])
return arg1
