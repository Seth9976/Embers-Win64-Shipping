// 函数: sub_140ca3e70
// 地址: 0x140ca3e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int512_t zmm1
result, zmm1 = sub_140ce8e10(arg1, arg2)

if (*(arg2 + 0x2a) s>= 0)
    return result

int64_t r9_1 = *arg2
(*(r9_1 + 8))(arg2, sx.q(*(arg1 + 0x38)) * 0xc, sx.q(*(arg1 + 0x3c)) * 0xc, r9_1)
int64_t r9_2 = *arg2
(*(r9_2 + 8))(arg2, zx.q(*(arg1 + 0x58) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x5c) + 0x1f) u>> 5 << 2, 
    r9_2)
int64_t rdx_7 = sx.q(*(arg1 + 0x78)) << 2
(*(*arg2 + 8))(arg2, rdx_7, rdx_7)
int64_t r9_3 = *arg2
(*(r9_3 + 8))(arg2, sx.q(*(arg1 + 0x88)) * 0xc, sx.q(*(arg1 + 0x8c)) * 0xc, r9_3)
int64_t r9_4 = *arg2
(*(r9_4 + 8))(arg2, zx.q(*(arg1 + 0xa8) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0xac) + 0x1f) u>> 5 << 2, 
    r9_4)
int64_t rdx_15 = sx.q(*(arg1 + 0xc8)) << 2
(*(*arg2 + 8))(arg2, rdx_15, rdx_15)
return sub_140a1d9d0(arg2, arg1 + 0xd0, zmm1)
