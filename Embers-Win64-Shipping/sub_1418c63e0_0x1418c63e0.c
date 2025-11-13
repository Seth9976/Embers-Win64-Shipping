// 函数: sub_1418c63e0
// 地址: 0x1418c63e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg4 + 0x98)
int64_t* r11_1 = zx.q(arg2) * 0x58 + *(arg1 + 0x98)
void* r8 = *((zx.q(arg3) << 6) + *r11_1 + 0x28)
uint64_t rdx_1
rdx_1.b = 0

if (data_1439c7a08 s> 1)
    int64_t rax_6 = *rbx
    bool cond:0 = *(r8 + 8) != rax_6
    *(r8 + 8) = rax_6
    uint64_t rcx
    rcx.b = cond:0
    bool cond:1 = *(r8 + 0x10) != arg5
    *(r8 + 0x10) = arg5
    rdx_1.b = cond:1
    rdx_1.b |= rcx.b
    *(arg1 + 0x90) |= rdx_1.b
    *(arg1 + 0xc0) |= rdx_1.b
    return arg5

void* r9 = r11_1[6] + zx.q(arg3) * 0xc
int32_t rax_3 = rbx[2].d

if (*(r9 + 4) != rax_3)
    *(r9 + 4) = rax_3
    rdx_1.b = 1
    *(r8 + 8) = *rbx

if (*(r9 + 8) != arg5)
    *(r9 + 8) = arg5
    rdx_1.b = 1
    *(r8 + 0x10) = arg5

r11_1[0xa].b |= rdx_1.b
*(arg1 + 0x90) |= rdx_1.b
*(arg1 + 0xc0) |= rdx_1.b
return arg5
