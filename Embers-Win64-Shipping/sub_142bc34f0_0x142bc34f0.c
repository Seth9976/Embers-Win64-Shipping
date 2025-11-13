// 函数: sub_142bc34f0
// 地址: 0x142bc34f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg1 + 0x98)
void* rbp = *(arg2 + 0x90)
int32_t i = 0
int32_t arg_8 = 0
uint64_t result = (*(arg2 + 0x48))(arg2)
uint32_t rsi = result.d

if (result.d s>= 0)
    int32_t temp0_1
    int32_t result_1
    temp0_1:result_1 = mulu.dp.d(0x51eb851f, *(rbp + 8))
    result = zx.q(result_1)
    uint32_t rdx_1 = temp0_1 u>> 5
    
    if (rsi u> rdx_1)
        rsi = rdx_1
    
    if (*(arg1 + 0x1b8) == 0)
        result = sub_142b99a90(r14, 0xfc, 0, rsi, 0, &arg_8)
        *(arg1 + 0x1b8) = result
        
        if (arg_8 == 0)
            *(arg1 + 0x1b0) = rsi
            
            if (rsi s> 0)
                int64_t rcx_2 = 0
                
                do
                    result = *(arg1 + 0x1b8)
                    rcx_2 += 0xfc
                    i += 1
                    *(rcx_2 + result - 0x8c) = 7
                    *(rcx_2 + result - 0x88) = 1
                    *(rcx_2 + result - 0xf8) = 4
                    *(rcx_2 + result - 0x48) = 0xf5c
                    *(rcx_2 + result - 0x90) = 0x27a000
                while (i s< *(arg1 + 0x1b0))

return result
