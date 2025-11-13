// 函数: sub_141afc030
// 地址: 0x141afc030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
int64_t i_1 = 4
void*** r8 = &arg1[0x1c]
*arg1 = &data_143059450
void* rdx = &r8[0xd]
int64_t i

do
    *r8 = &data_142d4c350
    int64_t* rcx = rdx - 0x10
    *(rdx - 0x60) = 0x404
    r8 = &r8[0x14]
    __builtin_memset(rdx - 0x58, 0, 0x25)
    __builtin_memset(rdx - 0x30, 0, 0x20)
    *rdx = 0
    *(rdx + 8) = 0
    *(rdx + 0xc) = 0x80
    int64_t* rax_1 = *rdx
    rdx += 0xa0
    
    if (rax_1 != 0)
        rcx = rax_1
    
    *rcx = 0
    rcx[1] = 0
    *(rdx - 0x90) = 0xffffffff
    *(rdx - 0x8c) = 0
    *(rdx - 0x80) = 0
    *(rdx - 0x78) = 0
    *(rdx - 0x70) = 0xea60
    *(rdx - 0x6c) = 1
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[0x6c].d = 0
arg1[0x19].b = 1
int128_t var_18 = data_1439a9488
int32_t rax_2

if (sub_140cdd5d0(arg1, &var_18) s>= 4)
    var_18 = data_1439a9488
    rax_2.b = sub_140cdd5d0(arg1, &var_18) s>= 6
    rax_2.b += 1
else
    rax_2.b = 0

*(arg1 + 0x51) = rax_2.b
arg1[0xa].b = 1
*(arg1 + 0xc9) = 0x101
return arg1
