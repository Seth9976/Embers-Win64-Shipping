// 函数: sub_142704ea0
// 地址: 0x142704ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1bd) &= 0xbf

if (*(arg1 + 0x1c0) != 0)
    return 

void* rax_1 = *(arg1 - 0x10)

if (rax_1 == 0)
    rax_1 = sub_141ee69e0(arg1 - 0xb8)

void* const rax = sub_1426fbe40(rax_1)
void* const rdi_1 = rax

if (rax == 0)
    return 

void* rax_3

if (arg1 == 0xb8)
    rax_3 = nullptr
else
    rax_3 = sub_140d21950(arg1 - 0xb8, sub_142736f50())

int32_t arg_8
sub_140ba6bd0(rdi_1 + 0x78, &arg_8, rax_3)
int64_t rax_4 = sx.q(arg_8)

if (rax_4.d == 0xffffffff)
    rax = nullptr
else
    rax = rax_4 * 0x38 + *(rdi_1 + 0x78)

int32_t* rcx_4 = *(rdi_1 + 0xd8)
void* rdx_3 = rax + 8

if (rax == 0)
    rdx_3 = nullptr

if (rcx_4 == 0 || rdx_3 == 0)
    return 

int32_t rdx_4 = *(rdx_3 + 0x18)

if (rdx_4 s>= 0)
    sub_1426177f0(rcx_4, rdx_4, 0)
