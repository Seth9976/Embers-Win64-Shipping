// 函数: sub_140e95f60
// 地址: 0x140e95f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = j_sub_140a82f30(0x50)
void* const rdi = rax

if (rax == 0)
    rdi = nullptr
else
    int64_t* rcx = rax + 0x10
    *(rax + 0x20) = 0
    *(rax + 0x28) = 0
    __builtin_memset(rax + 0x30, 0, 0x1c)
    *(rax + 0x40) = 0
    *(rax + 0x48) = 0
    __builtin_memset(rax, 0, 0x2c)
    *(rcx + 0x1c) = 0x80
    int64_t* rax_1 = rcx[2]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    *rcx = 0
    rcx[1] = 0
    *(rdi + 0x30) = 0xffffffff

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142edf0a0
    *(rax_2 + 0xc) = 1
    rax_2[2] = rdi

void* const var_28 = rdi
int128_t var_18 = zx.o(0)
sub_140e96b80(arg1, &var_18, &var_28)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t temp1_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rax_2)[1](rax_2, 1)

*arg1 = &data_142eda228
arg1[0x28] = 0
arg1[0x29].d = 0
__builtin_memset(&arg1[0x2a], 0, 0x30)
arg1[0x30] = 2
arg1[0x31] = 0
arg1[0x32] = 0
arg1[0x33] = 2
sub_140a96170(&arg1[0x34])
__builtin_memset(&arg1[0x37], 0, 0x20)
void* rcx_5 = &arg1[0x3b]
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_5 = *(rcx_5 + 0x10)

if (rax_5 != 0)
    rcx_5 = rax_5

*rcx_5 = 0
*(rcx_5 + 8) = 0
*(arg1 + 0x1fc) = 0
arg1[0x3f].d = 0xffffffff
arg1[0x41] = 0
arg1[0x42].d = 0
__builtin_memset(&arg1[0x43], 0, 0x18)
return arg1
