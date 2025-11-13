// 函数: sub_142136080
// 地址: 0x142136080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t rdx = sx.q(*((rdi << 5) + r10_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 5) + r10_1) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int64_t* r9_2 = (sx.q(rdi.d) << 5) + *arg1
int64_t* rcx_6 = arg3[1]
*r9_2 = **arg3
r9_2[2] = *rcx_6
r9_2[3].d = 0xffffffff
int32_t r8_2 = r9_2[1].d
uint32_t rcx_8 = (*r9_2 u>> 4).d
int32_t rdx_6 = (0x9e3779b9 - rcx_8) ^ rcx_8 << 8
int32_t r10_4 = neg.d(rdx_6 + rcx_8) ^ rdx_6 u>> 0xd
int32_t rcx_11 = (rcx_8 - rdx_6 - r10_4) ^ r10_4 u>> 0xc
int32_t rdx_9 = (rdx_6 - r10_4 - rcx_11) ^ rcx_11 << 0x10
int32_t r10_7 = (r10_4 - rdx_9 - rcx_11) ^ rdx_9 u>> 5
int32_t rcx_14 = (rcx_11 - rdx_9 - r10_7) ^ r10_7 u>> 3
int32_t rdx_12 = (rdx_9 - r10_7 - rcx_14) ^ rcx_14 << 0xa
int32_t r10_12 = (((r10_7 - rdx_12 - rcx_14) ^ rdx_12 u>> 0xf) - r8_2) ^ r8_2 u>> 0xd
int32_t r11_2 = (0x9e3779b9 - r10_12 - r8_2) ^ r10_12 << 8
int32_t r8_5 = (r8_2 - r11_2 - r10_12) ^ r11_2 u>> 0xd
int32_t r10_15 = (r10_12 - r11_2 - r8_5) ^ r8_5 u>> 0xc
int32_t r11_5 = (r11_2 - r10_15 - r8_5) ^ r10_15 << 0x10
int32_t r8_8 = (r8_5 - r11_5 - r10_15) ^ r11_5 u>> 5
int32_t r10_18 = (r10_15 - r11_5 - r8_8) ^ r8_8 u>> 3
int32_t r11_8 = (r11_5 - r10_18 - r8_8) ^ r10_18 << 0xa
sub_142141560(arg1, arg2, (r8_8 - r11_8 - r10_18) ^ r11_8 u>> 0xf, r9_2, rdi.d, arg4)
return arg2
