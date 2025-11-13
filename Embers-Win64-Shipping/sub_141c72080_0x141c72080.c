// 函数: sub_141c72080
// 地址: 0x141c72080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int32_t rcx = *(arg1 + 0x70)
    
    if (rcx == 0)
        *(arg1 + 0xe0) |= 2
    else if (rcx == 1)
        *(arg1 + 0xe0) |= 0x10

int64_t* result = *(arg1 + 0x28)
int64_t rcx_2 = sx.q(*(arg1 + 0x50)) * 2
void* rdx = result[rcx_2]

if (*(rdx + 8) s<= 0)
    return result

void* rax = result[rcx_2 + 1]
void* var_18 = rdx
void* var_10_1 = rax

if (rax != 0)
    *(rax + 8) += 1

return sub_141c71a70(arg1, &var_18)
