// 函数: sub_1428a37f0
// 地址: 0x1428a37f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rsi = 0

if (sub_142898c70(arg1) s> 0)
    int32_t rax_5
    
    do
        void* result = sub_142898ea0(arg1, rsi)
        void* rbx_1 = *(result + 0x48)
        int32_t rax_1
        
        if (*(rbx_1 + 0x18) == 0 || *(rbx_1 + 8) != 0)
            rax_1 = sub_1428ac180(rbx_1, nullptr)
        
        if ((*(rbx_1 + 0x18) != 0 && *(rbx_1 + 8) == 0) || rax_1 s>= 0)
            int32_t rax_2
            
            if (*(arg2 + 0x18) == 0 || *(arg2 + 8) != 0)
                rax_2 = sub_1428ac180(arg2, nullptr)
            
            if ((*(arg2 + 0x18) != 0 && *(arg2 + 8) == 0) || rax_2 s>= 0)
                int64_t count = sx.q(*(rbx_1 + 0x20))
                int32_t rax_3 = count.d
                int32_t rax_4 = rax_3 - *(arg2 + 0x20)
                
                if (rax_3 == *(arg2 + 0x20) && count.d != 0)
                    rax_4 = memcmp(*(rbx_1 + 0x18), *(arg2 + 0x18), count)
                
                if (rax_4 == 0)
                    return result
        
        rsi += 1
        rax_5 = sub_142898c70(arg1)
    while (rsi s< rax_5)

return nullptr
