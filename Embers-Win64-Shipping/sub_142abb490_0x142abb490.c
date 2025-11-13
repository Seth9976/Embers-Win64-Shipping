// 函数: sub_142abb490
// 地址: 0x142abb490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) s> 0 || arg2 == 0)
    return 

void* r9_1 = *(arg1 + 0x18)
int32_t rbx_1 = *(r9_1 + 8)

if (rbx_1 s<= 0)
    return 

int32_t r14_1 = 0
int32_t rax_1

if (rbx_1 - 1 s>= 0)
    rax_1 = *(r9_1 + 8)

int32_t rdx

if (rbx_1 - 1 s< 0 || rax_1 s<= 0 || rax_1 - (rbx_1 - 1) s<= 0)
    rdx = 0
else
    rdx = *(*(r9_1 + 0x18) + (sx.q(rbx_1 - 1) << 2))

sub_142ae7f70(r9_1, rdx + arg2, rbx_1 - 1)
void* r9_2 = *(arg1 + 0x18)

if (rbx_1 - 2 s>= 0)
    int32_t rax_4 = *(r9_2 + 8)
    
    if (rax_4 s> 0 && rax_4 - (rbx_1 - 2) s> 0)
        r14_1 = *(*(r9_2 + 0x18) + (sx.q(rbx_1 - 2) << 2))

sub_142ae7f70(r9_2, r14_1 + arg2, rbx_1 - 2)
