// 函数: sub_1418c6180
// 地址: 0x1418c6180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11_1 = zx.q(arg2) * 0x58 + *(arg1 + 0x98)
int64_t* r8 = *((zx.q(arg3) << 6) + *r11_1 + 0x28)
uint64_t rdx_1
rdx_1.b = 0

if (data_1439c7a08 s> 1)
    int64_t rax_3 = *(arg4 + 0x18)
    bool cond:0 = *r8 != rax_3
    *r8 = rax_3
    rdx_1.b = cond:0
    *(arg1 + 0x90) |= rdx_1.b
    *(arg1 + 0xc0) |= rdx_1.b
    return rax_3

int64_t rax_2 = r11_1[6]
uint64_t rcx_1 = zx.q(arg3) * 3
int32_t rbx = *(arg4 + 0x20)

if (*(rax_2 + (rcx_1 << 2)) != rbx)
    *(rax_2 + (rcx_1 << 2)) = rbx
    rdx_1.b = 1
    rax_2 = *(arg4 + 0x18)
    *r8 = rax_2

r11_1[0xa].b |= rdx_1.b
*(arg1 + 0x90) |= rdx_1.b
*(arg1 + 0xc0) |= rdx_1.b
return rax_2
