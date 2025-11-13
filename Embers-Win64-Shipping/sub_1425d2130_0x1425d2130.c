// 函数: sub_1425d2130
// 地址: 0x1425d2130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x58))

if (result.d != *(arg1 + 0x84))
    result = sx.q(*(arg1 + 0xd0))
    int64_t* i = *(arg1 + 0xc8)
    
    for (void* rdi_2 = result * 0x158 + i; i != rdi_2; i = &i[0x2b])
        result = sub_1425d1d00(i, arg1 + 0x50)

return result
