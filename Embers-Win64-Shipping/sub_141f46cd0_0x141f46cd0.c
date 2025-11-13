// 函数: sub_141f46cd0
// 地址: 0x141f46cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f6fb90(arg1, arg2)

if (*(arg2 + 0x2a) s< 0)
    int64_t r9_1 = *arg2
    (*(r9_1 + 8))(arg2, sx.q(*(arg1 + 0x680)) * 0x30, sx.q(*(arg1 + 0x684)) * 0x30, r9_1)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x7e8)) * 2, sx.q(*(arg1 + 0x7ec)) * 2)

if (arg2[8].d s< 0x19a && (*(arg1 + 0x71c) & 2) != 0)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x760)

if ((*(arg1 + 0x2b4) & 0x10) != 0)
    *(arg1 + 0x719) |= 0x40

char rcx_3 = arg2[5].b
char rax_5 = rcx_3

if ((rcx_3 & 1) != 0 && arg2[8].d s< 0x1ed)
    int64_t rdx_5 = *(arg1 + 0x640)
    
    if (rdx_5 != 0)
        *(arg1 + 0x648) = rdx_5
        rax_5 = arg2[5].b

if ((rax_5 & 1) != 0)
    if (*(arg1 + 0x640) != 0)
        *(arg1 + 0x640) = 0
        rax_5 = arg2[5].b
    
    if ((rax_5 & 1) != 0 && arg2[8].d s< 0x189)
        *(arg1 + 0x2b4) &= 0x7f

uint32_t result = (*(*arg2 + 0x1d8))(arg2, &data_1439a94b8)

if ((arg2[5].b & 1) != 0)
    result = sub_140b4e7c0(arg2, &data_1439a94b8)
    
    if (result s< 0xb)
        result = zx.d(*(arg1 + 0x71a))
        *(arg1 + 0x71a) = ((not.b(result.b u>> 4) << 3 ^ result.b) & 8) ^ result.b

return result
