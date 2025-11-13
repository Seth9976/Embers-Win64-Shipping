// 函数: sub_140b4c3a0
// 地址: 0x140b4c3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4c310(arg1)
*arg1 = &data_142e79680
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = arg3
arg1[0x15] = 0
int32_t count = ((arg3 + 7) s>> 3).d
int32_t rax = arg1[0x13].d + count
arg1[0x13].d = rax

if (rax s> *(arg1 + 0x9c))
    sub_1405daba0(&arg1[0x12])

int32_t rdx
rdx.b = 1
(*arg1)[0x14](arg1, rdx)
int64_t rdx_1
rdx_1.b = 1
(*arg1)[0x1b](arg1, rdx_1)
*(arg1 + 0x2b) |= 8

if (arg2 != 0)
    memcpy(arg1[0x12], arg2, count)
    int64_t rax_3 = arg1[0x14]
    uint64_t r8_2 = zx.q(rax_3.d) & 7
    
    if (r8_2.d != 0)
        char* rdx_4 = sx.q((rax_3 s>> 3).d) + arg1[0x12]
        *rdx_4 &= *(r8_2 + &data_142e78980)

return arg1
