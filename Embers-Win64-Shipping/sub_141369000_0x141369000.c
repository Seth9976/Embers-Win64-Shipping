// 函数: sub_141369000
// 地址: 0x141369000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result

if (arg1[2] == 4)
    int64_t rcx = sx.q(*arg1)
    int32_t rax_1 = arg1[1] & 0x80000001
    
    if (rax_1 s< 0)
        rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1
    
    if (rax_1 != 1)
        return sub_1405fba70(rcx.d, 3) __tailcall
    
    if (((rcx.d u<= 0x1e && test_bit(0x6562c800, rcx.d))
            || (*(&data_143f025fc + rcx * 0x14) & 1) != 0) && sub_1422eb710().b != 0)
        result.b = 1
        return result

result.b = 0
return result
