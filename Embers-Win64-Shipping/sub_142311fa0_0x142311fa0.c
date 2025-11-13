// 函数: sub_142311fa0
// 地址: 0x142311fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x71c) & 2) != 0)
    int64_t result = *(arg1 + 0x760)
    
    if (result != 0)
        return result
    
    sub_14230c500(arg1)
    return *(arg1 + 0x760)

void* rax = sub_141f64a80(arg1)
void* rdx_1 = *(arg1 + 0x430)

if (rdx_1 != 0 && rax != 0)
    int32_t i = 0
    
    if (*(rdx_1 + 0x1b0) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            int32_t rax_1 = sub_142249710(rax, *(rsi_1 + *(rdx_1 + 0x1a8)))
            
            if (rax_1 != 0xffffffff)
                return *(*(rax + 0x40) + (sx.q(rax_1) << 3))
            
            rdx_1 = *(arg1 + 0x430)
            i += 1
            rsi_1 += 0xc
        while (i s< *(rdx_1 + 0x1b0))

return 0
