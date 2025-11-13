// 函数: sub_1427cc2c0
// 地址: 0x1427cc2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg2
int64_t result = (*(*arg1 + 0x38))()
int32_t rsi = 0
int32_t r14 = result.d

if (result.d != 0)
    do
        int64_t r8_1 = *arg1
        
        if ((*(r8_1 + 0x50))(arg1, rbx, r8_1) != 0)
            int64_t i
            
            do
                rbx += 1
                i = (*(*arg1 + 0x50))(arg1, rbx)
            while (i != 0)
        
        int64_t rax_4 = (*(*arg1 + 0x40))(arg1, zx.q(rsi))
        int64_t r8_2 = *arg1
        result = (*(r8_2 + 0x68))(arg1, rax_4, r8_2)
        
        if (result == 0)
            int64_t r9_1 = *arg1
            result = (*(r9_1 + 0x28))(arg1, rax_4, rbx, r9_1)
            rbx += 1
        
        rsi += 1
    while (rsi u< r14)

return result
