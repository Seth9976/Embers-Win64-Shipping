// 函数: sub_140842da0
// 地址: 0x140842da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14081a5d0(arg1, arg2, arg3, arg4)
arg1[0x3d].w = 0
*arg1 = &data_142ddb310
*(arg1 + 0x1ec) = 0x3f000000
arg1[0x3e].d = 0x3f000000
*(arg1 + 0x1f4) = 2
arg1[0x3f].d = 0x3f800000
*(arg1 + 0x1fc) = 0x3f800000
arg1[0x40].d &= 0xfffffffc
arg1[0x40].d |= 4
*(arg1 + 0x204) = 0
sub_14088d3a0(&arg1[0x42], 0)
arg1[0x48].d = 0
*(arg1 + 0x264) = 0
arg1[0x3d].b = arg3[0x10].b
*(arg1 + 0x1e9) = *(arg3 + 0x81)
*(arg1 + 0x1ec) = *(arg3 + 0x84)
*(arg1 + 0x1f4) = *(arg3 + 0x8c)
int32_t rax_3 = arg1[0x40].d
arg1[0x3f] = arg3[0x12]
arg1[0x40].d ^= (rax_3 ^ arg3[0x13].d) & 1
int32_t rax_6 = arg1[0x40].d
int32_t rcx_4 = ((rax_6 ^ arg3[0x13].d) & 2) ^ rax_6
arg1[0x40].d = rcx_4
arg1[0x40].d = ((arg3[0x13].d ^ rcx_4) & 4) ^ rcx_4
*(arg1 + 0x204) = *(arg3 + 0x9c)
arg1[0x41].d = arg3[0x14].d
int32_t rax_13 = arg3[0x115].d
int32_t rax_15

if (rax_13 == 0)
    rax_15 = 0
else
    int32_t r8_1 = int.d(fconvert.t(*(arg3 + 0x94))) * int.d(fconvert.t(arg3[0x12].d))
    
    if (r8_1 s<= 1)
        r8_1 = 1
    
    rax_15 = divs.dp.d(sx.q(rax_13), r8_1)

arg1[0x48].d = rax_15

if (&arg1[0x46] != &arg3[0x114])
    int64_t rsi_1 = sx.q(arg3[0x115].d)
    int64_t rbp_1 = arg3[0x114]
    int32_t r8_2 = *(arg1 + 0x23c)
    arg1[0x47].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_2 != 0)
        sub_1406387e0(&arg1[0x46], rsi_1.d, r8_2)
        memcpy(arg1[0x46], rbp_1, (rsi_1 << 3).d)
    else
        *(arg1 + 0x23c) = 0

int64_t* r12 = *(arg4 + 0x778)
void* rbx_1 = &arg1[0x16]
arg1[0x38].d = 0
int64_t rbp_2 = sx.q(*(rbx_1 + 0x108))

if (rbp_2.d s< 0x11)
    *(rbx_1 + 0x108) = 0x11
    int32_t i_1 = 0x11 - rbp_2.d
    
    if (*(rbx_1 + 0x10c) s< 0x11)
        sub_14083a870(rbx_1, rbp_2.d)
    
    void* rax_17 = *(rbx_1 + 0x100)
    
    if (rax_17 != 0)
        rbx_1 = rax_17
    
    void* rbx_2 = rbx_1 + (rbp_2 << 4)
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rbx_2 = -1
            *(rbx_2 + 8) = 0
            *(rbx_2 + 0xc) = 1
            rbx_2 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (rbp_2.d s> 0x11)
    int32_t rax_20 = (rbp_2 - 0x11).d
    
    if (rax_20 != 0)
        *(rbx_1 + 0x108) = rbp_2.d - rax_20
        sub_14083ab70(rbx_1)

sub_14083d560(arg1, r12, &arg3[0x1a], 0)
sub_14083d560(arg1, r12, &arg3[0x38], 2)
sub_14083d560(arg1, r12, &arg3[0x29], 1)
sub_14083d560(arg1, r12, &arg3[0x47], 3)
sub_14083d560(arg1, r12, &arg3[0x56], 4)
sub_14083d560(arg1, r12, &arg3[0x65], 5)
sub_14083d560(arg1, r12, &arg3[0x74], 6)
sub_14083d560(arg1, r12, &arg3[0x83], 7)
sub_14083d560(arg1, r12, &arg3[0xce], 0xc)
sub_14083d560(arg1, r12, &arg3[0xdd], 0xd)
sub_14083d560(arg1, r12, &arg3[0x10a], 0x10)
sub_14083d560(arg1, r12, &arg3[0xec], 0xe)
sub_14083d560(arg1, r12, &arg3[0xfb], 0xf)
int32_t r15
r15.b = sub_14083d560(arg1, r12, &arg3[0x92], 8) != 0
*(arg1 + 0x264) |= r15
char rax_22
int32_t rcx_25
rax_22, rcx_25 = sub_14083d560(arg1, r12, &arg3[0xa1], 9)
*(arg1 + 0x264) |= sbb.d(rcx_25, rcx_25, rax_22 != 0) & 2
char rax_23
int32_t rcx_29
rax_23, rcx_29 = sub_14083d560(arg1, r12, &arg3[0xb0], 0xa)
*(arg1 + 0x264) |= sbb.d(rcx_29, rcx_29, rax_23 != 0) & 4
char rax_24
int32_t rcx_33
rax_24, rcx_33 = sub_14083d560(arg1, r12, &arg3[0xbf], 0xb)
*(arg1 + 0x264) |= sbb.d(rcx_33, rcx_33, rax_24 != 0) & 8
return arg1
