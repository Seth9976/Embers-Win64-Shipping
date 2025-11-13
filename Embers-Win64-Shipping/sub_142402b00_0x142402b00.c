// 函数: sub_142402b00
// 地址: 0x142402b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
int64_t result = sx.q(arg2[1].d)

for (void* rbp = &i[result * 5]; i != rbp; i = &i[5])
    int64_t rax = *i
    int64_t* rax_3 = sub_1423f7130(arg3, sub_140b5ead0(rax.d) + rax:4.d, i)
    result = sub_14240d4a0(rax_3, i)
    
    if (result.d == 0xffffffff)
        int64_t rsi_1 = sx.q(rax_3[1].d)
        int32_t rcx_4 = (rsi_1 + 1).d
        rax_3[1].d = rcx_4
        
        if (rcx_4 s> *(rax_3 + 0xc))
            sub_1405c4ec0(rax_3)
        
        result = sub_1423fb8b0(*rax_3 + rsi_1 * 0x28, i)

return result
