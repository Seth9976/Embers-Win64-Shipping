// 函数: sub_140d429f0
// 地址: 0x140d429f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
void* rax_2 = arg2[2]
arg1[2] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[3] = arg2[3]
arg1[4].b ^= (arg1[4].b ^ arg2[4].b) & 1
char rcx = ((arg1[4].b ^ arg2[4].b) & 2) ^ arg1[4].b
arg1[4].b = rcx
char rax_5 = ((rcx ^ arg2[4].b) & 4) ^ rcx
arg1[4].b = rax_5
char rcx_1 = ((rax_5 ^ arg2[4].b) & 8) ^ rax_5
arg1[4].b = rcx_1
char rax_6 = ((rcx_1 ^ arg2[4].b) & 0x10) ^ rcx_1
arg1[4].b = rax_6
char rcx_2 = ((rax_6 ^ arg2[4].b) & 0x20) ^ rax_6
arg1[4].b = rcx_2
char rax_7 = ((rcx_2 ^ arg2[4].b) & 0x40) ^ rcx_2
arg1[4].b = rax_7
arg1[4].b = ((rax_7 ^ arg2[4].b) & 0x7f) ^ arg2[4].b
*(arg1 + 0x21) = *(arg2 + 0x21)
arg1[5] = arg2[5]
void* rax_10 = arg2[6]
arg1[6] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

arg1[7].d = arg2[7].d
arg1[8].b = arg2[8].b
arg1[9] = 0
arg1[0xa].d = 0

if (&arg2[9] != &arg1[9] && arg2[0xa].d != 0)
    int64_t* rcx_4 = arg2[9]
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x40))(rcx_4)

arg1[0xb] = arg2[0xb]
void* rax_15 = arg2[0xc]
arg1[0xc] = rax_15

if (rax_15 != 0)
    *(rax_15 + 8) += 1

arg1[0xd].d = arg2[0xd].d
arg1[0xe].b = arg2[0xe].b
arg1[0xf] = 0
arg1[0x10].d = 0

if (&arg2[0xf] != &arg1[0xf] && arg2[0x10].d != 0)
    int64_t* rcx_6 = arg2[0xf]
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x40))(rcx_6)

return arg1
