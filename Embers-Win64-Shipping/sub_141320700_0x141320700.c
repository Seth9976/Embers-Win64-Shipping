// 函数: sub_141320700
// 地址: 0x141320700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_2 = arg1[1]
uint64_t r8_2 = zx.q(r9_2 s/ 5)
int32_t r9 = r9_2 - (r8_2 * 5).d
uint64_t rdx_2 = zx.q(r8_2.d s/ 3)

if ((r9 & 0xfffffffc) == 0 && r9 != 1)
    int64_t rcx = sx.q(*arg1)
    
    if (rcx.d u> 0x1b)
        if (((*(&data_143f025fc + rcx * 0x14) u>> 2).b & 1) != 0 || r8_2.d - (rdx_2 * 3).d == 0)
            return sub_1413198a0(rcx.d) __tailcall
    else if (test_bit(0x857c041, rcx.d) || ((*(&data_143f025fc + rcx * 0x14) u>> 2).b & 1) != 0
            || r8_2.d - (rdx_2 * 3).d == 0)
        return sub_1413198a0(rcx.d) __tailcall

uint32_t result
result.b = 0
return result
