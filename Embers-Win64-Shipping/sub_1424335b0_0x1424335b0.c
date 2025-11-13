// 函数: sub_1424335b0
// 地址: 0x1424335b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
int64_t rbp = arg2
bool z

if (0 == data_143f5e628)
    data_143f5e628 = 0
    z = true
else
    result = zx.q(data_143f5e628)
    z = false

if (not(z))
    result = EnterCriticalSection(arg1 + 0x30)
    
    if (*(arg1 + 0x6c) != 0)
        int32_t rsi_1 = *(arg3 + 0xc)
        int32_t rdi_1 = 0
        
        if (rsi_1 != 0)
            do
                int32_t result_1 = ov_read(*(arg1 + 0x10), rbp, zx.q(rsi_1 - rdi_1), 0, 2, 1, 0)
                
                if (result_1 s< 0)
                    result = memset(rbp, 0, zx.q(rsi_1 - rdi_1))
                    break
                
                rdi_1 += result_1
                result = sx.q(result_1)
                rbp += result
            while (rdi_1 u< rsi_1)
    
    if (arg1 != -0x30)
        return LeaveCriticalSection(arg1 + 0x30)

return result
