// 函数: sub_140a5b710
// 地址: 0x140a5b710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
char* rsi = arg1[1]
sub_140596d10(arg2, rbx)
arg2[2].d = rbx[2].d
arg2[3].b = *rsi
sub_140596d10(&arg2[4], &rsi[8])
sub_140596d10(&arg2[6], &rsi[0x18])
sub_140596d10(&arg2[8], &rsi[0x28])
sub_140596d10(&arg2[0xa], &rsi[0x38])
arg2[0xc] = 0
void* rdx_5 = &arg2[0xe]
arg2[0xd] = 0
*(rdx_5 + 0x10) = 0
*(rdx_5 + 0x18) = 0
*(rdx_5 + 0x1c) = 0x80
void* rax_2 = *(rdx_5 + 0x10)

if (rax_2 != 0)
    rdx_5 = rax_2

*rdx_5 = 0
*(rdx_5 + 8) = 0
arg2[0x12].d = 0xffffffff
*(arg2 + 0x94) = 0
arg2[0x14] = 0
arg2[0x15].d = 0
sub_14094d9d0(&arg2[0xc], &rsi[0x48])
arg2[0x16].b = rsi[0x98]
arg2[0x17] = *(rsi + 0xa0)
void* rax_5 = *(rsi + 0xa8)
arg2[0x18] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

arg2[0x19].d = *(rsi + 0xb0)
return arg2
