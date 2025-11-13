// 函数: sub_142a78ca0
// 地址: 0x142a78ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return arg2

void* rbp = *(arg1 + 0xb0)
int32_t r15 = *(arg1 + 0x38)
int32_t rdx = *(rbp + 8)
int32_t rdx_1 = rdx + r15
char rax_2

if (rdx + r15 s< 0 || *(rbp + 0xc) s< rdx_1)
    rax_2 = sub_142aeb240(rbp, rdx_1, arg4)

int64_t rbx

if ((rdx + r15 s>= 0 && *(rbp + 0xc) s>= rdx_1) || rax_2 != 0)
    int64_t rdx_2 = sx.q(*(rbp + 8))
    rbx = *(rbp + 0x18) + (rdx_2 << 3)
    *(rbp + 8) = rdx_2.d + r15
else
    rbx = 0

if (*arg4 s> 0)
    *arg4 = 0x10311
    return arg2

int64_t* rbp_2 = rbx - (sx.q(*(arg1 + 0x38)) << 3)
int64_t* rax_8 = rbp_2

do
    *(rbx - rbp_2 + rax_8) = *rax_8
    rax_8 = &rax_8[1]
while (rax_8 != rbx)

*(arg1 + 0x110) -= 1

if (*(arg1 + 0x110) s<= 0)
    sub_142a74820(arg1, arg4)

rbp_2[1] = arg3
return rbx
