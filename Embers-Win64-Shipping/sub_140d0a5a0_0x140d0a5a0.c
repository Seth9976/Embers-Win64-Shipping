// 函数: sub_140d0a5a0
// 地址: 0x140d0a5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x78)

if (rdx == 0)
    *(arg1 + 0x78) = j_sub_140bdca20()
else
    (*(*arg2 + 0x170))(arg2, rdx)

sub_140d0a9b0(arg1)
void* r8_1 = *(arg1 + 0x78)
int32_t rdx_1 = *(r8_1 + 0x5c)
*(arg1 + 0x3c) = (rdx_1 - 1 + *(r8_1 + 0x58)) & neg.d(rdx_1)
int64_t* rcx_5 = *(r8_1 + 0xb8)
int64_t rax_3

if (rcx_5 == 0)
    rax_3 = 0x8000000000000
else
    rax_3 = (*(*rcx_5 + 0x120))(rcx_5)

*(arg1 + 0x40) |= rax_3
void* rcx_6 = *(arg1 + 0x78)
int64_t result = *(arg1 + 0x40)

if ((*(rcx_6 + 0xb0) & 0x8000) != 0)
    result |= 0x200
    *(arg1 + 0x40) = result

if ((*(rcx_6 + 0xb0) & 0x2000) != 0)
    result |= 0x40000000
    *(arg1 + 0x40) = result
    rcx_6 = *(arg1 + 0x78)

if ((*(rcx_6 + 0xb0) & 0x4000) != 0)
    result |= 0x1000000000
    *(arg1 + 0x40) = result

return result
