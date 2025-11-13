// 函数: sub_142b13770
// 地址: 0x142b13770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2
int16_t* result = arg1

if (arg2 s> 0)
    do
        uint64_t rax_1 = zx.q(*result)
        uint8_t rdx
        
        if (rax_1.d u<= 0xff)
            rdx = *(rax_1 + &data_14366a9f0)
        label_142b137d2:
            
            if ((rdx & 1) != 0)
                break
        else if (rax_1.d u>= 0x200e)
            if (rax_1.d u<= 0x3030)
                rdx = (
                    *((zx.q(*((sx.q((rax_1 - 0x2000).d) s>> 5) + 0x14366aaf0)) << 2) + 0x14366aba0)
                    u>> (rax_1.b & 0x1f)).b
                goto label_142b137d2
            
            if ((rax_1 - 0xfd3e).d u<= 0x108 && rax_1.d - 0xfd40 u> 0x104)
                break
        result = &result[1]
        i -= 1
    while (i s> 0)

return result
