// 函数: sub_141049a70
// 地址: 0x141049a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0xb8)
int32_t r11 = *(arg1 + 0x100)
int32_t rdx_7 =
    ((((r8 & 1) * 2) | (r8 & 4)) * 2) | (not.d(r8 u>> 3) & 1) | (r8 & 2) | (arg2 & 0xfffffff0)
int32_t rax_8
rax_8.b = rdx_7.b & 0xe
char temp0 = rax_8.b
rax_8.b = neg.b(rax_8.b)
int32_t r8_2 = 0
int32_t rax_11 = (sbb.d(rax_8, rax_8, temp0 != 0) & 0x10) | (rdx_7 & 0xffffffef)
int32_t rcx = 0
int32_t rdx_10 = 0

if ((rax_11.b & 0x11) == 1)
    rcx = 0x20

if (*(arg1 + 0x88) == 1)
    rdx_10 = 0x40

if (r11 == 3)
    r8_2 = 0x80

int32_t rcx_3 = rcx | rdx_10 | r8_2 | (rax_11 & 0xffffff1f)
uint8_t r8_4 = (rcx_3 u>> 1).b
uint32_t rax_13
rax_13.b = r8_4 & 1
*(arg1 + 0xfd) = rax_13.b
int32_t r10_1 = rcx_3 & 0x10

if (r10_1 != 0)
    int32_t rdx_12 = rcx_3 & 1
    
    if ((rcx_3.b & 4) == 0)
        if ((r8_4 & 1) == 0)
            *(arg1 + 0xf8) = 8
            goto label_141049b66
        
        *(arg1 + 0xf8) = 0x10
        rax_13 = 0xe0
        
        if (rdx_12 == 0)
            rax_13 = 0x20
    else
        *(arg1 + 0xf8) = 4
    label_141049b66:
        rax_13 = 0xc0
        
        if (rdx_12 == 0)
            rax_13 = -2
    
    *(arg1 + 0xf4) = rax_13

if ((rcx_3.b & 0x40) == 0)
    if ((0x20 & rcx_3.b) != 0)
        *(arg1 + 0xf0) = 0xc0
        *(arg1 + 0xfc) = 0
else if (r10_1 == 0)
    *(arg1 + 0xfc) = r10_1.b
    int32_t rax_14 = 0xac3
    
    if (r11 == 3)
        rax_14 = 0x400
    
    *(arg1 + 0xf0) = rax_14
    return rax_14

return rax_13
