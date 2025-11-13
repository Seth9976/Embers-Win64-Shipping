// 函数: sub_1429e5580
// 地址: 0x1429e5580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1429dde60(*(*(arg1 + 0x198) + 8))
*(*(arg1 + 0x198) + 0x10) = arg1[0xd7]
*(*(arg1 + 0x198) + 0x14) = arg1[0xd9]
void* rax_4
int64_t r9
rax_4, r9 = sub_1429dddd0(sx.q(arg1[0xd7] * arg1[0xd9]), 0xc)
*(*(arg1 + 0x198) + 8) = rax_4
void* result = *(arg1 + 0x198)

if (*(result + 8) != 0)
    return result

return sub_1429da010(arg1, 2, "Failed to allocate cm->cur_frame->mvs", r9) __tailcall
