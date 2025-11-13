// 函数: sub_1422c0070
// 地址: 0x1422c0070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg2
(*(r9 + 8))(arg2, sx.q(*(arg1 + 0x30)) * 0x30, sx.q(*(arg1 + 0x34)) * 0x30, r9)
(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x40)) << 5, sx.q(*(arg1 + 0x44)) << 5)
(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x50)) << 4, sx.q(*(arg1 + 0x54)) << 4)
(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x70)) << 5, sx.q(*(arg1 + 0x74)) << 5)
int64_t* rsi = *(arg1 + 0x78)

if (rsi != 0)
    (*(*arg2 + 8))(arg2, 0xc0, 0xc0)
    (*(*rsi + 0x210))(rsi, arg2)

int64_t r9_1 = *arg2
int64_t result = (*(r9_1 + 8))(arg2, zx.q(*(arg1 + 0xa0) + 0x1f) u>> 5 << 2, 
    zx.q(*(arg1 + 0xa4) + 0x1f) u>> 5 << 2, r9_1)

if (*(arg1 + 0x58) == 0)
    return result

(*(*arg2 + 8))(arg2, 0x28, 0x28)
void* rbx_1 = *(arg1 + 0x58)
int64_t r9_2 = *arg2
(*(r9_2 + 8))(arg2, sx.q(*(rbx_1 + 8)) * 0x18, sx.q(*(rbx_1 + 0xc)) * 0x18, r9_2)
return (*(*arg2 + 8))(arg2, sx.q(*(rbx_1 + 0x18)) * 2, sx.q(*(rbx_1 + 0x1c)) * 2)
