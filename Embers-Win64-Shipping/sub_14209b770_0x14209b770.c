// 函数: sub_14209b770
// 地址: 0x14209b770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ce3290(arg1)
int32_t i = 0
arg1[0xb] = 0

if (arg1[7].d s> 0)
    int64_t r14_1 = 0
    
    do
        result = arg1[6]
        void* rsi_1 = *(r14_1 + result)
        
        if (rsi_1 != 0)
            void* rax = sub_1424cd2f0()
            void* rdx_1 = *(rsi_1 + 0x10)
            result = sx.q(*(rax + 0x38))
            
            if (result.d s<= *(rdx_1 + 0x38))
                uint64_t result_1 = result
                result = *(rdx_1 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax + 0x30)
                    arg1[0xb] = rsi_1
        
        i += 1
        r14_1 += 8
    while (i s< arg1[7].d)

return result
