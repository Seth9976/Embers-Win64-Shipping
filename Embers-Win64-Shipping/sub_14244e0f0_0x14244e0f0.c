// 函数: sub_14244e0f0
// 地址: 0x14244e0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x22e)

if ((rax & 1) != 0)
    *(arg1 + 0x250)
    return rax

if ((rax & 2) != 0)
    *(arg1 + 0x250) = *(arg1 + 0x254)
    return rax

int64_t* rax_1 = sub_142565030()
void* rax_2 = rax_1[0x23]

if (rax_2 == 0)
    int64_t rdx_1 = *rax_1
    (*(rdx_1 + 0x390))(rax_1, rdx_1)
    rax_2 = rax_1[0x23]

*(arg1 + 0x250) = *(rax_2 + 0x38)
return rax_2
