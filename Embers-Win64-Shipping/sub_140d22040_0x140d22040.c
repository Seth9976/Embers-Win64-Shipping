// 函数: sub_140d22040
// 地址: 0x140d22040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[1].d
uint64_t result = zx.q(rax - 1)
int64_t rbp = sx.q(result.d)

if (rax - 1 s>= 0)
    int64_t r14_1 = rbp * 0x38
    int64_t temp1_1
    
    do
        result = *arg1
        void* const i = *(*(r14_1 + result + 0x20) + sx.q(*(r14_1 + result + 0x30)) * 0x10)
        
        while (i != 0)
            int64_t rsi_1 = sx.q(arg2[1].d)
            int32_t rax_1 = (rsi_1 + 1).d
            arg2[1].d = rax_1
            
            if (rax_1 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rsi_1 << 3)) = i
            sub_140cea340()
            result = sub_140cc1670(i + 0x10, &data_143e1b820)
            
            if (result.b == 0)
                i = nullptr
            else
                i = *(i + 0x10)
        
        r14_1 -= 0x38
        temp1_1 = rbp
        rbp -= 1
    while (temp1_1 - 1 s>= 0)

return result
