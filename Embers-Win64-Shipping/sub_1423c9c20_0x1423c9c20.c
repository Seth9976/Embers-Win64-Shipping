// 函数: sub_1423c9c20
// 地址: 0x1423c9c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = *(arg1 + 0xa)
uint64_t result
result.b = rdx u>> 4
result.b &= 1

if (result.b != arg2)
    result.b = arg2 << 4
    *(arg1 + 0xa) = (rdx & 0xef) | result.b
    int32_t* i = *(arg1 + 0x10)
    
    for (void* rsi_3 = &i[sx.q(*(arg1 + 0x18)) * 4]; i != rsi_3; i = &i[4])
        result = sub_140d3c6e0(i)
        
        if (result != 0)
            void* rcx_1 = *(i + 8)
            
            if (rcx_1 != 0)
                result.b = *(rcx_1 + 0xa) u>> 4
                result.b &= 1
                
                if (result.b != arg2)
                    result = sub_1423c9c20(rcx_1, zx.q(arg2))

return result
