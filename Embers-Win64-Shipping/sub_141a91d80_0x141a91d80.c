// 函数: sub_141a91d80
// 地址: 0x141a91d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142233f70(arg2) != 0 && sub_142233f70(arg3) != 0)
    int64_t rsi = sx.q(sub_14078ee20(arg1[1], arg2 + 0x20))
    int32_t rax_2 = sub_14078ee20(arg1[1], arg2 + 0x28)
    int64_t rdi = sx.q(sub_14078ee20(arg1[1], arg3 + 0x20))
    int32_t rax_4 = sub_14078ee20(arg1[1], arg3 + 0x28)
    int64_t rdx_4 = **arg1
    int32_t r10 = *(rdx_4 + (sx.q(rax_2) << 2))
    int32_t r8 = *(rdx_4 + (sx.q(rax_4) << 2))
    
    if (*(rdx_4 + (rdi << 2)) s>= r8)
        r8 = *(rdx_4 + (rdi << 2))
    
    if (*(rdx_4 + (rsi << 2)) s>= r10)
        r10 = *(rdx_4 + (rsi << 2))
    
    int64_t result
    result.b = r10 s< r8
    return result

return 0
