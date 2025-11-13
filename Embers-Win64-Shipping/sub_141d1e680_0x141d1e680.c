// 函数: sub_141d1e680
// 地址: 0x141d1e680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x60))(arg2)
(*(*arg1 + 0x60))(arg1)
int32_t rax_3 = (*(*arg2 + 0x48))(arg2)
int64_t r8 = *arg1
int64_t rbx = sx.q(rax_3)
int32_t result = (*r8)(arg1, zx.q(rbx.d), r8)
int64_t i = 0

if (rbx s>= 4)
    do
        *(arg1[1] + (i << 2)) = *(arg2[1] + (i << 2))
        *(arg1[1] + (i << 2) + 4) = *(arg2[1] + (i << 2) + 4)
        *(arg1[1] + (i << 2) + 8) = *(arg2[1] + (i << 2) + 8)
        result = *(arg2[1] + (i << 2) + 0xc)
        *(arg1[1] + (i << 2) + 0xc) = result
        i += 4
    while (i s< rbx - 3)

for (; i s< rbx; i += 1)
    result = *(arg2[1] + (i << 2))
    *(arg1[1] + (i << 2)) = result

return result
