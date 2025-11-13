// 函数: sub_141db5dc0
// 地址: 0x141db5dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14323c0f0
arg1[1] = *(arg2 + 8)
arg1[2].d = *(arg2 + 0x10)
arg1[3] = *(arg2 + 0x18)
arg1[4] = *(arg2 + 0x20)
arg1[5] = *(arg2 + 0x28)
arg1[6] = *(arg2 + 0x30)
arg1[7].d = *(arg2 + 0x38)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x44) = *(arg2 + 0x44)
arg1[0xa] = *(arg2 + 0x50)
void* rdx = &arg1[0xd]
arg1[0xb] = 0
arg1[0xc] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_10 = *(rdx + 0x10)

if (rax_10 != 0)
    rdx = rax_10

*rdx = 0
*(rdx + 8) = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
sub_1418233a0(&arg1[0xb], arg2 + 0x58)
arg1[0x15] = 0
void* rdx_2 = &arg1[0x17]
arg1[0x16] = 0
*(rdx_2 + 0x10) = 0
*(rdx_2 + 0x18) = 0
*(rdx_2 + 0x1c) = 0x80
void* rax_11 = *(rdx_2 + 0x10)

if (rax_11 != 0)
    rdx_2 = rax_11

*rdx_2 = 0
*(rdx_2 + 8) = 0
arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
arg1[0x1d] = 0
arg1[0x1e].d = 0
sub_140cd48b0(&arg1[0x15], arg2 + 0xa8)
arg1[0x1f] = *(arg2 + 0xf8)
arg1[0x20] = 0
int32_t i_2 = *(arg2 + 0x108)
void* rdi = *(arg2 + 0x100)
arg1[0x21].d = i_2

if (i_2 != 0)
    sub_140a05d20(&arg1[0x20], i_2, 0)
    char* rbx_1 = arg1[0x20]
    int64_t* rdi_1 = rdi + 8
    int32_t i
    
    do
        *rbx_1 = rdi_1[-1].b
        *(rbx_1 + 8) = *rdi_1
        *(rbx_1 + 0x10) = rdi_1[1].d
        *(rbx_1 + 0x14) = *(rdi_1 + 0xc)
        *(rbx_1 + 0x18) = rdi_1[2].d
        *(rbx_1 + 0x1c) = *(rdi_1 + 0x14)
        *(rbx_1 + 0x20) = rdi_1[3].d
        sub_141adec50(&rbx_1[0x28], &rdi_1[4])
        int64_t rax_20 = rdi_1[0x14]
        rdi_1 = &rdi_1[0x16]
        *(rbx_1 + 0xa8) = rax_20
        rbx_1 = &rbx_1[0xb0]
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    *(arg1 + 0x10c) = 0

void* r14 = arg2 + 0x110
void* rax_22 = arg1 - arg2
void* r15 = &arg1[0x22]
void* arg_8 = rax_22

for (int64_t i_1 = 2; i_1 != 0; )
    *r15 = 0
    i_1 -= 1
    int32_t j_1 = *(r14 + 8)
    void* rdi_2 = *r14
    *(rax_22 + r14 + 8) = j_1
    
    if (j_1 != 0)
        sub_140a05d20(r15, j_1, 0)
        char* rbx_2 = *r15
        int64_t* rdi_3 = rdi_2 + 8
        int32_t j
        
        do
            *rbx_2 = rdi_3[-1].b
            *(rbx_2 + 8) = *rdi_3
            *(rbx_2 + 0x10) = rdi_3[1].d
            *(rbx_2 + 0x14) = *(rdi_3 + 0xc)
            *(rbx_2 + 0x18) = rdi_3[2].d
            *(rbx_2 + 0x1c) = *(rdi_3 + 0x14)
            *(rbx_2 + 0x20) = rdi_3[3].d
            sub_141adec50(&rbx_2[0x28], &rdi_3[4])
            int64_t rax_30 = rdi_3[0x14]
            rdi_3 = &rdi_3[0x16]
            *(rbx_2 + 0xa8) = rax_30
            rbx_2 = &rbx_2[0xb0]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rax_22 = arg_8
    else
        *(rax_22 + r14 + 0xc) = 0
    
    r15 += 0x10
    r14 += 0x10

arg1[0x26] = 0
void* rdx_8 = &arg1[0x28]
arg1[0x27] = 0
*(rdx_8 + 0x10) = 0
*(rdx_8 + 0x18) = 0
*(rdx_8 + 0x1c) = 0x80
void* rax_31 = *(rdx_8 + 0x10)

if (rax_31 != 0)
    rdx_8 = rax_31

*rdx_8 = 0
*(rdx_8 + 8) = 0
*(arg1 + 0x164) = 0
arg1[0x2c].d = 0xffffffff
arg1[0x2e] = 0
arg1[0x2f].d = 0
sub_1405af100(&arg1[0x26], arg2 + 0x130)
arg1[0x30].b ^= (arg1[0x30].b ^ *(arg2 + 0x180)) & 1
char rax_33 = arg1[0x30].b
char rcx_7 = ((*(arg2 + 0x180) ^ rax_33) & 2) ^ rax_33
arg1[0x30].b = rcx_7
char rax_34 = ((*(arg2 + 0x180) ^ rcx_7) & 4) ^ rcx_7
arg1[0x30].b = rax_34
char rcx_8 = ((rax_34 ^ *(arg2 + 0x180)) & 8) ^ rax_34
arg1[0x30].b = rcx_8
char rax_35 = ((rcx_8 ^ *(arg2 + 0x180)) & 0x10) ^ rcx_8
arg1[0x30].b = rax_35
char rcx_9 = ((rax_35 ^ *(arg2 + 0x180)) & 0x20) ^ rax_35
arg1[0x30].b = rcx_9
char rax_36 = ((rcx_9 ^ *(arg2 + 0x180)) & 0x40) ^ rcx_9
arg1[0x30].b = rax_36
arg1[0x30].b = ((rax_36 ^ *(arg2 + 0x180)) & 0x7f) ^ *(arg2 + 0x180)
*(arg1 + 0x181) ^= (*(arg1 + 0x181) ^ *(arg2 + 0x181)) & 1
char rax_38 = *(arg1 + 0x181)
char rcx_10 = ((rax_38 ^ *(arg2 + 0x181)) & 2) ^ rax_38
*(arg1 + 0x181) = rcx_10
char rax_39 = ((rcx_10 ^ *(arg2 + 0x181)) & 4) ^ rcx_10
*(arg1 + 0x181) = rax_39
char rcx_11 = ((rax_39 ^ *(arg2 + 0x181)) & 8) ^ rax_39
*(arg1 + 0x181) = rcx_11
char rax_40 = ((rcx_11 ^ *(arg2 + 0x181)) & 0x10) ^ rcx_11
*(arg1 + 0x181) = rax_40
char rdx_10 = ((rax_40 ^ *(arg2 + 0x181)) & 0x20) ^ rax_40
*(arg1 + 0x181) = rdx_10
char rcx_12 = ((*(arg2 + 0x181) ^ rdx_10) & 0x40) ^ rdx_10
*(arg1 + 0x181) = rcx_12
*(arg1 + 0x181) = ((*(arg2 + 0x181) ^ rcx_12) & 0x7f) ^ *(arg2 + 0x181)
*(arg1 + 0x182) ^= (*(arg1 + 0x182) ^ *(arg2 + 0x182)) & 1
char rax_43 = *(arg1 + 0x182)
char rcx_13 = ((*(arg2 + 0x182) ^ rax_43) & 2) ^ rax_43
*(arg1 + 0x182) = rcx_13
char rax_44 = ((*(arg2 + 0x182) ^ rcx_13) & 4) ^ rcx_13
*(arg1 + 0x182) = rax_44
char rcx_14 = ((*(arg2 + 0x182) ^ rax_44) & 8) ^ rax_44
*(arg1 + 0x182) = rcx_14
char rax_45 = ((*(arg2 + 0x182) ^ rcx_14) & 0x10) ^ rcx_14
*(arg1 + 0x182) = rax_45
char rdx_11 = ((*(arg2 + 0x182) ^ rax_45) & 0x20) ^ rax_45
*(arg1 + 0x182) = rdx_11
char rcx_15 = ((*(arg2 + 0x182) ^ rdx_11) & 0x40) ^ rdx_11
*(arg1 + 0x182) = rcx_15
*(arg1 + 0x182) = ((*(arg2 + 0x182) ^ rcx_15) & 0x7f) ^ *(arg2 + 0x182)
*(arg1 + 0x183) ^= (*(arg1 + 0x183) ^ *(arg2 + 0x183)) & 1
char rax_48 = *(arg1 + 0x183)
char rcx_16 = ((rax_48 ^ *(arg2 + 0x183)) & 2) ^ rax_48
*(arg1 + 0x183) = rcx_16
char rax_49 = ((rcx_16 ^ *(arg2 + 0x183)) & 4) ^ rcx_16
*(arg1 + 0x183) = rax_49
char rcx_17 = ((*(arg2 + 0x183) ^ rax_49) & 8) ^ rax_49
*(arg1 + 0x183) = rcx_17
*(arg1 + 0x183) = ((*(arg2 + 0x183) ^ rcx_17) & 0x10) ^ rcx_17
*(arg1 + 0x184) = *(arg2 + 0x184)
*(arg1 + 0x185) = *(arg2 + 0x185)
int32_t rax_53 = 0

if (0 == *(arg2 + 0x188))
    *(arg2 + 0x188) = 0
else
    rax_53 = *(arg2 + 0x188)

arg1[0x31].d = rax_53
int32_t rax_54 = 0

if (0 == *(arg2 + 0x18c))
    *(arg2 + 0x18c) = 0
else
    rax_54 = *(arg2 + 0x18c)

*(arg1 + 0x18c) = rax_54
arg1[0x32].d = *(arg2 + 0x190)
*(arg1 + 0x194) = *(arg2 + 0x194)
arg1[0x33].d = *(arg2 + 0x198)
*(arg1 + 0x19c) = *(arg2 + 0x19c)
arg1[0x34].d = *(arg2 + 0x1a0)
*(arg1 + 0x1a4) = *(arg2 + 0x1a4)
arg1[0x35].d = *(arg2 + 0x1a8)
*(arg1 + 0x1ac) = *(arg2 + 0x1ac)
*(arg1 + 0x1bc) = *(arg2 + 0x1bc)
*(arg1 + 0x1c4) = *(arg2 + 0x1c4)
*(arg1 + 0x1d4) = *(arg2 + 0x1d4)
*(arg1 + 0x1dc) = *(arg2 + 0x1dc)
*(arg1 + 0x1e0) = *(arg2 + 0x1e0)
arg1[0x3e] = *(arg2 + 0x1f0)
arg1[0x3f].d = *(arg2 + 0x1f8)
*(arg1 + 0x1fc) = *(arg2 + 0x1fc)
arg1[0x40].d = *(arg2 + 0x200)
*(arg1 + 0x204) = *(arg2 + 0x204)
arg1[0x41].d = *(arg2 + 0x208)
*(arg1 + 0x20c) = *(arg2 + 0x20c)
arg1[0x42].d = *(arg2 + 0x210)
*(arg1 + 0x220) = *(arg2 + 0x220)
*(arg1 + 0x230) = *(arg2 + 0x230)
*(arg1 + 0x240) = *(arg2 + 0x240)
*(arg1 + 0x250) = *(arg2 + 0x250)
arg1[0x4c] = *(arg2 + 0x260)
arg1[0x4d].d = *(arg2 + 0x268)
*(arg1 + 0x26c) = *(arg2 + 0x26c)
*(arg1 + 0x274) = *(arg2 + 0x274)
sub_141db7640(&arg1[0x4f], arg2 + 0x278)
*(arg1 + 0x618) = *(arg2 + 0x618)
*(arg1 + 0x628) = *(arg2 + 0x628)
arg1[0xc7].d = *(arg2 + 0x638)
*(arg1 + 0x63c) = *(arg2 + 0x63c)
arg1[0xc8] = *(arg2 + 0x640)
arg1[0xc9].d = *(arg2 + 0x648)
*(arg1 + 0x64c) = *(arg2 + 0x64c)
arg1[0xca].d = *(arg2 + 0x650)
*(arg1 + 0x654) = *(arg2 + 0x654)
arg1[0xcb].d = *(arg2 + 0x658)
void* rdx_13 = &arg1[0xce]
*(arg1 + 0x65c) = *(arg2 + 0x65c)
arg1[0xcc] = 0
arg1[0xcd] = 0
*(rdx_13 + 0x10) = 0
*(rdx_13 + 0x18) = 0
*(rdx_13 + 0x1c) = 0x80
void* rax_81 = *(rdx_13 + 0x10)

if (rax_81 != 0)
    rdx_13 = rax_81

*rdx_13 = 0
*(rdx_13 + 8) = 0
arg1[0xd2].d = 0xffffffff
*(arg1 + 0x694) = 0
arg1[0xd4] = 0
arg1[0xd5].d = 0
sub_1405af100(&arg1[0xcc], arg2 + 0x660)
arg1[0xd6] = 0
uint32_t count = *(arg2 + 0x6b8)
int64_t rsi = *(arg2 + 0x6b0)
arg1[0xd7].d = count

if (count != 0)
    sub_1405da9e0(&arg1[0xd6], count, 0)
    memcpy(arg1[0xd6], rsi, count)
else
    *(arg1 + 0x6bc) = 0

arg1[0xd8] = 0
int64_t rdi_4 = sx.q(*(arg2 + 0x6c8))
int64_t rsi_1 = *(arg2 + 0x6c0)
arg1[0xd9].d = rdi_4.d

if (rdi_4.d != 0)
    sub_14083a1f0(&arg1[0xd8], rdi_4.d, 0)
    memcpy(arg1[0xd8], rsi_1, (rdi_4 << 5).d)
else
    *(arg1 + 0x6cc) = 0

arg1[0xda].d = *(arg2 + 0x6d0)
return arg1
