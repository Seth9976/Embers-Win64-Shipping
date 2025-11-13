// 函数: sub_141c278f0
// 地址: 0x141c278f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x7e0)
char rcx = *(arg3 + 0x56)

if (rax == 0)
    *(arg3 + 0x56) = rcx & 7
    return rax

if (rax == 3)
    arg3[0x12d] = 0
    *(arg3 + 0x56) = rcx | 8
    return rax

rcx |= 0x10
arg3[0xe] = 0x3f800000
*(arg3 + 0x56) = rcx
int32_t rax_1 = *(arg1 + 0x83c)
rcx |= 0x20
*(arg3 + 0x56) = rcx
arg3[0xd0] = rax_1
int32_t rax_2 = *(arg1 + 0x7d0)
*(arg3 + 0x56) = rcx | 0x40
arg3[0xd1] = rax_2
arg3[0xd2] = *(arg1 + 0x7dc)
int32_t zmm0
float zmm6_1[0x4]
zmm0, zmm6_1 = sub_141c264b0(arg1, arg3)
void* rax_4 = *(arg1 + 0xa8)
*(arg1 + 0x840) = zmm0
float zmm1_1[0x4]

if (rax_4 != 0)
label_141c279cd:
    void* rax_5 = sub_142437e30(rax_4, 0, 1)
    
    if (rax_5 == 0)
        zmm1_1 = 0x42c80000
    else
        zmm1_1 = *(rax_5 + 0x240)
else
    rax_4 = sub_141ee69e0(arg1)
    
    if (rax_4 != 0)
        goto label_141c279cd
    
    zmm1_1 = 0x42c80000

bool cond:0 = (*(arg1 + 0x828) & 1) == 0
zmm1_1[0] = zmm1_1[0] f* *(arg1 + 0x7d8)
zmm1_1[0] = zmm1_1[0] * 0.00100000005f
float temp0[0x4] = __maxss_xmmss_memss(zmm1_1[0], *(arg1 + 0x840))
*(arg1 + 0x840) = temp0[0]
float zmm0_1[0x4] = temp0

if (not(cond:0) && (*(arg1 + 0x848) & 1) == 0)
    zmm0_1 = sub_140ad6340(*(arg1 + 0x844), temp0, zmm6_1, *(arg1 + 0x82c))
    *(arg1 + 0x840) = zmm0_1[0]

*(arg1 + 0x844) = zmm0_1[0]
*(arg3 + 0x56) |= 8
int32_t rax_6 = *(arg1 + 0x840)
*(arg3 + 0x56) |= 0x80
arg3[0x12d] = rax_6
int32_t rax_7 = *(arg1 + 0x7bc)
arg3[0x12c] = rax_7
return rax_7
