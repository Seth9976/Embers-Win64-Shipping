// 函数: sub_141c4e1a0
// 地址: 0x141c4e1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[2] = arg2[2]
arg1[3] = 0
int32_t i_2 = arg2[4].d
void* rsi = arg2[3]
arg1[4].d = i_2

if (i_2 != 0)
    sub_14083a1f0(&arg1[3], i_2, 0)
    int64_t* rcx_1 = arg1[3]
    int32_t* rdx_1 = rsi + 0x10
    int32_t i
    
    do
        *rcx_1 = *(rdx_1 - 0x10)
        void* rax_4 = *(rdx_1 - 8)
        rcx_1[1] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 0xc) += 1
        
        rcx_1[2].d = *rdx_1
        *(rcx_1 + 0x14) = rdx_1[1].b
        int64_t rax_7 = *(rdx_1 + 8)
        rdx_1 = &rdx_1[8]
        rcx_1[3] = rax_7
        rcx_1 = &rcx_1[4]
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    *(arg1 + 0x24) = 0

void* rdi = &arg1[5]
int64_t r12_1 = arg1 - arg2
void* rbx = &arg2[5]

for (int64_t i_1 = 2; i_1 != 0; )
    *rdi = 0
    i_1 -= 1
    int64_t rsi_1 = sx.q(*(rbx + 8))
    int64_t r13_1 = *rbx
    *(rbx + r12_1 + 8) = rsi_1.d
    
    if (rsi_1.d != 0)
        sub_1405c4a00(rdi, rsi_1.d, 0)
        memcpy(*rdi, r13_1, (rsi_1 << 3).d)
    else
        *(rbx + r12_1 + 0xc) = 0
    
    rdi += 0x10
    rbx += 0x10

arg1[9].d = arg2[9].d
*(arg1 + 0x4c) = *(arg2 + 0x4c)
arg1[0xa].d = arg2[0xa].d
arg1[0xb] = 0
int64_t rdi_1 = sx.q(arg2[0xc].d)
int64_t rsi_2 = arg2[0xb]
arg1[0xc].d = rdi_1.d

if (rdi_1.d != 0)
    sub_1405a4be0(&arg1[0xb], rdi_1.d, 0)
    memcpy(arg1[0xb], rsi_2, (rdi_1 << 4).d)
else
    *(arg1 + 0x64) = 0

arg1[0xd] = arg2[0xd]
arg1[0xe].d = arg2[0xe].d
*(arg1 + 0x74) = *(arg2 + 0x74)
arg1[0xf].d = arg2[0xf].d
*(arg1 + 0x7c) = *(arg2 + 0x7c)
sub_140596d10(&arg1[0x10], &arg2[0x10])
arg1[0x12] = arg2[0x12]
arg1[0x13] = arg2[0x13]
arg1[0x14] = arg2[0x14]
arg1[0x15] = arg2[0x15]
arg1[0x16] = arg2[0x16]
arg1[0x17] = arg2[0x17]
arg1[0x18].b ^= (arg1[0x18].b ^ arg2[0x18].b) & 1
char rax_23 = arg1[0x18].b
char rcx_7 = ((rax_23 ^ arg2[0x18].b) & 2) ^ rax_23
arg1[0x18].b = rcx_7
char rax_24 = ((rcx_7 ^ arg2[0x18].b) & 4) ^ rcx_7
arg1[0x18].b = rax_24
char rcx_8 = ((rax_24 ^ arg2[0x18].b) & 8) ^ rax_24
arg1[0x18].b = rcx_8
char rax_25 = ((rcx_8 ^ arg2[0x18].b) & 0x10) ^ rcx_8
arg1[0x18].b = rax_25
char rcx_9 = ((rax_25 ^ arg2[0x18].b) & 0x20) ^ rax_25
arg1[0x18].b = rcx_9
char rax_26 = ((rcx_9 ^ arg2[0x18].b) & 0x40) ^ rcx_9
arg1[0x18].b = rax_26
arg1[0x18].b = ((rax_26 ^ arg2[0x18].b) & 0x7f) ^ arg2[0x18].b
return arg1
