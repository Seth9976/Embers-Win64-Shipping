// 函数: sub_1428a5670
// 地址: 0x1428a5670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t result = sub_1428a50d0()
int64_t result_1 = result

if (result != 0)
    int32_t r10_3 = (*(result + 0x200) + 1) & 0x8000000f
    
    if (r10_3 s< 0)
        r10_3 = ((r10_3 - 1) | 0xfffffff0) + 1
    
    *(result + 0x200) = r10_3
    int32_t rax = *(result + 0x204)
    
    if (r10_3 == rax)
        int32_t rax_2 = (rax + 1) & 0x8000000f
        
        if (rax_2 s< 0)
            rax_2 = ((rax_2 - 1) | 0xfffffff0) + 1
        
        *(result_1 + 0x204) = rax_2
    
    *(result_1 + (sx.q(r10_3) << 2)) = 0
    *(result_1 + (sx.q(*(result_1 + 0x200)) << 2) + 0x40) =
        ((arg2 & 0xfff) | arg1 << 0xc) << 0xc | (arg3 & 0xfff)
    *(result_1 + (sx.q(*(result_1 + 0x200)) << 3) + 0x140) = arg4
    *(result_1 + (sx.q(*(result_1 + 0x200)) << 2) + 0x1c0) = arg5
    uint64_t rax_9 = sx.q(*(result_1 + 0x200))
    
    if ((*(result_1 + (rax_9 << 2) + 0x100) & 1) != 0)
        sub_1428a6780(*(result_1 + (rax_9 << 3) + 0x80))
        *(result_1 + (sx.q(*(result_1 + 0x200)) << 3) + 0x80) = 0
        rax_9 = zx.q(*(result_1 + 0x200))
    
    result = sx.q(rax_9.d)
    *(result_1 + (result << 2) + 0x100) = 0

return result
