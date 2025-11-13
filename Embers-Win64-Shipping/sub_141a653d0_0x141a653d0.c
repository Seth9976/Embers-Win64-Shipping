// 函数: sub_141a653d0
// 地址: 0x141a653d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rax_1 = sub_142452380()
void* rdx = *(arg3 + 0x10)
int64_t rax_2 = sx.q(*(rax_1 + 0x38))
bool cond:0_1

if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
    cond:0_1 = (*(arg3 + 0x5c) & 8) != 0
label_141a65444:
    
    if (not(cond:0_1))
        goto label_141a6544a
    
    return 

void* rax_3 = sub_142459c10()
void* rdx_1 = *(arg3 + 0x10)
int64_t rax_4 = sx.q(*(rax_3 + 0x38))

if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
    cond:0_1 = (*(arg3 + 0x8b) & 2) != 0
    goto label_141a65444

label_141a6544a:
void* rcx_2
bool cond:1_1

if ((*(arg1 + 0x50) & 1) == 0)
    cond:1_1 = (*(arg1 + 0x28) & 2) != 0
    rcx_2 = arg1 + 8
else
    cond:1_1 = (*(arg1 + 0x50) & 2) != 0
    rcx_2 = arg1 + 0x30

if (not(cond:1_1))
    rcx_2 = *rcx_2

(*(*rcx_2 + 8))(rcx_2, arg3, arg2)
