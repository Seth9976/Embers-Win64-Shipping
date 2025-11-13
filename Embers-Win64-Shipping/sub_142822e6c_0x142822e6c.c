// 函数: sub_142822e6c
// 地址: 0x142822e6c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x98)
*rdx[1] = 0
int64_t* i_1 = *rdx

if (i_1 != 0)
    int64_t* i
    
    do
        i = *i_1
        sub_14058ba50(i_1, 0x20)
        i_1 = i
    while (i != 0)

int64_t result = sub_14058ba50(*(arg1 + 0x98), 0x20)
void* rcx_1 = *(arg1 + 0x80)

if (rcx_1 != 0)
    result = sub_14058ba50(rcx_1, (*(arg1 + 0x90) - rcx_1) & 0xfffffffffffffff0)
    __builtin_memset(arg1 + 0x80, 0, 0x18)

void* rcx_2 = *(arg1 + 0x60)

if (rcx_2 != 0)
    result = sub_14058ba50(rcx_2, (*(arg1 + 0x70) - rcx_2) & 0xfffffffffffffff8)
    __builtin_memset(arg1 + 0x60, 0, 0x18)

int64_t rdx_7 = *(arg1 + 0x58)

if (rdx_7 u>= 0x10)
    result = sub_14058ba50(*(arg1 + 0x40), rdx_7 + 1)

*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0xf
*(arg1 + 0x40) = 0
int64_t rdx_9 = *(arg1 + 0x30)

if (rdx_9 u>= 0x10)
    result = sub_14058ba50(*(arg1 + 0x18), rdx_9 + 1)

*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0xf
*(arg1 + 0x18) = 0
return result
