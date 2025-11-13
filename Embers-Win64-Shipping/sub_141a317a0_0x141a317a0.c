// 函数: sub_141a317a0
// 地址: 0x141a317a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[0x12]
__builtin_memset(&arg1[5], 0, 0x20)
arg1[9] = 2
*arg1 = &data_14302da28
__builtin_memset(&arg1[0xa], 0, 0x40)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]
char arg_8 = 0
int32_t arg_c = 0

if (rax != 0)
    rcx = rax

char arg_18 = 0
int64_t rax_1 = arg_8.q
int32_t arg_1c = 0
arg_8 = 0
*rcx = 0
rcx[1] = 0
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1d] = rax_1
arg1[0x1e] = arg_18.q
arg_c = 0
arg1[0x1f] = arg_8.q
arg_1c = 0
arg1[0x20] = 0.q
__builtin_memcpy(&arg1[0x21], 
    "\x60\xea\x00\x00\x01\x00\x00\x00\x60\xea\x00\x00\x01\x00\x00\x00\x01\x00", 0x12)
__builtin_memset(&arg1[0x24], 0, 0x28)

if (((arg1[1].d u>> 4).b & 1) == 0)
    int128_t var_18 = data_1439a9488
    
    if (sub_140cdd5d0(arg1, &var_18) s< 7)
        arg1[0x21] = *sub_141a514d0(&arg_8)

return arg1
