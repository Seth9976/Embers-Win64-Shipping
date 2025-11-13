// 函数: sub_141bb5ea0
// 地址: 0x141bb5ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e29f28 == 0)
    return 

void* rdi_1 = *(arg1 + 0xa8)

if (rdi_1 == 0)
    rdi_1 = sub_141ee69e0(arg1)

if (*(arg1 + 0x438) == 0)
    return 

void* rax = sub_141c122a0()

if (rax == 0)
    return 

void* rdx_1 = *(arg1 + 0x438)
void* r8_1 = rax + 0x30
rax = sx.q(*(rax + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != r8_1 || rdx_1 == 0
        || *(arg1 + 0x4a0) != 0 || rdi_1 == 0 || (*(rdi_1 + 0x11d) & 0x20) != 0)
    return 

void* rax_1 = *(arg1 + 0xa8)

if (rax_1 == 0)
    rax_1 = sub_141ee69e0(arg1)

*(arg1 + 0x4a0) = sub_141b70820(rax_1, *(arg1 + 0x438), 0)
