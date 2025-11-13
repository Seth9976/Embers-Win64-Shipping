// 函数: sub_1413ab030
// 地址: 0x1413ab030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[1] & 0x80000001

if (rax s< 0)
    rax = ((rax - 1) | 0xfffffffe) + 1

int64_t rax_3

if (rax == 1)
    rax_3 = sx.q(*arg1)

if (rax != 1 || ((*(rax_3 * 0x14 + &data_143f025fc) u>> 0x1d).b & 1) != 0)
    uint64_t r8_1 = zx.q(*arg1)
    
    if (((*(sx.q(r8_1.d) * 0x14 + &data_143f025fc) u>> 0x13).b & 1) != 0)
        int64_t result
        result.b = test_bit(data_143f13cd8, r8_1)
        return result

return 0
