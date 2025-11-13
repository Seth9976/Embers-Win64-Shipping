// 函数: sub_14228fe90
// 地址: 0x14228fe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    goto label_14228febd

if (arg3 == 0)
    return 

sub_14228fd40(arg1, *(arg1 + 0x38))
label_14228febd:

if (arg3 == 0)
    return 

int64_t* rcx = *(arg1 + 0x18)
int32_t rsi_1 = *(arg1 + 0x34)
*(arg1 + 0x34) = rsi_1 + arg3
(*(*rcx + 8))(rcx, arg4, 0)

if (*(arg1 + 0x34) u<= 0)
    return 

int64_t* rcx_1 = *(arg1 + 0x18)
int32_t r8 = 0
*(arg1 + 0x28) = (*(*rcx_1 + 0x30))(rcx_1)

if (arg3 == 0)
    return 

int32_t* r9_1 = arg2 + 0x70

do
    uint64_t rax = zx.q(*r9_1)
    uint64_t rdx_3 = zx.q((r8 + rsi_1) * *(arg1 + 0x30))
    r9_1 = &r9_1[0x1d]
    r8 += 1
    *(rdx_3 + *(arg1 + 0x28)) = rax.d
while (r8 u< arg3)
