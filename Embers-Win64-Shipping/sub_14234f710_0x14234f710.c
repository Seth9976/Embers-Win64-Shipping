// 函数: sub_14234f710
// 地址: 0x14234f710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rbx = sx.q(arg2[1].d)
int64_t rdi = *arg2
arg1[1].d = rbx.d

if (rbx.d != 0)
    sub_1405a4be0(arg1, rbx.d, 0)
    memcpy(*arg1, rdi, (rbx << 4).d)
else
    *(arg1 + 0xc) = 0

arg1[2] = arg2[2]
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x40) = *(arg2 + 0x40)
arg1[0xa] = arg2[0xa]
arg1[0xb].d = arg2[0xb].d
*(arg1 + 0x5c) = *(arg2 + 0x5c)
arg1[0xc].d = arg2[0xc].d
*(arg1 + 0x64) = *(arg2 + 0x64)
arg1[0xd].d = arg2[0xd].d
*(arg1 + 0x6c) = *(arg2 + 0x6c)
arg1[0xe].d = arg2[0xe].d
*(arg1 + 0x74) = *(arg2 + 0x74)
arg1[0xf].d = arg2[0xf].d
*(arg1 + 0x7c) = *(arg2 + 0x7c)
arg1[0x10].d = arg2[0x10].d
*(arg1 + 0x84) = *(arg2 + 0x84)
arg1[0x11].d = arg2[0x11].d
*(arg1 + 0x8c) = *(arg2 + 0x8c)
arg1[0x12].d = arg2[0x12].d
arg1[0x13] = arg2[0x13]
arg1[0x14] = 0
int32_t i_3 = arg2[0x15].d
void* rdi_1 = arg2[0x14]
arg1[0x15].d = i_3

if (i_3 != 0)
    sub_140a05d20(&arg1[0x14], i_3, 0)
    void* rbx_1 = arg1[0x14]
    void* rdi_2 = rdi_1 + 8
    int32_t i
    
    do
        *rbx_1 = *(rdi_2 - 8)
        *(rbx_1 + 8) = *rdi_2
        *(rbx_1 + 0x10) = *(rdi_2 + 8)
        *(rbx_1 + 0x14) = *(rdi_2 + 0xc)
        *(rbx_1 + 0x18) = *(rdi_2 + 0x10)
        *(rbx_1 + 0x1c) = *(rdi_2 + 0x14)
        *(rbx_1 + 0x20) = *(rdi_2 + 0x18)
        sub_141adec50(rbx_1 + 0x28, rdi_2 + 0x20)
        int64_t rax_24 = *(rdi_2 + 0xa0)
        rdi_2 += 0xb0
        *(rbx_1 + 0xa8) = rax_24
        rbx_1 += 0xb0
        i = i_3
        i_3 -= 1
    while (i != 1)
else
    *(arg1 + 0xac) = 0

void* r12 = &arg1[0x16]
int64_t rax_26 = arg1 - arg2
void** r14 = &arg2[0x16]
int64_t arg_8 = rax_26

for (int64_t i_1 = 2; i_1 != 0; )
    *r12 = 0
    i_1 -= 1
    int32_t j_1 = r14[1].d
    void* rdi_3 = *r14
    *(rax_26 + r14 + 8) = j_1
    
    if (j_1 != 0)
        sub_140a05d20(r12, j_1, 0)
        void* rbx_2 = *r12
        void* rdi_4 = rdi_3 + 8
        int32_t j
        
        do
            *rbx_2 = *(rdi_4 - 8)
            *(rbx_2 + 8) = *rdi_4
            *(rbx_2 + 0x10) = *(rdi_4 + 8)
            *(rbx_2 + 0x14) = *(rdi_4 + 0xc)
            *(rbx_2 + 0x18) = *(rdi_4 + 0x10)
            *(rbx_2 + 0x1c) = *(rdi_4 + 0x14)
            *(rbx_2 + 0x20) = *(rdi_4 + 0x18)
            sub_141adec50(rbx_2 + 0x28, rdi_4 + 0x20)
            int64_t rax_34 = *(rdi_4 + 0xa0)
            rdi_4 += 0xb0
            *(rbx_2 + 0xa8) = rax_34
            rbx_2 += 0xb0
            j = j_1
            j_1 -= 1
        while (j != 1)
        rax_26 = arg_8
    else
        *(rax_26 + r14 + 0xc) = 0
    
    r12 += 0x10
    r14 = &r14[2]

arg1[0x1a].b = arg2[0x1a].b
*(arg1 + 0xd4) = *(arg2 + 0xd4)
*(arg1 + 0xdc) = *(arg2 + 0xdc)
*(arg1 + 0xe4) = *(arg2 + 0xe4)
sub_141adec50(&arg1[0x1d], &arg2[0x1d])
arg1[0x2d] = arg2[0x2d]
arg1[0x2e] = 0
int32_t i_4 = arg2[0x2f].d
void* rdi_5 = arg2[0x2e]
arg1[0x2f].d = i_4

if (i_4 != 0)
    sub_140976950(&arg1[0x2e], i_4, 0)
    int64_t* rbx_3 = arg1[0x2e]
    char* rdi_6 = rdi_5 + 8
    int32_t i_2
    
    do
        *rbx_3 = *(rdi_6 - 8)
        rbx_3[1].b = *rdi_6
        *(rbx_3 + 0xc) = *(rdi_6 + 4)
        rbx_3[2].d = *(rdi_6 + 8)
        *(rbx_3 + 0x14) = *(rdi_6 + 0xc)
        rbx_3[3].d = *(rdi_6 + 0x10)
        *(rbx_3 + 0x1c) = *(rdi_6 + 0x14)
        sub_141adec50(&rbx_3[4], &rdi_6[0x18])
        int64_t rax_45 = *(rdi_6 + 0x98)
        rdi_6 = &rdi_6[0xa8]
        rbx_3[0x14] = rax_45
        rbx_3 = &rbx_3[0x15]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x17c) = 0

arg1[0x30].d = arg2[0x30].d
*(arg1 + 0x184) = *(arg2 + 0x184)
arg1[0x31] = arg2[0x31]
arg1[0x32] = arg2[0x32]
arg1[0x33] = arg2[0x33]
arg1[0x34] = arg2[0x34]
arg1[0x35] = arg2[0x35]
arg1[0x36].d = arg2[0x36].d
*(arg1 + 0x1b4) = *(arg2 + 0x1b4)
arg1[0x37].d = arg2[0x37].d
*(arg1 + 0x1bc) = *(arg2 + 0x1bc)
arg1[0x38].d = arg2[0x38].d
*(arg1 + 0x1c4) ^= (*(arg1 + 0x1c4) ^ *(arg2 + 0x1c4)) & 1
char rax_59 = *(arg1 + 0x1c4)
char rcx_9 = ((rax_59 ^ *(arg2 + 0x1c4)) & 2) ^ rax_59
*(arg1 + 0x1c4) = rcx_9
char rax_60 = ((*(arg2 + 0x1c4) ^ rcx_9) & 4) ^ rcx_9
*(arg1 + 0x1c4) = rax_60
char rcx_10 = ((*(arg2 + 0x1c4) ^ rax_60) & 8) ^ rax_60
*(arg1 + 0x1c4) = rcx_10
char rax_61 = ((*(arg2 + 0x1c4) ^ rcx_10) & 0x10) ^ rcx_10
*(arg1 + 0x1c4) = rax_61
char rcx_11 = ((*(arg2 + 0x1c4) ^ rax_61) & 0x20) ^ rax_61
*(arg1 + 0x1c4) = rcx_11
char rax_62 = ((rcx_11 ^ *(arg2 + 0x1c4)) & 0x40) ^ rcx_11
*(arg1 + 0x1c4) = rax_62
*(arg1 + 0x1c4) = ((rax_62 ^ *(arg2 + 0x1c4)) & 0x7f) ^ *(arg2 + 0x1c4)
return arg1
