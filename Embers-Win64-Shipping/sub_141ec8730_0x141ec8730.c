// 函数: sub_141ec8730
// 地址: 0x141ec8730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x158) = arg2[1] f+ *(arg1 + 0x158)

if (arg2[0xd].b == 0 || *(arg1 + 0x198) != 0)
    double zmm0 = *(arg1 + 0x160) f+ *arg2
    *(arg1 + 0x168) += 1
    *(arg1 + 0x160) = zmm0
    return 

double zmm1 = *arg2
sub_140b32ef0(arg1 + 0x18, zmm1, zmm1)
double zmm0_1

if (*(arg2 + 0x69) != 0)
    zmm0_1 = *(arg1 + 0xb8)
    *(arg1 + 0xa8) += 1
    *(arg1 + 0xb8) = zmm0_1 f+ *arg2

if (*(arg2 + 0x6a) != 0)
    zmm0_1 = *(arg1 + 0xc0)
    *(arg1 + 0xac) += 1
    *(arg1 + 0xc0) = zmm0_1 f+ *arg2

if (*(arg2 + 0x6b) != 0)
    zmm0_1 = *(arg1 + 0xc8)
    *(arg1 + 0xb0) += 1
    *(arg1 + 0xc8) = zmm0_1 f+ *arg2

if (*(arg2 + 0x6c) != 0)
    zmm0_1 = *(arg1 + 0xd0) f+ *arg2
    *(arg1 + 0xb4) += 1
    *(arg1 + 0xd0) = zmm0_1

*(arg1 + 0xd8) = arg2[4] f+ *(arg1 + 0xd8)
*(arg1 + 0xe0) = arg2[5] f+ *(arg1 + 0xe0)
*(arg1 + 0xe8) = arg2[6] f+ *(arg1 + 0xe8)
*(arg1 + 0xf0) = arg2[7] f+ *(arg1 + 0xf0)
*(arg1 + 0xf8) = *(arg1 + 0xf8) f+ arg2[0xb]
*(arg1 + 0x100) += arg2[0xc].d
*(arg1 + 0x108) = __maxsd_xmmsd_memsd(*(arg1 + 0x108), arg2[0xb])
*(arg1 + 0x110) += *(arg2 + 0x64)
int32_t rcx_1 = data_143f0f20c
int32_t rax_2 = *(arg1 + 0x124)

if (rax_2 s>= rcx_1)
    rcx_1 = rax_2

int32_t rax_3 = *(arg1 + 0x128)
*(arg1 + 0x124) = rcx_1
int32_t rcx_2 = data_143f0f20c

if (rax_3 s<= rcx_2)
    rcx_2 = rax_3

*(arg1 + 0x128) = rcx_2
*(arg1 + 0x12c) += data_143f0f20c
int32_t rax_5 = *(arg1 + 0x13c)
int32_t rcx_3 = data_143f0f210

if (rax_5 s>= rcx_3)
    rcx_3 = rax_5

int32_t rax_6 = *(arg1 + 0x140)
*(arg1 + 0x13c) = rcx_3
int32_t rcx_4 = data_143f0f210

if (rax_6 s<= rcx_4)
    rcx_4 = rax_6

*(arg1 + 0x140) = rcx_4
*(arg1 + 0x148) += sx.q(data_143f0f210)
double zmm1_1

if (*(arg2 + 0x6d) != 0)
    zmm1_1 = *arg2
    sub_140b32ef0(arg1 + 0x48, zmm1_1, zmm1_1)
    uint32_t rcx_6 = zx.d(*(arg2 + 0x6d))
    
    if (rcx_6 == 2)
        *(arg1 + 0x114) += 1
    else if (rcx_6 == 3)
        *(arg1 + 0x118) += 1
    else if (rcx_6 == 4)
        *(arg1 + 0x11c) += 1
    else if (rcx_6 == 5)
        *(arg1 + 0x120) += 1

zmm1_1 = arg2[0xa]
return sub_140b32ef0(arg1 + 0x78, zmm1_1, zmm1_1) __tailcall
