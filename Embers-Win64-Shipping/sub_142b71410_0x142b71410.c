// 函数: sub_142b71410
// 地址: 0x142b71410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int32_t r8 = *(rcx + 0xc)

if (r8 s< 0 && (r8 s< *(*(arg1 + 0x28) + 0xc) || *(arg1 + 0x10) s< r8))
    (*(*rcx + 0x20))()

int64_t* rcx_1 = *(arg1 + 0x28)
(*(*rcx_1 + 0x20))(rcx_1, arg2)
int64_t r8_1 = *arg2
(*(r8_1 + 0x90))(arg2, zx.q(*(*(arg1 + 0x20) + 0xc)), r8_1)
int32_t result = (*(*arg2 + 0x70))(arg2, zx.q(*(arg1 + 0x18)))
*(arg1 + 0xc) = result
return result
