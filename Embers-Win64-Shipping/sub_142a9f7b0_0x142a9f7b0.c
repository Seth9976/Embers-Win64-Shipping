// 函数: sub_142a9f7b0
// 地址: 0x142a9f7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) != 0 || *(arg1 + 0x58) != 0 || (*(arg1 + 0x20) & 1) != 0
        || sub_142a9f640(arg1, *(arg1 + 0x1c) + arg3).b == 0)
    return 

int32_t r8 = 0
int32_t r11_1 = 0
int32_t rcx = **(arg1 + 0x10)
int32_t rdx_2

if (arg4 - 1 u<= 1)
    rdx_2 = 0
    
    if (*arg2 == 0)
        rdx_2 = arg2[1]
        r8 = 1
else
    rdx_2 = *arg2
    r8 = 1

int32_t* r9 = 4
int32_t* r10_1 = nullptr
void* r8_1 = &arg2[zx.q(r8)]

while (true)
    if (rdx_2 s> rcx)
        r11_1 += 1
        *(r10_1 + *(arg1 + 0x30)) = rcx
        r10_1 = &r10_1[1]
        rcx = *(r9 + *(arg1 + 0x10))
        r9 = &r9[1]
    else if (rdx_2 s>= rcx)
        if (rcx == 0x110000)
            break
        
        rdx_2 = *r8_1
        rcx = *(r9 + *(arg1 + 0x10))
        r9 = &r9[1]
        r8_1 += 4
    else
        r11_1 += 1
        *(r10_1 + *(arg1 + 0x30)) = rdx_2
        r10_1 = &r10_1[1]
        rdx_2 = *r8_1
        r8_1 += 4

*(*(arg1 + 0x30) + (sx.q(r11_1) << 2)) = 0x110000
int64_t rcx_2 = *(arg1 + 0x10)
*(arg1 + 0x1c) = r11_1 + 1
int64_t rax_9 = *(arg1 + 0x30)
*(arg1 + 0x30) = rcx_2
int32_t rcx_3 = *(arg1 + 0x18)
*(arg1 + 0x10) = rax_9
int32_t rax = *(arg1 + 0x38)
*(arg1 + 0x38) = rcx_3
int64_t rcx_4 = *(arg1 + 0x40)
*(arg1 + 0x18) = rax

if (rcx_4 == 0)
    return 

sub_142a7dcd0(rcx_4)
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
