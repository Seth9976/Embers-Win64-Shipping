// 函数: sub_142a45b10
// 地址: 0x142a45b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xd0)

if (rcx != *(arg1 + 0x28))
    sub_142a7dcd0(rcx)

int64_t rcx_1 = *(arg1 + 0x28)

if (rcx_1 != arg1 + 0x30)
    sub_142a7dcd0(rcx_1)

int64_t rax = *(arg2 + 0x28)

if (rax != arg2 + 0x30)
    *(arg1 + 0x28) = rax
else
    void* rcx_2 = arg2 + 0x30
    char i
    
    do
        i = *rcx_2
        *(arg1 + 0x30 - (arg2 + 0x30) + rcx_2) = i
        rcx_2 += 1
    while (i != 0)
    *(arg1 + 0x28) = arg1 + 0x30

int64_t rax_1 = *(arg2 + 0xd0)

if (rax_1 == *(arg2 + 0x28))
    rax_1 = *(arg1 + 0x28)

void* rcx_3 = arg2 + 8
*(arg1 + 0xd0) = rax_1
void* rdx_3 = arg1 + 8 - rcx_3
char i_1

do
    i_1 = *rcx_3
    *(rdx_3 + rcx_3) = i_1
    rcx_3 += 1
while (i_1 != 0)
void* rcx_4 = arg2 + 0x14
void* rdx_5 = arg1 + 0x14 - rcx_4
char i_2

do
    i_2 = *rcx_4
    *(rdx_5 + rcx_4) = i_2
    rcx_4 += 1
while (i_2 != 0)
void* rcx_5 = arg2 + 0x1a
void* rdx_7 = arg1 + 0x1a - rcx_5
char i_3

do
    i_3 = *rcx_5
    *(rdx_7 + rcx_5) = i_3
    rcx_5 += 1
while (i_3 != 0)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0xd8) = *(arg2 + 0xd8)
*(arg2 + 0x28) = arg2 + 0x30
*(arg2 + 0xd0) = arg2 + 0x30
return arg1
