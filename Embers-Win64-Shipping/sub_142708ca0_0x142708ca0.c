// 函数: sub_142708ca0
// 地址: 0x142708ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x150))()
int32_t i = 0
int64_t* rsi_2

if (result == 0)
    rsi_2 = nullptr
else
    void* rsi_1 = *(result + 0x120)
    
    if (rsi_1 == 0)
        rsi_2 = nullptr
    else
        void* rax_1 = sub_14269bba0()
        void* rdx = *(rsi_1 + 0x10)
        result = sx.q(*(rax_1 + 0x38))
        
        if (result.d s> *(rdx + 0x38))
            rsi_2 = nullptr
        else
            int64_t result_1 = result
            result = *(rdx + 0x30)
            
            if (*(result + (result_1 << 3)) != rax_1 + 0x30)
                rsi_2 = nullptr
            else
                rsi_2 = *(rsi_1 + 0x28)

if (rsi_2 != 0 && arg2[1].d s> 0)
    void* rdi_1 = nullptr
    
    do
        result = sub_142708950(sx.q(*(rdi_1 + *arg2)) * 0x90 + arg1[5], rsi_2)
        i += 1
        rdi_1 += 4
    while (i s< arg2[1].d)

return result
